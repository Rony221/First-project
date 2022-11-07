#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() 
{
  double x1,y1;
  double x2,y2,A;
  cin>>x1>>y1>>x2>>y2;
     A=pow(pow((x2-x1),2)+pow((y2-y1),2),0.5);
  cout<<fixed<<setprecision(4)<<A<<endl;
  return 0;
}