#include<iostream>
using namespace std;

void ubahNilai(int *a, int *b, int *c){
    *a*=2;
    *b*=2;
    *c*=2;
}

int main(){
    int a,b,c;
   
    cin>>a;
    cin>>b;
    cin>>c;
   
    ubahNilai(&a, &b, &c);
    cout<<a<<b<<c;
}