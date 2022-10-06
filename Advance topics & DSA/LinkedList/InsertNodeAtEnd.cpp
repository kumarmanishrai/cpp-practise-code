#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
};

void insertNode(Node** head, int new_data){

    Node* new_node = new Node();

    Node* last = *head;

    new_node->data = new_data;

    new_node->next = NULL;

    //if the LL is empty make the new node as head

    // if(*head == NUll){
    //     *head = new_node;
    //     return;
    // }

    while (last->next != NULL)
    {
        last = last->next;
    }
 
    /* 6. Change the next of last node */
    last->next = new_node;
    return;


}

void printList(Node* n){
    while(n != NULL){
        cout << n->data << " ";
        n = n -> next;
    }
}

int main(){
    Node* node1 = new Node();
    Node* node2 = new Node();
    node1->data = 45;
    node1->next = node2;
    node2->data = 67;
    node2->next = NULL;

    Node** head = &node2;

    insertNode(head, 34);
    insertNode(head, 36);
    insertNode(head, 38);
    printList(node1);


    return 0;
}