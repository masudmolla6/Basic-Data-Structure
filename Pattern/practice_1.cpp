#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int mid=n/2;


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==mid && j==mid){
                cout  << "A";
            }
            else if(i==j){
                cout << "Z";
            }
            else if(i+j==n-1){
                cout << "Y";
            }
            else{
                cout << " ";
            }
        }

        cout << endl;
        
    }
    
    return 0;
}