#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int space=n-1;
    int number=1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        for (int k = number; k >= 1; k--)
        {
            cout << k;
        }

        cout << endl;
        number++;
        space--;
        
        
    }
    
    return 0;
}