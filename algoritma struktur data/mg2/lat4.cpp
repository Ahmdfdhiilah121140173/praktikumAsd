#include<iostream>
using namespace std;

bool isGanjil(int n){
    if (n==0)
    {
        return false;
    }
    else if(n==1){
        return true;
    }
     else if(n==-1){
        return true;
    }
    if(n>0){
        isGanjil(n-2);
    }
    else{
        isGanjil(n+2);
    }
}
int main(){
    int n;
    cin>>n;
    if(isGanjil(n)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}