#include <stdio.h>
#define MAXLIM 1000000

int main(void) {
	// your code goes here
	int n,k,A[MAXLIM],flag=-1;
	scanf("%d",&n);
	scanf("%d",&k);
	
	for (int i = 0; i < n; i++) {
	    /* code */
	    scanf("%d",&A[i]);
	}
	
	 for (int j = 0; j < n; j++) {
	     /* code */
	     if(A[j]==k){
             flag=1;	     
	         break;
	     }
	     
	 }
	 printf("%d",flag);
	return 0;
}

