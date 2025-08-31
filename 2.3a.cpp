#include <iostream>

using namespace std;
int findmissing(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]!=i+1){
            return i+1;
        }
    }
    return n;
}




int main() {
  int arr[5]={1,2,3,5,6};
  int n=6;
  cout<<findmissing(arr,n);
    return 0;
}