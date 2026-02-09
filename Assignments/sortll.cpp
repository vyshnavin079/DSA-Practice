class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
         if (!head || !head->next) return head;
         Node* zeroHead = new Node(-1);
    Node* oneHead = new Node(-1);
    Node* twoHead = new Node(-1);

    Node* zero = zeroHead;
    Node* one = oneHead;
    Node* two = twoHead;

    Node* curr = head;
    while (curr != nullptr) {
        if (curr->data == 0) {
            zero->next = curr;
            zero = zero->next;
        }
        else if (curr->data == 1) {
            one->next = curr;
            one = one->next;
        }
        else {
            two->next = curr;
            two = two->next;
        }
        curr = curr->next;
    }

    // Connect three lists
    zero->next = (oneHead->next != nullptr) ? oneHead->next : twoHead->next;
    one->next = twoHead->next;
    two->next = nullptr;

    // New head
    Node* newHead = zeroHead->next;

    // Free dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return newHead;
    }
};
