class Solution {
  public:
    void deleteAlt(struct Node *head) {
        // CodeGenius
        Node *temp=head;
        if(!head) return;
        while(temp && temp->next){
            Node *NodeToDelete=temp->next;
            temp->next=temp->next->next;
            free(NodeToDelete);
            temp=temp->next;
        }
    }
};
