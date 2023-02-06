#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>m;
        for(int i = 0;i<n;i++)
        {
            m[nums[i]]++;
        }
         
         int result;
        for(auto i : m)
        {
            if(i.second > n/2)
            {
                result = i.first;
            }
        }

        return result;
    }
};