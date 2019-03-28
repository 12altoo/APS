#include <stdio.h>

void bottom_up_heap(int h[],int n)
{
	int i,j,k;
	int v;
	int heap=0;
	int temp;
	for(i=n/2;i>=1;i--)
	{
		k=i;
		heap=0;
		v=h[k];

		while(!heap && 2*k<=n)
		{
			j=2*k;
			if(j<n)
			{
				if(h[j+1]>h[j])
					j++;
			}

			if(v>=h[j])
				heap=1;
			else
			{
				h[k]=h[j];
				k=j;
			}
		}

		h[k]=v;

	}

	temp=h[1];
	h[1]=h[n];
	h[n]=temp;

}

int main()
{
	int h[]={0,3,2,7,9,11,5,6};
	int n=7;

	for(int j=n;j>=1;j--)
		bottom_up_heap(h,j);

	for (int i = 0; i <= n; ++i)
	{
		/* code */
		printf("%d\n",h[i]);
	}
}