#ifndef GRAPH_H
#define GRAPH_H
#include <limits.h>
#include <iostream>
#include <iomanip>
#include <stack>

template < class T> // N-number of vertexes, M-number of edges
class Graph
{   public:
    int N;
    int M;
    int **inc_mat;      //incidential matrix with elements equal zero
    T * vertex_val;        //each vertex value
    bool * is_vertex_checked; //if given vertex is checked
    bool consistentgraph;
    int ver_to_start;

        Graph<T>(int n, int m)         // constructor for dynamicly allocated data
        {
            is_vertex_checked = new bool[n]();
            vertex_val = new T[n]();
            inc_mat = new int *[n]();
            for(int i=0;i<n;i++)
            {
                inc_mat[i] = new int [m]();
            }
            N=n;
            M=m;
        }

        bool VerAdd()
        {
            for(int i=0;i<N;i++)
            {    std::cout<<"Wprowadz wartosc dla wierzcholka o numerze "<<i<<": ";
                 T ran;
                 std::cin>> ran;
                 vertex_val[i] = ran;
            }
            return true;
        }

        bool EdgeAdd()
        {
            int a,b;
            for(int j=0;j<M;j++)
            {
                std::cout<<"Wprowadz krawedzie grafu skierowanego [A->B]"<<std::endl;
                std:: cout<<"Podaj wierzcholki dla ";
                std::cout<<j;
                std::cout<<"-ej krawedzi: ";

                do
                {while (!(std::cin >> a))
                    {
                        std::cin.clear();
                        std::cin.ignore(INT_MAX, '\n');
                        std::cout << "Niepoprawne dane, spróbuj wpisac jeszcze raz  ";
                    }
                while (!(std::cin >> b))
                    {
                        std::cin.clear();
                        std::cin.ignore(INT_MAX, '\n');
                        std::cout << "Niepoprawne dane, spróbuj wpisac jeszcze raz  ";
                    }

                std::cout<<"Niepoprawnie wprowadzone wierzcholki, sproboj jeszcze raz: "<<std::endl ;
                }while ((a==b) || (a<0) || (b<0) || (a>=N) || (b>=N) ) ;

                inc_mat[b][j]=-1;
                inc_mat[a][j]=1;
                system("clear");
            }
            return true;
        }

        bool IncMatDis()
        { std::cout<<std::endl<< "Macierz incydencji dla grafu"<<std::endl;
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
        void DisplayVer()
        {
            for(int i=0;i<N;i++)
            {
                std::cout<<"Dla wierzcholka o indeksie "<<i<<" wartosc wynosi: "<< vertex_val[i]<<std::endl;
            }

        }

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
        void WhatToDo()
        {
         VerAdd();
         system("clear");
         EdgeAdd();
         std::cout<<"Podaj wierzcholek od ktorego chcesz zaczac algorytm: " ;
         std::cin>>ver_to_start;
         std::cout<<"Algorytm DFS dla "<<ver_to_start<<"-ego wierzcholka"<<std::endl;
         DFS(ver_to_start);
         IncMatDis();
        }
};

#endif // GRAPH_H
