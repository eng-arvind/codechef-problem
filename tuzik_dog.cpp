#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    int s=0;
    for(int i=1;i<=k;i++)
    {
      int p=n%i;
      if(s<p)
      s=p;
    }
    cout<<s<<endl;
  }
  return 0;
}
