#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>hashSet;
        for(int num : nums)
        {
            hashSet.insert(num);
        }

        int longestStreak  = 0;
        for(int num : nums)
        {
            if(!hashSet.count(num-1))
            {
                int current = num;
                int currentSeq = 1;

                while(hashSet.count(current+1))
                {
                    currentSeq += 1;
                    current += 1;
                }

                longestStreak = max(longestStreak, currentSeq);
            }
        }

        return longestStreak;
    }
};
