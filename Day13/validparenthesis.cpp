#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
   bool isValid(string s) 
    {
         stack<char>stk;
         int t =0 ;
         while(t!= s.length())
        {
            if(s[t] == '(' || s[t] == '{' || s[t] == '[')
            {
                stk.push(s[t]);
            }
            else
            {
                if(stk.empty())
                {
                    return 0;
                }
                else if(s[t] == ')')
                {
                    if(stk.top() == '(')
                         stk.pop();
                    else
                        return 0;
                }
                 else if(s[t] == ']')
                {
                    if(stk.top() == '[')
                         stk.pop();
                    else
                        return 0;
                }
                
                else 
                {
                    if(stk.top() == '{')
                         stk.pop();
                    else
                        return 0;
                }
                
                
            }
             
            t++;
        }
        
        if(stk.empty())
            return 1;
        else
            return 0;
  }
};