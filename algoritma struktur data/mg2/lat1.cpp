#include<iostream>
using namespace std;

int tambah(int n, int m){
    if(m<n){
        cout<<m<<" + ";
        m++;
        return tambah(n, m);
    }
    else if(m=n){
        cout<<m;
    }
    else{
        return 0;
    }
}

int main(){
    int n, m=1;
    redo:
    cin>>n;
    if (n<=0)
    {
        goto redo;
    }
    tambah(n, m);
}