#include<iostream>
using namespace std;

void convert(char i, float *x){
    switch (i)
    {
    case 'K':
        *x = *x + 273.15;
        break;
    case 'F':
        *x = *x * (9/5) + 32;
        break;
    case 'R':
        *x = *x * (4/5);
        break;
    default:
        return;
        break;
    }
}

int main(){
    float x;
    char i;

    cin>>x;
    cin>>i;
    convert(i,&x);
    cout<<x;
}