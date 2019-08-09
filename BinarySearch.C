#include<stdio.h>

int binarySearch(int a[], int size, int elementToFind) 
{ 
  int mid , right , left = 0, iterations;
  mid = size/2;
  right = size;
  iterations = (size+1)/2;
  while (iterations > 0 ) 
  { 
     mid = left + (right - left )/2;
     printf("mid %d , left %d , right %d %d\n" , mid , left , right , iterations);
    if (a[mid] == elementToFind)  
        return mid;  
    if (a[mid] < elementToFind)
    {
        if(a[right] == elementToFind)
        return right;
        left = mid + 1;
    }
    else
    {
        if(a[left] == elementToFind)
        return left;
         right = mid - 1;  
    }
    iterations = iterations - 1;
  }
  return -1;  
}
  
int main(void) 
{ 
   int a[] = {-5 , -2 , 1, 3, 5 }; 
   int n = sizeof(a)/ sizeof(a[0]); 
   int elementToFind = 10; 
   int output = binarySearch(a, n-1, elementToFind); 
   printf("\nindex %d", output); 
   return 0; 
} 