#include<stdio.h>
#include<stdlib.h>


int main() {
  int c, n,i,lim;
 	FILE *fp=NULL;
 	fp=fopen("testcases.txt","w");
 	time_t t;
	 srand((unsigned) time(&t));
  for(i=0;i<12;i++)	//12 is number of testcases
  {
  	  
		lim=rand()%10000+1;
		fprintf(fp,"%d\n",lim);
		for (c = 1; c <= lim; c++) {
    	 n = rand()%1000000;
    	 fprintf(fp,"%d ",n);
   		 
 	 }
 	 fprintf(fp,"\n\n");
  }
  
 fclose(fp);

 
  return 0;
}
