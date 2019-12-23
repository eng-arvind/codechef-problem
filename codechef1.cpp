#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,i;
	cin>>t;
	while(t>0)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	   while(n>2)
	   {
	       for(i=0;i<3;i++)
	       {
	           int d=arr[i];
	           int q=i;
	           for(int j=i+1;j<3;j++)
	           {
	               if(d>arr[j])
	               {
	                   d=arr[j];
	                   q=j;
	               }
	           }
	           int tp=arr[i];
	           arr[i]=arr[q];
	           arr[q]=tp;
	       }
	       i=1;
	       while(i<n-1)
	       {
	           arr[i]=arr[i+1];
	           i=i+1;
	       }
	       n-=1;
	   }
	    cout<<arr[1]<<" "<<arr[0];
	    cout<<"\n";
	    t=t-1;
	}
	return 0;
}
//
