#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
     cin>>n;
     long int a;
     cin>>a;
     long int total=(long int)pow(10,n)-1;
     long int s=2*total+a+2;
     cout<<s<<endl;
     long int b;
     cin>>b;
     long int c=s-(a+b)-total-1;
     cout<<c<<endl;
     long int d;
     cin>>d;
     long int e=s-(a+b+c+d);
     cout<<e<<endl;
     int final;
     cin>>final;
     if(final==-1)
     exit(0);
     fflush(stdin);
  }
  return 0;
}
