#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
  double a,b,MEDIA;
  cin>>a>>b;
   MEDIA=(a*3.5/11)+(b*7.5/11);
  cout<<fixed<<setprecision(5)<<"MEDIA = "<<MEDIA<<endl;
  return 0;
}