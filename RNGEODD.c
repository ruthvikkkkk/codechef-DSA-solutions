#include <stdio.h>

int main(void) {
	// your code goes here
	int L,R;
	scanf("%d",&L);
	scanf("%d",&R);
	for (int i = L; i <= R; i++) {
	    /* code */
	    if(i%2 !=0){
	        printf("%d",i);
	        printf("\t");
	    }
	}
	return 0;
}

