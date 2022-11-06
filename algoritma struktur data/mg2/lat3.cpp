#include <iostream>
using namespace std;

int deret1(int n)
{
  if (n == 1){
    return 1;}
  else{
    return (deret1(n-1) + n);
    }
}

int main()
{
  int x;
  cin>>x;
  for (int i = 1; i<=x; i++){
    cout<<deret1(i)<<" ";
  }
  return 0;
}
