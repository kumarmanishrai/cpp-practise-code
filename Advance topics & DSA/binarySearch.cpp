#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size-1;

    // int mid = (start + end)/2;
    int mid = start + (end - start)/2;

    while(start<=end){
        
        if(arr[mid] == key){
            return mid;
        }
        //go to right part
        if(key > arr[mid]){
            start = mid +1;
        }
        else{
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return -1;
}

int main(){

// condition : elements should be monotonic function 

    int even[6] = {2, 4, 6, 8 ,10, 12};
    int odd[5] = {3, 8, 11, 14, 16};

    int index = binarySearch(odd, 6, 8);

    cout << "index of 8 is: " <<index<<endl;


}

