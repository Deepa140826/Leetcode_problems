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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>ans;
        for(auto x:lists){
            while(x!=NULL){
                ans.push_back(x->val);
                x=x->next;
            }
        }
        int n=ans.size();
        if(n==0) return NULL;
        sort(ans.begin(),ans.end());
        ListNode* head=new ListNode(ans[0]);
        ListNode* temp=head;
        for(int i=1;i<n;i++){
            ListNode* num=new ListNode(ans[i]);
            temp->next=num;
            temp=temp->next;
        }
        return head;
    }
};
