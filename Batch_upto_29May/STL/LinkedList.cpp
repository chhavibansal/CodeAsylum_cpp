class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *f = head , *s = head, *prev = head;
        // moving f by n units
        while(n--){
            f = f->next;
        }
        if(f == NULL) return head->next;
        while(f != NULL){
            f = f->next;
            prev = s;
            s  = s->next;
        }
        prev->next = s->next;
        return head;
    }
};
// https://leetcode.com/problems/remove-nth-node-from-end-of-list/



class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp= new ListNode(0);
        ListNode *head =temp;
        cout << head->val <<" ";
        int c = 0 , sum = 0 ;
        while(l1!= NULL or l2!= NULL){
            sum+= (l1!= NULL ? l1->val : 0 ) + (l2!= NULL ? l2->val : 0 ) + c;
            temp->next = new ListNode(sum%10);
            c = sum/10;
            sum = 0 ;
            l1 = l1->next;
            l2 = l2->next;
            temp = temp->next;
        }
        if(c)
            temp->next = new ListNode(c);
        
        return head->next;
    }
};
// https://leetcode.com/problems/add-two-numbers/