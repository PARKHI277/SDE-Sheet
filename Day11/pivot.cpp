#include<iostream>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int  n  = nums.size();
        int low = 0;
        int high = n-1;
        
        while(low <= high)
        {
            int mid = (low+high) >> 1;
            if(nums[mid] == target)
            {
                return mid;
            }
            else
            {
                // check for sorting in left and right array
                if(nums[low] <= nums[mid])
                {
                    if(nums[mid] >= target && nums[low] <= target)
                    {
                        high = mid-1;
                    }
                    else
                    {
                        low  = mid+1;
                    }
                }
                else
                {
                    if(nums[mid] <= target && target <= nums[high])
                    {
                        low = mid+1;
                    }
                    else
                    {
                        high = mid-1;
                    }
                }
            }
        }
        
        return -1;
    }
};