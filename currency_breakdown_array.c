#include <stdio.h>
#include <math.h>

void currency_breakdown(unsigned int amount, int *currency_notes, int *currency_notes_count)
{
  unsigned int balance = amount;
  for (int index = 0; index < 8; index++)
  {
    currency_notes_count[index] = floor(balance / currency_notes[index]);
    balance = balance - (currency_notes_count[index] * currency_notes[index]);
  }
}

int main(void)
{
  int currency_notes[8] = {2000, 500, 200, 100, 50, 10, 5, 1};
  int currency_notes_count[8];
  unsigned int amount;
  printf("calculating currency breakdown\n");
  printf("Enter Amount: ");
  scanf("%u", &amount);
  currency_breakdown(amount, currency_notes, currency_notes_count);

  for (int i = 0; i < (sizeof(currency_notes) / sizeof(int)); i++)
  {
    printf("%d x RS %d\n", currency_notes[i], currency_notes_count[i]);
  }
  return 0;
}