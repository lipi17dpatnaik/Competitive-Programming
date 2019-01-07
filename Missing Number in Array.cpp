#include <iostream>
using namespace std;
  
int MissingNum(int a[],int size)
{ int sum1=0;
  int sum2=0;
  int i=0;
  int mnum=0;
  int n=a[0];

for(i=0;i<size;i++)
{sum2=sum2+a[i];
 if(a[i]>n)
 {n=a[i];}
sum1=n*(n+1)/2;
mnum=sum1-sum2;
return mnum;
}
   

int main()
{ int array[]={1,2,3,4,6,7};
 int n =sizeof(a)/sizeof(a[0]);
 int mnum=Missing number(array,n);
cout<<"Missing Number is "<< mnum;
return 0;
}
