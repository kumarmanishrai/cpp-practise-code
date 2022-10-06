// STACK implementation using array

#include<iostream>
using namespace std;

class Stack {
    //properties
    public:
        int top;
        int *arr;
        int size; 

    //behaviour
    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push (int element) {
        if(size-top >1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }

    void pop () {
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }

    int peak () {
        if(top>=0)
            return arr[top]; 
        else
            cout<<"stack id empty"<<endl;
            return -1;
    }

    bool isEmpty () {
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};


int main () {
    Stack st(5);
    st.push(22);
    st.push(23);
    st.push(24);
    st.push(25);

    cout<<st.peak()<<endl;
    st.pop();
    cout<<st.peak()<<endl;
    

    return 0;
} 