#include<bits/stdc++.h>
using namespace std;

 void combine(int A[],int B[],int n,int k)
 {
     priority_queue<int> pq;
     for (int i = 0; i < n;i++)
     {
         for (int j = 0; j < n;j++)
         {
             pq.push(A[i] + A[j]);
         }
     }

     int c = 0;
     while(c < k)
    {
         cout << pq.top() << endl;
         pq.pop();
         c++;
    }
 }
int main()
{
    int A[] = {4, 2, 5, 1};
    int B[] = {8, 0, 5, 3};
    int n = sizeof(A) / sizeof(A[0]);
    int k = 3;

    combine(A, B, n, k);
    return 0;
}