// QUES: Print linearly from 1 to n


#include<iostream>
using namespace std;

void print(int n, int count) {
    if(count > n) {
        return;
    }
    cout<<count<<" ";
    count++;
    print(n, count);
}

int main() {

    int count = 1;
    int n;
    cout << "enter number: ";
    cin >>n;

    
    print(n, count);
    return 0;
}