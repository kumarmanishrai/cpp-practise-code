// Functional

#include<iostream>
using namespace std;

int func(int n) {
    if(n==0){
        return 0;
    }
    return n + func(n-1);

}

int main() {

    int n;
    cout <<"enter n: ";
    cin >> n;
    
    cout <<func(n);
    

    return 0;

}