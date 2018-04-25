#include <iostream>
#include "Graph.h"
#include "Interface.h"
using namespace std;

int main()
{
    Graph < int,5,6> graph;
    /*graph.VerAdd();
    graph.EdgeAdd();
    graph.IncMatDis();
    //graph.DisplayVer();
    //graph.AllVertAlig();
    graph.DFS(0);
    cout<<graph.IfGrapgConsistent();
  */

  Interface *interface = new Interface;
  interface->GoInterface();
  graph.WhatToDo(interface->graph_opt);
    return 0;
}
