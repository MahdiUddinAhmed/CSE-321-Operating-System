#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
int main()
{
  int a,b,c,d,z, stat_loc;
  int count = 1;

  printf("\nmy pid = %d\n", getpid());
  
  a = fork();
  b = fork();
  c = fork();

  if (a == -1 || b == -1 || c ==-1){
    printf("error in fork");
}
  if (a ==0 )
    {  
       count = count + 1;
       z = getpid();
       if (z%2!=0) {
           d= fork();
           count = count + 1; 
       }

      
    } 
  if (b ==0 )
    {  
       count = count + 1;
       z = getpid();
       if (z%2!=0) {
           d= fork();
           count = count + 1; 
       }
  
      
    } 
   if (c ==0 )
    {  
       count = count + 1;
       z = getpid();
       if (z%2!=0) {
           d= fork();
           count = count + 1;


      
    } 
printf("counter %d \n", count);
}
}
