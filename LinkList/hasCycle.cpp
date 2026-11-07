// Linked List Cycle
// LC - 141


#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};


bool hasCycle(ListNode* head) {
    if (head == nullptr || head->next == nullptr)
        return false;

    ListNode* slow = head;
    ListNode* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return true;
    }
    return false;
}
int main() {

    // Create nodes
    ListNode* head = new ListNode(1);
    // ListNode* second = new ListNode(2);
    // ListNode* third = new ListNode(3);
    // ListNode* fourth = new ListNode(4);
    head -> next = new ListNode(2);
    head -> next -> next = new ListNode(3);
    head -> next -> next -> next = new ListNode(4);

    head -> next -> next -> next -> next = head -> next;

    // Connect nodes
    // head->next = second;
    // second->next = third;
    // third->next = fourth;

    // Create a cycle:
    // 1 -> 2 -> 3 -> 4
    //          ^         |
    //          |_________|
    // fourth->next = second;



    if (hasCycle(head))
        cout << "Cycle exists" << endl;
    else
        cout << "No cycle" << endl;

    return 0;
}