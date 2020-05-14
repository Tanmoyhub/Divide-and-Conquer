/*Write a C program to implement Strassen's Matrix Multiplication.*/
/*
Tanmoy Ghosh
Computer Science & Engineering Department
Hooghly Engineering & Technology College
*/
#include<stdio.h>
void strassen(int a[2][2],int b[2][2],int c[2][2])
{
	int p[7];
	p[0]=a[0][0]*(b[0][1]-b[1][1]);
	p[2]=(a[1][0]+a[1][1])*b[0][0];
	p[4]=(a[0][0]+a[1][1])*(b[0][0]+b[1][1]);
	p[6]=(a[0][0]-a[1][0])*(b[0][0]+b[0][1]);
	p[1]=(a[0][0]+a[0][1])*b[1][1];
	p[3]=a[1][1]*(b[1][0]-b[0][0]);
	p[5]=(a[0][1]-a[1][1])*(b[1][0]+b[1][1]);
	c[0][0]=p[4]+p[3]-p[1]+p[5];
	c[0][1]=p[0]+p[1];
	c[1][0]=p[2]+p[3];
	c[1][1]=p[0]+p[4]-p[2]-p[6];
}
void main()
{
	int a[2][2],b[2][2],c[2][2],i,j;
	printf("Enter the array elements of first array: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter the element a[%d][%d]: ",(i+1),(j+1));
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the array elements of second array: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter the element b[%d][%d]: ",(i+1),(j+1));
			scanf("%d",&b[i][j]);
		}
	}
	printf("First Array is: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("    %d    ",a[i][j]);
		}
		printf("\n");
	}
	printf("Second Array is: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("    %d    ",b[i][j]);
		}
		printf("\n");
	}
	strassen(a,b,c);
	printf("Reultant Array is: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("    %d    ",c[i][j]);
		}
		printf("\n");
	}
}
