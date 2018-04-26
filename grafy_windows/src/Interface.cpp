#include "Interface.h"





Interface::Interface()
{
    //ctor
}

Interface::~Interface()
{
    //dtor
}

void Interface::DisplayFirstMenu()
{
    std::cout << "1. Stworz graf"<<std::endl <<"2. Testy jednostkowe"<<std::endl<<"3. Koniec"<<std::endl;

}

void Interface::DisplayMenuToCreateGraph()
{

    std::cout<<"Wybierz typ danych jakie ma reprezentowac graf "<<std::endl;
    std::cout<<"1. Dane tekstowe"<<std::endl<<"2 .Dane liczbowe calkowite"<<std::endl<<"3. Dane liczbowe wymierne"<<std::endl<<"4. Dane znakowe"<<endl;
}

void Interface::AskVertNumb()
{
    std::cout<<"Ile wierzcholkow ma miec graf ?";
}

 void Interface::GetVertNumb()
 {
    std::cin>>vertnum;
 }

 void Interface::AskVertVal()
 {
    std::cout<<"Wprowadz wartosc dla wierzcholka o numerze: ";
 }

 void Interface::GoInterface()
 {
    DisplayFirstMenu();
    GetFNum();
    switch (first_menu_choice)
    {
    case 1:
        system("clear");
        DisplayMenuToCreateGraph();
        GetDataType();
        system("clear");
        GetVertAm();
        GetEdAm();
        system("clear");
        break;

    case 2:
        system("clear");
        AutomiticTests();
        break;

        }
 }
 void Interface::GetFNum()
 {
    while (!(std::cin >> first_menu_choice))
        {
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "Niepoprawne dane, sprobuj wpisac jeszcze raz  ";
        }
 }
 void Interface::GetSNum()
 {
    while (!(std::cin >> graph_menu_choice))
        {
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "Niepoprawne dane, sprobuj wpisac jeszcze raz  ";
        }
 }

 void Interface::GetDataType()
 {
    while (!(std::cin >> data_type))
        {
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "Niepoprawne dane, sprobuj wpisac jeszcze raz  ";
        }


 }

void Interface::GetVertAm()
{   std::cout<<"Podaj liczbe wierzcholkow dla grafu ";
    while (!(std::cin >>ver_am ))
        {
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "Niepoprawne dane, sprobuj wpisac jeszcze raz  ";
        }
}

void Interface::GetEdAm()
{   std::cout<<"Podaj liczbe krawedzi dla grafu ";
    while (!(std::cin >> edg_am))
        {
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "Niepoprawne dane, sprobuj wpisac jeszcze raz  ";
        }
}
void Interface::AutomiticTests()
{
    Tests *test = new Tests;
    test->RunAll();
    delete test;
}
