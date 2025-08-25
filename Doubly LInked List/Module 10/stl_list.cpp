#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l={1,2,34,6,8};
    int a[]={10, 20, 30};
    vector<int>v={100, 200, 300};

    list<int> l2(v.begin(), v.end());
    for(int val:l2){
        cout << val << endl;
    }
    return 0;
}