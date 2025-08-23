#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> copy_v(v);

    sort(copy_v.begin(), copy_v.end(), greater<int>());


    int is_decending_sorted=1;

    for (int i = 0; i < n-1; i++)
    {
        if(v[i] != copy_v[i]){
            is_decending_sorted=0;
            break;
        }
    }

    if(is_decending_sorted==1){
        cout << "Decending";
    }
    else{
        cout << "Not Decending.";
    }

    
    
    return 0;
}