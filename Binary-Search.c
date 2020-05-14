/*Write a C program to implement Binary Seach using Divide and Conquer approoach in C programming language.*/
/*
Tanmoy Ghosh
Computer Science & Engineering Department 
Hooghly Engineering & Technology College.
*/
#include<stdio.h>
int s,a[100];
int b_s(int l,int u)
{
	int m;
	if(l<=u)
	{
		m=(l+u)/2;
		if(s==a[m])
		    return m;
		else if(s>a[m])
		    return b_s(m+1,u);
		else
		    return b_s(l,m-1);
	}
}
void main()
{
	int n,i,j;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the element you want to search: ");
	scanf("%d",&s);
	j=b_s(0,n-1);
	if(j!=999)
	printf("Search element found at %d position.",j+1);
	else
	printf("Oops, Search element not found....");
}
