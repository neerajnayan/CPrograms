#include <stdio.h>
int main() {
   int age = 30;
   int experienceInYears = 7;

   int salary = 0;


   // Arithmetic operator
   // + - / * ++ -- % 
   int p = 10;
   int q = 0;
   printf("P: %d, Q: %d\n", p, q);

   // Post Increment
   // q = p;
   // p = p + 1;
   q = p++;
   printf("P: %d, Q: %d\n", p, q);

   // Pre Increment
   p = 10; q = 0;
   // p = p + 1;
   // q = p;
   q = ++p;
   printf("P: %d, Q: %d\n", p, q);
}
