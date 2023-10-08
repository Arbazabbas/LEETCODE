/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
   /* private:
    ListNode* detectLoop(ListNode* &head){
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return NULL;
        }
        ListNode*slow=head;
        ListNode*fast=head;
        while(slow!=NULL && fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
            }
            slow=slow->next;
            if(slow==fast){
                return slow;
            }
        }
        return NULL;
    }
    public:
    ListNode* getLoopNode(ListNode* &head){
        if(head==NULL){
            return NULL;
        }
        ListNode* intersection = detectLoop(head);
        if(intersection==NULL){
            return NULL;
        }
        ListNode*slow=head;
        while(slow!=intersection){
            slow=slow->next;
            intersection=intersection->next;
        }
        return slow;
    }*/
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL){
            return NULL;
        }
      //  return getLoopNode(head);
        ListNode*fast=head;
        ListNode*slow=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast){
                slow=head;
                while(fast!=slow){
                    fast=fast->next;
                    slow=slow->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};