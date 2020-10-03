#include <bits/stdc++.h>
#include <vector>
#include<bitset>
#include<string>
#include<sstream>
#include <algorithm>
#define pb push_back
#define s second
#define f first
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define mii map<int,int>
#define setbits(x) __builtin_popcountll(x)
#define mod 1000000007
#define ps(x,y) fixed<<setprecision(y)<<x
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      set<int> s;
      int zero=-1;
      for(int i=0;i<n;i++)
      {
        int a;
        cin>>a;
        if(a==0)
        zero=0;
        s.insert(a);
      }
      if(zero==-1)
      cout<<s.size()<<endl;
      else
      cout<<s.size()-1<<endl;
    }
    return 0;
  }
