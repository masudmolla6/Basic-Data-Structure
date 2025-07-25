#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    vector<int> v(a, a+5);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    
    return 0;
}