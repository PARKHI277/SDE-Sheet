#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int repeatedNumber(const vector<int> &A) {
    int n = A.size();
    vector<int>substitute(n,0);
    vector<int>ans;
    for(int i = 0;i<n;i++)
    {
        substitute[A[i]]++;
    }
    
    for(int i = 1; i<=n;i++)
    {
        if(substitute[i] == 0 || substitute[i] > 1)
        {
            ans.push_back(i);
        }
    }
    
    return ans;
}
