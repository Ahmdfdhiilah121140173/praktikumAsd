#include<iostream>
using namespace std;

int LuasBS(int sisi){
    if(sisi==1){
        return 1;
    }
    return LuasBS(sisi-1) + sisi + sisi - 1;   
}
int main(){
    int n;
    cin>>n;
    cout<<LuasBS(n);
}