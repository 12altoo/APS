#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	int a[]={3,5,10};
	int b[16];
	int n=16;
	int i,j;

	memset(b,0,16*sizeof(int));
	j=a[0];
	b[0]=1;



	for(i=0;i<n-a[0];i+=3)
	{
		if(b[i]>0)
		{
			b[j]++;
		}
		j+=3;
	}

	j=a[1];

	for(i=0;i<n-a[1];i++)
	{
		if(b[i]>0)
		{
			b[j]++;
		}
		j++;
	}

	j=a[2];

	for(i=0;i<n-a[2];i++)
	{
		if(b[i]>0)
		{
			b[j]++;
		}
		j++;
	}

	for(i=0;i<n;i++)
		printf("%d ",b[i]);

	printf("\n");
	printf("%d\n",b[15]);
}
