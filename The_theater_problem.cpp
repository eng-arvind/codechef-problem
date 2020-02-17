#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
bool sortby(const pair<char,int> a,const pair<char,int> b)
{
  return a.second>b.second;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[4]={0},b[4]={0},c[4]={0},d[4]={0};
    for(int i=0;i<n;i++)
    {
      char c1;
      int time;
      cin>>c1>>time;
      if(c1=='A')
      {
        if(time==12)
        a[0]++;
        else if(time==3)
        a[1]++;
        else if(time==6)
        a[2]++;
        else
        a[3]++;
      }
      else if(c1=='B')
      {
        if(time==12)
        b[0]++;
        else if(time==3)
        b[1]++;
        else if(time==6)
        b[2]++;
        else
        b[3]++;
      }
      else if(c1=='C')
      {
        if(time==12)
        c[0]++;
        else if(time==3)
        c[1]++;
        else if(time==6)
        c[2]++;
        else
        c[3]++;
      }
      else
      {
        if(time==12)
        d[0]++;
        else if(time==3)
        d[1]++;
        else if(time==6)
        d[2]++;
        else
        d[3]++;
      }
    }
      int sum_a=0;
      int sum_b=0;
      int sum_c=0;
      int sum_d=0;
      for(int i=0;i<4;i++)
      {
        sum_a += a[i];
        sum_b += b[i];
        sum_c += c[i];
        sum_d +=d[i];
      }
      vector<pair <char,int> > v;
      v.push_back(make_pair('A',sum_a));
      v.push_back(make_pair('B',sum_b));
      v.push_back(make_pair('C',sum_c));
      v.push_back(make_pair('D',sum_d));
      sort(v.begin(),v.end(),sortby);
      for(int i=0;i<4;i++)
      {
        cout<<v[i].first<<" "<<v[i].second<<endl;
      }
  }
  return 0;
}
