/* Enter your solutions in this file */
#include <stdio.h>
#include<assert.h>


int max(int arr[], int size)
{	int largest =arr[0];
	for(int i=1;i<size;i++)
        {  if(arr[i]>largest)
             largest = arr[i];
        }
             return largest;
}	


int min(int arr[], int size)
{	int smallest = arr[0];
	for(int j=1;j<size;j++)
         {  if(arr[j]<smallest)
        	smallest = arr[j];
         }
        	return smallest;
}	


float average(int arr[], int size)	
{	float average,sum =0;
	for(int i=0;i<size;i++)
	{ sum+=arr[i];}
	average = sum/(float)size;
	return average;
}


int mode(int arr[], int size )		
{	int l= max(arr,size);
	int s= min(arr,size);
	int len = l-s+1;
	int counts[len], mod;
	
	
	for(int i=0;i<len;i++)
	{	counts[i]=0;
		for(int j=0;j<size;j++)
		{  if(arr[j]==s)
		    counts[i]+=1;
		}
		s++;
	}
	
	s= min(arr,size);
	for(int i=0;i<len;i++)
	{	int m = max(counts,len);
		if (counts[i]==m)
		  mod = s ;
		s++;
	}
	return mod;
}	


int factors(int num, int arr[])
{
	int prime[100]={};
	int j=0,size=0;
	for(int n=2; n<=num;n++)
	{ int count =0;
	  for(int i=1;i<=n;i++)
	  {	if (n%i==0)
		  count++;
	  }
	  if (count == 2)
	   { prime[size]=n;
	     size++;
	   }
	}
	
	for(int i=0;i<size;)
	{ if (num%prime[i]==0){
	    arr[j] = prime[i];
	    j++;
	    num = num/prime[i];
	    }
	  else
	    i++;
	}
	
	return arr,j;
}
