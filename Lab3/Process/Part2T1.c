#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main ()
{
    
    int F=1;
    char filename[100], st[100];
    printf("Enter the file name: \n"); 
    scanf("%s", filename);
    printf("%s \n",filename);
    FILE *fptr = fopen(filename, "w" );

        if(fptr == NULL)
   	{
      		printf("Error!");   
     		 exit(1);             
   	}
	while (F != 0){
   		printf("Enter String: ");
   		scanf("%s",st);
  		fprintf(fptr,"%s",st);
  		F = strcmp(st, "-1");
   	 	
   	 }fclose(fptr);

   return 0;
}
