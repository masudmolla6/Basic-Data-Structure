// ✅ Problem 4: Use insert() and erase()
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1, 2, 4, 5};
    v.insert(v.begin()+2, 3);
    v.erase(v.begin()+4);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    
    return 0;
}