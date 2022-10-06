#include<iostream>
using namespace std;

// int main(){


// Switch case...
    // int ch = 2;
    // switch(ch){

    //     case 1: cout<<"first"<<endl;
    //         break;

    //     case 2: cout<<"second"<<endl;
    //         break;
        
    //     default : cout<<"it is default"<<endl;
    // }
// ----------------------------------------------------------------------------------------------------------
// Pyara sa calculator

// int a, b;
// cout <<"Enter the value of a: ";
// cin >> a;

// cout <<"Enter the value of b: ";
// cin >> b;

// char op;
// cout << "Enter the operation you want to perform: ";
// cin >> op;

// switch(op){
//     case '+' : cout << (a+b) <<endl;
//                 break;

//     case '-' : cout << (a-b) <<endl;
//                 break;

//     case '*' : cout << (a*b) <<endl;
//                 break;

//     case '/' : cout << (a/b) <<endl;
//                 break;

//     case '%' : cout << (a%b) <<endl;
//                 break;

//     default : cout <<"Please enter a valid operation"<<endl;
    
//     }

// ---------------------------------------------------------------------------------------------------------
// ---------------------------------------------------------------------------------------------------------

// --functions 

    //    --pow(a,b)

    // int a, b;
    // cout <<"Enter the value of a and b: " <<endl;
    // cin >> a >> b;

    // int ans = 1;

    // for(int i=1; i<=b; i++){
    //     ans = ans * a;

    // }
    // cout <<"Answer is " << ans <<endl;
// }

// --------------------------------------------------------------------------------------------------------------

// --------using function for pow(a,b)

// int power(int a, int b){

//     int ans = 1;

//     for(int i=1; i<=b; i++){
//         ans = ans * a;
//     }
//     return ans;
// }

// int main(){

// int a, b;
// cout <<"Enter the value of a: ";
// cin >> a;

// cout <<"Enter the value of b: ";
// cin >> b;

// int ans = power(a,b);
// cout << "answer is "<<ans<<endl;
// return 0;

// }

// -------------------------------------------------------------------------------------------------------------------


// bool isEven(int a){
//     if (a&1){
//         return 0;
//     }
//     else{
//         return 1;
//     }

// }


// int main(){
//     int num; 
//     cin >> num;

//     if (isEven(num)){
//         cout <<"number is even"<<endl;
//     }
//     else{
//         cout <<"nubmber is odd"<<endl;
//     }
// }


// ---------------------------------------------------------------------------------------------------------


// int factorial(int n){

//     int fact = 1;
//     for(int i=1; i<=n; i++){
//         fact = fact * i;                                     
//     }                                                      
//     return fact;
// }

// int nCr(int n, int r){

//     int num = factorial(n);

//     int denom = factorial(r) * factorial(n-r);

//     return num/denom;
    

// }

// int main(){

//     int n, r;
//     cin >> n >> r;

//     cout << "answer is "<< nCr(n, r) <<endl;
    
//     return 0;
// }

// --------------------------------------------------------------------------------------------------------

// void printCounting(int n){

//     for(int i=1; i<=n; i++){
//         cout << i <<" ";
//     }
//     cout <<endl;
// }

// int main(){

//     int n;
//     cin >>n;
//     printCounting(n);

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------



// 1 --> Prime no.
// 0 --> Not a Prime no.

// bool isPrime(int n){

//     for(int i=2; i<n; i++){

//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }


// int main(){

//     int n;
//     cin >>n;

//     if(isPrime(n)){
//         cout << "is a prime number" <<endl;
//     }
//     else{
//         cout<< "not a prime number" <<endl;
//     }
// }


// -----------------------------------------------------------------------------------------------------------------











