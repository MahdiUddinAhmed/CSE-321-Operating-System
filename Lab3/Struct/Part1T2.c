#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <string.h>





void pPerf(int start, int end){
	int temp;
 	for(temp=start;temp<=end;temp++){ 
 	int i=1; 
 	int sum = 0; 
 	while(i<temp){ 
 		if(temp%i==0) 
 		sum=sum+i; 
 		i++; 
 	} 
 	if(sum==temp) 
 		printf("%d \n",temp); 
 	}
   }
   
   
int main(void)
{
    int start, end;
    printf("Enter Numbers: \n");
    scanf("%d", &start);
    scanf("%d", &end);
    pPerf(start, end);    
return 0;
}
