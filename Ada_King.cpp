#include <iostream>
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
#define w(t) int t; cin>>t; while(t--)
#define ll long long int
#define tt int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
      w(t)
      {
          tt k;
          cin>>k;
          char arr[8][8];
          for(tt i=0;i<8;i++)
          {
            for(tt j=0;j<8;j++)
            {
              if(i==0 && j==0)
              {
              arr[i][j]='O';
              k--;
              continue;
              }
              if(k>0)
              arr[i][j]='.';
              else
              arr[i][j]='X';
              k--;
            }
          }
        for(tt i=0;i<8;i++)
        {
          for(tt j=0;j<8;j++)
          {
            cout<<arr[i][j];
          }
          cout<<endl;
        }
      }
    return 0;
  }
