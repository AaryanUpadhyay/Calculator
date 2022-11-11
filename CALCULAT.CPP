#include<iostream.h>
#include<conio.h>

void add(int a, int b)
{
	int c;
	c=a+b;
	cout<<"Add = "<<c;
}

void sub(int a, int b)
{
	int c;
	c=a-b;
	cout<<"Substraction = "<<c;
}

void mult(int a, int b)
{
	int c;
	c=a*b;
	cout<<"Multiply = "<<c;
}

void div(int a, int b)
{
	int c;
	c=a/b;
	cout<<"Division = "<<c;
}

void mod(int a, int b)
{
	int c;
	c=a%b;
	cout<<"Modulus = "<<c;
}

int main()
{
	clrscr();
	int x, y;
	char oper;
	cout<<"Enter two numbers = ";
	cin>>x>>y;
	cout<<"Enter an operator (+,-,*,/,%) ";
	cin>>oper;

	switch(oper)
	{
		case '+':
			add(x,y);
			break;
		case '-':
			sub(x,y);
			break;
		case '*':
			mult(x,y);
			break;
		case '/':
			div(x,y);
			break;
		case '%':
			mod(x,y);
			break;
		default:
			cout<<"Enter a valid operator ";
			break;
	}
	getch();
	return 0;
}