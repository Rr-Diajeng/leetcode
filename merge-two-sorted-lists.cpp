#include <iostream>
#include <cassert>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void MoveNode(ListNode** destRef, ListNode** sourceRef){

    ListNode* newNode = *sourceRef;
    assert(newNode != NULL);

    *sourceRef = newNode->next;
    
    newNode->next = *destRef;

    *destRef = newNode;

}


ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

    ListNode dummy;
    ListNode* tail = &dummy;

    dummy.next = NULL;

    while(1){
        if(list1 == NULL){
            tail->next = list2;
            break;
        }

        else if(list2 == NULL){
            tail->next = list1;
            break;
        }

        if(list1->val <= list2->val) MoveNode(&(tail->next), &list1);
        else MoveNode(&(tail->next), &list2);

        tail = tail->next;
    }

    return (dummy.next);

}

int main() {
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);
    
    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);
    
    ListNode* merged = mergeTwoLists(list1, list2);
    
    while (merged != NULL) {
        cout << merged->val << " ";
        merged = merged->next;
    }

    cout<<endl;
    
    return 0;
}

