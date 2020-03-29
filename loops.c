#include <stdio.h>

unsigned long int factorial(int number);
int fibonacci(int number);

unsigned long int factorial(int number)
{
  unsigned long int result = 1;
  for (int index = number; index > 1; index--)
  {
    result = result * index;
  }
  return result;
}

int fibonacci(int number)
{
  unsigned long int previous_num = 0, present_num = 1;
  printf("%d\n", 0);
  printf("%d\n", 0);
  for (int index = number; index > 0; index--)
  {
    present_num += previous_num;
    previous_num = present_num - previous_num;
    printf("%lu\n", present_num);
  }
  return 0;
}

int main(void)
{
  int num1;

  printf("Finding Factorial of an number\n");
  printf("Enter number: ");
  scanf("%d", &num1);
  printf("Factorial of %d is %lu\n\n", num1, factorial(num1));

  printf("Finding Fibonacci Series of an number\n");
  printf("Enter number: ");
  scanf("%d", &num1);
  fibonacci(num1);
  printf("\n");

  return 0;
}