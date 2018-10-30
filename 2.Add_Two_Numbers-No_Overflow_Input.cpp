/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// Solution will fail with overflow input such as 9999999991 and 9
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l1cur = l1;
        ListNode* l2cur = l2;
        int len1=0;
        int len2=0;
        int num1=0;
        int num2=0;
        //get value of l1 and l2
        while (l1cur) {
            num1=(l1cur->val)*pow(10,len1)+num1;
            len1++;
            l1cur=l1cur->next;
        }
        while (l2cur) {
            num2=(l2cur->val)*pow(10,len2)+num2;
            len2++;
            l2cur=l2cur->next;
        }
        //Calculate result value
        int result = num1+num2;
        //Display result as a linked list
        int dig = result%10;
        ListNode* l3 = new ListNode (dig);
        ListNode* temp = l3;
        while (result/=10) {
            dig = result%10;
            temp->next = new ListNode (dig);
            temp = temp->next;
        }
        return l3;
    }
};
