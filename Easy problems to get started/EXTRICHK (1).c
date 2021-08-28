#include <stdio.h>

int main(void) {
	// your code goes here
	int arr[3];
	
	for (int i = 0; i < 3; i++) {
	    /* code */
	     scanf("%d",&arr[i]);
	}
	
	    /* code */
 
	   if(arr[0]+arr[1]>arr[2]&&arr[1]+arr[2]>arr[0]&&arr[0]+arr[2]>arr[1]){
	       if(arr[0]==arr[1]&&arr[1]==arr[2]&&arr[0]==arr[2]){
	           printf("1");
	       }
	       else if(arr[0]==arr[1]||arr[1]==arr[2]||arr[2]==arr[0]){
	           printf("2");
	       }
	       else {
	           printf("3");
	           
	       }
	       
	   } 
	   else{
	       printf("-1");
	   }
	        
	        
	        
	         
	       
	    
	
	
	
	
	return 0;
}

