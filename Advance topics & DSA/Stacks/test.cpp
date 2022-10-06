#include<iostream> 
using namespace std; 
 
void insertionSort(int arr[], int n) 
{ 
    for (int i = 1; i < n; i++) 
    { 
        int temp = arr[i]; 
        int j = i - 1; 
        for (; j >= 0; j--) 
        { 
            if (arr[j] > temp) 
            { 
                arr[j + 1] = arr[j]; 
            } 
            else 
            { 
                break; 
            } 
        } 
        arr[j + 1] = temp; 
    } 
} 
void Print(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
    { 
        cout << arr[i] << " "; 
    } 
} 
 
int main() 
{ 
    int arr[] = {11, 91, 0, 2}; 
    // int n = sizeof(arr) / sizeof(arr[0]); 
    insertionSort(arr, 4); 
    cout << "sorted array : "; 
    Print(arr, 4); 
    return 0; 
}