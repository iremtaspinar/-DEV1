#include <stdio.h>
#include <stdlib.h>

//**1000'in altındaki 3 veya 5'in tüm katlarının toplamı**//

int t,i,a;
   int katsayi(int a)
   { t=0;
   	 for(i=0;i<1000;i++)
	{
    	if(i%3==0)	
    	{
    		t=t+i;
		}
	}
   		if(i%5==0)
		   {
   			t=t+i;
		   }
	   
	   return t;
}
    int main(){
    	
     printf("bir deger giriniz: ");
     scanf("%d",&a);
     
     katsayi(a);
     
     printf("sonucunuz: %d",t);
	 	
}


