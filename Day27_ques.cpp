Q.1

class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        // Your code here
        stack<int>stk;
        DLLNode* temp=head;
        while(temp!=NULL){
            stk.push(temp->data);
            temp=temp->next;
            
        }
        temp=head;
        while(temp!=NULL){
            temp->data=stk.top();
            stk.pop();
            temp=temp->next;
        }
        return head;
    }
};
//TC=O(n), SC=O(1)


Q.2

class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        // Your code here
        Node* curr = head;
        Node* pre = NULL;
        for(int i=1;i<x;i++){
            pre = curr;
            curr = curr->next;
        }
        if(curr==head){
            head = curr->next;
        }
        if(pre!=NULL){
            pre->next = curr->next;
        }
        if(curr->next!=NULL){
            curr->next->prev = pre;
        }
        delete curr;
        return head;
    }
};
