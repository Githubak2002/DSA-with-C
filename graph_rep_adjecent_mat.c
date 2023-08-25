// graph representation using adjencent matrix

/*  // Adjacency Matrix representation in C [code from PROGRAMIZ]

#include <stdio.h>
#define V 4

// Initialize the matrix to zero
void init(int arr[][V]) {
  int i, j;
  for (i = 0; i < V; i++)
    for (j = 0; j < V; j++)
      arr[i][j] = 0;
}

// Add edges
void addEdge(int arr[][V], int i, int j) {
  arr[i][j] = 1;
  arr[j][i] = 1;
}

// Print the matrix
void printAdjMatrix(int arr[][V]) {
  int i, j;

  for (i = 0; i < V; i++) {
    printf("%d: ", i);
    for (j = 0; j < V; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int adjMatrix[V][V];

  init(adjMatrix);
  addEdge(adjMatrix, 0, 1);
  addEdge(adjMatrix, 0, 2);
  addEdge(adjMatrix, 1, 2);
  addEdge(adjMatrix, 2, 0);
  addEdge(adjMatrix, 2, 3);

  printAdjMatrix(adjMatrix);

  return 0;
}
*/


#include <stdio.h>
int N, M;


void createAdjMatrix(int Adj[][N + 1],int arr[][2])
{

	for (int i = 0; i < N + 1; i++) {

		for (int j = 0; j < N + 1; j++) {
			Adj[i][j] = 0;
		}
	}

	for (int i = 0; i < M; i++) {

		int x = arr[i][0];
		int y = arr[i][1];

		Adj[x][y] = 1;
		Adj[y][x] = 1;
	}
}

void printAdjMatrix(int Adj[][N + 1])
{

	for (int i = 1; i < N + 1; i++) {
		for (int j = 1; j < N + 1; j++) {

			printf("%d ", Adj[i][j]);
		}
		printf("\n");
	}
}

int main()
{

	N = 5;

	int arr[][2]
		= { { 1, 2 }, { 2, 3 },
			{ 4, 5 }, { 1, 5 } };

	M = sizeof(arr) / sizeof(arr[0]);

	int Adj[N + 1][N + 1];

	createAdjMatrix(Adj, arr);
    printAdjMatrix(Adj);

	return 0;
}