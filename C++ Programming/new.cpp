#include<iostream>
using namespace std;
union myTYPE{
	char c;
	unsigned int i;
}u;
int main()
{
	u.c='X';
	u.i=65;
	cout<<u.c<<" "<<u.i<<endl;
	return 0;
}
