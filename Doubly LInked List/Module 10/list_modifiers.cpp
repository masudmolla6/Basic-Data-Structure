#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    list<int> l2={1, 2, 3};
    list<int> myList;
    // myList=l;
    myList.assign(l.begin(), l.end());
    // myList.push_back(100);
    // myList.push_front(500);

    // myList.pop_back();
    // myList.pop_front();
    // next(myList.begin()

    // cout << *next(myList.begin(), 2) << endl;
    

    // myList.insert(next(myList.begin(), 2), l2.begin(), l2.end());

    // myList.erase(next(myList.begin(), 3), next(myList.begin(), 6));

    // replace(myList.begin(), myList.end(), 20, 400);

    auto it=find(myList.begin(), myList.end(), 130);

    if(it==myList.end()){
        cout<< "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }

    // for(int val:myList){
    //     cout << val << " ";
    // }

    return 0;
}