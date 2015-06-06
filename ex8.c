#include <stdio.h>

int main(int argc, char *argv[])
{
  int areas[] = {10, 12, 13, 14, 20};
  char name[] = "Zed";
  char full_name[] = { 'S', 'P', 'E', 'n', 'c', 'e', 'r'};

  printf("The size of an int %ld\n", sizeof(int));
  printf("The size of areas int([]) %ld\n", sizeof(areas));

  printf("The number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));



  return 0;
}
