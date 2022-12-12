#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;
class Node
{
public:
    Node* child[27]={nullptr};
    int index;
    int Suffindex;
    Node(int i , int suff)
    {
        index = i;
        Suffindex = suff;
    }
    Node()
    {
        index = -1;
        Suffindex = -1;
    }
    void setsuff(int k)
    {
        Suffindex = k;
    }
};
class SuffixTree
{
public:
   Node* Root;
   SuffixTree()
   {
      Root = nullptr;
   }
   SuffixTree(const string &st )
   {
       const char* st1 = st.c_str();
       Root = new Node;
       int suff = 0;
       for (int i = 0; i < strlen(st1); ++i)
       {
           Node* curr = Root;
           int j = i;
           char c = st1[j];
           while(curr->child[c-'a'] != nullptr )
           {
               curr = curr->child[c-'a'];
               j++;
               c=st1[j];

           }
           Node* NewNode = new Node(i, suff);
           curr->setsuff(-1);
           curr->child[st1[i]-'a'] = NewNode;
           suff++;
       }





   }






};
int main()
{
    SuffixTree("banan");
            //      01234
    return 0;
}
