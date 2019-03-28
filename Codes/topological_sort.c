//check sol

#include<stdio.h>
#include<stdlib.h>
 
void DFS(int);
int * topological_sort();
int G[10][10],visited[10],n;    //n is no of vertices and graph is sorted in array G[10][10]
int pre[6],post[6];
int clock=1;
 
void main()
{
    int i,j,*a;
    printf("Enter number of vertices:");
   
  scanf("%d",&n);
 
    //read the adjecency matrix
  printf("\nEnter adjecency matrix of the graph:");
   
  for(i=0;i<n;i++)
       for(j=0;j<n;j++)
      scanf("%d",&G[i][j]);
 
    //visited is initialized to zero
   for(i=0;i<n;i++)
        visited[i]=0;
 
    DFS(0);
    printf("\n\n");

    for(i=0;i<n;i++)
        printf("%d %d\n",pre[i],post[i]);

      printf("s0rted array : \n");
    a=topological_sort();


}
 
void DFS(int  i)
{
  pre[i]=clock;
  clock++;
    int j;
  printf("\n%d",i);
    visited[i]=1;

  
  for(j=0;j<n;j++)
       if(!visited[j]&&G[i][j]==1)
            DFS(j);
  post[i]=clock;
  clock++;
}

int * topological_sort()
{
  int i,j,index=0;
  int *a;
  a=(int *)malloc(sizeof(int)*n);
  int max=0;

  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(post[j]>max)
      {  max=post[j];
        index=j;
      }
      
    }
    a[index]=post[index];
    printf("%d\n",index);
    post[index]=-1;
    max=-1;
  }

  return a;



}