#include <iostream>
using namespace std;
 

int SAGS(int a[],int sum, int size)
  { int curr_sum=a[0]; int i; int begin=0;
		for(i=1;i<size;i++)
		{	 while (curr_sum > sum &&  begin < i - 1) 
            { 
                curr_sum = curr_sum - a[begin]; 
                begin++; 
            } 
            if(curr_sum==sum)
            	{int end=i-1;
            		cout<<"Starting index is " << begin << "Final index is " << end;
            	}
		   	if(i<size)
		   	 {curr_sum=curr_sum+ a[i];
 
		   	 }
		   }
			cout<< "No subarray found";
			return 0;
 
  }
 
	int main()
	{ int a[]= {1,2,3,4,5,7,10};
		int sum=17;
		int size=sizeof(a)/sizeof(a[0]);
		int index=SAGS(a,sum,size);
		return 0;
 
		}
