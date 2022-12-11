#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;
class Node
{
    Node* child;
    int index;
    int Suffindex;

public:
    Node(int i , int suff)
    {
        child = new Node[26];
        index = i;
        Suffindex = suff;
    }
    Node()
    {
        child = nullptr;
        index = 0;
        Suffindex = 0;
    }
};
class SuffixTree
{

   Node* Root;
   char* st;
   SuffixTree()
   {
      Root = nullptr;
      st = nullptr;
   }
   SuffixTree(char st1 [])
   {
       
       for (int i = 0; i < st.; ++i)
       {

       }

   }






};
int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
