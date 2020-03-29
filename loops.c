#include <stdio.h>

unsigned long int factorial(int number);

unsigned long int factorial(int number)
{
  unsigned long int result = 1;
  for (int index = number; index > 1; index--)
  {
    result = result * index;
  }
  return result;
}

int main(void)
{
  int num1;

  printf("Finding Factorial of an number\n");
  printf("Enter number: ");
  scanf("%d", &num1);
  printf("Factorial of %d is %lu", num1, factorial(num1));

  return 0;
}