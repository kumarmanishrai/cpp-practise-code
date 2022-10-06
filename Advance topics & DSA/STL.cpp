#include<iostream>
#include<array>
#include<vector>
using namespace std;

// int main(){
//     //Array

//     array<int,4> a = {1,2,3,4};
//     int size = a.size();
//     for(int i=0; i<size; i++){
//         cout<<a[i]<<endl;
//     }
//     cout <<"element at 2nd index is --> "<<a.at(1)<<endl;
//     cout <<"empty or not --> "<<a.empty()<<endl;
//     cout <<"first element --> "<<a.front()<<endl;
//     cout <<"last element --> "<<a.back()<<endl;


// }

int main(){
    //Vector
    vector<int> v;
    v.push_back(1);
    cout <<"capacity --> "<<v.capacity()<<endl;

    v.push_back(2);
    cout <<"capacity --> "<<v.capacity()<<endl;

    v.push_back(3);
    cout <<"capacity --> "<<v.capacity()<<endl;

    v.push_back(4);
    cout <<"capacity --> "<<v.capacity()<<endl;
    cout <<"size --> "<<v.size()<<endl;

}