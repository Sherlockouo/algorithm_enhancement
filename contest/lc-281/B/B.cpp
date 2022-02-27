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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* t = new ListNode();
        ListNode* h = t;
        head = head->next;
        int flag = 1;
        while(head != nullptr){
            int res = 0;
            while(head != nullptr && head -> val != 0){
                res+= head->val;
                head = head->next;
            }
            if(head != nullptr){
                head = head->next;
            }
            
            
            ListNode* p = new ListNode(res);
            t->next = p;
            t = p;
            
        }
        h = h->next;
        return h;
    }
};
