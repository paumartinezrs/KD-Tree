#include "kdtree.hh"

int main() {
    unsigned seed = (unsigned int)time(NULL);
    std::mt19937 mt(seed);
    std::uniform_real_distribution<double> random(0, 1);

    int N,n_min,n_max,step,Q;

    N = 10;
    n_min = 100000;
    n_max = 1000000;
    step = 100000;
    Q = 100000;
    
    std::cout << "Número de árboles = " << N << std::endl;
    std::cout << "Número de nodos por árbol = [" << n_min << ", " << n_max << "]" << std::endl;
    std::cout << "Número de consultas por árbol = " << Q << std::endl << std::endl;

     for (int n = n_min; n <= n_max; n = n+step){
         std::cout << "[Número de nodos = " << n << "]" << std::endl;
        for(int k = 2; k <= 6; ++k){
            std::cout << "[k = " << k << "]" << std::endl << std::endl;
            for(int a = 1; a <= N; ++a){
                std::cout << "Árbol " << a << std::endl;
                //KDTree T(n_max, k);
                KDTree T(n, k);
                double media = 0.0;
                for(int q = 0; q <= Q; ++q){
                    Point query(k);
                    int nodeExpanded = 0;
                    for(int d = 0; d < k ; ++d){
                        query[d] = random(mt);
                    }
                    T.nearestNode(query, nodeExpanded);
                    media += nodeExpanded;
                }
                media /= Q;
                std::cout << "Media = "<< media << std::endl;
            }
            std::cout << std::endl;
        }
    }
}
