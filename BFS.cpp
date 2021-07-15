// BFS algorithm in C++

#include <iostream>
#include <list>
//For memset
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#define MAX 50

using namespace std;

class GraphMatrix{
    int numVertices;
    int** adjMatrix;
    int* visited;

public:

    GraphMatrix(int vertices){
        numVertices=vertices;
        memset(visited, 0, sizeof(visited));
        adjMatrix= new int*[numVertices];
        for(int i=0;i<numVertices;i++){
            adjMatrix[i] = new int[numVertices];
            //memset(adjMatrix[i], 0, sizeof(adjMatrix[i]));
            for(int j=0;j<numVertices;j++){
                adjMatrix[i][j]=0;
            }
        }


    }

    void addEdge(int src, int dest){
        adjMatrix[src-1][dest-1]=1;
    }

    void displayGraph(){
        cout<<"\n";
        for(int i=0;i<numVertices;i++){
            for(int j=0;j<numVertices;j++){
                cout<<" "<<adjMatrix[i][j];
            }
            cout<<"\n";
        }
    }

    void BFS(int startVertex){

        int vertex=startVertex, j;
        visited = new int[numVertices];
        list<int> queue; //Maintaining queue

        memset(visited, 0, sizeof(visited));

        cout<<"BFS Traversal:\n";
        cout<<"Visited " << startVertex;
        visited[startVertex]=0;
        queue.push_back(startVertex);

        while(!queue.empty()){
            vertex=queue.front();
            //cout << " Visited " << vertex;
            queue.pop_front();

            for(j=0;j<numVertices;j++){
                if(adjMatrix[vertex][j]==1 && visited[j]==0)
                {

                    cout<<" Visited " << j;
                    visited[j]=1;
                    queue.push_back(j);
                }
            }

        }


    }

};



class Graph {
  int numVertices;
  list<int>* adjLists;
  bool* visited;

public:
  Graph(int vertices);
  void addEdge(int src, int dest);
  void BFS(int startVertex);

};

Graph::Graph(int vertices) {
  numVertices = vertices;
  adjLists = new list<int>[vertices];
}

// Adding edge
void Graph::addEdge(int src, int dest) {
  adjLists[src].push_back(dest);
  adjLists[dest].push_back(src);
}

// BFS algorithm
void Graph::BFS(int startVertex) {
  visited = new bool[numVertices];
  for (int i = 0; i < numVertices; i++)
    visited[i] = false;

  list<int> queue;

  visited[startVertex] = true;
  queue.push_back(startVertex);

  list<int>::iterator i;

  while (!queue.empty()) {
    int currVertex = queue.front();
    cout << "Visited " << currVertex << " ";
    queue.pop_front();

    for (i = adjLists[currVertex].begin(); i != adjLists[currVertex].end(); ++i) {
      int adjVertex = *i;
      if (!visited[adjVertex]) {
        visited[adjVertex] = true;
        queue.push_back(adjVertex);
      }
    }
  }
}

int main() {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    g.BFS(2);



    //Using Adjacency Matrix 2D array

    //int **matrix;

    /*matrix=(int **)malloc(vertices*sizeof(int *));
    for(int i=0;i<vertices;i++){
        matrix[i]=(int *)malloc(4*sizeof(int));
    }*/
    int vertices=4;
    GraphMatrix gm(vertices);
    gm.addEdge(1,3);
    gm.addEdge(1,4);
    gm.addEdge(4,2);
    gm.addEdge(2,1);
    gm.displayGraph();
    gm.BFS(1);





    return 0;


}
