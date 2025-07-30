class Solution {
public:
    
    ListNode* getmiddle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    // Helper to merge two sorted lists
    ListNode* merge(ListNode* left, ListNode* right){
        if(left == NULL) return right;
        if(right == NULL) return left;

        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;

        while(left != NULL && right != NULL){
            if(left->val < right->val){
                temp->next = left;
                left = left->next;
            } else {
                temp->next = right;
                right = right->next;
            }
            temp = temp->next;
        }

        // Attach remaining nodes
        if(left != NULL) temp->next = left;
        if(right != NULL) temp->next = right;

        ListNode* result = dummy->next;
        delete dummy;
        return result;
    }

    // Main sort function using Merge Sort
    ListNode* sortList(ListNode* head){
        if(head == NULL || head->next == NULL){
            return head;
        }

        ListNode* mid = getmiddle(head);
        ListNode* right = mid->next;
        mid->next = NULL;

        ListNode* left = sortList(head);
        right = sortList(right);

        return merge(left, right);
    }
};
