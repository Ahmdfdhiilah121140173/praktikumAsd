#include<iostream>
using namespace std;

#define maksIndex 100

class Stack
{
    int top;
    
    public:
    char array[maksIndex];  

    Stack(){
        top = -1;
    }
    bool isEmpty();
    void push(char Charstr);
    char pop();
    void display();
    void filterAneh(char Charstr);
};


void Stack::push(char Charstr)
{
    if(this->top >= 100)
    {
        cout << "Stack Penuh! \n";
    }
    else
    {
        array[++this->top] = Charstr;
    }
}

char Stack::pop()
{
    if(isEmpty())
    {
        cout << "Stack Kosong \n";
        return 0;
    }
    else
    {
        char temp = array[this->top--];
        return temp;
    }
}

bool Stack::isEmpty()
{
    bool isEmpty;
    isEmpty = this->top<0?1:0;
    return isEmpty;
}
void Stack:: filterAneh(char Charstr){
    if(Charstr>='0' && Charstr<='9'){
        push(Charstr);
    }
    else if (Charstr== '_') {
        pop();
    }
}
void Stack::display()
{
    if(isEmpty())
    {
        cout << "Stack Kosong \n";
    }
    else
    {
        for(int i=this->top;i>=0;i--)
        {
            cout<<array[i];
        }
        cout<<endl;
    }
}

int main() {
    int banyakKasus;
    cout<<"Masukan Jumlah Kasus : (0 <= Kasus <= 50)"<<endl;
    cin>>banyakKasus;
    
    Stack stack[banyakKasus+1];
    for (int i = 0; i < banyakKasus; i++)
    {
    cout<<"Masukan String Aneh : ";
    string str;
    cin.ignore();
    getline(cin, str);
        for (int j = 0; j <str.size(); j++){
            stack[i].filterAneh(str[j]);
        }
    }
    for (int i = 0; i < banyakKasus; i++)
    {
        stack[i].display();
    }
    return 0;
    
}