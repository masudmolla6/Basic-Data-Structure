#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l={10,20,30};
    // l.clear();

    l.resize(5);
    cout << l.max_size() << endl;

    for(int val:l){
        cout << val << endl;
    }

    // if(l.empty()){
    //     cout << "YES" <<endl;
    // }
    // else{
    //     cout << "NO" << endl;
    // }


    return 0;
}