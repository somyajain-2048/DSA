class Solution {
public:
    ListNode* reverse(ListNode* curr, ListNode* prev) {
        if (curr == nullptr) return prev;
        ListNode* fut = curr->next;
        curr->next = prev;
        return reverse(fut, curr);
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Step 1: Reverse both input lists
        ListNode* first = reverse(l1, nullptr);
        ListNode* second = reverse(l2, nullptr);

        int carry = 0;
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;

        // Step 2: Add corresponding digits
        while (first || second || carry) {
            int sum = carry;
            if (first) {
                sum += first->val;
                first = first->next;
            }
            if (second) {
                sum += second->val;
                second = second->next;
            }

            carry = sum / 10;
            tail->next = new ListNode(sum % 10);
            tail = tail->next;
        }

        // Step 3: Reverse final result to return in forward order
        ListNode* result = reverse(dummy->next, nullptr);
        delete dummy;
        return result;
    }
};
