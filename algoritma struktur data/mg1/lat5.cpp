#include<iostream>
using namespace std;

struct nilai {
    int nilKim, nilFis, nilMat;
    string nama;
    float rerata;
    bool remedi;
};

int main(){
	cout<<"Masukan Nilai N : ";
    int n;
    cin>>n;
	struct nilai x[n];
    for(int i = 0; i<n; i++){
        reset:
        	cout<<"Data Mahasiswa ke-"<<i+1<<endl;
            cout<<"Masukan Nilai Kimia : ";
            cin>>x[i].nilKim;
            cout<<"Masukan Nilai Fisika : ";
            cin>>x[i].nilFis;
            cout<<"Masukan Nilai Matematika : ";
            cin>>x[i].nilMat;
            cout<<"Masukan Nama : ";
            cin>>x[i].nama;
            if(x[i].nilKim <0 || x[i].nilFis<0 || x[i].nilMat < 0){
                cout<<"Nilai tidak boleh kurang dari nol! \n";
                goto reset; 
            }
            x[i].rerata  = (x[i].nilKim + x[i].nilFis + x[i].nilMat ) / 3;
    }
    float max = x[0].rerata;
    string winner = x[0].nama;
    
    for(int i = 0; i < n; i++){
        if(x[i].rerata > max){
            max = x[i].rerata;
            winner = x[i].nama;
            x[i].remedi = true;
        }
        else if(x[i].rerata < 60){
            x[i].remedi = false;
        }
    }
    for(int i = 0; i<n; i++){
        if(x[i].remedi){
            cout<<"Status Siswa ke-"<<i+1<<" : Lulus";
        }
        else{
             cout<<"Status Siswa ke-"<<i+1<<" : Remedi";
        }
    }

    cout<<"Nilai Tertinggi adalah : "<<winner<<endl;
	cout<<" Dengan Rerata Nilai : "<<max;

}
