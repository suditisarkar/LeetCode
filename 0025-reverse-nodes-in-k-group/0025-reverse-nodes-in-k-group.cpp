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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr) {
            return head;
        }

        ListNode* curr = head;
        ListNode* dummy = nullptr;
        ListNode* prev = nullptr;
        int count = 0;

        // Check if there are at least k nodes to reverse
        while (curr != nullptr && count < k) {
            curr = curr->next;
            count++;
        }

        curr = head;
        if (count == k) {
            count = 0;
            // Reverse k nodes
            while (curr != nullptr && count < k) {
                dummy = curr->next;
                curr->next = prev;
                prev = curr;
                curr = dummy;
                count++;
            }
            // Recursively call the function for the next part of the list
            if (dummy != nullptr) {
                head->next = reverseKGroup(dummy, k);
            }
        } else {
            // If there are fewer than k nodes left, no need to reverse
            prev = head;
        }

        return prev;
    }
};
