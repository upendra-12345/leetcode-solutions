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
    

    bool isPalindrome(ListNode* head) {
        vector<int> ans;
        while(head != NULL){
            ans.push_back(head->val);
            head= head->next;
        }

        
        int n= ans.size();
        int st=0;
        int end= n-1;
        
        while(st<end){
            if(ans[st] != ans[end]){
                return false;
                
            }
            st++;
            end--;
        }
        
        return true;
    }
};