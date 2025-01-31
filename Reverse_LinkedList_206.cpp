ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* next=NULL;
        ListNode* current=head;

        while(current!=NULL){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }

        return prev;
    }