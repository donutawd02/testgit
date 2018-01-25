#include <stdio.h>
void main()
{
	//test
 int amount,b1,b5,b20,b50;
 printf("Enter an amount: ");
 scanf("%d",&amount);
  b50 = amount/50;
  amount = amount % 50; 
  b20 = amount/20;
  amount = amount % 20;
  b5 = amount/5;
  amount = amount % 5;
  b1 = amount/1;
  amount = amount % 1;
 printf("1: %d\n",b1);
 printf("5: %d\n",b5);
 printf("20: %d\n",b20);
 printf("50: %d\n",b50);
}
// test git 