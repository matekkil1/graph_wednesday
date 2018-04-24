#ifndef GRAPH_H
#define GRAPH_H

template < typename T>
class Graph
{
    int inc_mat[2][2];      //incidential matrix
    T vertex_val[2];        //each vertex value
    //int vertex_am = N;      //amount of vertexes
    bool vertex_check[2];   //if a vertex was checked by DFS algorythm
    int som=6;
    public:
        Graph(inc_mat=0);
        virtual ~Graph();


        bool ver_add(T vertex_val[2],int inc_mat[2][2],int vertex_am);
        bool inc_mat_dis(int inc_mat);
        bool if_graph_checked(bool vertex_check);

    protected:

    private:

};

#endif // GRAPH_H
