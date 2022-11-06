#include<iostream>
using namespace std;

struct x{
    int var;
    x *next;
}*y, *z, *s, *v;

int main(){
    y = new x;
    z = new x;
    v = new x;

    y->var = 6;
    y->next = v;

    v->var = 3;
    v->next = z;

    z->var = 2;
    z->next = NULL;

    s = z;
    z = v;
    v->next = NULL;

    delete (s);
    x *curr;
    curr = new x;
    curr = y;

    while (curr!=NULL)
    {
        /* code */
        cout<<curr->var;
        curr = curr->next;
    }
    

    
}