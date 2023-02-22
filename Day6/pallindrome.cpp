#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    
    ListNode * reverse(ListNode*temp)
    {
        ListNode*pre = NULL;
        ListNode*nex = NULL;
        
        while(temp != NULL)
        {
            nex = temp->next;
            temp->next = pre;
            pre = temp;
            temp = nex;
        }
        return pre;
    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL)
        {
            return true;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        slow->next = reverse(slow->next);
        slow = slow->next;
        ListNode *dummy  =head;
        while(slow != NULL)
        {
            if(dummy->val != slow->val )
            {
                return false;
            }
            dummy = dummy->next;
            slow  = slow->next;
        }
        return true;
    }
    
};