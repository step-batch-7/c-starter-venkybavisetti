#include <stdio.h>
#include <math.h>

unsigned long int factorial(int number);
int fibonacci(int number);
int odd_number_series(int number);
int even_number_series(int number);
int multiplication_table(int multiplier, unsigned int range);

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

int odd_number_series(int number)
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

int even_number_series(int number)
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

int multiplication_table(int multiplier, unsigned int range)
{
  for (int index = 0; index <= range; index++)
  {
    int result = multiplier * index;
    printf("%d*%d = %d\n", multiplier, index, result);
  }
  return 0;
}

long int sum_of_any_n_numbers(int num1, int num2)
{
  int starting_range = fmin(num1, num2);
  int ending_range = fmax(num1, num2);
  long int sum = 0;
  for (int number = starting_range; number <= ending_range; number++)
  {
    sum += number;
  }
  return sum;
}

long int product_of_any_n_numbers(int num1, int num2)
{
  int starting_range = fmin(num1, num2);
  int ending_range = fmax(num1, num2);
  long int product = 1;
  for (int number = starting_range; number <= ending_range; number++)
  {
    product = product * number;
  }
  return product;
}

int main(void)
{
  int num1, num2;
  unsigned int range;

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

  printf("Finding Multiplication Table\n");
  printf("Enter Multiplier number and range(separating by space): ");
  scanf("%d%u", &num1, &range);
  multiplication_table(num1, range);
  printf("\n");

  printf("Finding Sum of any N numbers\n");
  printf("Enter the starting and ending range for sum of numbers(separating by space): ");
  scanf("%d%d", &num1, &num2);
  printf("The Sum of numbers between %d and %d is: %ld\n\n", num1, num2, sum_of_any_n_numbers(num1, num2));

  printf("Finding Product of any N numbers\n");
  printf("Enter the starting and ending range for Product of numbers(separating by space): ");
  scanf("%d%d", &num1, &num2);
  printf("The Product of numbers between %d and %d is: %ld\n\n", num1, num2, product_of_any_n_numbers(num1, num2));

  return 0;
}