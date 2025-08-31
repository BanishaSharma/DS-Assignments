#include <iostream>
#include <string>
#include <algorithm>
using namespace std;



int main() {
  string arr[20]={"banana","apple","cherry","mango"};
   int n=4;
sort(arr,arr+n);
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}


    return 0;
}