#include <stdio.h>
#include<conio.h>
void main()
{
int k;
clrscr();
printf("Enter an integer\n");
scanf("%d", &k);
if (k%2==0)
printf("Even\n",k);
else
printf("Odd\n",k);
getch();
}
