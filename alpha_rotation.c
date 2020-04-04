#include <stdio.h>

void alpha_rotation(int *array, int length, int delta)
{
  int rem;
  for (int index = 0; index < length; index++)
  {
    rem = ((array[index] + delta) % 97) % 26;
    array[index] == 32 ? printf("%c", 32) : printf("%c", rem + 97);
  }
}

int main(void)
{
  //lraxl lbh tbg vg
  int a[16] = {105, 114, 97, 120, 108, 32, 108, 98, 104, 32, 116, 98, 103, 32, 118, 103};
  alpha_rotation(a, 16, 13);
  return 0;
}