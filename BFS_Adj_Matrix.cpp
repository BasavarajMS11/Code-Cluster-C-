// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

class Graph {
	int v;
	int e;

public:
    int** adj;
	Graph(int v, int e);
	void addEdge(int start, int e);
	void BFS(int start);
	void display();
};

Graph::Graph(int v, int e)
{
	this->v = v;
	this->e = e;
	adj = new int*[v];
	for (int row = 0; row < v; row++) {
		adj[row] = new int[v];
		for (int column = 0; column < v; column++) {
			adj[row][column] = 0;
		}
	}
}

void Graph::addEdge(int start, int e)
{

	adj[start][e] = 1;
	adj[e][start] = 1;
}

void Graph::BFS(int start)
{

	vector<int> visited(v, 0);
	vector<int> q;
	q.push_back(start);


	visited[start] = 1;

	int vis;
	while (!q.empty()) {
		vis = q[0];
		cout << vis << " ";
		q.erase(q.begin());

		for (int i = 0; i < v; i++) {
			if (adj[vis][i] == 1 && (!visited[i])) {

				q.push_back(i);
				visited[i] = 1;
			}
		}
	}
}

void Graph::display(){
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
	int v = 4, e = 4;

	// Create the graph
	Graph G(v, e);
	//G.addEdge(0, 1);
	//G.addEdge(0, 2);
	//G.addEdge(1, 3);
	int** matrix;
	matrix=(int **)malloc(v*sizeof(int *));
    for(int i=0;i<v;i++){
        matrix[i]=(int *)malloc(4*sizeof(int));
    }

    int mat[]={0,1,1,0};
    int* ptr;
    ptr=mat;
    matrix[0]=ptr;

    int mat1[]={1,0,0,1};
    int* ptr1;
    ptr1=mat1;
    matrix[1]=ptr1;

    int mat2[]={1,0,0,0};
    int* ptr2;
    ptr2=mat2;
    matrix[2]=ptr2;

    int mat3[]={0,1,0,0};
    int* ptr3;
    ptr3=mat3;
    matrix[3]=ptr3;

    /*int mat4[]={0,0,0,0,0};
    int* ptr4;
    ptr4=mat4;
    matrix[4]=ptr4;*/

    //matrix[i]

	//int mat[v][v]={{0,1,1,0},{1,0,1,0},{1,0,0,0},{0,1,0,0},{0,0,0,0,0};
	//int** ptr;
	G.adj=matrix;
	cout<<"Adjacency Matrix:\n";
	G.display();
	cout<<"BFS Traversal ";
	G.BFS(0);
}
