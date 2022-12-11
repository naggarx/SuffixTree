#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;
class Node
{
public:
    Node* child;
    int index;
    int Suffindex;
    Node(int i , int suff)
    {
        child = new Node[26];
        index = i;
        Suffindex = suff;
    }
    Node()
    {
        child = nullptr;
        index = -1;
        Suffindex = -1;
    }
};
class SuffixTree
{

   Node* Root;
   SuffixTree()
   {
      Root = nullptr;
   }
   SuffixTree(char st1 [])
   {

       int suff = 0;
       for (int i = 0; i < strlen(st1); ++i)
       {
           int j = i;
           char c = st1[j];
           while(Root->child[c-'a'].index != -1)
           {
               j++;
               c=st1[j];
           }
           Node* NewNode = new Node(j, 0);
           Root->child[c-'a'] = *NewNode;
           suff++;
       }

   }






};
int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
