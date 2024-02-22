#ifndef __KDTREE_HH__
#define __KDTREE_HH__

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <queue>
#include <iomanip>
#include <math.h> 
#include <cmath>
#include <time.h>
using namespace std; 

typedef std::vector<float> Point;

struct KDTreeNode {
    Point point;
    KDTreeNode* left;
    KDTreeNode* right;     
};

class KDTree {
    
    private:
        KDTreeNode* root;

        KDTreeNode* createNode(const Point& p);

        // Metodo para añadir una clave k-dimensional al árbol
        KDTreeNode* insertPoint(KDTreeNode* r, const Point& p, int depth);

        void destroyTree(KDTreeNode* node);

        void printNode(const Point& point, int n);

        KDTreeNode* nearestNode(KDTreeNode* r, const Point& n, int depth, int& nodeExpanded);

        //Retorna que punto esta mas cerca de n
        KDTreeNode* closest(const Point& n, KDTreeNode* temp, KDTreeNode* root);

        //Retorna la distancia entre el punto a y el punto b al quadrado 
        float dist(const Point& a, const Point& b);


    public:

        // Constructor arbol vacio
        KDTree();

        // Constructor con n puntos k-dimensionales
        KDTree(const std::vector<Point>& points);

        // Constructor con n puntos k-dimensionales aleatorios
        KDTree(int N, int K);
        
        // Imprimir el árbol.
        void print();

        // Insertar un punto en el árbol.
        void insert(const Point& p);

        //Retorna el punto mas cercano a p en un árbol no vacío
        Point nearestNode(const Point& p, int & nodexpanded);

        bool isEmpty();

        void printPoint(const Point& p);

        // Destructor para liberar la memoria.
        ~KDTree();
};

#endif
