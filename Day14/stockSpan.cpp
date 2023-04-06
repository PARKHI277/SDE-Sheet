#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class StockSpanner {
public:
    StockSpanner() {
        
    }
    stack<pair<int,int>>s;

    int next(int price) {
        int res = 1;
        while(!s.empty())
        {
            if(price >= s.top().first)
            {
                res += (s.top()).second;
                s.pop();
            }
            else
            {
                break;
            }
        }
        s.push({price,res});
        return res;
    }
};

