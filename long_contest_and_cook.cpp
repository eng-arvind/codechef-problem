#include<iostream>
using namespace std;
int main()
{
  long long int t;
  cin>>t;
  while(t--)
  {
  long long int m1,y1;
    cin>>m1>>y1;
    long long int m2,y2;
    cin>>m2>>y2;
    long int count=0;
    if(((y1 % 4 == 0) && (y1 % 100 != 0) ||
            (y1 % 400 == 0)) && m1==2)
      {
    count++;
    y1++;
     }
    while(y1<=y2)
    {
     if((y1 % 4 == 0) && (y1 % 100 != 0) ||
             (y1 % 400 == 0))
             count++;
      y1++;
    }
    cout<<count<<endl;
  }
  return 0;
}
