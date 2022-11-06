#include<iostream>
using namespace std;


int main(){
    int arr[20], temp;
    for(int i=0; i<20; i++){
        cout<<"Masukan angka : ";
        cin>>arr[i];
    }
    for(int i=0; i<20; i++){
        for(int j=i+1; j<20;j++){
            if(arr[j]>arr[i]){
                temp = arr[i];
                arr[i]= arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0; i<3; i++){
        cout<<"terbesar ke-"<<i+1<<"adalah : "<<arr[i]<<endl;
    }
}