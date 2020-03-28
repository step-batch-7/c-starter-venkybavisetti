#include <stdio.h>
#include <math.h>

unsigned char is_even(int);
unsigned char is_odd(int);
long square(int);
long cube(int);
int gcd(int, int);

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

long cube(int num)
{
  return num * square(num);
}

int gcd(int num1, int num2)
{
  int divident = fmax(num1, num2);
  int divisor = fmin(num1, num2);
  int remainder = divident % divisor;
  if (!remainder)
  {
    return divisor;
  }
  return gcd(divisor, remainder);
}

long int lcm(int num1, int num2)
{
  return (num1 * num2) / gcd(num1, num2);
}

int main(void)
{
  int even, odd, sqr, cub, gcd1, gcd2, lcm1, lcm2;

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

  printf("Finding Cube of a number\n");
  printf("Enter number: ");
  scanf("%d", &cub);
  printf("Cube of %d is %ld\n\n", cub, cube(cub));

  printf("Finding GCD of Two numbers\n");
  printf("Enter Two numbers(separating by space): ");
  scanf("%d%d", &gcd1, &gcd2);
  printf("GCD of %d and %d is %d\n\n", gcd1, gcd2, gcd(gcd1, gcd2));

  printf("Finding LCM of Two numbers\n");
  printf("Enter Two numbers(separating by space): ");
  scanf("%d%d", &lcm1, &lcm2);
  printf("LCM of %d and %d is %ld\n\n", lcm1, lcm2, lcm(lcm1, lcm2));

  return 0;
}