#include<iostream>
using namespace std;

void func(int *x, int y, int *z){
    for(int i = 1;i<=y; i++){
        *x += (2*i);
    }
    for (int i = 1; i <=y; i++)
    {
        *z += (3+i);
    }
}

int main(){
    int x = 0, y, z= 1;
    cin>>y;
    func(&x, y, &z);
    cout<<x<<z;
}