/*
1 2 3 4 5
c,p,n
c=1 p=null n=null
     n=2
     1->null
     p=1
     c=2
*/
class Node {
  public:
    int data;
    Node *next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};
Node *reverslist(Node *head){
    Node *curr=head;
    Node* prev=nullptr;
    Node* next= nullptr;
    while(curr!=nullptr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
    

}


