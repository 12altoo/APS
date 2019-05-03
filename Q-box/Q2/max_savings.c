#include <stdio.h>
#include<stdlib.h>

long long int a[10000];
long long int val[10000];

int main()
{
	long long int n;
	long long int i,j;
	FILE *fp1,*fp2;
	fp1=fopen("testcases.txt","r");
	fp2=fopen("output.txt","w");
	
	for(i=0;i<12;i++)
	{
		fscanf(fp1,"%lld",&n);
		
		for(j=1;j<=n;j++)
		{
			fscanf(fp1,"%lld",&a[j]);
		}
		val[1]=a[1];
		
		for(j=1;j<=n;j++)
		{
			if(val[j-1] > (val[j-2]+a[j]))
				val[j]=val[j-1];
			else
				val[j]=val[j-2]+a[j];

		}

		fprintf(fp2,"%lld \n",val[n]);
		
	}
	fclose(fp1);
	fclose(fp2);
	
}
