#include <iostream>
using namespace std;

void diagonal(int arr[], int n){
    cout << "Enter " << n << " diagonal elements:\n";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
}

void getdiagonal(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j){
                cout << arr[i] << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n = 3;
    int diag[3];

    diagonal(diag, n);
    cout << "\nThe diagonal matrix is:\n";
    getdiagonal(diag, n);

    return 0;
}

