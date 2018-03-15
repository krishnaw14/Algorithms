// To count the occurances of one string inside another

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string base, flag;
	int count=0,i=0;

	cin>>base>>flag;

	cout<<"base= "<<base<<" flag= "<<flag<<endl; 

	while(base.find(flag,i)!=string::npos)
	{
		//cout<<alpha<<endl;
		count++;
		i=base.find(flag,i)+1;
	}
	cout<<"Occurances="<<count<<endl;
}