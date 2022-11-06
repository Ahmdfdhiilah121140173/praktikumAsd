#include<iostream>
using namespace std;

struct buku {
    int isbn, jumlahHalaman;
    string judulBuku, namaPenerbit, kota;
};

int main(){
	cout<<"Masukan Nilai N : ";
    int n;
    cin>>n;
	struct buku x[n];
    for(int i = 0; i<n; i++){
        cout<<"Data Buku ke-"<<i+1<<endl;
        cout<<"Masukan ISBN : ";
        cin>>x[i].isbn;
        cout<<"Masukan Judul Buku : ";
        cin>>x[i].judulBuku;
        cout<<"Masukan Jumlah Halaman : ";
        cin>>x[i].jumlahHalaman;
        cout<<"Masukan Nama Penerbit : ";
        cin>>x[i].namaPenerbit;
        cout<<"Masukan Kota penerbit : ";
        cin>>x[i].kota;
        }
    int temp;
    for(int i = 0; i<n; i++) {
  	 for(int j = i+1; j<n; j++)
  	 {
        if(x[j].jumlahHalaman > x[i].jumlahHalaman) {
            temp = x[i].jumlahHalaman;
            x[i].jumlahHalaman = x[j].jumlahHalaman;
            x[j].jumlahHalaman = temp;
        }
  	 }
	}
    for(int i=0; i<n; i++){
    	cout<<"Data Buku ke-"<<i+1<<endl;
        cout<<"ISBN : "<<x[i].isbn<<endl;
        cout<<"Judul Buku : "<<x[i].judulBuku<<endl;
        cout<<"Jumlah Halaman : "<<x[i].jumlahHalaman<<endl;
        cout<<"Nama Penerbit : "<<x[i].namaPenerbit<<endl;
        cout<<"Kota penerbit : "<<x[i].kota<<endl;
	}
}
