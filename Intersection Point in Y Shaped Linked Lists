class Solution {
  public:
    
    int intersectPoint(Node* head1, Node* head2) {
        //CodeGenius
        Node* temp1=head1;
        Node* temp2=head2;
        while(true){
            if(temp1==temp2) return temp1->data;
            temp1=temp1->next;
            temp2=temp2->next;
            if(temp1==NULL && temp2==NULL) return -1;
            if(temp1==NULL) temp1=head2;
            if(temp2==NULL) temp2=head1;
        }
        return -1;
    }
};
