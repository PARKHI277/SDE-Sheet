#include<bits/stdc++.h>
using namespace std;



void  increasingStack(int arr[],int n)
{
    stack<int> s;
    for (int i = 0; i < n;i++)
    {
        while(s.size() > 0 && s.top() > arr[i])
        {
            s.pop();
        }
        s.push(arr[i]);
    }

    int m = s.size();
    int arr1[m]= {0};
    int j = m - 1;
    while(!s.empty())
    {
        arr1[j] = s.top();
        s.pop();
        j--;
    }
}
int main()
{
    int arr[] = { 1, 4, 5, 3, 12, 10 };
    int N = sizeof(arr) / sizeof(arr[0]);
  
    // Function Call
    increasingStack(arr, N);
  
    return 0;
}