#include <sys/types.h> 
#include <stdio.h> 
#include <unistd.h> 
#include <stdlib.h> 
#include <pthread.h> 

void* thr1(){ 
 printf("Thread 1 running\n"); 
 } 
void* thr2(){ 
 printf("Thread 2 running\n"); 
 } 
void* thr3(){ 
 printf("Thread 3 running\n"); 
 } 
void* thr4(){ 
 printf("Thread 4 running\n"); 
 } 
void* thr5(){ 
 printf("Thread 5 running\n"); 
 } 
 
 
int main(){ 
 pthread_t th1,th2,th3,th4,th5;  
 
 pthread_create(&th1, NULL, &thr1, NULL); 
 pthread_join(th1, NULL); 
 printf("Thread 1 closed\n"); 
  
 pthread_create(&th2, NULL, &thr2, NULL); 
 pthread_join(th2, NULL); 
 printf("Thread 2 closed\n"); 
  
 pthread_create(&th3, NULL, &thr3, NULL);
 pthread_join(th3, NULL); 
 printf("Thread 3 closed\n"); 
  
 pthread_create(&th4, NULL, &thr4, NULL);  
 pthread_join(th4, NULL); 
 printf("Thread 4 closed\n"); 
  
 pthread_create(&th5, NULL, &thr5, NULL);  
 pthread_join(th5, NULL); 
 printf("Thread 5 closed\n"); 
 
}
