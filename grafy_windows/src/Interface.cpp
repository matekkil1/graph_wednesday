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
    cout << "1. Stworz graf"<<endl <<"2. Testy jednostkowe"<<endl<<"3. Koniec";

}

void Interface::DisplayMenuToCreateGraph()
{

    cout<<"Wybierz typ danych jakie ma reprezentowac graf"<<std::endl;
    cout<<"1. Dane tekstowe"<<endl<<"2 .Dane liczbowe calkowite"<<endl<<"3. Dane liczbowe wymierne"<<endl<<"4. Dane znakowe"<<endl<<"5. Wartosci logiczne(prawda/falsz)"<<endl;
}

void Interface::AskVertNumb()
{
    cout<<"Ile wierzcholkow ma miec graf ?";
}

 void Interface::GetVertNumb()
 {
     cin>>vertnum;
 }

 void Interface::AskVertVal()
 {
     cout<<"Wprowadz wartosc dla wierzcholka o numerze: ";
 }

 bool Interface::GoInterface()
 {
    DisplayFirstMenu();
    GetFNum();
    switch (first_menu_choice)
    {
    case 1:
        system("cls");
        std::cout<<first_menu_choice;
        DisplayMenuToCreateGraph();
        GetDataType();
        system("cls");
        GetVertAm();
        GetEdAm();
        break;

    case 2:
        system("cls");

        break;

        }
 }
 bool Interface::GetFNum()
 {  int i;
     while (!(std::cin >> first_menu_choice))
        {
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "Niepoprawne dane, spróbuj wpisaæ jeszcze raz  ";
        }

    return true ;
 }
 bool Interface::GetSNum()
 {  int i;
     while (!(std::cin >> graph_menu_choice))
        {
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "Niepoprawne dane, spróbuj wpisaæ jeszcze raz  ";
        }
    return true;

 }

 bool Interface::GetDataType()
 {   int i;
    while (!(std::cin >> data_type))
        {
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "Niepoprawne dane, spróbuj wpisaæ jeszcze raz  ";
        }


 }

 void Interface::DisplayGraphOpt()
        {
            std::cout<<"1. Wyswietl informacje"<<std::endl<<"2. Dodaj wartosci wierzcholkow"<<std::endl<<"3. Dodaj krawedzie"<<std::endl<<"4. Algorytm DFS"<<std::endl;
        }

void Interface::GetVertAm()
{   std::cout<<"Podaj liczbe wierzcholkow dla grafu: 1";
    while (!(std::cin >>ver_am ))
        {
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "Niepoprawne dane, spróbuj wpisaæ jeszcze raz  ";
        }
}

void Interface::GetEdAm()
{   std::cout<<"Podaj liczbe krawedzi dla grafu: ";
    while (!(std::cin >> edg_am))
        {
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "Niepoprawne dane, spróbuj wpisaæ jeszcze raz  ";
        }
}
