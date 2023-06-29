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
    void deleteNode(ListNode *head, int position){
    ListNode *deleteNode;
    ListNode *temp = head;
    for (int i = 1; i < position; i++)
    {
        temp = temp->next;
    }
    deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}
    void deleteHead(ListNode *&head){
    ListNode *deleteNode = head;
    head = head->next;
    delete deleteNode;
}
    int size(ListNode * head){
        ListNode *temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int result = size(head);
        if((result - n)==0){
            deleteHead(head);
        }
        else{
            deleteNode(head,(size(head)-n));
        }

    return head;
    }
};