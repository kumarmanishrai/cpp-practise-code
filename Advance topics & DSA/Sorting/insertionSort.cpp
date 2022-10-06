#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j=i-1;
        for(; j>=0; j--){

            if(arr[j]>temp){
                //shift
                arr[j+1] = arr[j];
            }
            else{
                //ruk jao
                break;
            }

        }
        arr[j+1] = temp;
    }

}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout <<arr[i]<<" ";
    }
    cout <<endl;
}

int main(){
    // Learn with example of cards 
    int arr[6] = {-2, 9, 3, 75, -23, 10};
    insertionSort(arr, 6);
    printArray(arr, 6);
}