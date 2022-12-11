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

    Node()
    {
        child = nullptr;
        index = 0;
        Suffindex = 0;
    }
    Node(int i , int suff)
    {
        child = new Node[26];
        index = i;
        Suffindex = suff;
    }
    



};
int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
