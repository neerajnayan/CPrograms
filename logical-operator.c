#include <stdio.h>
int main() {
   int age = 30;
   int experienceInYears = 7;

   int salary = 0;


   // relational operator < > >= <= == !=
   if (5 < 8) {
     printf("Inside if\n");
   }
   if (8 > 5) {
      printf("8 is greater than 5\n");
   }
   // if ( 5 <= age) 
   if (5 <= age) {
      printf("age is greater than 5\n");
   }
   if (age < 5) {
      printf("age is less then 5\n");
   }
   if (age == 30) {
      printf("age is equal to 30\n");
   }
   if (age != 20) {
      printf("Age is not equal to 20\n");
   }

   printf("Outside if\n");
}
