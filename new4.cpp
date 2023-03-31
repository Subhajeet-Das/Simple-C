#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int data[]={1,2,3,4,5,6,7,8,9};
	int n=sizeof(data)/sizeof(data[0]);
	int rotL=3;
	rotate(data,data+rotL,data+n);
	for(int i=0;i<n;i++)
	cout<<data[i]<<" ";
	return 0;
}
