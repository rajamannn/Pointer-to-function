//Program to print pointer to a function using string
#include <stdio.h>
int add(int a, int b) { return a + b; }

int main()
{
  int (*add_ptr)(int, int) = &add;

     int result = add_ptr(2, 7);

    printf("Result: %d\n", result);

    return 0;
}
