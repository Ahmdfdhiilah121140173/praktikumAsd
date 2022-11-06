#include<iostream>
using namespace std;

int tambah(int n, int m, int h){
    if(m<n){
        h+= m*2;
        cout<<m*2<<" + ";
        m++;

        return tambah(n, m, h);
    }
    else if(m=n){
        cout<<m*2;
        h+= m*2;
        cout<<" = "<<h;
        return 0;
    }
}

int main(){
    int n, m=1, h=0;
    redo:
    cin>>n;
    if (n<=0)
    {
        goto redo;
    }
    tambah(n, m, h);
}