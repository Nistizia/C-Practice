#include <stdio.h>
int main(void) 
{
  int choice;
  float radius ,height ,base ,width;
  float area = 0;
  printf("Area Calculation Menu\n");
  printf("1. Area of Circle\n");
  printf("2. Area of Triangle\n");
  printf("3. Area of Rectangle\n");
  printf("4. Exit the Program\n");
  printf("Enter Your Choice -> ");
  scanf("%d",&choice);
  if(choice == 1)
  {
    printf("Enter Circle Radius-> ");
    scanf("%f",&radius);
    area = 3.14 * radius * radius;
    printf("Circle Area = %.2f",area);
    return 0;
  }
  if(choice == 2)
  {
    printf("Enter Triangle Base -> ");
    scanf("%f",&base);
    printf("Enter Triangle Height-> ");
    scanf("%f",&height);
    area = 0.5 * base * height;
    printf("Triangle Area = %.2f",area);
    return 0;
  }
  if(choice == 3)
  {
    printf("Enter Rectangle Width -> ");
    scanf("%f",&width);
    printf("Enter Rectangle Height-> ");
    scanf("%f",&height);
    area = width * height;
    printf("Rectangle Area = %.2f",area);
    return 0;
  }
   if(choice == 4)
  {
    printf("Thank you");
  }
  if("choice<1 || choice>4")
  {
    printf("Error choice!!");
  }  
  return 0;
}
