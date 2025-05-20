#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Node and Graph Structures
typedef struct Node {
    int vertex;
    struct Node* next;
} Node;

typedef struct Graph {
    int numVertices;
    Node** adjLists;
    bool* visited;
} Graph;

// Queue Structure for BFS
typedef struct Queue {
    int* items;
    int front;
    int rear;
    int capacity;
}Queue;

// Graph-related functions
Graph* createGraph(int vertices);
Node* createNode(int vertex);
void addEdge(Graph* graph, int src, int dest);
void printGraph(Graph* graph);

// Queue operations
Queue* createQueue(int capacity);
void enqueue(Queue* q, int value);
int dequeue(Queue* q);
bool isQueueEmpty(Queue* q);

// BFS traversal
void BFS(Graph* graph, int startVertex){
//complete the function
}


int main() {
    int vertices = 6;
    Graph* graph = createGraph(vertices);
    
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 4);
    addEdge(graph, 3, 5);
    
    printf("Breadth-First Search starting from vertex 0:\n");
    BFS(graph, 0);
    
    return 0;
}
