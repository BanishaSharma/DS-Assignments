#include <iostream>
#include<queue>
using namespace std;

void interleave(queue<int>&q ){
    int n=q.size();
    if(n%2!=0){
        cout<<"even"<<endl;
        return;
    }
    int half =n/2;
    queue<int>firsthalf;
    for(int i=0;i<half;i++){
        firsthalf.push(q.front());
        q.pop();
    }
    while(!firsthalf.empty()){
        q.push(firsthalf.front());
        firsthalf.pop();
        q.push(q.front());
        q.pop();
    }
}



int main() {
  queue<int> q;
    int arr[] = {4, 7, 11, 20, 5, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
        q.push(arr[i]);

    interleave(q);

    cout << "\nFinal Interleaved Queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}