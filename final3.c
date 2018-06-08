#include <stdio.h>

int main(int argc, char* argv[])
{
  if (argc != 4)
  {
    printf("%s : expected 3 args, please enter three integers\n", argv[0]);
    return 1;
  }

  int arg1;
  int found = sscanf(argv[1], "%d", &arg1);
  if (found != 1)
  {
    printf("first arg is not an integer, enter three ints\n");
    return 1;
  }

  int arg2;
  found = sscanf(argv[2], "%d", &arg2);
  if (found != 1)
  {
    printf("second arg is not an integer, enter three ints\n");
    return 1;
  }

  int arg3;
  found = sscanf(argv[3], "%d", &arg3);
  if (found != 1)
  {
    printf("third arg is not an integer, enter three ints\n");
    return 1;
  }

printf("great, you entered three ints: %d and %d and %d\n", arg1, arg2, arg3);

int i, j;
for(i = 0; i < arg1; i++){
  for(j = 0; j < arg2; j++){
    printf("*");
  }
  printf("\n");
  }

int a, k, count = 1;
count = arg3 - 1;
for (k = 1; k <= arg3; k++)
{
  for (a = 1; a <= count; a++)
    printf(" ");
  count--;
  for (a = 1; a <= 2 * k - 1; a++)
    printf("*");
  printf("\n");
}
count = 1;
for (k = 1; k <= arg3 - 1; k++)
{
  for (a = 1; a <= count; a++)
    printf(" ");
  count++;
  for (a = 1; a <= 2 *(arg3 - k)- 1; a++)
    printf("*");
  printf("\n");
  }
  return 0;

}
