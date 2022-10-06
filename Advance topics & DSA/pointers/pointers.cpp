#include<iostream>
using namespace std;
int main(){
    // int a = 8;
    // int *pa = &a;
    // int b;
    // b = *pa;
    // cout <<b<<endl;
    // cout<<pa<<endl;



    int arr[3] = {1, 2, 3};
    int (*p) = arr;
    cout << p<<endl;
    for(int i=0; i<3; i++){
        cout <<*(p+i)<<endl;
    }

}



