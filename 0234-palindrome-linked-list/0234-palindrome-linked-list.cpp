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
    ListNode*reverse(ListNode*head){
        ListNode*curr=head;
        ListNode*prev=NULL;
        ListNode*next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    
public:
    bool isPalindrome(ListNode* head) {
    ListNode*slow=head;
    ListNode*fast=head;
        while(slow!=NULL && fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
            }
            slow=slow->next;
        }
        slow=reverse(slow);
        while(slow!=NULL){
        if(head->val!=slow->val){
            return false;
        }
            head=head->next;
            slow=slow->next;
        }
        return true;
}        
};