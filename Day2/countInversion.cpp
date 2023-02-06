#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 long long int merge(long long arr[],long long low,long long mid,long long high)
    {
        long long ans = 0,n1 = mid-low+1 , n2 = high-mid;
        long long left[n1],right[n2];
        for(long long i = 0;i<n1;i++)
        {
            left[i] = arr[i+low];
        }
        
        for(long long i = 0;i<n2;i++)
        {
            right[i]  = arr[mid+1+i];
        }
        
        long long i = 0,j=0,k=low;
        while(i<n1 && j<n2)
        {
            if(left[i] > right[i])
            {
                ans += n1-i;
                arr[k++] = right[j++];
            }
            else
            {
                arr[k++] = left[i++];
            }
        }
        
        while(i<n1)
        {
            arr[k++] = left[i++];
        }
        while(j<n2)
        {
            arr[k++] = right[j++];
        }
        return ans;
    }
    long long int mergesort(long long arr[] , long long l,long long r)
    {
        long long ans = 0;
        if(r>l)
        {
            long long mid = l + (r-l)/2;
            ans += mergesort(arr,l,mid);
            ans += mergesort(arr,mid+1,r);
            ans += merge(arr,l,mid,r);
        }
        
        return ans;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        return mergesort(arr,0,N-1);
    }
