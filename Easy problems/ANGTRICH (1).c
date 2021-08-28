#include <stdio.h>

int main(void) {
	// your code goes here
	int arr[3];
	
	for (int i = 0; i < 3; i++) {
	    /* code */
	    scanf("%d",&arr[i]);
	}
	
	if(arr[0]+arr[1]+arr[2] == 180 && arr[0]>0&&arr[1]>0&&arr[2]>0){
	    printf("YES");
	}
	else{
	    printf("NO");
	}
	
	return 0;
}

