// parameterised


#include<iostream>
using namespace std;

void func (int i , int sum) {
    if(i < 1){
        cout << sum;
        return;
    }

    func(i-1, sum+i);
}

int main(){

    int n;
    cout<<"enter n: ";
    cin >> n;

    func(n, 0);

    return 0;
}