#include <stdio.h>

unsigned char is_even(int);

unsigned char is_even(int num)
{
  return num % 2 == 0;
}

int main(void)
{
  int even;

  printf("Finding Even Number\n");
  printf("Enter number: ");
  scanf("%d", &even);
  printf("%d is an %s number\n", even, is_even(even) ? "Even" : "Not Even");
  return 0;
}