/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head->next==NULL){
            return NULL;
        }
        
        ListNode *curr1=head;
        ListNode *curr2=head;
        ListNode *temp1;
        int count=0;
        
        while(curr2!=NULL){
            if(count>=n){
                temp1=curr1;
                curr1=curr1->next;
                
            }
            curr2=curr2->next;
            count++;
        }
        if(curr1->next!=NULL){
            curr1->val=curr1->next->val;
            ListNode *temp=curr1->next;
            curr1->next=temp->next;
        }
        else{
            temp1->next=NULL;
        }
        
        

        
        return head;
        
    }
};