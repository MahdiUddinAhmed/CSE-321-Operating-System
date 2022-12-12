#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
      int AT[10], BT[10], remain[10], i, current, count = 0, time, limit, WT[10], TO[10], end[10];
      printf("\nEnter the Total Number of Processes:");
      scanf("%d", &limit); 
      printf("\nEnter Process Details \n");
      for(i = 0; i < limit; i++)
      {
            printf("\nEnter Arrival Time:");
            scanf("%d", &AT[i]);
            printf("Enter Burst Time:");
            scanf("%d", &BT[i]); 
            remain[i] = BT[i];
      }
      remain[10] = 99999999;  
      for(time = 0; count != limit; time++)
      {
             current = 10;
            for(i = 0; i < limit; i++)
            {
                  if(AT[i] <= time && remain[i] < remain[current] && remain[i] > 0)
                  {
                        current = i;
                  }
            }
            remain[current]--;
            if(remain[current] == 0)
            {   
                  count++;
                  end[current] = time + 1;
                  WT[current] = 0;                 
                  WT[current] = WT[current] + end[current] - AT[current] - BT[current];
                  TO[current]  = 0;
                  TO[current] = TO[current] + (end[current] - AT[current]);                
            }
      }
       printf("\nProcess   AT   BT   WT  TO  CMP\n");
       for (int j = 0; j<limit; j++)
       {
	       printf("     P%d    %d   %d    %d   %d   %d \n", j,AT[j], BT[j], WT[j], TO[j], end[j] );
       
       }
}
