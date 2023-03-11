#include<iostream>
using namespace std;

class Solution {
public:

int singleNonDuplicate(vector<int>& nums) {
       int n = nums.size();
        int low  = 0;
        int high = n-2;
        
        while(low <= high)
        {
            int mid = (low+high) >> 1;
            
            if(mid%2 == 0)
            {
                if(nums[mid] != nums[mid+1])
                {
                    high = mid-1;
                }
                else
                {
                    low  =  mid+1;
                }
            }
            else
            {
                if(nums[mid] == nums[mid+1])
                {
                    high = mid-1;
                }
                else
                {
                    low = mid+1;
                }
            }
        }
        
        return nums[low];
    }
    // int singleNonDuplicate(vector<int>& nums) {
    //     map<int,int>m;
    //     for(int i =0;i<nums.size();i++)
    //     {
    //         m[nums[i]]++;
    //     }
    //     int result;
        
    //     for(auto i : m)
    //     {
    //         if(i.second == 1)
    //         {
    //           result = i.first;
    //         }
    //     }
        
    //     return result;
    // }
};