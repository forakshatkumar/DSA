#include <iostream>
using namespace std;;
int main()
{
  float p,r,t;
  cout<<"Enter the value of P=";
  cin>>p;
  cout<<"Enter the value of r=";
  cin>>r;
  cout<<"Enter the value of t=";
  cin>>t;
  float si=(p*r*t)/100;
  cout<<"Your simple interest is "<<si;
  return 0;
}