#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    while (q--)
    {
        int x;
        cin >> x;
        int l=0;
        int r=n-1;
        int flag=0;
        while (l<=r)
        {
            int mid=(r+l)/2;
            if(v[mid]==x){
                flag=1;
                break;
            }
            else if(v[mid]>x){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }

        if(flag==1){
            cout << "found" << endl;
        }
        else{
            cout << "not found" << endl;
        }
        
    }
    


    
    return 0;
}