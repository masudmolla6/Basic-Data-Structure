#include<bits/stdc++.h>
using namespace std;
int main()
{
    // constant Complexity.
    // int a=5;
    // cout << a << endl; 

    // linear complexity 
    // int n;
    // cin >> n;
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin  >> a[i];
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }

    // logarithmic complexity

    // int n;
    // cin >> n;
    // int a[n];
    // for (int i = 1; i <= n; i++)
    // {
    //     cin  >> a[i];
    // }

    // for (int i = 1; i < n; i*=2)
    // {
    //     cout << i << " ";
    // }

    // sqrt(n)/i*i complexity

    // int n;
    // cin >> n;
    // int a[n];
    // for (int i = 1; i <= n; i++)
    // {
    //     cin  >> a[i];
    // }

    // for (int i = 1; i*i <= n; i++)
    // {
    //     cout << a[i] << " ";
    // }

    // Quadratic Complexity
    
    int n,m;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= n; i*=2)
        {
            cout << i << " ";
        }
        
    }
    
    
    
    return 0;
}