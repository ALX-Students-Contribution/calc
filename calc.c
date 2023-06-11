#include "calc.h"

int main (int count, char **string)
{
	int num1 = atoi(string[1]);
        int num2 = atoi(string[3]);
        char *oper = string[2];

	if (count != 4)
	{
		printf("Usage: ./calc <operand1> <operator> <operand2>\n");
		printf("Example: ./calc 3 + 5\n");
	}
	else
	{
		if (strcmp(oper, "+") == 0)
		{
			sum(num1, num2);
			printf("\n");
		}
		else if (strcmp(oper, "-") == 0)
                {
                 	subtract(num1, num2);
                        printf("\n");
                }
		else if (strcmp(oper, "*") == 0)
                {
                 	multiply(num1, num2);
                        printf("\n");
                }
		else if (strcmp(oper, "/") == 0)
                {
                 	division(num1, num2);
                        printf("\n");
                }
		else if (strcmp(oper, "%") == 0)
		{
			mod(num1, num2);
                        printf("\n");
		}
		else
		{
			printf("Error: invalid operator\n");
		}
	}
	
	return 0;
}
