#include<stdio.h>

void main(int argc, char const *argv[])
{
	int A[]={-2,-3,4,-1,-2,1,5,-3};
	int n=8;
	int i,max=0,tmax=0;

	for(i=0;i<n;i++){
		tmax+=A[i];

		if(tmax<0)
			tmax=0;
		if(max<tmax)
			max=tmax;
	}

	printf("Largest Sub Array sum is : %d\n",max);

	//return 0;
}