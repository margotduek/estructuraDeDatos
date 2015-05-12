/*

 */

 #include <iostream>
 #include "Graph.h"
 using namespace std;

 int main(){

   Graph<char, int> mapa("Guía Roji");

   /* Crear vértices */
   Vertex<char, int> * A = new Vertex<char, int>('A');
   Vertex<char, int> * B = new Vertex<char, int>('B');
   Vertex<char, int> * C = new Vertex<char, int>('C');
   Vertex<char, int> * D = new Vertex<char, int>('D');
   Vertex<char, int> * E = new Vertex<char, int>('E');

   /* Adicionar vértices al grafo */
   mapa.addVertex(A);
   mapa.addVertex(B);
   mapa.addVertex(C);
   mapa.addVertex(D);
   mapa.addVertex(E);

   /* Adicionar aristas */
   mapa.addEdge(A, B, 30);
   mapa.addEdge(A, E, 100);
   mapa.addEdge(B, A, 50);
   mapa.addEdge(B, D, 75);
   mapa.addEdge(C, D, 20);
   mapa.addEdge(D, B, 60);
   mapa.addEdge(E, C, 15);

   /* Mostrar el grafo */
   std::cout << mapa << std::endl;

   bool y = mapa.complete();
   cout << y << endl;
   return 0;
 }
