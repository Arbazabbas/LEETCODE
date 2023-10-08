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
    // private:
    // ListNode* getMiddle(ListNode* &head){
    //    if(head==NULL){
    //         return NULL;
    //     }
    //     if(head->next==NULL){
    //         return head;
    //     }
    //     ListNode* slow=head;
    //     ListNode* fast=head->next;
    //     while(fast!=NULL){
    //         fast=fast->next;
    //         if(fast!=NULL){
    //             fast=fast->next;
    //         }
    //         slow=slow->next;
    //     }
    //     return slow;
    // }
public:
    ListNode* deleteMiddle(ListNode* head) {
    
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        
    
    ListNode*slow = head;
    ListNode*fast = head->next->next;
    // while (fast != NULL && fast->next!=NULL){
    //     fast=fast->next->next;
    //     slow=slow->next;
    // }
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    ListNode*mid = slow ->next;
    slow->next = mid->next;
    mid->next=NULL;
    delete(mid);
    return head;
    
//         ListNode*deleteNode=getMiddle(head);
//         ListNode*temp=head;
//         while(temp->next!=deleteNode){
//             temp=temp->next;
//         }
//         temp->next=deleteNode->next;
//         deleteNode->next=NULL;
//         delete(deleteNode);
//         return head;
    }
};