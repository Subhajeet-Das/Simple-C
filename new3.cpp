#include<iostream>
using namespace std;
int main()
{
	int *p,i;
	int arr[]={10,20,30,40,50};
	for(p=&arr[0],i=0;i<5;i++)
	cout<<p[i]<<" ";
	cout<<endl;
	for(p=arr+4;p>=arr;p--)
	cout<<arr[p-arr]<<" ";
	return 0;
}
