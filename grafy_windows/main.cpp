#include <iostream>
#include "Graph.h"
#include "Interface.h"
using namespace std;

int main()
{   int * sth;
    Graph < int,3,4> graph;
    graph.VerAdd();
    graph.EdgeAdd();
    graph.IncMatDis();
    graph.DisplayVer();
  ;
    return 0;
}
