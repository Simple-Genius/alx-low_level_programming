/**
 * op_add - a function that returns the sum of two numbers
 *
 *
 *@a: the first number
 *@b: the second number
 *
 * Return: the sum
 */
int op_add(int a, int b)
{
return a + b;
}

/**
 * op_sub - a function that returns the difference of two numbers
 *
 *
 *@a: the first number
 *@b: the second number
 *
 * Return: the result
 */
int op_sub(int a, int b)
{
if (b > a)
{
return b - a;
}
return a - b;
}

/**
 * op_mul - a function that returns the multiplication of two numbers
 *
 *
 *@a: the first number
 *@b: the second number
 *
 * Return: the result
 */
int op_mul(int a, int b)
{
return a * b;
}

/**
 * op_dic - a function that returns the division of two numbers
 *
 *
 *@a: the first number
 *@b: the second number
 *
 * Return: the result
 */
int op_div(int a, int b)
{
return a/b;
}

/**
 * op_mod - a function that returns the remainder of the
 * integer division of two numbers after
 *
 *
 *@a: the first number
 *@b: the second number
 *
 * Return: the result
 */
int op_mod(int a, int b)
{
return a % b;
}

