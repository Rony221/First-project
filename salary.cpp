#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
  int n,h;
  float s,S;
   cin>>n>>h>>s;
     S=h*s;
 cout<<"NUMBER = "<<n<<endl;
 cout<<fixed<<setprecision(2)<<"SALARY = "<<"U$ "<<S<<endl;
  return 0;
}