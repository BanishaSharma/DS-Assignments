#include <iostream>

using namespace std;
int inversion(int arr[],int n){
    int count =0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
            count++;
            }
        }
    }
    return count;
}



int main() {
  int arr[15]={1,2,3,5,4,0,6,3};
  int n=8;
  cout<<inversion(arr,n);

    return 0;
}