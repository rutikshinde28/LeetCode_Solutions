/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* curr = head;
        if(head == NULL){
            return head;
        }
        while(curr != NULL){
            if(curr->child != NULL){
                //flatten
                Node* next = curr->next;
                curr->next = flatten(curr->child);

                curr->next->prev = curr;
                curr->child = NULL;

                //find the tail
                while(curr->next != NULL){
                    curr = curr->next;
                }

                //attach tail with next pointer
                if(next != NULL){
                    curr->next = next;
                    next->prev = curr;
                }
            }
            curr = curr->next;
        }
        return head;
    }
};