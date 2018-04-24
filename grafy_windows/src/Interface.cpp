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
    cout << "1. Stworz graf"<<endl <<"2. Wczytaj graf z pliku"<<endl<<"3. Koniec";

}

void Interface::DisplayMenuToCreateGraph()
{

    cout<<"Wybierz typ danych jakie ma reprezentowac graf";
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
     cout<<"Wprowadz wartosc dla wierzcho³ka o numerze: ";
 }

 bool Interface::GoInterface()
 {
    DisplayFirstMenu();
    GetFNum();
    switch (first_menu_choice)
    {
    case 1:
    system("cls");
    DisplayMenuToCreateGraph();
        break;
    case 2:
        system("cls");

        break;

    case 3:
        system("cls");

        break;

    case 4:
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
