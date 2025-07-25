#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[1];
    }
    int q;
    cin >> q;
    int flag=0;

    for (int i = 0; i < n; i++)
    {
        if(a[i]==q){
            flag=1;
            break;
        }
    }

    if(flag== 1){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }
    
    
    return 0;
}