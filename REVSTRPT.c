#include <stdio.h>


int main(void) {
	// your code goes here
	int N;
	int m =1;
	 
	scanf("%d",&N);
	
	for (int i = N; i >= 1; i--) {
	    /* code */
	    for (int j = 1; j <= i-1 ; j++) {
	    /* code */
	    printf(" ");
	    }
	
	for (int k = 1; k <=m; k++) {
	    /* code */
	    printf("*");
	    
	     
	    }
	 
	   printf("\n");
	    m++;
	    
	}
	
	  
	
	return 0;
}

