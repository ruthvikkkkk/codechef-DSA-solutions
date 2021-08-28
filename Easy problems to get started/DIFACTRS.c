#include <stdio.h>
#define MAXLIM 1000000
int main(void) {
    
	// your code goes here
	
	int n,total=0;
	int A[MAXLIM];
	scanf("%d",&n);
	
	for (int i = 1; i <= n; i++) {
	    
	    if(n%i == 0){
	        A[i]=i;
	         total += 1;
	    }
	    else{
	        A[i] = 0;
	    }
	   
	}
	 printf("%d",total);
	 printf("\n");
	 for (int i = 1 ; i <= n; i++) {
	     /* code */
	     if(A[i]==0){
	         continue;
	     }
	     else{
	      printf("%d",A[i]);
	      printf("\t");
	     }
	 }
	   
	
	
	return 0;
}

