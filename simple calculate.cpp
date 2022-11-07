#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
  int c1,u1,c2,u2;
  float p1,p2,V;
  cin>>c1>>u1>>p1>>c2>>u2>>p2;
    V=(u1*p1)+(u2*p2);
  cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: "<<"R$ "<<V<<endl;
  return 0;
}