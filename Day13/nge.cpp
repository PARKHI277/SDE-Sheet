#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printNGE(int arr[] ,int n)
{
    stack<int> s;
    s.push(arr[0]);

    for (int i = 0; i < n;i++)
    {
        if(s.empty())
        {
            s.push(arr[i]);
            continue;
        }

        while(!s.empty() && s.top() < arr[i])
        {
            cout << arr[i] << " ";
            s.pop();
        }

        s.push(arr[i]);

    }


    while(!s.empty())
    {
        int n = s.size();
        for (int i = 0; i < n;i++)
        {
            cout << "-1"
                 << " ";
        }
    }


    
}
int main()
{
    int arr[] = { 11, 13, 21, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printNGE(arr, n);
    return 0;
}