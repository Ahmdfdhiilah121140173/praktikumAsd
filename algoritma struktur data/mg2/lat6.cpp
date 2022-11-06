#include<iostream>
#include<cmath>
using namespace std;

int KelP(int n){
    if (n>1)
    {   cout<<n<<" * "<<4<<" + "<<n/2*sqrt(2)<<" * "<<4<<" + ";
        return KelP(n/2);
    }
}

int main(){
    int n;
    cin>>n;
    cout<<KelP(n);
}