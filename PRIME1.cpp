#include<iostream>
using namespace std;
bool isPrime(int n)
{
	if(n<2) return false;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0) return false;
	}
	return true;
}
int main()
{
	int t;
	cin>>t;
	cout<<endl;
	while(t--)
	{
		int l,r;
		cin>>l>>r;
		cout<<endl;
		for(int i=l;i<=r;i++)
		{
			if(isPrime(i)==true) cout<<i<<endl;
		}
		cout<<endl;
	}
	return 0;
}
