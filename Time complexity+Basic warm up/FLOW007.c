#include <stdio.h>


int main(void) {
	// your code goes here
  int n,i,a,ans=0,r;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        while(a>0)
    {
        r=a%10;
        ans=ans*10+r;
        a=a/10;
    }
    printf("%d\n",ans);
    ans=0;
    }
	
	    /* code */
   //k =m%10;
	//     m = m/10;
	    /* code */
	 
	          

		        
	         
	       
	    
	
	
	
	
	return 0;
}

