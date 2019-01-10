#include <iostream>
using namespace std;
 
#include <iostream>
using namespace std;
 
int SortArray(int a[],int size)
	{ int i;   int count0=0;   int count1=0;   int count2=0;
		for(i=0;i<size;i++)
	   	{ if (a[i]==0)
	   		{count0++;}
		  if (a[i]==1)
	   		{count1++;}
	   	  if (a[i]==2)
	   		{count2++;}
	   	}
	   	for(i=0;i<count0;i++)
	   	 { cout<< "0 ";}
	   	 for(i=0;i<count1;i++)
	   	 { cout<< "1 ";}
	   	 for(i=0;i<count2;i++)
	   	 { cout<< "2 ";}
	 return 0;
	}
 
int main()
{ int arr[]= {0,2,0,1,0,2};
  int size=sizeof(arr)/sizeof(arr[0]);
  int s=SortArray(arr,size);
  cout<< s;
  return 0;
}
