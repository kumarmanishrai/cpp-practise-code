#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

int main() {

    Node* head = new Node(34);
    cout<<head->data<<endl;
    cout<<head->next<<endl;
    cout<<head->prev<<endl;
    


    return 0;
}