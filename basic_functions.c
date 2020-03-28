#include <stdio.h>

unsigned char is_even(int);
unsigned char is_odd(int);
long square(int);

unsigned char is_even(int num)
{
  return num % 2 == 0;
}

unsigned char is_odd(int num)
{
  return !is_even(num);
}

long square(int num)
{
  return num * num;
}

int main(void)
{
  int even, odd, sqr;

  printf("Finding Even number\n");
  printf("Enter number: ");
  scanf("%d", &even);
  printf("%d is an %s number\n\n", even, is_even(even) ? "Even" : "Not Even");

  printf("Finding Odd number\n");
  printf("Enter number: ");
  scanf("%d", &odd);
  printf("%d is an %s number\n\n", odd, is_odd(odd) ? "Odd" : "Not Odd");

  printf("Finding Square of a number\n");
  printf("Enter number: ");
  scanf("%d", &sqr);
  printf("Square of %d is %ld\n\n", sqr, square(sqr));

  return 0;
}