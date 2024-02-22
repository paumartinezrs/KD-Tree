#include "kdtree.hh"


int main() {
    int N = 1000000;
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<double> dist(0, 1);
    Point p;
    float media = 0.0;
    int nodeExpanded = 0;
    for (int count = 0; count < 10; ++count) {
        cout << "Para N = " << N << endl;
         for (int i = 2; i <= 6; ++i) {
            cout << "Creamos arbol con k = " << i << endl;
            KDTree t(N, i);
            media = 0;
            for (int k = 0; k < 30; ++k) {
                nodeExpanded = 0;
                Point p(i);
                for(int j = 0; j < i ; ++j){
                    p[j] =   dist(mt);
                }
                t.nearestNode(p, nodeExpanded);
                media += nodeExpanded;
            }
            media /= 30.0;
            cout << "Media para k = " << i << " : " << media << endl;
            cout << endl;

         }
         N += 1000000;
         cout << endl;
         cout << endl;
    }
}
