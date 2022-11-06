#include<iostream>
using namespace std;
struct mhs{
    int TB;
    float ipk;
    string nama, jenisKelamin;
};

void tukar(mhs *x, int y){
    int temp;

    /*for (int i = 0; i < y; i++)
    {
        for(int j = i; i< y; j++){
         if(x[i].TB>x[j].TB){
            temp = x[i].TB;
            x[i].TB = x[j].TB;
            x[j].TB = temp;
         }   
        }
    }*/
    for (int i = 0; i < y; i++)
    {
        cout<<x[i].TB<<" ";
    }
    
}

int main(){
    int n;
    cin>>n;
    mhs x[n];
    for (int i = 0; i < n; i++)
    {
        cin>>x[i].nama;
        cin>>x[i].ipk;
        cin>>x[i].jenisKelamin;
        cin>>x[i].TB;
    }
    
    tukar(&x[n], n);
}