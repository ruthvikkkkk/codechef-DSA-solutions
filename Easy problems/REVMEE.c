#include <stdio.h>

#define MAXLIM 1000000

int main(void) {
	// your code goes here
	int n;
	int a[MAXLIM];
	
	scanf("%d",&n);
	
	for (int i = 0; i < n; i++) {
	    /* code */
	    scanf("%d",&a[i]);
	   
	}
	
	  for (int j = n-1; j >= 0; j--) {
	        /* code */
	        printf("%d ",a[j]);
	    }
	
	
	return 0;
}

