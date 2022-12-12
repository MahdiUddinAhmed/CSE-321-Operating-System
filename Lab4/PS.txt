#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
 
int main()
{
    int BT[20],p[20],wt[20],TO[20],pr[20],i,j,n,total=0,pos,temp;
    printf("Enter Total Number of Process:");
    scanf("%d",&n);
 
    printf("\nEnter Process Details\n");
    for(i=0;i<n;i++)
    {
        printf("\nBurst Time:");
        scanf("%d",&BT[i]);
        
        printf("Priority:");
        scanf("%d",&pr[i]);
        p[i]=i+1;           
    }
 
       for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(pr[j]<pr[pos])
                pos=j;
        }
 
        temp=pr[i];
        pr[i]=pr[pos];
        pr[pos]=temp;

        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
 
        temp=BT[i];
        BT[i]=BT[pos];
        BT[pos]=temp;
    }
 
    wt[0]=0;    
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=BT[j];
 
        total+=wt[i];
    }
  
    printf("\nProcess    Burst Time    Waiting Time     Turnaround Time\n");
    
    
    for(i=0;i<n;i++)
    {
        TO[i]=BT[i]+wt[i];    
        total+=TO[i];
        printf("    P[%d]        %d          %d              %d\n",p[i],BT[i],wt[i],TO[i]);
    }
 

}
