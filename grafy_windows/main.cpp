#include <iostream>
#include "Graph.h"
#include "Interface.h"
using namespace std;

int main()
{
  Interface *interface = new Interface;
  interface->GoInterface();
  int n= interface->ver_am;
  int  m=interface->edg_am;
  switch (interface->data_type)
   {
    case 1:
        {Graph <string> graphs(n,m);
        graphs.WhatToDo();
        break;}
    case 2:
        {Graph <int> graphi(n,m);
        graphi.WhatToDo();
        break;}
    case 3:
        {Graph <double> graphd(n,m);
        graphd.WhatToDo();
        break;}
    case 4:
        {Graph <char> graphc(n,m);
        graphc.WhatToDo();
        break;}
   }
   delete interface;
    return 0;
}
