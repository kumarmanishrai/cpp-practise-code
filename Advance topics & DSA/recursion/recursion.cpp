#include<iostream>
using namespace std;

void print(int i){
    if(i>8){
        return;
    }

    cout<<i<<endl;

    print(i+1);
}

int main() {
    print(1);

    return 0;
}