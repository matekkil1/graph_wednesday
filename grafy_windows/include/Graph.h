#ifndef GRAPH_H
#define GRAPH_H

template < class T, int N>
class Graph
{
    int inc_mat[N][N];      //incidential matrix
    T vertex_val[N];        //each vertex value
    //int vertex_am = N;      //amount of vertexes
    bool vertex_check[N];   //if a vertex was checked by DFS algorythm
    public:

        bool VerAdd(T vertex_val[N],int inc_mat[N][N],int vertex_am);
        bool IncMatDis(int inc_mat);
        bool ifGraphChecked(bool vertex_check);
        bool DisplayVer()

        {
            std::cout<<N;
        }

    protected:

    private:

};

#endif // GRAPH_H
