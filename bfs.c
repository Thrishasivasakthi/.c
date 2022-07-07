#include<stdio.h>
void bfs(int);
int total,graph[10][10],visited[10],i,j;
main()
{
	printf("enter total no of vertices:");
	scanf("%d",&total);
	printf("\nenter the adjacent matrix\n");
	for(i=0;i<total;i++)
	{
		for(j=0;j<total;j++)
		{
			scanf("%d",&graph[i][j]);
		}
	}
	for(i=0;i<total;i++)
	{
		visited[i]=0;
	}
	printf("\nbfs traversal is \n");
	bfs(0);
}
void bfs(int vertex)
{
	printf("%d\t",vertex);
	visited[vertex]=1;
	for(j=0;j<total;j++)
	{
		if(!visited[j]&&graph[vertex][j]==1)
		{
			bfs(j);
		}
	}
}
