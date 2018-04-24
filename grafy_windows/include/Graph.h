#ifndef GRAPH_H
#define GRAPH_H
#include <limits.h>

template < class T, int N, int M> // N-number o vertexes M-number of edges
class Graph
{
    int inc_mat[N][M] ={};      //incidential matrix with elements equal zero
    T vertex_val[N];        //each vertex value
    bool vertex_check[N];   //if a vertex was checked by DFS algorythm
    public:
       // template < class T, int N>
        bool VerAdd()
        {   for(int i=0;i<N;i++)
            {
                 T ran;
                 std::cin>> ran;
                 vertex_val[i]=ran;
            }
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


        bool IncMatDis();
        bool ifGraphChecked();
        bool DisplayVer()

        {
            std::cout<<N;
        }
    protected:

    private:

};

#endif // GRAPH_H
