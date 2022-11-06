#include<iostream>
using namespace std;


struct  mahasiswa
{
    string namaMhs;
    int nilaiMat, nilaiKim, nilFis, nim;
};



/*int binarySearch(int arr[], int s, int l, int m){
    m = (s + l)/2;
    if(m = )

}*/
int main(){
    int n;
    cin>>n;

    mahasiswa x[n];

    for(int i=0; i<n; i++){
        cin>>x[i].namaMhs;
        cin>>x[i].nilaiKim;
        cin>>x[i].nilaiMat;
        cin>>x[i].nilFis;
    }
    int temp;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            
            if(x[i].nilaiKim > x[j].nilaiKim){
                temp = x[j].nilaiKim;
                x[j].nilaiKim = x[i].nilaiKim;
                x[i].nilaiKim = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<< "Nilai Kimia : "<<x[i].nilaiKim<<"\n";
    }
    
    /*for(int i=0; i<n; i++){
        if(cari == x[i].namaMhs){
            cout<<x[i].nilaiKim;
        }
    }*/




}
