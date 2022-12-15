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
    void setindex(long long k)
    {
        index = k;
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
           if(st1[j] == '$')
           {
               Node* NewNode2 = new Node(strlen(st1)-1,suff);
               Root->child[26] = NewNode2;
               break;
           }
           if(curr->child[st1[j] - 'a'] != nullptr)
               temp = curr->child[st1[j] - 'a']->index;
           else
           {
               Node* NewNode = new Node(i,suff);
               Root->child[st1[i] - 'a'] = NewNode;
               suff++;
               continue;
           }
           bool found=true;
           for (long long k = j; k < strlen(st1)-1; ++k)
           {
               if(st1[k] == st1[temp] )
               {
                   coun++;
                   temp++;
               }
               else
               {
                   found = false;
                   break;
               }
           }
           if(found)
           {
               if(Root->child[st1[i]-'a']->child[st[temp] - 'a'] != nullptr && Root->child[st1[i]-'a']->child[st[temp] - 'a']->index == temp && st[temp] != '$')
               {
                   cout<<i<<endl;
                   Node *newNode = new Node(strlen(st1) - 1, suff);
                   Root->child[st1[i] - 'a']->child[26] = newNode;
                   suff++;
                   continue;
               }
           }
           // temp -> char to update node
           // j char to create node
           Node* NewNode = new Node(Root->child[st1[i]-'a']->index,-1);
           NewNode->child[st1[temp] - 'a'] = Root->child[st1[i]-'a'];
           Root->child[st1[i]-'a']->setindex(temp);
           Root->child[st1[i] - 'a']=NewNode;
           Node* NewNode2 = new Node(j+coun,suff);
           if(j+coun >= strlen(st1)-1)
            Root->child[st1[i] - 'a']->child[26] = NewNode2;
           else
               Root->child[st1[i] - 'a']->child[st1[j+coun]-'a'] = NewNode2;
           suff++;
       }
         cout<<Root->index;




   }







};
int main()
{
    SuffixTree("papatpap$");
            //      01234
    return 0;
}
