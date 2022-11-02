#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100

void  insertionsort(int arr[], int size)
{
	int i,t;
	int element;
    
	for (i=1;i<size;i++){
		
		 int element=arr[i];
		       t=i-1;
		
	while(t>=0&&arr[t]>element){
		
        arr[t+1]=arr[t];
              t=t-1;
    }
       arr[t+1]=element;
  }

}
int main(){

    int i,t,arr[MAX];
    int size=100;
    
	srand(time(NULL));

      for(i=0;i<100;i++){
    	
        arr[i] = rand()%10000+1; 
  }
  printf("Rastgele Sayilar\n");
	for(int i=0; i<100; i++){
        printf("%d\n",arr[i]); 
  }
	 printf("\t\nSiralanmis sayilar: \n\t");

	  insertionsort(arr,size);
	   
	    for(i=0;i<size;i++){
        printf("%d\n",arr[i]); 
        
  }
	return 0;
}