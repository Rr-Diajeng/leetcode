#include <iostream>
#include <stack>
#include <cmath>
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
    int getDecimalValue(ListNode* head) {
        ListNode* current = head;
        ListNode* tmp = head;

        if(current == NULL){
            return 0;
        }

        if(current->next == NULL){
            return current->val;
        }

        int ukuran = -1;
        stack<int> s;
        while (tmp != NULL){
            ukuran++;
            tmp = tmp->next;
        }

        while (current != NULL){
            if(current->val == 1){
                s.push(ukuran);
            }
            ukuran--;
            current = current->next;
        }

        int sum = 0, value;
        while(!s.empty()){
            value = s.top();
            s.pop();
            sum += pow(2, value);
        }

        return sum;
    }
};

int main() {
    ListNode *head = new ListNode(1);
    head->next = new ListNode(0);
    head->next->next = new ListNode(1);
    
    Solution sol;
    int decimalValue = sol.getDecimalValue(head);
    cout << "Decimal value: " << decimalValue << endl;

    return 0;
}
