#include <stdio.h>
#include <stdlib.h>

int a[100];

int main(){
	
	int n;
	int i=0,j=0;
	int max,min;
	FILE *fp1=NULL,*fp2=NULL;
	fp1=fopen("testcases.txt","r");
	if(fp1==NULL)
		printf("error");
	fp2=fopen("output.txt","w");
	
	for(j=0;j<9;j++) //8 no.of of test cases
	{
		fscanf(fp1,"%d",&n);
	///	printf("%d\n",n);
		for(i=0;i<n;i++)
		{
			fscanf(fp1,"%d",&a[i]);
			
		}
		
		max=min=a[0];
		//printf("%d\n\n",a[0]);
		for(i=1;i<n;i++)
		{
			if(a[i]>max)
				max=a[i];

			if(a[i]<min)
				min=a[i];
		}

		if(min==max)
			fprintf(fp2,"NULL NULL\n");
		else
			fprintf(fp2,"%d %d\n",max+min,max-min);
		
		
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}
