#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * the following functions should be easy enough to decipher
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}

int sum(int num1, int num2)
{
	return (num1 + num2);
}

int division(int num1, int num2)
{
	return (num1 / num2);
}

int subtract(int num1, int num2)
{
	return (num1 - num2);
}

int mod(int num1, int num2)
{
	return (num1 % num2);
}

/**
 * build_number - this "builds" a number from a string
 * @str: the string containing thhe possible number
 * Return: returns the number or exit(FAILURE) if there's 
 * letter
 */
int build_number(char *str)
{
	int num = 0;
	if (!str)
		return (-1);

	while (*str != '\0')
	{
		/* neat trick
		 * I've linked the source below
		 * https://stackoverflow.com/questions/5029840/convert-char-to-int-in-c-and-c
		 */
		if (is_num(*str) == 1)
		{
			/* works by subtracting the ascii values of the number
			 * from the ascii value of the number 0
			 * the difference should return the number.
			 */
			num = num * 10 + (*str - '0');
			str++; /* advance str pointer forward to the next character in memory */
		}
		else
		{
			printf("Number building failed..,\n");
			printf("Make sure there's no non-numeral character in the string\n");
			exit(EXIT_FAILURE);
		}
	}

	return (num);
}

/**
 * is_num - checks if the input char is a num
 * @ch: the input character
 * Return: returns 1 for numbers (i.e 0 - 9) or 0 for letters
 */
int is_num(char ch)
{
	/* check if the character is between ascii 0 and 9 */
	return ch >= '0' && ch <= '9';
}

/**
 * do_calop- this functiont takes the operator and two values
 * then returns their result
 * @c: the operator in use
 * @a: the first number
 * @b: the second number
 * Return: returns the final result of the operation
 */
int do_calc(char op, int a, int b)
{
	char *allowed_operators = "+-/*x%";
	
	/**
	 * reason the old one couldn't do 5 * 5 is because the
	 * * is reserved as a wildcard on the terminal so it won'the
	 * work unless surrounded by quotes
	 */
	if (op== '*' || op == 'x')
		return multiply(a, b);
	else if (op== '+')
		return sum(a, b);
	else if (op== '-')
		return subtract(a, b);
	else if (op== '/')
		return division(a, b);
	else if (op== '%')
		return mod(a, b);
	else
	{
		printf("The operation %opis not allowed\n", op);
		printf("Please input any of the allowed operators %s\n", allowed_operators);
		exit(EXIT_FAILURE);
	}
}
