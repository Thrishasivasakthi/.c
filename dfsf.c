#include<stdio.h>
int graph[10][10],total,visited[10],arr[10];
static int k=0,count=0;
void dfs(int);
main()
{
	int i,j;
	printf("\nenter the total vertices of graph:");
	scanf("%d",&total);
	printf("\nenter adjaceny matrics:");
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
	printf("\ndfs traversal is\n");
	dfs(0);
}
void dfs(int vertex)
{
	int j,c=0;
	count++;
	printf("%d\t",vertex);
	visited[vertex]=1;
	for(j=0;j<total;j++)
	{
		if(!visited[j]&&graph[vertex][j]==1)
		{
			arr[++k]=j;
			c=1;
		}
		if(count==total)
		{
			exit(0);
		}
	}
	if(c==1)
	{
		dfs(arr[k]);
	}
	else
	{
		k--;
		dfs(arr[k]);
	}
	
}
