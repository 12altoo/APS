#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	int i,j,*a,*b;
	int n;

	scanf("%d",&n);
	a=malloc(sizeof(int)*n);
	b=malloc(sizeof(int)*n);

	//memset(a,1,sizeof(int)*n);
	for(i=0;i<n;i++)
		a[i]=1;
	// for(i=0;i<n;i++)
	// 	printf("%d\n",a[i]);


	for(i=0;i<n;i++)
		scanf("%d",&b[i]);

	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(b[i]>b[j] && a[i]<a[j]+1)
				a[i]=a[j]+1; 
		}
	}

	int max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	printf("%d\n",max);
}
