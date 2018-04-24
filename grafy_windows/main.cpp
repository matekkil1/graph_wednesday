#include <iostream>
#include "Graph.h"
#include "Interface.h"
using namespace std;

int main()
{   int * sth;
    Graph < int,5> graph;
    //graph->vertex_am = 10;
    //cout<<c.som;
    graph.DisplayVer();
    cout << "Hello world!" << endl;
    Interface *interface = new Interface;
   // interface.DisplayFirstMenu();
    //interface.DisplayMenuToCreateGraph();
    cout<< interface->first_menu_choice;
    interface->GetFNum();
    cout<< interface->first_menu_choice;
    interface->GoInterface();
    return 0;
}
