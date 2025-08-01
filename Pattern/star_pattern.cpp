#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int star=n;
 
    for (int i = 1; i <= n; i++)
    {   
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        cout << endl;
        star--;
    }
    
    return 0;
}