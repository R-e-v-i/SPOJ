#include<iostream>
#include<algorithm>
using namespace std;
int stalls,cows;
int check(int array[],int mid)
{
	int cowsNumber=1;
	int position=array[0];
	for(int i=1;i<stalls;i++)	
	{
		if(array[i]-position>=mid)
		{
			position=array[i];
			cowsNumber++;
			if(cowsNumber==cows)
			{
				return 1;
			}
		}
	}
	return 0;
}
int binarySearch(int array[])
{
	int l=0;
	int r=array[stalls-1]-array[0];
	int max=0;
	while(r>l)
	{
		int mid=(l+r)/2;
		if(check(array,mid)==1)
		{
			if(mid>max)
			{
				max=mid;
			}
			l=mid+1;
		}
		else
		{
		r=mid;
	}
	}
	return max;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>stalls>>cows;
		int array[stalls];
		for(int i=0;i<stalls;i++)
		{
			cin>>array[i];
		}
		sort(array,array+stalls);
		cout<<binarySearch(array)<<endl;
	}
	return 0;
}
