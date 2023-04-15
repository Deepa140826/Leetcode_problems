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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* start=head,*temp=head,*end=NULL;
        if(head==NULL) return head;
       int n=1;
       while(temp->next){
           temp=temp->next;
           n++;
       }
       temp->next=head;
        int s=n-k%n;
        
        for(int i=0;i<s;i++){
            temp=temp->next;
        }
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};
