#include<stdio.h>
 
void DFS(int);
int G[10][10],visited[10],n;    //n is no of vertices and graph is sorted in array G[10][10]
int pre[5],post[5];
int clock=1;
 
void main()
{
    int i,j;
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

    for(i=0;i<4;i++)
        printf("%d %d\n",pre[i],post[i]);
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