#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<math.h>

void main(){

	char sub_seq[]={'A','n','u','p'};
	char str[]={'A','n','o','o','p'};
	int i=0,j=0;
	int n=strlen(str);

	int a[n][n];

	memset(a,0,sizeof(int)*n*n);

	
	for(i=1;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(sub_seq[i-1]==str[j-1])
			{
				a[i][j]=a[i-1][j-1]+1;
			}
			else
				a[i][j]=(a[i][j-1]>a[j][i-1]?a[i][j-1]:a[j][i-1]);
		}
	}

	for(i=0;i<n;i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

}
