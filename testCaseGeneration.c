#include<stdio.h>
#include<stdlib.h>


int main() {
  int c, n,i,lim;
 	FILE *fp=NULL;
 	fp=fopen("testcases.txt","w");
 	time_t t;
	 srand((unsigned) time(&t));
  for(i=0;i<8;i++)
  {
  	  
		lim=rand()%100+1;
		fprintf(fp,"%d\n",lim);
		for (c = 1; c <= lim; c++) {
    	 n = rand()%10000-1000;
    	 fprintf(fp,"%d ",n);
   		 
 	 }
 	 fprintf(fp,"\n\n");
  }
  
 fclose(fp);

 
  return 0;
}
