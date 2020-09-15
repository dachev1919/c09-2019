#include <stdio.h>

int deleteElement(int arr[], int n, int x){
   int i; 
   
   for(i=0; i<n; i++) 
      if (arr[i] == x) 
         break; 
  
   if(i < n){
     n = n - 1; 
     for(int j=i; j<n; j++) 
        arr[j] = arr[j+1]; 
   } 
  
   return n; 
}

int findMinElement(int arr[], int n){
    int min = arr[0];
    for(int i=1; i<n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    
    return min;
}

int main(){
    int arr[] = {11, 15, 4, 6, 8, 5, 4}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    
    int x = findMinElement(arr, n);
    n = deleteElement(arr, n, x); 

    for (int i=0; i<n; i++) 
       printf("element: %i\n", arr[i]); 
  
    return 0; 
}