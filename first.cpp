#include<iostream>
using namespace std;
    int n = 5;
    int max = 50;
   int arr[50] = {1,2,3,4,5};
    void create(){
        for(int i=0;i<n;i++){
        cin>>arr[i];
        }
    }
    void display(){
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
    cout<<endl;
    }
    void insertElement(){
        int val,pos;
        cin>>val;
        cin>>pos;
        if(pos<0 || pos>n){
            cout<<"Invalid";
            return;
        }
        n++;
        for(int i=n-1;i>=pos;i--){
            if(i>pos){
                arr[i]=arr[i-1];
            }
            else if(i==pos){
                arr[i]=val;
            }
        }
    }

    void deleteElement(){
        int pos;
        cin>>pos;
        if(pos<0 || pos>=n){
            cout<<"Invalid";
            return;
        }
        for(int i=pos;i<n-1;i++){
                arr[i]=arr[i+1];
        }
        n--;
    }
    void linearSearch(){
        int val;
        cin>>val;
        for(int i=0;i<n;i++){
            if(arr[i]==val){
                cout<<i;
            }
        }
    }
int main(){
    int choice;
    while(true){
        cout << "\n--- MENU ---\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1: create(); break;
            case 2: display(); break;
            case 3: {insertElement();
                display();
                break;}
            case 4: {
                deleteElement();
                display();
                 break;}
            case 5: linearSearch(); break;
            case 6: 
                cout << "Exiting program..."<<endl;
                return 0; 
            default: 
                cout << "Invalid choice!";
                break;
        }
    }
}
