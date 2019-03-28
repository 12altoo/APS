#include <stdio.h>

void bottom_up_heap(int h[],int n);

int main()
{
	int h[]={0,2,9,7,6,5,8,11};
	int n=7;

	bottom_up_heap(h,n);
	for (int i = 0; i <=n; ++i)
	{
		/* code */
		printf("%d\n",h[i]);
	}
}

void bottom_up_heap(int h[],int n)
{
	int i,k;
	int b;
	int temp;
	int heap=0;
	int j;
	for (i = n/2; i >= 1; i--)
	{
		k=i;
		b=h[k];
		//heap=0;

		while(!heap && 2*k<=n)
		{
			//check if it has two children
			j=2*k;
			if(j<n)
			{
				if(h[j+1]>h[j])
					j=j+1;
			}
			//check if it's already heap(parental dominance) if not swap the appropriate parent and child 
			if(b>=h[j])
				heap=1;
			else
			{
				h[k]=h[j];

				k=j;
			}	

		}

		h[k]=b;

	}
}