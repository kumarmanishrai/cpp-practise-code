#include <iostream>
#include <cmath>
using namespace std;

// int main(){

//     int arr[6] = {6, 4, -3, -6, 8, 2};
//     for(int i=0; i<6; i++){
//         for(int j=0; j<5; j++){
//             int curr = arr[j];
//             int nxt = arr[j+1];
//             if(curr>nxt){
//                 // int buffer = curr;
//                 arr[j] = nxt;
//                 arr[j+1] = curr;
//             }
//         }

//     }
//     for(int p=0; p<6; p++){
//         cout <<arr[p]<<" ";
//     }
//     cout<<endl;
// }


int main(){

    int a;
    cin >>a;
    cout <<(a&1 ?"odd\n":"even\n");
}