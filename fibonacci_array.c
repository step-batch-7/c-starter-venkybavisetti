#include <stdio.h>
int fibonacci(int number, unsigned long int *fib_series);

int fibonacci(int number, unsigned long int *fib_series)
{
  unsigned long int previous_num = 0, present_num = 1;
  fib_series[0] = previous_num;
  fib_series[1] = present_num;
  for (int index = 0; index < (number - 2); index++)
  {
    present_num += previous_num;
    previous_num = present_num - previous_num;
    fib_series[index + 2] = present_num;
  }
  return 0;
}

int main(void)
{
  int fib_series_num;
  printf("Finding Fibonacci Series of an number\n");
  printf("Enter number: ");
  scanf("%d", &fib_series_num);
  unsigned long int fib_series[fib_series_num];
  fibonacci(fib_series_num, fib_series);

  for (int i = 0; i < (sizeof(fib_series) / sizeof(unsigned long int)); i++)
  {
    printf("%lu\n", fib_series[i]);
  }

  return 0;
}