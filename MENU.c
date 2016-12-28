/*
Student Name : Aashish Prajapati
Subject : Programming Fundamentals
Roll No : 02
Program : Write a menu based program as:
			1.To check number is odd or even
			2.To check number prime or not
			3.To check assigned character is vowel or consonant
			4.To check assigned character is alphabet or not
			5.To check if number is divisible by 5&11 or not
			6.Exit
Lab Sheet No : 15
Date : 28 Dec 2016
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x, i;
	char ch;
	printf("\t\tWELCOME TO THE PROGRAM");
	printf("\n\n\nChoose from the menu");
	printf("\n\n1.Check if number is odd or even");
	printf("\n\n2.Check if number is prime or not");
	printf("\n\n3.Check if assigned character is vowel or consonant");
	printf("\n\n4.Check if assigned character is alphabet or not");
	printf("\n\n5.Check if a number is divisible by 5&11 or not");
	printf("\n\n6.Exit");
	printf("\n\nEnter any character or number : ");
	scanf("%c",&ch);
	x = ch;
	printf("\n\nCHOOSE AN OPERATION\n>>>>>");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
        (x%2==0)?printf("\n\nThe number is even"):printf("\n\nThe number is odd");
		break;

		case 2:
        for (i=0;i<x;++i)
		if (x%i==0)
		printf("\n\nThe number is prime");
		else
		printf("\n\nThe number is composite");/*
Student Name : Aashish Prajapati
Subject : Programming Fundamentals
Roll No : 02
Program : Write a menu based program as:
			1.To check number is odd or even
			2.To check number prime or not
			3.To check assigned character is vowel or consonant
			4.To check assigned character is alphabet or not
			5.To check if number is divisible by 5&11 or not
			6.Exit
Lab Sheet No : 15
Date : 28 Dec 2016
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, i, a,x;
	char ch;
	printf("Enter any character : ");
	scanf("%c",&ch);

	printf("\t\tWELCOME TO THE PROGRAM");
	printf("\n\n\nChoose from the menu");
	printf("\n\n1.Check if number is odd or even");
	printf("\n\n2.Check if number is prime or not");
	printf("\n\n3.Check if assigned character is vowel or consonant");
	printf("\n\n4.Check if assigned character is alphabet or not");
	printf("\n\n5.Check if a number is divisible by 5&11 or not");
	printf("\n\n6.Exit");

	printf("\n\nCHOOSE AN OPERATION\n>>>>>");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
		    a = ch;
		    printf("the ascii value is: %d", a);
		(a%2==0)?printf("\n\nThe number is even"):printf("\n\nThe number is odd");
		break;

		case 2:
		for (i=0;i<x;++i)
		if (x%i==0)
		printf("\n\nThe number is prime");
		else
		printf("\n\nThe number is composite");
		break;

		case 3:
		if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		{
			printf("\n\nThe character is a vowel");
		}
		else
		{
			printf("\n\nThe number is consonant");
		}
		break;

		case 4:
		x = ch;
		if ((x>=65&&x<=90)||(x>=97&&x<=122))
		{
			printf("\n\nThe character is an alphabet");
		}
		else
		{
			printf("\n\nThe number is not an alphabet");
		}
		break;

		case 5:
		(x%5==0&&x%11==0)?printf("\n\nThe number is divisible by 5&11"):printf("\n\nThe number is not divisible by 5&11");
		break;

		default:
		printf("\n\n\t\tTHANK YOU FOR VISITING");
	}
	return 0;
}
		break;

		case 3:
		if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		{
			printf("\n\nThe character is a vowel");
		}
		else
		{
			printf("\n\nThe number is consonant");
		}
		break;

		case 4:
		if ((x>=65&&x<=90)||(x>=97&&x<=122))
		{
			printf("\n\nThe character is an alphabet");
		}
		else
		{
			printf("\n\nThe number is not an alphabet");
		}
		break;

		case 5:
		(x%5==0&&x%11==0)?printf("\n\nThe number is divisible by 5&11"):printf("\n\nThe number is not divisible by 5&11");
		break;

		default:
		printf("\n\n\t\tTHANK YOU FOR VISITING");
	}
	return 0;
}
