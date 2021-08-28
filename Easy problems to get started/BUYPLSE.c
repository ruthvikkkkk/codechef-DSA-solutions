#include <stdio.h>
#include <time.h>

int main(void) {
    int A[4],n=sizeof(A)/sizeof(int),total=1,secondtotal=1;
	// your code goes here
	for (int i = 0; i < n; i++) {
	    /* code */
	    scanf("%d",&A[i]);
	    if(i%2==0){
	        total = total*A[i];
	    }
	    else{
	        secondtotal *= A[i];
	    }
	    
	}
		printf("%d\n",total+secondtotal);

	return 0;
}



/* here, do your time-consuming job */

