#ifndef GRAPH_H
#define GRAPH_H
#include <limits.h>
#include <iomanip>
#include <stack>

template < class T, int N, int M> // N-number of vertexes, M-number of edges
class Graph
{
    int inc_mat[N][M] ={};      //incidential matrix with elements equal zero
    T vertex_val[N];        //each vertex value
    bool vertex_check[N];   //if a vertex was checked by DFS algorythm
    bool is_vertex_checked[N]; //if given vertex is checked
    public:
        bool VerAdd()
        {   for(int i=0;i<N;i++)
            {
                 T ran;
                 std::cin>> ran;
                 vertex_val[i]=ran;
            }
            return true;
        }

        bool EdgeAdd()
        {int a,b;
         for(int c=0;c<M;c++)
         {
             inc_mat[c][c]=1;
         }

            for(int j=0;j<M;j++)
            {   std::cout<<"Wprowadz krawedzie grafu[graf skierowany z lewego wierzcholka do prawego]"<<std::endl;
                std:: cout<<"Podaj wierzcholki dla ";
                std::cout<<j;
                std::cout<<"-ej krawedzi: ";


                do
                {while (!(std::cin >> a))
                    {
                        std::cin.clear();
                        std::cin.ignore(INT_MAX, '\n');
                        std::cout << "Niepoprawne dane, spróbuj wpisaæ jeszcze raz  ";
                    }
                while (!(std::cin >> b))
                    {
                        std::cin.clear();
                        std::cin.ignore(INT_MAX, '\n');
                        std::cout << "Niepoprawne dane, spróbuj wpisaæ jeszcze raz  ";
                    }

                std::cout<<"Niepoprawnie wprowadzone wierzcholki, sproboj jeszcze raz: "<<std::endl ;
                }while ((a==b) || (a<0) || (b<0) || (a>N) || (b>N) ) ;

                inc_mat[b][a]=1;
                inc_mat[a][b]=-1;
                system("cls");
            }
            return true;
        }


        bool IncMatDis()
        { std::cout << "   ";
          for(int i = 0; i < M; i++) std::cout << std::setw(3) << i;
          std::cout << std::endl << std::endl;
          for(int i = 0; i < N; i++)
          {
            std::cout << std::setw(3) << i;
            for(int j = 0; j < M; j++) std::cout << std::setw(3) << (int) inc_mat[i][j];
            std::cout << std::endl;
          }
        return true;
        }

        bool isGraphChecked();
        bool DisplayVer()
        {
            for(int i=0;i<N;i++)
            {
                std::cout<<"Dla wierzcholka o indeksie "<<i<<" wartosc wynosi: "<< vertex_val[i]<<std::endl;
            }

        }

       /* bool DSF()
        {   int currver=0; //index of current vertex
            bool v_is_checked; //is current vertex checked
            int ver_to_start = 0; // index of the vertex to start searching
            if(inc_mat[][ver_to_start])
        while()


        } */

       /* void DFS(int v)
        {
        int i,j;

        visited[v] = true;     // Zaznaczamy wêze³ jako odwiedzony
        cout << setw(3) << v;  // Przetwarzamy wêze³ (wypisujemy jego numer)

            // Rekurencyjnie odwiedzamy nieodwiedzonych s¹siadów

        for(i = 0; i < m; i++)
        if(A[v][i] == 1)
            for(j = 0; j < n; j++)
            if(A[j][i] == -1)
            {
                if(!visited[j]) DFS(j);
                break;
            }
        }*/





    protected:

    private:

};

#endif // GRAPH_H
