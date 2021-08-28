#include <stdio.h>

int main(void) {
	// your code goes here
	int A[3];
	
	for (int i = 0; i < 3; i++) {
	    /* code */
	    scanf("%d",&A[i]);
	}
	if(A[0]+A[1]>A[2]&&A[1]+A[2]>A[0]&&A[0]+A[2]>A[1]){
	    printf("YES");
	}
	else{
	     printf("NO");
	}
	return 0;
}

