#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> a;
	for(int i=1;i<=5;i++)
	a.push_back(i);
	vector<int> b(3.0);
	b=a;
	a.resize(2);
	cout<<a.size()<<". "<<b.size()<<endl;
	return 0;
}
