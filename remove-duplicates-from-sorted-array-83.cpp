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
    ListNode* deleteDuplicates(ListNode* head) {
        // Implementasi solusi

        ListNode* current = head;

        ListNode* next_next;

        if(current == NULL) return nullptr;

        while(current->next != NULL){
            if(current->val == current->next->val){

                next_next = current->next->next;
                delete current->next;

                current->next = next_next;
            }
            else current = current->next;
        }
        
        return head;
    }
};


int main() {
    Solution sol;

    // Buat linked list
    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(3);

    // Cetak linked list sebelum dihapus duplikatnya
    ListNode* curr = head;
    while (curr != nullptr) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;

    // Hapus duplikat
    head = sol.deleteDuplicates(head);

    // Cetak linked list setelah dihapus duplikatnya
    curr = head;
    while (curr != nullptr) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;

    return 0;
}
