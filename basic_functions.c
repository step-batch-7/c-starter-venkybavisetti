#include <stdio.h>
#include <math.h>

unsigned char is_even(int);
unsigned char is_odd(int);
long square(int);
long cube(int);
int gcd(int, int);
long int lcm(int, int);
float calculate_SI(float principle, float interest, float period);
float calculate_CI(float principle, float interest, float period);
float fahrenheit_to_centigrade(float fahrenheit);
float centigrade_to_fahrenheit(float centigrade);
int greatest_of_three(int num1, int num2, int num3);
float average_of_three(int num1, int num2, int num3);

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

float calculate_SI(float principle, float interest, float period)
{
  return (principle * interest * period) / 100;
}

float calculate_CI(float principle, float interest, float period)
{
  return principle * pow((1 + interest / 100), period) - principle;
}

float fahrenheit_to_centigrade(float fahrenheit)
{
  return ((fahrenheit - 32) * 5) / 9;
}

float centigrade_to_fahrenheit(float centigrade)
{
  return ((centigrade * 9) / 5) + 32;
}

int greatest_of_three(int num1, int num2, int num3)
{
  return fmax(fmax(num1, num2), num3);
}

float average_of_three(int num1, int num2, int num3)
{
  return (num1 + num2 + num3) / 3;
}

int main(void)
{
  int num1, num2, num3;
  float principal, interest, period, temperature;

  printf("Finding Even number\n");
  printf("Enter number: ");
  scanf("%d", &num1);
  printf("%d is an %s number\n\n", num1, is_even(num1) ? "Even" : "Not Even");

  printf("Finding Odd number\n");
  printf("Enter number: ");
  scanf("%d", &num1);
  printf("%d is an %s number\n\n", num1, is_odd(num1) ? "Odd" : "Not Odd");

  printf("Finding Square of a number\n");
  printf("Enter number: ");
  scanf("%d", &num1);
  printf("Square of %d is %ld\n\n", num1, square(num1));

  printf("Finding Cube of a number\n");
  printf("Enter number: ");
  scanf("%d", &num1);
  printf("Cube of %d is %ld\n\n", num1, cube(num1));

  printf("Finding GCD of Two numbers\n");
  printf("Enter Two numbers(separating by space): ");
  scanf("%d%d", &num1, &num2);
  printf("GCD of %d and %d is %d\n\n", num1, num2, gcd(num1, num2));

  printf("Finding LCM of Two numbers\n");
  printf("Enter Two numbers(separating by space): ");
  scanf("%d%d", &num1, &num2);
  printf("LCM of %d and %d is %ld\n\n", num1, num2, lcm(num1, num2));

  printf("Finding Simple Interest\n");
  printf("Enter Principal, Interest, Period(separating by space): ");
  scanf("%f%f%f", &principal, &interest, &period);
  printf("Simple Interest of %.2f at %.0f%%/year for %.0f year(s) is: %.2f\n\n", principal, interest, period, calculate_SI(principal, interest, period));

  printf("Finding Compound Interest\n");
  printf("Enter Principal, Interest, Period(separating by space): ");
  scanf("%f%f%f", &principal, &interest, &period);
  printf("Compound Interest of %.2f at %.0f%%/year for %.0f year(s) is: %.2f\n\n", principal, interest, period, calculate_CI(principal, interest, period));

  printf("convert temperature from fahrenheit to celsius\n");
  printf("Enter temperature in Fahrenheit: ");
  scanf("%f", &temperature);
  printf("%.2f Fahrenheit = %.2f Celsius\n\n", temperature, fahrenheit_to_centigrade(temperature));

  printf("convert temperature from celsius to fahrenheit\n");
  printf("Enter temperature in celsius: ");
  scanf("%f", &temperature);
  printf("%.2f Celsius  = %.2f Fahrenheit\n\n", temperature, centigrade_to_fahrenheit(temperature));

  printf("Finding Greatest of three numbers\n");
  printf("Enter First, Second, Third numbers(separating by space): ");
  scanf("%d%d%d", &num1, &num2, &num3);
  printf("The Greatest among the %d, %d and %d is: %d\n\n", num1, num2, num3, greatest_of_three(num1, num2, num3));

  printf("Finding Average of three numbers\n");
  printf("Enter First, Second, Third numbers(separating by space): ");
  scanf("%d%d%d", &num1, &num2, &num3);
  printf("The Average of %d, %d and %d is: %.2f\n\n", num1, num2, num3, average_of_three(num1, num2, num3));

  return 0;
}