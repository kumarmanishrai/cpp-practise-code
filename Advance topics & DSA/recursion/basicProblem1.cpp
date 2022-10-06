// QUES: Print name 5 times

#include<iostream>
using namespace std;

int count = 0;

void printName(int count){
    if(count == 0){
        return;
    }
    string name = "manish";
    cout<<name<< count<<endl;
    count--;
    printName(count);
}

int main() {
    int count =5;
    printName(count);

    return 0;
}