#include <stdio.h>

int main(int argc, char *argv[])
{
  int distance = 100;
  float power = 2.345f;
  double super_power = 234334.2343;
  char initial = 'C';
  char first_name[] = "Spencer";
  char last_name[] = "Dixon";

  printf("you are %d miles away.\n", distance);
  printf("you have %f levels of power.\n", power);
  printf("you have %f awesome super powers.\n", super_power);
  printf("I have a first name %s.\n", first_name);
  printf("I have a last name %s.\n", last_name);
  printf("My whole name is %s %c. %s.\n", first_name, initial, last_name);

  return 0;
}
