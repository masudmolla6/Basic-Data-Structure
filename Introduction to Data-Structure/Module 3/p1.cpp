#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    long long int a[n];
    for (int i = 1; i <=n; i++)
    {
        cin >> a[i];
    }

    long long int pre[n];
    pre[1]=a[1];

    for (int i = 2; i <= n; i++)
    {
        pre[i]=pre[i-1]+a[i];
    }
    
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << pre[i] << " ";
    // }



    while (q--)
    {
        int l,r;
        cin >> l, r;
        long long int sum=0;
        if(l==1){
            sum=pre[r];
        }
        else{
            sum=pre[l]-pre[l-1];
        }
        cout << sum << endl;
    }
    
    


    
    return 0;
}