#include<iostream>
using namespace std;
int count=0;
int maximum=0;
int hotels(int array[],int n,int m)
{
	
	int maxEndingHere=array[0];
	int low=0;
	int tempCount=1;
	for(int i=1;i<n;i++)
	{
		maxEndingHere+=array[i];
		tempCount+=1;
		while(maxEndingHere>m)
			{
				maxEndingHere-=array[low++];
				tempCount-=1;
				
				if(maxEndingHere<=m)
				{
					break;
				}
			}
		
		if(tempCount>count||(tempCount==count&&maxEndingHere<maximum))
	{
		count=tempCount;
		maximum=maxEndingHere;
	}
}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int n,m;
	scanf("%d %d",&n,&m);
	int array[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&array[i]);		
	}
	hotels(array,n,m);
	printf("%d %d\n",maximum,count);
	count=0;
	maximum=0;
}
	return 0;
}
