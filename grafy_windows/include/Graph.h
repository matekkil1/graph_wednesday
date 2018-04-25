#ifndef GRAPH_H
#define GRAPH_H
#include <limits.h>
#include <iomanip>
#include <stack>

template < class T, int N, int M> // N-number of vertexes, M-number of edges
class Graph
{
    int inc_mat[N][M] ={};      //incidential matrix with elements equal zero
    T vertex_val[N] ={};        //each vertex value
    bool is_vertex_checked[N]; //if given vertex is checked
    bool consistentgraph;
    int ver_to_start;
    public:
        bool VerAdd()
        {   for(int i=0;i<N;i++)
            {    std::cout<<"Wprowadz wartosc dla wierzcholka o numerze "<<i<<": ";
                 T ran;
                 std::cin>> ran;
                 vertex_val[i]=ran;
            }
            return true;
        }

        bool EdgeAdd()
        {int a,b;
            for(int j=0;j<M;j++)
            {   std::cout<<"Wprowadz krawedzie grafu skierowanego [A->B]"<<std::endl;
                std:: cout<<"Podaj wierzcholki dla ";
                std::cout<<j;
                std::cout<<"-ej krawedzi: ";


                do
                {while (!(std::cin >> a))
                    {
                        std::cin.clear();
                        std::cin.ignore(INT_MAX, '\n');
                        std::cout << "Niepoprawne dane, spr�buj wpisac jeszcze raz  ";
                    }
                while (!(std::cin >> b))
                    {
                        std::cin.clear();
                        std::cin.ignore(INT_MAX, '\n');
                        std::cout << "Niepoprawne dane, spr�buj wpisac jeszcze raz  ";
                    }

                std::cout<<"Niepoprawnie wprowadzone wierzcholki, sproboj jeszcze raz: "<<std::endl ;
                }while ((a==b) || (a<0) || (b<0) || (a>N) || (b>N) ) ;

                inc_mat[b][j]=-1;
                inc_mat[a][j]=1;
                system("cls");
            }
            return true;
        }


        bool IncMatDis()
        { std::cout<< " Macierz incydencji dla grafu"<<std::endl;
          std::cout << "   ";
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

        bool IsGraphChecked();
        bool DisplayVer()
        {
            for(int i=0;i<N;i++)
            {
                std::cout<<"Dla wierzcholka o indeksie "<<i<<" wartosc wynosi: "<< vertex_val[i]<<std::endl;
            }

        }


       /* void AllVertAlig()
        {   bool aligned[N];
            for(int i = 0; i < N; i++)
          {
            for(int j = 0; j < M; j++) if(inc_mat[i][j]==1) aligned[N]==true ;
            if(aligned[N]==true) is_vertex_checked[N]==true;
          }
        } */

       /* bool IfGrapgConsistent()
        {
            for(int i=0;i<N;i++)
            {
                if(is_vertex_checked[i]==0) return false;
            }
            return true;
        } */

        void DFS(int v)     //recursive
        {
        int i,j;

        is_vertex_checked[v] = true;     // marks checked vertex
        std::cout <<"Wartosc wierzcholka "<< v<<" wynosi: "<<vertex_val[v]<<std::endl;  // prints value of checked vertex

        for(i = 0; i < M; i++)
        if(inc_mat[v][i] == 1)
            for(j = 0; j < N; j++)
            if(inc_mat[j][i] == -1)
            {
                if(!is_vertex_checked[j]) DFS(j);       // checks unchecked vertexes
                break;
            }
        }


        bool WhatToDo(int a)
        {

                    VerAdd();
                    EdgeAdd();
                    DisplayVer();
                    IncMatDis();


                    std::cout<<"Podaj wierzcholek od ktorego chcesz zaczac algorytm";
                    std::cin>>ver_to_start;
                    DFS(ver_to_start);

            }







    protected:

    private:

};

#endif // GRAPH_H
