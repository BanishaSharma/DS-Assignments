#include <iostream>
using namespace std;
int findmissing(int arr[],int n){
    int s=0;
    int e=n-2;
    int mid= (s+e)/2;
    int ans=n;
    while(s<=e){
        if(arr[mid]==mid+1){
            s=mid+1;
        }
        else if(arr[mid]>mid+1){
            ans=mid+1;
            e=mid-1;

        }
         mid= (s+e)/2;
    }
    return ans;

}




int main() {
int arr[5]={1,2,3,5,6};
int n=6;
cout<<findmissing(arr,n);

    return 0;
}