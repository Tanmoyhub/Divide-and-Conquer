/*Write a C program to implement Merge Sort using Divide and Conquer approoach in C programming language.*/
/*
Tanmoy Ghosh
Computer Science & Engineering Department 
Hooghly Engineering & Technology College.
*/
#include<stdio.h>
int a[100],b[100];
void merge(int l,int m,int u)
{
    int i,j,k;
    i=k=l;
    j=m+1;
    while(i<=m && j<=u)
    {
        if(a[i]<a[j])
            b[k++]=a[i++];
        else
            b[k++]=a[j++];
    }
    if(i>m)
    {
        while(j<=u)
            b[k++]=a[j++];
    }
    else
    {
        while(i<=m)
            b[k++]=a[i++];
    }
    for(i=l;i<=u;i++)
        a[i]=b[i];
}
void m_s(int l,int u)
{
	int m;
	if(l<u)
	{
		m=(l+u)/2;
		m_s(l,m);
		m_s(m+1,u);
		merge(l,m,u);
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
	m_s(0,n-1);
	printf("Sorted order of array elements: ");
	for(i=0;i<n;i++)
	printf(" %d ",a[i]);
} 
