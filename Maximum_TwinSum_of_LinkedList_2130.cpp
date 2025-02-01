int pairSum(ListNode* head) {
        int ans = 0;
        ListNode* newList = NULL;
        ListNode* current = head;
        ListNode* currHalf = head;
        while (currHalf) {
            currHalf = currHalf->next->next;
            ListNode* temp = current->next;
            current->next = newList;
            newList = current;
            current = temp;
        }

        while (current) {
            ans = max(ans, (current->val + newList->val));
            current = current->next;
            newList = newList->next;
        }
        return ans;
    }