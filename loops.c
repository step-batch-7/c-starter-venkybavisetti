#include <stdio.h>
#include <math.h>

unsigned long int factorial(int number);
int fibonacci(int number);
int odd_number_series(int number);
int even_number_series(int number);
int multiplication_table(int multiplier, unsigned int range);
long int sum_of_any_n_numbers(int num1, int num2);
long int product_of_any_n_numbers(int num1, int num2);
int odd_number_series_bw_ranges(int num1, int num2);
int every_nth_number_bw_numbers(unsigned int nth_num, int num1, int num2);
long int sum_of_even_numbers(int num1, int num2);
int odd_number_series_backwards(int number);

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
  printf("%d\n%d\n", previous_num, present_num);
  for (int index = number - 2; index > 0; index--)
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

int odd_number_series_bw_ranges(int num1, int num2)
{
  int starting_range = fmin(num1, num2);
  int ending_range = fmax(num1, num2);
  for (int index = starting_range; index <= ending_range; index++)
  {
    if (index % 2 == 1)
    {
      printf("%d\n", index);
    }
  }
  return 0;
}

int every_nth_number_bw_numbers(unsigned int nth_num, int num1, int num2)
{
  int starting_range = fmin(num1, num2);
  int ending_range = fmax(num1, num2);
  for (int index = starting_range; index <= ending_range; index += nth_num)
  {
    printf("%d", index);
    ((index + nth_num) > ending_range) ? printf(".") : printf(",");
  }
  return 0;
}

long int sum_of_even_numbers(int num1, int num2)
{
  int starting_range = fmin(num1, num2);
  int ending_range = fmax(num1, num2);
  long int sum = 0;
  for (int index = starting_range; index <= ending_range; index++)
  {
    if (index % 2 == 0)
    {
      sum += index;
    }
  }
  return sum;
}

int odd_number_series_backwards(int number)
{
  for (int index = number; index >= 1; index--)
  {
    if (index % 2 == 1)
    {
      printf("%d\n", index);
    }
  }
  return 0;
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
  printf("Enter the starting and ending range(separating by space): ");
  scanf("%d%d", &num1, &num2);
  printf("The Sum of numbers between %d and %d is: %ld\n\n", num1, num2, sum_of_any_n_numbers(num1, num2));

  printf("Finding Product of any N numbers\n");
  printf("Enter the starting and ending range(separating by space): ");
  scanf("%d%d", &num1, &num2);
  printf("The Product of numbers between %d and %d is: %ld\n\n", num1, num2, product_of_any_n_numbers(num1, num2));

  printf("Printing all odd numbers between any two numbers\n");
  printf("Enter the starting and ending range(separating by space): ");
  scanf("%d%d", &num1, &num2);
  printf("The odd numbers between %d and %d is: \n", num1, num2);
  odd_number_series_bw_ranges(num1, num2);
  printf("\n");

  printf("Printing every nth number between any two number \n");
  printf("Enter the increment number, starting and ending range(separating by space): ");
  scanf("%u%d%d", &range, &num1, &num2);
  printf("The every %uth number between %d and %d is: \n", range, num1, num2);
  every_nth_number_bw_numbers(range, num1, num2);
  printf("\n");

  printf("Sum of all even numbers between any two numbers\n");
  printf("Enter the starting and ending range(separating by space): ");
  scanf("%d%d", &num1, &num2);
  printf("The sum of even numbers between %d and %d is: %ld\n\n", num1, num2, sum_of_even_numbers(num1, num2));

  printf("Print all odd numbers between N and 1 backwards\n");
  printf("Enter number: ");
  scanf("%d", &num1);
  printf("The odd numbers between %d and %d is: \n", num1, num2);
  odd_number_series_backwards(num1);
  printf("\n");

  return 0;
}