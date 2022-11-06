#include<iostream>
using namespace std;

struct nilai {
    int nilKim, nilFis, nilMat;
    string nama;
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
    }
    
    string target;
    cout<<"Masukan Nama yang ingin dicari : ";
    cin>>target;
    
    for(int i = 0; i < n; i++){
    	if(x[i].nama == target){
    		cout<<"Data Mahasiswa ke-"<<i+1<<endl;
            cout<<"Nilai Kimia : "<<x[i].nilKim<<endl;
            cout<<"Nilai Fisika : "<<x[i].nilFis<<endl;
            cout<<"Nilai Matematika : "<<x[i].nilMat<<endl;
		}
	}
}
