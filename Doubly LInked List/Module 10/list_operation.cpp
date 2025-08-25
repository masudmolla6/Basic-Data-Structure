#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList={40, 10, 30, 50 ,40, 100 ,300, 30 ,50, 10, 20};

    // myList.remove(20);
    // myList.sort();
    // myList.sort(greater<int>());

    // myList.unique();

    myList.reverse();

    for (int val:myList)
    {
        cout << val << " " ;
    }
    
    return 0;
}