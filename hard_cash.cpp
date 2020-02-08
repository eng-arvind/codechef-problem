#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    unsigned long long int n,k;
    cin>>n>>k;
    unsigned long long int a[n],i,sum=0;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(long long int i=0;i<n;i++)
    {
      sum += a[i];
    }
    cout<<sum%k<<endl;
  }
  return 0;
}
