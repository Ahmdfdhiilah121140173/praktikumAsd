#include<iostream>
using namespace std;

int main(){
    int nilaiKim[7];

    for(int i=0; i<7; i++){
        ulang:
        cout<<"Masukan nilai kimia siswa ke-"<<i+1<<" : ";
        cin>>nilaiKim[i];
        if(nilaiKim < 0){
            goto ulang;
        }
    }

    cout<<"Nilai pada index ke-0 : "<<nilaiKim[0]<<endl;
    cout<<"Nilai pada index ke-3 : "<<nilaiKim[3]<<endl;
    cout<<"Nilai pada index ke-7 : "<<nilaiKim[7];
}