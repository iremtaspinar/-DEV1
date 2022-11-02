#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100

void bubblesort(int arr[], int size)
{
 int i;
 int k;
 int temp;    
    for(i=0;i<(size-1);i++){
		
	  for(k=0;k<size-i-1;k++){
        	
        if(arr[k]>arr[k+1]){ 
            
               temp = arr[k]; 
               arr[k] = arr[k+1];
               arr[k+1] = temp;
             }
         }
     }
 }
int main(){

    int i, k, arr[MAX];
    int size=100;
    
   	srand(time(NULL));



      for(int i=0; i<100; i++){
        arr[i] = rand()%10000+1;
    }
       printf("Rastgele Sayilar\n");
       
	for(int i=0; i<100; i++)
	{
        printf("%2d\n",arr[i]); 
        
    }
	
    printf("Siralanan sayilar\n"); 
    
    bubblesort(arr,size); 
	for(int i=0; i<size; i++)
	{
        printf("%2d\n",arr[i]); 
        
    }
	return 0;
}
