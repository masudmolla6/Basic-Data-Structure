// Problem 2: Using push_back() and pop_back()

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(7);
    v.push_back(14);
    v.push_back(21);
    v.pop_back();

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    
    return 0;
}