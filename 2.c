#include <stdio.h>
#include <stdlib.h>


//**ilk yüz doğal sayısının kareleri toplamı ile toplamın karesi arasındaki fark**//


     int a,i,fark,sonuc,toplam;
     int farklar(int a)
    {
    	for(i=1;i<=100;i++)
    	{
           sonuc+=i;
     	}
	     printf("toplamin karesi: %d\n",sonuc*sonuc);
	
    	for(i=1;i<=100;i++) 
		{
	    	toplam=toplam+(i*i);
		}
	     printf("karelerin toplami: %d\n",toplam);
	   
    }	
   int main(){
   	
   	  printf("bir deger giriniz: ");
   	  scanf("%d\n",&a);
   	  
   	  farklar(a);
   	  
   	  fark=sonuc*sonuc-toplam;
   	  
	  printf("fark: %d",fark);
   	
   	return 0;
   }