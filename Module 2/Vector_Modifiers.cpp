#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={2,3,4,2,6};
    auto it=find(v.begin(), v.end(), 2);

    if(it==v.end()){
        cout << "Not Found.";
    }
    else{
        cout << "Found";
    }
    
    return 0;
}

