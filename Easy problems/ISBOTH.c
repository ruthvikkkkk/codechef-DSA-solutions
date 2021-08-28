#include <stdio.h>

int main(void) {
	// your code goes here
    int N;
	scanf("%d",&N);
	if(N%5==0 && N%11 == 0){
	    printf("BOTH");
	}
  else if(N%5 == 0 || N%11 == 0){
	    printf("ONE");
	}
	else{
	    printf("NONE");
	}
	return 0;
}

