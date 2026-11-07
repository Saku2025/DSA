

/*
        Example:
        1 -> 2 -> 3 -> 4
                       |
             |---------
*/
#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

ListNode* detectCycle(ListNode* head) {

    ListNode* slow = head;
    ListNode* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast){
            slow = head;
        while(slow != fast){
            slow = slow -> next;
            fast = fast -> next;
        }
        return slow;
    }}
    return nullptr;
}


int main() {

    // Create nodes
    ListNode* head = new ListNode(1);
    head -> next = new ListNode(2);
    head -> next -> next = new ListNode(3);
    head -> next -> next -> next = new ListNode(4);

    head -> next -> next -> next -> next = head -> next;


    ListNode* ans = detectCycle(head);
     if (ans != nullptr)
        cout << "Cycle starts at: " << ans->val << endl;
    else
        cout << "No cycle" << endl;

    return 0;
}