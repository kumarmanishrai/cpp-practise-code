#include<iostream>
using namespace std;

void func (int arr[], int i){
    if(i < 0){
        return;
    }
    cout <<arr[i]<<" ";
    func(arr, i-1);
}

int main () {

    int arr[5] = {1, 2, 3, 4, 5};
    
    func(arr, 4);
    return 0;
}