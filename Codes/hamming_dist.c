#include <stdio.h>

int find_dist(int n1,int n2)
{
	int x=n1^n2;
	int setBits=0;
	while(x>0){
		setBits+=x&1;
		x>>=1;
	}

	return setBits;
}

int main()
{
	int n1=2,n2=13;
	printf("%d\n",find_dist(n1,n2));

	return 0;
}

