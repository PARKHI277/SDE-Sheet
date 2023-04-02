#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printleft(int arr[],int n)
{
    stack<int> s;
    for (int i = 0; i < n;i++)
    {
        while(!s.empty() && s.top() >= arr[i])
        {
            s.pop();
        }
        if(s.empty())
        {
            cout << "-1 ,"
                 << " ";
        }
        else{
            cout << s.top() << " ";
        }
        s.push(arr[i]);
    }
}
int main()
{
    int arr[] = {1, 3, 0, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printleft(arr, n);
    return 0;
}