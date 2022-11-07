#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
  double a,b,c,MEDIA;
  cin>>a>>b>>c;
   MEDIA=(a*2/10)+(b*3/10)+(c*5/10);
  cout<<fixed<<setprecision(1)<<"MEDIA = "<<MEDIA<<endl;
  return 0;
}