#include <iostream>
#include "Graph.h"
#include "Interface.h"
using namespace std;

int main()
{   int * sth;
    Graph < int,5,6> graph;
    graph.VerAdd();
    graph.EdgeAdd();
    graph.IncMatDis();
    //graph.DisplayVer();
    //graph.AllVertAlig();
    graph.DFS(0);
    cout<<graph.IfGrapgConsistent();
  ;
    return 0;
}
