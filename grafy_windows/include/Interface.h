#ifndef INTERFACE_H
#define INTERFACE_H
#include <iostream>
#include <string>
#include <sstream>
#include <limits.h>
using namespace std;

class Interface
{   public:
    int vertnum;
    int first_menu_choice = 0;
    int graph_menu_choice = 0;

        Interface();
        virtual ~Interface();
        void DisplayFirstMenu();
        void DisplayMenuToCreateGraph();
        void AskVertNumb();
        void GetVertNumb();
        void AskVertVal();
        bool GoInterface();
        bool GetFNum();
        bool GetSNum();

    protected:

    private:
};

#endif // INTERFACE_H
