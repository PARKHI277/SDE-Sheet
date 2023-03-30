#include<bits/stdc++.h>
using namespace std;

void insert(vector<int>&v,int temp)
{
    if(v.size() == 0 || v[v.size() -1] <= temp)
    {
        v.push_back(temp);
        return;
    }

    int val = v[v.size() - 1];
    v.pop_back();
    insert(v, temp);
    v.push_back(val);


}
void sort(vector<int>&v)
{
    if(v.size() == 1)
    {
        return;
    }

    int temp = v[v.size() - 1];
    v.pop_back();
    sort(v);
    insert(v,temp);
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