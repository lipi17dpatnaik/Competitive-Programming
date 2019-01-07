#include <iostream>
  
int MSAS(int a[], int size) 
//making function Maximum Sub-array Sum
{ 
   int final_max = a[0]; 
   int curr_max = a[0]; 
   int i;
  
   for (i = 1; i < size; i++) 
   { 
        curr_max = std::max(a[i], curr_max+a[i]); 
        final_max  = std::max(final_max, curr_max); 
   } 
   return final_max ; 
} 
  
// Test Maximum Sub-array Sum
int main() 
{ 
   int a[] =  {4, -1, -2, 1, 5, -3}; 
   int n = sizeof(a)/sizeof(a[0]); 
   int max_sum = MSAS(a, n); 
   std::cout << "Maximum contiguous sum is " << max_sum; 
   return 0; 
} 
