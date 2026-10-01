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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        vector<int> ans;
        ListNode* curr= head;
        while(curr !=NULL){
            ans.push_back(curr->val);
            curr= curr->next;
        }
        
        reverse(ans.begin(),ans.end());

        ListNode * newHead= new ListNode(ans[0]);
        ListNode* temp= newHead;
        for(int i=1;i<ans.size();i++){
            temp->next= new ListNode(ans[i]);
            temp= temp->next;
        }
        return newHead;

        
    }
};