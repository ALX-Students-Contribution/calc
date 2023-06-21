#include <stdio.h>

int sum (int num1, int num2);
int subtract (int num1, int num2);
int multiply (int num1, int num2);
int division (int num1, int num2);
int mod (int num1, int num2);

/**
 * custom stuff I added in the spirit of building functions from
 * scratch in ALX
 */
int build_number(char *str);
int is_num(char ch);
int do_calc(char op, int a, int b);
