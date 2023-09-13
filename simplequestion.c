#include<stdio.h>
/*Ramesh's basic salary is input through the keyboard.His dearness allowance is 40%
of basic salary,and rent allowance is 20% of basic salary.Write a program to calculate
his gross salary */
int main()
{

	int bs,gs;
	printf("enter the basic salary:");
	scanf("%d",&bs);
	float da,hra;
	da=bs*0.4;
	printf("\n the DA %0.2f",da);
	hra=bs*0.2;
	printf("\n the HRA %0.2f",hra);
	gs=bs+da+hra;
	printf("\n the gross salary %d",gs);
	return 0;
}
