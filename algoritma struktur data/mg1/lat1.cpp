#include<iostream>
using namespace std;


int main(){
    int arr[20];
    float rerata = 0;
    for(int i=0; i<20; i++){
        cout<<"Masukan angka : ";
        cin>>arr[i];
        rerata += arr[i];
    }
    cout<<"rerata nya adalah : "<<rerata/20;
}