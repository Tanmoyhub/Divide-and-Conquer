/*Write a C program to implement Maximum subarray sum problem using Divide and Conquer approach.*/
/*
Tanmoy Ghosh
Computer Science & Engineering Department
Hooghly Engineering & Technology College
*/
#include<stdio.h>
#include<limits.h>
int a[100];
int greatest(int x,int y,int z)
{
	if(x>=y && x>=z)
	    return x;
	else if(y>=x && y>=z)
	    return y;
	else
	    return z;
}
int max_cross(int l,int m,int u)
{
	int ls,rs,i,s=0;
	ls=rs=INT_MIN;
	for(i=m;i>=l;i--)
	{
		s+=a[i];
		if(s>ls)
		    ls=s;
	}
	s=0;
	for(i=m+1;i<=u;i++)
	{
		s+=a[i];
		if(s>rs)
		    rs=s;
	}
	return (ls+rs);
}
int max_sum(int l,int u)
{
	int m;
	if(l==u)
	    return a[u];
	else
	{
		m=(l+u)/2;
	    return(greatest(max_sum(l,m),max_sum(m+1,u),max_cross(l,m,u)));
    }
}
void main()
{
	int n,i,s;
	printf("Enter the number of array elements: ");
	scanf("%d",&n);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	s=max_sum(0,n-1);
	printf("Maximum Subarray sum is: %d",s);
}
