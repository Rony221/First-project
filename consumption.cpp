#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
  int X;
  double Y,A;
  cin>>X>>Y;
     A=X/Y;
  cout<<fixed<<setprecision(3)<<A<<" km/l"<<endl;
  return 0;
}