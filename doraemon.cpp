#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  int n,m;
  cin>>n>>m;
  int a[n][m];
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
      cin>>a[i][j];
    int count=m*n;
        for(int i=1;i<n-1;i++)
        {
          for(int j=1;j<m-1;j++)
          {
            int min1=min(n-1-i,m-1-j);
            int min2=min(i,j);
            int min3= min(min1,min2)+1;
            for(int k=1;k<min3;k++)
              {
            if(a[i][j-k]==a[i][j+k] && a[i-k][j]==a[i+k][j])
              count +=1;
            else
            break;
                }
            }
        }
        cout<<count<<endl;
      }
      return 0;
}
