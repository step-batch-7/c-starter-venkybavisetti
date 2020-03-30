#include <stdio.h>
#include <math.h>

int currency_breakdown(unsigned int amount);
unsigned int give_particular_note(unsigned int balance, int note_value);

unsigned int give_particular_note(unsigned int balance, int note_value)
{
  int no_of_notes = floor(balance / note_value);
  unsigned int remaining_balance = balance - (no_of_notes * note_value);
  printf("%d x RS %d\n", no_of_notes, note_value);
  return remaining_balance;
}

int currency_breakdown(unsigned int amount)
{
  unsigned int balance = amount;
  balance = give_particular_note(balance, 2000.00);
  balance = give_particular_note(balance, 500);
  balance = give_particular_note(balance, 200);
  balance = give_particular_note(balance, 100);
  balance = give_particular_note(balance, 50);
  balance = give_particular_note(balance, 10);
  balance = give_particular_note(balance, 5);
  balance = give_particular_note(balance, 1);
  return 0;
}

int main(void)
{
  unsigned int amount;
  printf("calculating currency breakdown\n");
  printf("Enter Amount: ");
  scanf("%u", &amount);
  currency_breakdown(amount);
}