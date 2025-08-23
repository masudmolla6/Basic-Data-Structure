#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={2,3,5,7,9};

    v.insert(v.begin()+2, 100);


    for(int x:v){
        cout << x << " ";
    }
    
    return 0;
}