#include <stdio.h>

unsigned long int factorial(int number);
int fibonacci(int number);
unsigned int odd_number_series(int number);

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
  printf("%d\n%d\n", 0, 0);
  for (int index = number; index > 0; index--)
  {
    present_num += previous_num;
    previous_num = present_num - previous_num;
    printf("%lu\n", present_num);
  }
  return 0;
}

unsigned int odd_number_series(int number)
{
  for (int index = 0; index <= number; index++)
  {
    if (index % 2 == 1)
    {
      printf("%d\n", index);
    }
  }
  return 0;
}

unsigned int even_number_series(int number)
{
  for (int index = 0; index <= number; index++)
  {
    if (index % 2 == 0)
    {
      printf("%d\n", index);
    }
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

  printf("Finding Odd Number Series of an number\n");
  printf("Enter number: ");
  scanf("%d", &num1);
  odd_number_series(num1);
  printf("\n");

  printf("Finding Even Number Series of an number\n");
  printf("Enter number: ");
  scanf("%d", &num1);
  even_number_series(num1);
  printf("\n");

  return 0;
}