#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

node *root = NULL;

int i = 0;

void inOrder(node *temp)
{
    if(temp != NULL)
    {
        inOrder(temp ->left);
        cout << temp -> data << " ";
        inOrder(temp ->right);
    }
}

void valueAssign(node *temp)
{
    if(temp != NULL)
    {
        valueAssign(temp ->left);
        char node_name = 'A' + i;
        int x = rand()%69;
        cout << node_name << " " << x << endl;
        temp -> data = x;
        i++;
        valueAssign(temp ->right);
    }
}

int main()
{
    srand(time(0));
    node *A, *B, *C, *D, *E, *F, *G, *H, *I; //We declare pointers to save the positions of the next node
    A = new node(); //For assigning enough memory to store data. This part is crucial as without it, there will be error
    B = new node();
    C = new node();
    D = new node();
    E = new node();
    F = new node();
    G = new node();
    H = new node();
    I = new node();

    A -> left = NULL;
    A -> right = NULL;

    B -> left = A;
    B -> right = C;

    C -> right = NULL;
    C -> left = I;

    D -> left = B;
    D -> right = G;

    E -> left = NULL;
    E -> right = F;

    F -> left = NULL;
    F -> right = NULL;

    G -> left = E;
    G -> right = H;

    H -> left = NULL;
    H -> right = NULL;

    I -> left = NULL;
    I -> right = NULL;

    root = D;

    valueAssign(root);
    inOrder(root);

    cout << endl;

    /*Do function here*/
}
