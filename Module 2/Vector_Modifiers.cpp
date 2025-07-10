#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={2,3,5,7,8,9,5,7};

    // vector<int>v2={4,45, 74};

    // v.insert(v.begin()+2, v2.begin(), v2.end());

    // v.erase(v.begin()+4, v.begin()+7);

    // replace(v.begin(), v.end()-1, 7, 100);

    auto it= find(v.begin(), v.end(), 7);

    cout << *it << endl;

    // if(it==v.end()){
    //     cout << "Not Found." << endl;
    // }else{
    //     cout << " Found " << endl;
    // }

    // for(int x:v){
    //     cout << x << " ";
    // }
    
    return 0;
}