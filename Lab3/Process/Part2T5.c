#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
  

int main (){
    int pid, pid1, pid2, pid3;
    pid = fork();
    if (pid == 0) {
        printf("Child Process Id = %d \n",
               getpid());
    }
  
    else {
        pid1 = fork();
        if (pid1 == 0) {
            sleep(2);
            printf("Grand child Process ID = %d \n",
                   getpid());
        }
        else {
            pid2 = fork();
            if (pid2 == 0) {
                 sleep(2);
                printf("Grand Child Process Id = %d\n",
                       getpid());
            }
            else {
            pid3 = fork();
            if(pid3 == 0){
                sleep(2);
                printf("Grand Child Process Id = %d\n",
                       getpid()); 
                
            }
                        }
        }
    }
  
    return 0;
}
