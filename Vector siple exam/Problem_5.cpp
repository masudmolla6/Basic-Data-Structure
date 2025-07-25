//  Problem 5 (Bonus): Reverse a Vector

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={2,3,4,5,6};
    v.reserve(v, v[v.size()]);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    
    return 0;
}