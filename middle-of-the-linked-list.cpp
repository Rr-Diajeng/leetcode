#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        if(head == NULL) return nullptr;

        ListNode* current = head;
        ListNode* tmp = head;

        int ukuran = -1;

        while(tmp != NULL){
            ukuran++;
            tmp = tmp->next;
        }

        if(ukuran % 2 == 0) ukuran = ukuran / 2;
        else ukuran = (ukuran / 2) + 1;

        int x = 0;
        while(current != NULL && x != ukuran){
            current = current->next;
            x++;
        }
        printf("ukuran = %d\n", ukuran);
        return current;
    }
};

int main() {
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(4);
    ListNode* node5 = new ListNode(5);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    Solution solution;
    ListNode* middle = solution.middleNode(node1);

    cout << "The middle node is: " << middle->val << endl;

    return 0;
}

