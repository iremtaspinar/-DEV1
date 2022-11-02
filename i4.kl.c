#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100

void quickSort(int arr[],int x,int y)
{
	int i,u,pivot,temp;
	i=x;
	u=y;
	pivot=arr[(i+u)/2];
	
	  do {
			
	while(arr[i]< pivot)
	
	i++;
	
	while(arr[u]>pivot)
	
	u--;
	
	     if(i<=u){
		
	    temp= arr[i];
	    arr[i]=arr[u];
	    arr[u]=temp;
	    i++;
	    u--;
  }
}
   while(i<u);
	     if (i<y)
	     
	quickSort(arr,i,y);
	
	if(x<u)
	
	quickSort(arr,x,u);
}
int main(){

    int u,arr[MAX];
    int size=100,i=0;
    
	srand(time(NULL));
	
	for(i=0;i<100;i++){
		
		arr[i] = rand()%10000+1; 
	}
	
	 printf("Rastgele Sayilar\n");

	 for(int i=0; i<100; i++){
    	
        printf("%d\n",arr[i]); 
    }
    
    printf("\nsiralanan sayilar:\n\n");
    
     quickSort(arr, 0, MAX-1); 
     
	for(i=0;i<size;i++){
		
        printf("%d\n",arr[i]); 
    }
   	return 0;
}