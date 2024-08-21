#include <bits/stdc++.h>
using namespace std;
int vertArr[20][20]; //the adjacency matrix initially 0
int count = 0;
void displayMatrix(int v) {
   int i, j;
   for(i = 1; i <= v; i++) {
      for(j = 1; j <= v; j++) {
         cout << vertArr[i][j] << " ";
      }
      cout << endl;
   }
}
//function to add edge into the matrix
void add_edge(int u, int v) {       
   vertArr[u][v] = 1;
   vertArr[v][u] = 1;
}
main(int argc, char* argv[]) {
   int v = 6,edge=8;
   //there are 6 vertices in the graph
   // add_edge(0, 4);
   // add_edge(0, 3);
   // add_edge(1, 2);
   // add_edge(1, 4);
   // add_edge(1, 5);
   // add_edge(2, 3);
   // add_edge(2, 5);
   // add_edge(5, 3);
   for (int i = 0; i < edge; i++)
   {
      int x,y;
      cin>>x>>y;
      add_edge(x, y);
   }
   
   
   displayMatrix(v);
}