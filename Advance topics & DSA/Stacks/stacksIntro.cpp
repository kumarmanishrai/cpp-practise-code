#include<iostream>
#include<stack>
using namespace std;

int main () {

    //creation of stack
    stack<int> s;

    //push operation
    s.push(23);
    s.push(4);

    //pop operation
    s.pop();

    cout<<s.top()<<endl;

    if(s.empty()) {
        cout << "stack is empty" <<endl;
    }
    else{
        cout << "stack is not empty" <<endl;
    }

    return 0;
}