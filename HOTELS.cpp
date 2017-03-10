#include<iostream>
using namespace std;
int hotels(int array[],int n,int m)
{
	int max=array[0];
	int maxEndingHere=array[0];
	int l=0;
	for(int i=1;i<n;i++)
	{
		maxEndingHere+=array[i];
		while(maxEndingHere>m)
			{
				maxEndingHere-=array[l++];
				
				if(maxEndingHere+array[i]<=m&&max<=maxEndingHere)
				{
					max=maxEndingHere;
					break;
				}
			}
		
		if(max<=maxEndingHere&&maxEndingHere<=m)
		{
			max=maxEndingHere;
		}
		
	}
	return max;
}
int main()
{
	int n,m;
	cin>>n>>m;
	int array[n];
	for(int i=0;i<n;i++)
	{
		cin>>array[i];		
	}
	cout<<hotels(array,n,m);
	return 0;
}
