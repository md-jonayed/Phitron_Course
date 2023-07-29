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
    int size(ListNode *head){
        ListNode *temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *n1 = head;
        ListNode *n2 = head;

        for(int i=1;i<=k-1;i++){
            n1=n1->next;
        }
        int result = size(head)-k;
        for(int i=1;i<=result;i++){
            n2=n2->next;
        }
        swap(n1->val,n2->val);
        return head;
    }
};