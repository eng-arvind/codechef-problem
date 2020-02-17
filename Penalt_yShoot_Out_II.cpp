#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0,b=0;
    for(int i=0;i<s.length()-1;i=i+2)
    {
      a += int(s[i]-'0');
      b += int(s[i+1]-'0');
      if(i>n && (a-b>=n-1 || b-a>=n-1))
      {
        cout<<i<<endl;
        return 0;
      }
    }
    cout<<s.length()<<endl;
  }
  return 0;
}
