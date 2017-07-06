/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode ** t1 = &l1;
    struct ListNode ** t2 = &l2;
    struct ListNode temp;
    struct ListNode * res = &temp;
    int sum = 0;

    while((*t1) != NULL || (*t2) != NULL ) {
        sum /= 10;

        if((*t1) != NULL) {
            sum += (*t1)->val;
            (*t1) = l1->next;
        }

        if((*t2) != NULL) {
            sum += l2->val;
            (*t2) = l2->next;
        }

        res->next = malloc(sizeof(*res));
        res = res->next;
        res->next = NULL;
        res->val = sum % 10;
    }
    if(sum / 10 != 0) {
        res->next = malloc(sizeof(*res));
        res = res->next;
        res->next = NULL;
        res->val = sum / 10;
    }

    return temp.next;
}
