#include<iostream>
using namespace std;

void funct(int *x, int y){
    *x = 1-y;
}

int main(){
    int x, y;
    cin>>y;

    funct(&x, y);
    cout<<x;
}