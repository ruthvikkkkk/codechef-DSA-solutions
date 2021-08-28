#include <stdio.h>

int main(void) {
	// your code goes here
	long N,eve,odd;
	
	scanf("%ld",&N);
	
	eve = N*(N+1);
	odd = N*N;
	 
	 printf("%ld\t",odd);
	 printf("%ld",eve);
	return 0;
}

