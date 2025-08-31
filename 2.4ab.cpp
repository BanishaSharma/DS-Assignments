#include <iostream>
#include <string>
#include <algorithm>
using namespace std;




int main() {
   string s="hello";
   string s2="world";
   string result= s+s2;
   cout<<result<<endl;
   reverse(s.begin(),s.end());
   cout<<s<<endl;
   
   
   
    return 0;
}