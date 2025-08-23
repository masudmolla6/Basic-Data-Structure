// ✅ Problem 3: Find Max and Min Element
// From a given vector, find and print the maximum and minimum values.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,56,7};
    int maxValue=INT_MAX;
    int minValue=INT_MIN;

    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]>minValue){
            maxValue=v[i];
        }
    }
    
    
    return 0;
}