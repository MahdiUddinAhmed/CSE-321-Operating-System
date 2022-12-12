#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <string.h>

// create struct with person1 variable
struct Person {
  int QP;
  int UP;
  int QV;
  int UV;
  int MW;
  int UMW;
  int NP;
  float total;
};

int main(void) {
  struct Person person1;
  // assign values to other person1 variables
  printf("Quantity of Paratha: ");
  scanf("%d", &person1.QP);
  
  printf("Unit Price: ");
  scanf("%d", &person1.UP);
  
  printf("Quantity of Vegetables: ");
  scanf("%d", &person1.QV);
  
  printf("Unit Price: ");
  scanf("%d", &person1.UV);
  
  printf("Quantity of Mineral Water: ");
  scanf("%d", &person1.MW);
  
  printf("Unit Price: ");
  scanf("%d", &person1.UMW);

  printf("Number of People: ");
  scanf("%d", &person1.NP);
 
  person1.total = ((person1.QP*person1.UP)+(person1.QV*person1.UV)+(person1.MW*person1.UMW))/6;
  printf("Individual will Pay: %f  tk \n", person1.total);

  return 0;
}
