#include <stdio.h>

unsigned char is_even(int);

unsigned char is_even(int num)
{
  return num % 2 == 0;
}

int main(void)
{
  int even, odd;

  printf("Finding Even Number\n");
  printf("Enter number: ");
  scanf("%d", &even);
  printf("%d is an %s number\n\n", even, is_even(even) ? "Even" : "Not Even");

  printf("Finding Odd Number\n");
  printf("Enter number: ");
  scanf("%d", &odd);
  printf("%d is an %s number\n", odd, is_even(odd) ? "Not Odd" : "Odd");

  return 0;
}