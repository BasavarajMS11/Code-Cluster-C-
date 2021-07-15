#include <limits.h>
#include <stdio.h>
#include <list>
#include <stack>
#include <iostream>
#define MAX 10

using namespace std;

//To find minimum from the dist array
int minDistance(int dist[], int selected[], int V)
{
    int min = INT_MAX; //Initialize value
    int min_index; //Index for minimum

    //To select minimum from the dist array
    for (int v = 0; v < V; v++)
        if (selected[v] == 0 && dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
}


void printSolution(int dist[], int path[], int V)
{
    printf("Vertex \t\t Distance from Source \t\tPath\n");
    for (int i = 0; i < V; i++)
    {
        printf("%d \t\t %d \t\t\t\t %d\n", i, dist[i],path[i]);

    }

}

void printPath(int path[], int src, int V){

    int inter=-1;
    stack<int> pathlist;
    printf("\nPath from source node %d to All other nodes:\n",src);
    for(int i=0;i<V;i++){
        inter=-1;
        int j=i;

        pathlist.push(i);
        while(inter!=src)
        {
            inter=path[j];
            j=path[j];
            pathlist.push(inter);
        }


        while(!pathlist.empty()) {

        cout << pathlist.top()<<"->";
        pathlist.pop();

        }
        cout<<endl;


    }

}

void dijkstra(int graph[MAX][MAX], int src, int V)
{
    int dist[V];
    int selected[V];
    int path[V];
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX, selected[i] = 0,path[i]=src;


    dist[src] = 0;

    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, selected, V);
        selected[u] = 1;


        for (int v = 0; v < V; v++)
            if (!selected[v] && graph[u][v] && dist[u] != INT_MAX
                && dist[u] + graph[u][v] < dist[v])
                {
                    dist[v] = dist[u] + graph[u][v];
                    path[v] = u;
                }

    }

    printSolution(dist, path, V);

    printPath(path,0, V); //prints path
}


int main()
{
    int V=9;
    int graph[MAX][MAX] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };

    dijkstra(graph, 0, V);


    return 0;
}
