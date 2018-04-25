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
  switch (interface->data_type)
    case 1:
        Graph <int> graph1(n,m);
        break;
    case 1:
        Graph <int> graph2(n,m);
        break;
    case 1:
        Graph <int> graph3(n,m);
        break;
    case 1:
        Graph <int> graph4(n,m);
        break;
    case 1:
        Graph <int> graph5(n,m);
        break;


  Graph <int> graph(n,m);
  graph.WhatToDo();
  //graph.VerAdd();
  //graph.DisplayVer();
    return 0;
}
