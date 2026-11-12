class Solution {
    public:

        ListNode* reverse(ListNode* head) {
                ListNode* prev = NULL;
                        ListNode* curr = head;

                                while(curr != NULL) {
                                            ListNode* next = curr->next;

                                                        curr->next = prev;
                                                                    prev = curr;
                                                                                curr = next;
                                                                                        }

                                                                                                return prev;
                                                                                                    }

                                                                                                        bool isPalindrome(ListNode* head) {

                                                                                                                ListNode* slow = head;
                                                                                                                        ListNode* fast = head;

                                                                                                                                // Step 1: Find middle
                                                                                                                                        while(fast != NULL && fast->next != NULL) {
                                                                                                                                                    slow = slow->next;
                                                                                                                                                                fast = fast->next->next;
                                                                                                                                                                        }

                                                                                                                                                                                // Step 2: Reverse second half
                                                                                                                                                                                        ListNode* second = reverse(slow);

                                                                                                                                                                                                // Step 3: Compare both halves
                                                                                                                                                                                                        ListNode* first = head;

                                                                                                                                                                                                                while(second != NULL) {
                                                                                                                                                                                                                            if(first->val != second->val) {
                                                                                                                                                                                                                                            return false;
                                                                                                                                                                                                                                                        }

                                                                                                                                                                                                                                                                    first = first->next;
                                                                                                                                                                                                                                                                                second = second->next;
                                                                                                                                                                                                                                                                                        }

                                                                                                                                                                                                                                                                                                return true;
                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                    };


        
