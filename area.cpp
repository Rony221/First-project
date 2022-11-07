#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
  double A,B,C,tri,rad,tra,sq,rec;
  cin>>A>>B>>C;
    tri=A*C/2;
    rad=3.14159*C*C;
    tra=(A+B)/2*C;
    sq=B*B;
    rec= A*B;
  cout<<fixed<<setprecision(3)<<"TRIANGULO:"<<" "<<tri<<endl;
  cout<<fixed<<setprecision(3)<<"CIRCULO:"<<" "<<rad<<endl;
  cout<<fixed<<setprecision(3)<<"TRAPEZIO:"<<" "<<tra<<endl;
  cout<<fixed<<setprecision(3)<<"QUADRADO:"<<" "<<sq<<endl;
  cout<<fixed<<setprecision(3)<<"RETANGULO:"<<" "<<rec<<endl;
  return 0;
}