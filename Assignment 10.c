//Assignment 10 sol 1//
/*
#include <stdio.h>

int main() {
   float radius, area_circle;

   // take radius as input
   printf("Enter the radius of circle : ");
   scanf("%f", &radius);

   area_circle = 3.14 * radius * radius;
   printf("Area of circle : %f", area_circle);

   return 0;
}
*/

//Sol 2//
/*
#include<stdio.h>
float Simple_int(float p, float r, float t) // function for finding simple interest
{
    float si;
    si = (p * r * t)/100; // formula
    return si; // returning yhe value of si
}
 int main()
{
    float a,b,c;
    float intrest;
    printf("\nEnter Prinicpal :\t");
    scanf("%f",&a);
    printf("\nEnter year:\t");
    scanf("%f",&b);
    printf("\nEnter Rate:\t");
    scanf("%f",&c); // taking all 3 values p,r and time
    intrest = Simple_int(a,b,c); // passing value in function
    printf("\nSimple Interest = %.2f\n", intrest); //output
    printf("\n");
    return 0;
}
*/

//Sol 3//
/*
#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // true if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);

    return 0;
}
*/

//Sol 4//
/*
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("First %d natural numbers are:\n",n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",i);
	}
	return 0;
}
*/

//sol 5//
/*
#include <stdio.h>

void main()
{
   int i,n;

   printf("Input number of terms : ");
   scanf("%d",&n);
   printf("\nThe Odd numbers are :");
   for(i=1;i<=n;i++)
   {
     printf("%d ",2*i - 1);
   }
 return 0;
}
*/

//Sol 6//
/*
#include <stdio.h>

int fact(int);

void main()
{
	int no,factorial;

  	printf("Enter a number to calculate it's factorial\n");
  	scanf("%d",&no);
  	factorial=fact(no);
    printf("Factorial of the num(%d) = %d\n",no,factorial);
//printf("Factorial of the num(%d) = %d\n",no,fact(no));//another way of calling a function//comment above two lines if you want to use this
}

int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
*/

//Sol 7//
/*
#include <stdio.h>
#include <conio.h>
main() {
	int n , r, ncr( int , int);
	long npr( int , int);
	long double fact( int);
	printf(" Enter value of n & r \n");
	scanf("%d %d",&n , &r);
	if( n>= r) {
		printf( " %dC%d is %d\n", n,r,ncr( n , r));
		printf(" %dP%d  is %ld", n,r,npr( n, r));
	} else {
		printf("WRONG INPUT?? enter the correct input");
	}
}
long double fact( int p) {
	long double facts = 1;
	int i;
	for ( i = 1; i<= p; i++)
	  facts = facts * i;
	return( facts);
}
int ncr ( int n, int r) {
	return( fact( n) / (fact( r) * fact(n- r) ) ) ;
}
long npr( int n , int r) {
	return( fact( n) / fact( n- r));
}
*/

//Sol 8//
/*
#include <stdio.h>
#include <conio.h>
main() {
	int n , r, ncr( int , int);
	long npr( int , int);
	long double fact( int);
	printf(" Enter value of n & r \n");
	scanf("%d %d",&n , &r);
	if( n>= r) {
		printf( " %dC%d is %d\n", n,r,ncr( n , r));
		printf(" %dP%d  is %ld", n,r,npr( n, r));
	} else {
		printf("WRONG INPUT?? enter the correct input");
	}
}
long double fact( int p) {
	long double facts = 1;
	int i;
	for ( i = 1; i<= p; i++)
	  facts = facts * i;
	return( facts);
}
int ncr ( int n, int r) {
	return( fact( n) / (fact( r) * fact(n- r) ) ) ;
}
long npr( int n , int r) {
	return( fact( n) / fact( n- r));
}
*/

//Sol 9//
/*
#include<stdio.h>
int main()
{
	int n,num,digit,rem;
	scanf("%d %d",&num,&digit);
	n=num;
	while(num!=0)
	{
		rem=num%10;
		if(rem==digit)
		{
			printf("%d is occured in %d",digit,n);
			return 0;
		}
		num/=10;
	}
	printf("%d is not occured in %d",digit,n);
	return 0;
}
*/

//Sol 10//
// C Program to print all prime factors
#include <math.h>
#include <stdio.h>

// A function to print all prime factors of a given number n
void primeFactors(int n)
{
	// Print the number of 2s that divide n
	while (n % 2 == 0) {
		printf("%d ", 2);
		n = n / 2;
	}

	// n must be odd at this point. So we can skip
	// one element (Note i = i +2)
	for (int i = 3; i <= sqrt(n); i = i + 2) {
		// While i divides n, print i and divide n
		while (n % i == 0) {
			printf("%d ", i);
			n = n / i;
		}
	}

	// This condition is to handle the case when n
	// is a prime number greater than 2
	if (n > 2)
		printf("%d ", n);
}

/* Driver program to test above function */
int main()
{
	int n = 315;
	primeFactors(n);
	return 0;
}
