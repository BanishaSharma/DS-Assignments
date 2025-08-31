#include <iostream>
using namespace std;
int bsearch(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid= (s+e)/2;

while(s<=e){
if(k==arr[mid]){
    return mid;
}
else if(k>arr[mid]){
    s=mid+1;
}
else{
    e=mid-1;
}
mid=(s+e)/2;
}
return 0;
}
int main() {
int arr[5]={1,2,3,4,5};
int n=5;
int k=3;
cout<<bsearch(arr,n,k);
    return 0;
}