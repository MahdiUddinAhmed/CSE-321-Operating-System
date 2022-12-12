#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
int main()
{
  int pid,pid2, stat_loc;
  pid = fork();
  if (pid == -1){
    printf("error in fork");
}
  else if (pid ==0 )
    { 
       pid2 = fork();
       
       if (pid2== -1){
          printf("Error");
           }
           
       else if (pid2==0){
       printf("\nI am the grandchild\n");
	}
	
	else {
	wait(0);
	printf("\nI am the child\n");
	} 

    } 
  else  
    {
      wait(0);    
      printf("\nI am the parent \n");       
      sleep(2);
    }  
  
}
