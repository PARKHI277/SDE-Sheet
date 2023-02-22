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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        for(int i = 0;i<k;i++)
        {
            ListNode* temp = head;
            while(temp->next->next != NULL)
            {
                temp = temp->next;
            }
            ListNode* end = temp->next;
            temp->next = NULL;
            end->next =  head;
            head = end;
        }
        
        return head;
    }
};