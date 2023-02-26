//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


class Solution
{   
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    
    static bool cmp(pair<int,int>a,pair<int,int>b)
    {
        return a.second<b.second;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>>p;
        for(int i = 0;i<n;i++)
        {
            pair<int,int>v = make_pair(start[i],end[i]);
            p.push_back(v);
        }
        
        sort(p.begin(),p.end(),cmp);
        
        int count = 1;
        int endd  = p[0].second;
        
        for(int i = 1;i<n;i++)
        {
            if(p[i].first > endd)
            {
                count++;
                endd = p[i].second;
            }
        }
        
        return count;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}