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
           int j = i;
           char c = st1[j];
           if(c == '$')
           {
               Node* NewNode = new Node(i, suff);
               curr->child[26] = NewNode;
               break;
           }
           while(curr->child[c-'a'] != nullptr )
           {
               curr = curr->child[c-'a'];
               j++;
               c=st1[j]; //GANOON MSH BTHEBK

           }
           if(j == i)
           {
               Node* NewNode = new Node(j, suff);
               curr->child[st1[j]-'a'] = NewNode;
           }
           else
           {
               if(j == strlen(st1)-1)
               {
                   j--;
               }
               long long temp = curr->index + (j-i+1);
               Node* NewNode = new Node(temp, curr->Suffindex);
               curr->child[st[temp] - 'a'] = NewNode;
               curr->setsuff(-1);
               Node* NewNode2 = new Node(strlen(st1)-1,suff);
               curr->child[26] = NewNode2;

           }
           suff++;
       }





   }







};
int main()
{
    SuffixTree("banan$");
            //      01234
    return 0;
}
