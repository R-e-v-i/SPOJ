#include<iostream>
using namespace std;


int max(int a,int b,int c)	
{		  
   if(a>=b && a>=c)		
   {		    
     return a;	
   }		
   else if(b>=a && b>=c)		 
   {
    return b;		
   }		  
   else	
   {		   
    return c;	
   }	
   }


int main()
{
int t;
cin>>t;
 while(t--)
 {
		int i,j,x,y;
		cin>>i>>j;
		int T[i+2][j+2];
		for(int x=0;x<i+2;x++)
		{
			T[x][0]=0;
			T[x][j+1]=0;
		}
		for(int y=0;y<j+2;y++)
		{
			T[i+1][y]=0;
			T[0][y]=0;
		}
		for(int x=1;x<i+1;x++)
		{
			for(int y=1;y<j+1;y++)
			{
				cin>>T[x][y];
			}
		}
		for(int x=i;x>0;x--)
		{
			for(int y=j;y>0;y--)
			{
				
					T[x][y]+=max(T[x+1][y-1],T[x+1][y],T[x+1][y+1]);

			}
		}
		
		int ans=T[1][1];
		for(int y=1;y<=j;y++)
		{
			ans=max(ans,T[1][y]);
		}
		cout<<ans<<endl;
		
	}
	return 0;
}
