#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100

void  selectionsort(int arr[], int size)
{	int a,i;
	int mindex;
    
	for (a=0;a<size;a++){
		mindex=a;
        for (i=a;a<size;a++)	{
            if (arr[a]<arr[mindex])	{
               mindex=i;
            }
        }
        int temp = arr[i]; 
        arr[i] = arr[mindex];
        arr[mindex] = temp;
    }
}
int main(){

    int i, a, arr[MAX];
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
    
    selectionsort(arr,size); 
	for(int i=0; i<size; i++){
        printf("%d\n",arr[i]);  
}
	return 0;
}
    