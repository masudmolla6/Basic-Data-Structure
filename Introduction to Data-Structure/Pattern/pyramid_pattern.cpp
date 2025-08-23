#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int star=1;
    int space=n-1;
    for (int i = 1; i <= n; i++) //for printing line
    {
        for (int j = 1; j <= space; j++) //for printing space
        {
            cout << " ";
        }
        
        for (int k=1; k<=star; k++) //for printing star
        {
            cout << "*";
        }
        cout << endl;
        star+=2;
        space--;
    }
    
    return 0;
}