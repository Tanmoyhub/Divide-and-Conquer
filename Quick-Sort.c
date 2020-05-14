/*Write a C program to implement Merge Sort using Divide and Conquer approoach in C programming language.*/
/*
Tanmoy Ghosh
Computer Science & Engineering Department 
Hooghly Engineering & Technology College.
*/
#include<stdio.h>
int a[100];
int partition(int l,int u)
{
	int i,j,x,t;
	x=a[u];
	i=l-1;
	for(j=l;j<u;j++)
	{
		if(a[j]<=x)
		{
			i++;
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	t=a[i+1];
	a[i+1]=a[u];
	a[u]=t;
	return i+1;
}
void q_s(int l,int u)
{
	int q;
	if(l<u)
	{
		q=partition(l,u);
		q_s(l,q-1);
		q_s(q+1,u);
	}
}
void main()
{
	int n,i;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	q_s(0,n-1);
	printf("Sorted order of array elements: ");
	for(i=0;i<n;i++)
	printf(" %d ",a[i]);
} 
