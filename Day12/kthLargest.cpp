#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // max heap
        priority_queue<int>pq;
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            pq.push(nums[i]);
        }
        int f  = k-1;
        while(f > 0)
        {
            pq.pop();
            f--;
        }
        
        return pq.top();
    }
};