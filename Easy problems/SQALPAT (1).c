#include <stdio.h>

int main(void) {
	// your code goes here
	int arr;
	int m,p=1,k;
	     scanf("%d",&arr);
	
	
	     for (int i = 1; i <= arr; i++) {
	         /* code */
                   
	             /* code */
	             if(i%2!=0){
	                 for (int i = 1; i < 6; i++) {

	                      printf("%d ",p);
	                        p++;
	                      
	                 }
	                 printf("\n");
	                 k = p;
	             }
	             else{
	                   m = k;
	                 m=m+4;
	                  p = m+1;
	                 for (int i = 1; i < 6; i++) {
	                     
	                     printf("%d ",m);
	                     m--;
	                      
	                     
	                 }
	                 printf("\n");
	             }
	         }
   
	     
 
	          
	        
	        
	        
	         
	       
	    
	
	
	
	
	return 0;
}

