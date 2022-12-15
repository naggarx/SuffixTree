#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;
class Node
{
public:
    Node* child[27]={nullptr};
    long long index;
    long long Suffindex;
    Node(long long i , long long suff)
    {
        index = i;
        Suffindex = suff;
    }
    Node()
    {
        index = -1;
        Suffindex = -1;
    }
    void setsuff(long long k)
    {
        Suffindex = k;
    }
};
class SuffixTree
{
public:
   Node* Root;
   const char* st1;
   SuffixTree()
   {
      Root = nullptr;
      st1 = nullptr;
   }
   SuffixTree(const string &st )
   {
       st1 = st.c_str();
       Root = new Node;
       long long suff = 0;
       for (int i = 0; i < strlen(st1); ++i)
       {
           Node* curr = Root;
           long long coun = 0;
           long long j = i;
           long long temp = -1 ;
           if(curr->child[st1[j] - 'a'] != nullptr && st1[j] != '$')
               temp = curr->child[st1[j] - 'a']->index;
           else
           {
               Node* NewNode = new Node(i,suff);
               Root->child[st1[i] - 'a'] = NewNode;
               suff++;
               continue;
           }
           for (long long k = j; k < strlen(st1); ++k)
           {
               if(st1[k] == st1[temp] )
               {
                   coun++;
                   temp++;
               }
               else
                   break;
           }
           Node* NewNode = new Node(temp+1,Root->child[st1[i] - 'a']->Suffindex);
           Root->child[st1[i] - 'a']->setsuff(-1);
           Root->child[st1[i] - 'a']->child[st1[temp+1] - 'a'] = NewNode;
           Node* NewNode2 = new Node(strlen(st1)-1,suff);
           Root->child[st1[i] - 'a']->child[26] = NewNode2;
           suff++;
       }
        cout<<Root->index;




   }







};
int main()
{
    SuffixTree("banan$");
            //      01234
    return 0;
}
