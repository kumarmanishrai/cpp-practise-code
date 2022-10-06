//Insertion at the front

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void printList(Node* n){
    while(n != NULL){
        cout << n->data << " ";
        n = n -> next;
    }
}

void push(Node** head_ref, int new_data){

    // cout<<&head_ref<<" "<<*&head_ref<<endl;
    // cout<<head_ref<<endl;
    //allocate node
    Node* new_node = new Node();

    new_node->data = new_data;

    new_node->next = *head_ref;

    *head_ref = new_node;
}

int main () {

    Node* node1 = NULL;
    Node* second = NULL;
    Node* third = NULL;

    // allocate 3 nodes in the heap
    node1 = new Node();
    second = new Node();
    third = new Node();


    node1->data = 1;
    node1->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;
    // cout<<head<< &head <<endl;

    Node** head = &node1;

    push(head, 43);
    push(head, 67);
    printList(node1);

    return 0;
}