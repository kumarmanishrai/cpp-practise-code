#include <iostream>
using namespace std;

// int main(){

// int number[5] = {3,5,4,7,2};
// cout << "Value at second index: " << number[1] <<endl;

// int n;
// cin >>n;

// int arr[15] = {2,7};
// for(int i= 0; i<n; i++){
//     cout << arr[i] << " ";
// }
// cout << endl;

// int array[20] = {0};
// for(int i=0; i<20; i++){
//     cout <<array[i] << " ";
// }
// cout <<endl;

// int fifth[20] = {1};
// for(int i=0; i<20; i++){
//     cout << fifth[i] << " ";
// }
// cout <<endl;

// }

// ------------------------------------------------------------------------------------------------------------------------
//USING ARRAYS IN FUNCTIONS:-

// void printArray(int arr[], int size){

//     cout <<endl<< "printing the array" << endl;

//     for(int i = 0; i<size; i++){
//         cout << arr[i] << " ";

//     }
//     cout <<endl<< "printing done" <<endl;

// }

// int main(){

//     int third[12] = {2,4,2,445,66,8};

//     int n= 13;
//     printArray(third, n);

//     int fourth[15] = {2,4,2,445,66,8};

//     n= 9;
//     printArray(third, n);

//     int fifth[14] = {2,4,2,445,66,8};

//     n= 12;
//     printArray(third, n);

// }

// ---------------------------------------------------------------------------------------------------------------------

//  Question: max and min element of an array ?

//  int getMin(int num[], int n){

//     int mini = INT_MAX;
//     for(int i=0; i<n; i++){
//             // mini = min(mini, num[i]);
//         if(num[i] < mini){
//             mini = num[i];
//         }
//     }
//     return mini;
// }

// int getMax(int num[], int n){

//     int maxi = INT_MIN;

//     for(int i=0; i<n; i++){
//             // maxi = max(maxi, num[i]);
//         if(num[i] > maxi){
//             maxi = num[i];
//         }
//     }
//     return maxi;
// }

// int main(){

//     int size;
//     cin >> size;

//     int num[100];

//     for(int i=0; i<size; i++){
//         cin >> num[i];

//     }

//     cout << "Maximum value is " <<getMax(num, size) <<endl;
//     cout << "Minimum value is " <<getMin(num, size) <<endl;

// }

// -----------------------------------------------------------------------------------------------------------------------------------

// ----> ARRAY SCOPE

// void update(int arr[], int n){

//     cout << "Inside the function" <<endl;

//     //updating array
//     arr[0] = 120;

//     for(int i=0; i<3; i++){
//         cout <<arr[i] <<" ";
//     }
//     cout <<endl;

//     cout <<"Going back to main function" <<endl;
// }

// int main(){

//     int arr[3] = {1,2,3};

//     update(arr, 3);

//     for(int i=0; i<3; i++){
//         cout <<arr[i] <<" ";
//     }
//     cout <<endl;

// }

// ---------------------------------------------------------------------------------------------------

// ---> Reverse an Array:

// void reverse(int arr[], int n)
// {

//     int start = 0;
//     int end = n - 1;

//     while (start <= end)
//     {
//         swap(arr[start], arr[end]);
//         start = start + 1;
//         end = end - 1;
//     }
// }

// void printArray(int arr[], int n)
// {

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
// }

// int main()
// {
//     int arr[6] = {1, 2, 3, 4, 5, 6}; //even length
//     int brr[5] = {2, 4, 6, 8, -2};   //even length

//     reverse(arr, 6);
//     reverse(brr, 5);

//     printArray(arr, 6);
//     printArray(brr, 5);
// }
