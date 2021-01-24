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
#define mod 10 00000007
#define ps(x,y) fixed<<setprecision(y)<<x
#define ll long long int
using namespace std;
class Node
{
public:
  int data;
  Node* next;
public:
  Node(int x)
  {
    data=x;
    next=NULL;
  }
};
typedef Node* np;
np head=NULL;
void Insert(int x)
{
  Node* newnode=new Node(x);
  if(head==NULL)
  head=newnode;
  else
  {
    np temp=head;
    while(temp->next!=NULL)
    temp=temp->next;
    temp->next=newnode;
  }
}
void traverse(Node* head)
{
  Node* temp=head;
  if(head==NULL)
  {
    cout<<"Linked List is Empty\n";
    return;
  }
  else
  {
    cout<<"Linked List is:\n";
    while(temp!=NULL)
    {
      cout<<"["<<temp->data<<"]"<<"->";
      temp=temp->next;
    }
    cout<<"\n";
  }
}
void Insert_beg(int x)
{
  np newnode = new Node(x);
  if(head==NULL)
  head=newnode;
  else
  {
    newnode->next=head;
    head=newnode;
  }
  cout<<"Insert at Beg:"<<x<<"\n";
}
void Insert_end(int x)
{
  np newnode =new Node(x);
  if(head==NULL)
  head=newnode;
  else
  {
    np temp=head;
    while(temp->next!=NULL)
    temp=temp->next;
    temp->next=newnode;
  }
  cout<<"Insert at End: "<<x<<"\n";
}
np reverse_first_half(np root,int len)
{
	np pre=NULL;
	np cur=root;
	np nxt=root->next;
	root->next=NULL;
	while(len>1)
	{
		pre=cur;
		cur=nxt;
		nxt=nxt->next;
		cur->next=pre;
		len--;
	}
	head=cur;
   return nxt;

}
np reverse_second_half(np root,int len)
{
	np pre=NULL;
	np nxt=root->next;
	root->next=NULL;
	while(len>1)
	{
		pre=root;
		root=nxt;
		nxt=nxt->next;
		root->next=pre;
		len--;
	}
   return root;
}
void  reverse(np head)
{
	int size=0;
	np temp=head;
	while(temp!=NULL)
	{
		temp=temp->next;
		size++;
	}
	if(size%2==0)
	{
		np start=head;
		np mid=reverse_first_half(start,size/2);
		np last=reverse_second_half(mid,size/2);
		start->next=last;
	}
	else
	{
		np start=head;
		np mid=reverse_first_half(head,size/2);
		start->next=mid;
		start=mid;
		np last=reverse_second_half(mid->next,size/2);
		start->next=last;
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
  Insert(10);
  Insert(20);
  Insert(30);
  Insert(40);
  Insert(5);
  Insert(1);
  Insert(50);
  Insert(60);
  Insert(70);
  traverse(head);
  reverse(head);
  traverse(head);
  return 0;
}
