#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution{
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if (l1 == nullptr && l2 == nullptr){
            return nullptr;
        } else if (l1 == nullptr){
            return l2;
        } else if (l2 == nullptr){
            return l1;
        }
        
        ListNode *merge = NULL;
 
        if (l1->val <= l2->val){
            merge = l1;
            merge->next = mergeTwoLists(l1->next, l2);
        }else{
            merge = l2;
            merge->next = mergeTwoLists(l1, l2->next);
        }
 
        return merge;
    }
};


int main() {
    ListNode *l1 = new ListNode(); 
    ListNode *l2 = new ListNode(); 
    ListNode *merge = new ListNode();
    
    

    Solution obj;

    merge = obj.mergeTwoLists(l1, l2);
    while(merge != nullptr){
        cout << merge->val;
        merge = merge->next;
    }

    return 0;
}