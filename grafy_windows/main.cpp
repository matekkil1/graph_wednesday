#include <iostream>
#include "Graph.h"
#include "Interface.h"
using namespace std;

int main()
{

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
  int n= interface->ver_am;
  int  m=interface->edg_am;
  Graph <int> graph;
  //graph.WhatToDo(n,m);
  graph.VerAdd(n);
  graph.DisplayVer(n);
    return 0;
}
