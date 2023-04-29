#include<iostream>
using namespace std;
int main()
{
	int a[]={10,20,30,40,50};
	int *p[]={a,a+1,a+2,a+3,a+4};
	int **q=p;
	**q++;
	cout<<*a<<" "<<**p<<" "<<**q<<endl;
	q=p;
	++**q;
	cout<<*a<<" "<<**p<<" "<<**q<<endl;
	return 0;
}
