#include <stdio.h>

int main(void) {
	
	int i, n, q, t, g;
	scanf("%d", &t);
	
	for (int j = 1; j <= t; j++) {
	    
	    scanf("%d", &g);
	    
	    for (int j = 1; j <= g; j++) {
	        
	        scanf("%d %d %d", &i, &n, &q);
	        
	        if(n%2 == 0){
	            printf("%d\n", n/2);
	        }
	        
	        else if(n%2 != 0 && i == q){
	            printf("%d\n", n/2);
	        }
	        
	        else if(n%2 != 0 && i != q){
	            printf("%d\n", n/2 + 1);
	        }
	    }
	}
	
	return 0;
}