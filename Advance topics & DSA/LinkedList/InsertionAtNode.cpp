// Insertion at any paricular node

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void insertNode(Node* prev_node, int new_data){
    //check if the given prev_node is NULL
    if(prev_node == NULL) {
        cout << "The given previous node cannot be null";
        return;
    }
    //Allocate new node
    Node* temp = new Node();
    temp -> data  = new_data;
    temp -> next = prev_node -> next;
    prev_node -> next = temp;
}

void printList(Node* n){
    while(n != NULL){
        cout << n->data << " ";
        n = n -> next;
    }
}

int main () {

    Node* node1 = new Node();
    Node* node2 = new Node();
    node1->data = 45;
    node1->next = node2;
    node2->data = 67;
    node2->next = NULL;

    insertNode(node1, 34);
    printList(node1);


    return 0;
}