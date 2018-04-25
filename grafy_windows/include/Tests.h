#ifndef TESTS_H
#define TESTS_H
#include "Graph.h"

class Tests
{
    public:
        Tests();
        virtual ~Tests();
        void Test01();  //DFS test01
        void Test02();  //DFS test02
        void Test03();  //DFS test03
        void Test04();  //DFS test04
        void Test05();  //DFS test05
        void Test06();  //DFS test06
        void Test07();  // input/output vertex test
        void Test08();  // inc matrix test
        void RunAll();  //runs all tests
    protected:

    private:
};

#endif // TESTS_H
