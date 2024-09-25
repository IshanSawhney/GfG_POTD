class Solution {
  public:
    bool isPalindrome(Node *head) {
        //CodeGenius
        //step 1 middle element
        Node* slow=head,*fast=head;
        while(fast && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        //slow=middle element
        //step2 reverse middle element ke baad;
        Node* prev=NULL,*curr=slow;
        while(curr){
            Node *NextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=NextNode;
        }
        //step 3 compare
        Node* first=head,*second=prev;
        while(second){
            if(first->data!=second->data) return false;
            first=first->next;
            second=second->next;
        }
        return true;
    }
};
