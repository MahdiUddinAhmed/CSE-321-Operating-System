#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include<sys/wait.h>  

int main(){ 
    int arr1[100];
    int n, i, j, tmp;
    printf("size of array : ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }    
    if (fork() == 0) { 
    	for(i=0; i<n; i++)
    	{
        	for(j=i+1; j<n; j++)
        	{
            	if(arr1[i] < arr1[j])
            	{
                	tmp = arr1[i];
                	arr1[i] = arr1[j];
                	arr1[j] = tmp;
            	}
        	}
    	}	
     	for(i=0; i<n; i++)
    	{
       	 printf("%d  ", arr1[i]);
    	}
	        printf("\n\n");
  
   
    }else{
    	wait(0);
    	 for(i=n-1;i>=0;i--){
    	 if (arr1[i]%2 == 0){
    	 	printf("  %d is Even \n", arr1[i]);
    	 }else{
    	 	printf("  %d is Odd \n", arr1[i]);
    	 }
    	 }
       }

    return 0;
}
