#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main()
{

	char data[]={'a','b','c'};
	int set_size=3;
	int i,j;
	unsigned int size =2;
	for(i=1;i<set_size;i++)
		size*=2;
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<set_size;j++)
		{
			if(i&(1<<j))
				printf("%c ",data[j]);
		}
		printf("\n");
	}

}
