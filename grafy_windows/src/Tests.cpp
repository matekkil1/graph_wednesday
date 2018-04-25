#include "Tests.h"

Tests::Tests()
{
    //ctor
}

Tests::~Tests()
{
    //dtor
}

void Tests::Test01()
{   Graph <int> *testgraph = new Graph<int>(4,3);
    testgraph->inc_mat[0][0]=1;
    testgraph->inc_mat[1][0]=-1;
    testgraph->inc_mat[1][1]=1;
    testgraph->inc_mat[2][1]=-1;
    testgraph->inc_mat[2][2]=1;
    testgraph->inc_mat[3][2]=-1;
    testgraph->DFS(0);
    for(int i=0;i<4;i++)
    {
        if (testgraph->is_vertex_checked[i]==0)
        {
          std:: cout<<"Test01: blad";
          break;
        }
    std::cout<<"Test01: OK";
    break;
    }


    delete testgraph;
}
void Tests::Test02()
{   Graph <int> *testgraph = new Graph<int>(4,4);
    testgraph->inc_mat[0][0]=1;
    testgraph->inc_mat[1][0]=-1;
    testgraph->inc_mat[0][1]=1;
    testgraph->inc_mat[0][2]=1;
    testgraph->inc_mat[1][3]=-1;
    testgraph->inc_mat[2][1]=-1;
    testgraph->inc_mat[3][2]=-1;
    testgraph->inc_mat[3][3]=1;
    testgraph->DFS(2);
    if(testgraph->is_vertex_checked[2]==true) std::cout<< "Test02: OK";
    else std::cout<<"Test02: blad";


    delete testgraph;
}
void Tests::Test03()
{   Graph <int> *testgraph = new Graph<int>(4,3);
    testgraph->inc_mat[0][0]=1;
    testgraph->inc_mat[1][0]=-1;
    testgraph->inc_mat[1][1]=1;
    testgraph->inc_mat[2][1]=-1;
    testgraph->inc_mat[2][2]=1;
    testgraph->inc_mat[3][2]=-1;
    testgraph->DFS(2);

        if ((testgraph->is_vertex_checked[0]==false)&&(testgraph->is_vertex_checked[1]==false))
        {
          std:: cout<<"Test03: ok";

        }
    else std::cout<<"Test03: OK";
    delete testgraph;
}
void Tests::Test04()
{   Graph <int> *testgraph = new Graph<int>(5,4);
    testgraph->inc_mat[0][0]=-1;
    testgraph->inc_mat[0][1]=1;
    testgraph->inc_mat[0][2]=1;
    testgraph->inc_mat[1][2]=-1;
    testgraph->inc_mat[1][3]=1;
    testgraph->inc_mat[2][1]=-1;
    testgraph->inc_mat[3][3]=-1;
    testgraph->inc_mat[4][0]=1;
    testgraph->DFS(4);
    for(int i=0;i<5;i++)
    {
        if (testgraph->is_vertex_checked[i]==0)
        {
          std:: cout<<"Test04: blad";
          break;
        }
    std::cout<<"Test04: OK";
    break;
    }


    delete testgraph;
}
void Tests::Test05()
{   Graph <int> *testgraph = new Graph<int>(3,3);
    testgraph->inc_mat[0][0]=-1;
    testgraph->inc_mat[0][1]=1;
    testgraph->inc_mat[1][0]=1;
    testgraph->inc_mat[1][2]=-1;
    testgraph->inc_mat[2][1]=-1;
    testgraph->inc_mat[2][2]=1;
    testgraph->DFS(2);
    for(int i=0;i<3;i++)
    {
        if (testgraph->is_vertex_checked[i]==0)
        {
          std:: cout<<"Test05: blad";
          break;
        }
    std::cout<<"Test05: OK";
    break;
    }


    delete testgraph;
}
void Tests::Test06()
{   Graph <int> *testgraph = new Graph<int>(3,3);
    testgraph->inc_mat[0][0]=-1;
    testgraph->inc_mat[0][1]=1;
    testgraph->inc_mat[0][2]=1;
    testgraph->inc_mat[1][0]=1;
    testgraph->inc_mat[1][1]=-1;
    testgraph->inc_mat[2][2]=-1;
    testgraph->DFS(0);
    for(int i=0;i<3;i++)
    {
        if (testgraph->is_vertex_checked[i]==0)
        {
          std:: cout<<"Test06: blad";
          break;
        }
    std::cout<<"Test06: OK";
    break;
    }


    delete testgraph;

}
void Tests::Test07()
{   Graph <int> *testgraph = new Graph<int>(5,2);

    testgraph->VerAdd();
    testgraph->DisplayVer();

    std::cout<<"Czy dane wartosci sa takie same - Jesli tak to OK"<<std::endl;
    delete testgraph;

}
void Tests::Test08()
{   Graph <int> *testgraph = new Graph<int>(5,4);
    testgraph->inc_mat[0][0]=-1;
    testgraph->inc_mat[0][1]=1;
    testgraph->inc_mat[0][2]=1;
    testgraph->inc_mat[1][2]=-1;
    testgraph->inc_mat[1][3]=1;
    testgraph->inc_mat[2][1]=-1;
    testgraph->inc_mat[3][3]=-1;
    testgraph->inc_mat[4][0]=1;
    testgraph->IncMatDis();
    std::cout<<"Macierz incydencji dla przykladu 4";
    delete testgraph;

}


void Tests::RunAll()
{
Test01();
std::cout<<std::endl;

Test02();
std::cout<<std::endl;

Test03();
std::cout<<std::endl;

Test04();
std::cout<<std::endl;

Test05();
std::cout<<std::endl;

Test06();
std::cout<<std::endl;

Test07();
std::cout<<std::endl;

Test08();
std::cout<<std::endl;




}
