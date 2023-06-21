#include "calc.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Usage: ./calc <operand1> <operator> <operand2>\n");
		printf("Example: ./calc 3 + 5\n");
		printf("Please remember to surround * like this '*' or just use x\n");
	}
	else
	{
		int a = build_number(argv[1]);
		char op = *argv[2];
		int b = build_number(argv[3]);

		printf("%d\n", do_calc(op, a, b));
	}

	return (0);
}
