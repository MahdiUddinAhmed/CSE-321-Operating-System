#include<stdio.h>
#include<stdlib.h>
#include<unistd.h> 

int main()
{
      int i, limit, total = 0, x, counter = 0, time_quantum, wait_time = 0, TO = 0, AT[10], BT[10], remain[10];
      printf("\nEnter Total Number of Processes: ");
      scanf("%d", &limit);
      x = limit;
      printf("\nEnter  Process Details \n");
      for(i = 0; i < limit; i++)
      {
 
            printf("\nArrival Time:");
            scanf("%d", &AT[i]);
 
            printf("Burst Time:");
            scanf("%d", &BT[i]);
 
            remain[i] = BT[i];
      }
      
 
      printf("\nEnter Time Quantum: ");
      scanf("%d", &time_quantum);
      printf("\nProcessID  BurstTime TurnaroundTime WaitingTime \n");
      
      for(total = 0, i = 0; x != 0;)
      {
            if(remain[i] <= time_quantum && remain[i] > 0)
            {
                  total = total + remain[i];
                  remain[i] = 0;
                  counter = 1;
            }
            else if(remain[i] > 0)
            {
                  remain[i] = remain[i] - time_quantum;
                  total = total + time_quantum;
            }
            if(remain[i] == 0 && counter == 1)
            {
                  x--;
                  printf("P%d            %d         %d              %d \n", i + 1, BT[i], total - AT[i], total - AT[i] - BT[i]);
                  wait_time = wait_time + total - AT[i] - BT[i];
                  TO = TO + total - AT[i];
                  counter = 0;
            }
            if(i == limit - 1)
            {
                  i = 0;
            }
            else if(AT[i + 1] <= total)
            {
                  i++;
            }
            else
            {
                  i = 0;
            }
      }
 ;
      return 0;
}
