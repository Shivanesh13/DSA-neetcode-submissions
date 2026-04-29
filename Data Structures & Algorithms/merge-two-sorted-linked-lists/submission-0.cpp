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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* P1 = list1;
        ListNode* P2 = list2;
        ListNode* head = nullptr;
        ListNode* ret = nullptr;

        if (!list1) return list2;
        if (!list2) return list1;

        while((P1 != nullptr && P2 != nullptr)){
            if(P1->val < P2->val){
                if(head == nullptr){
                    head = P1;
                    ret = head;
                    P1 = P1->next;
                }else {
                    head->next = P1;
                    P1 = P1->next;
                    head = head->next;
                }
            } else {
                if(head == nullptr){
                    head = P2;
                    ret = head;
                    P2 = P2->next;
                }else {
                    head->next = P2;
                    P2 = P2->next;
                    head = head->next;
                }
            }
        }
        if(P1 != nullptr){
            head->next = P1;
        } else if(P2 != nullptr){
            head->next = P2;
        }
        return ret;
    }
};
