#include <iostream>
#include<algorithm>

using namespace std;
int couuntdistinct(int arr[],int n){
   sort(arr,arr+n);
   int distinctcount =1;
   for(int i=1;i<n;i++){
    if(arr[i]!=arr[i-1]){
        distinctcount++;
    }
   }
   return distinctcount;
}


int main() {
   int arr[10]={2,3,4,4,5,6,1,2};
int n=8;
cout<<couuntdistinct(arr,n);

    return 0;
}