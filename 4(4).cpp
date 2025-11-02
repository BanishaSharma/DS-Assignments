#include <iostream>
#include<string>
#include<queue>
using namespace std;
void firstnonrepeating(string str){
    queue <char>q;
    int freq[26]={0};
    for(int i=0;i<str.length();i++){
        char ch=str[i];

        if(ch==' ')
        continue;

        freq[ch-'a']++;
        q.push(ch);
        while(!q.empty()&&freq[q.front()-'a']>1){
            q.pop();
        }
        if(q.empty())
        cout<<-1<<" ";
        else
        cout<<q.front()<<" ";
    }
    cout<<endl;
}
int main() {
    string input = "a a b c";
    cout << "Input: " << input << endl;
    cout << "Output: ";
    firstnonrepeating(input);

    return 0;
}