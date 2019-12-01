/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* Solution::detectCycle(ListNode* head) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    /*if(A == NULL){
        return NULL;
    }
    ListNode* slow=A,*fast=A;
    while(slow!=NULL&&fast!=NULL){
        slow=slow->next;
        
        if(slow==NULL||fast->next==NULL){
            return NULL;
        }
        fast=(fast->next)->next;
        
        if(slow==fast){
            break;
        }
    }
    if(slow==NULL||fast==NULL) return NULL;
    int count = 1;
    ListNode *temp = slow->next;
    while(temp != slow){
        count++;
        temp=temp->next;
    }
    temp = A;
    for(int i = 0; i<count; i++){
        temp=temp->next;
    }
    slow = A;
    fast = temp;
    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;*/ //above is a rather slow algo but memory efficient
    set<ListNode*> seenNodes;
    while(head!=NULL){
        if(seenNodes.find(head)!=seenNodes.end())    return head;
        else    seenNodes.insert(head);
        head=head->next;
    }
    return NULL;
}
