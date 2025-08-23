#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.resize(7);
    cout <<v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    
    // v.clear();
    // cout << v.size() << endl;
    // cout << v[2] << endl;

    // if(v.empty()){
    //     cout << "Vector is empty.";
    // }
    // else{
    //     cout << "vector is not empty";
    // }

    return 0;
}