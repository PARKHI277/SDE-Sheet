#include<bits/stdc++.h>
using namespace std;


stack<int>sort(stack<int>&input)
{
    stack<int> temp;
     while(!input.empty())
     {
         int top = input.top();
         input.pop();

         while (!temp.empty() && temp.top() > top)
         {
             input.push(temp.top());
             temp.pop();
         }

         temp.push(top);
     }

     return temp;
}
int main()
{
    stack<int> input;
    input.push(34);
    input.push(3);
    input.push(31);
    input.push(98);
    input.push(92);
    input.push(23);

    stack<int> ans = sort(input);
    while(!ans.empty())
    {cout << ans.top() << " ";}
        
}