// QUES: Print linearly from n to 1


#include<iostream>
using namespace std;

void print(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    n--;
    print(n);
}


int main() {
    int n;
    cout <<"Enter n: ";
    cin >>n;

    print(n);

    return 0;
}