#include<iostream>
#include<queue>
using namespace std;

int main() {

    //create a queue
    queue<int> q;

    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);

    cout <<q.size();

    return 0;
}