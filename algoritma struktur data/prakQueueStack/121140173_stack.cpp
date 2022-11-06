#include <iostream>
using namespace std;
typedef int infotype;
struct linkedList{
    infotype var;
    linkedList *next;
}*top;

void push(infotype var) {
    linkedList *temp = new linkedList;
    if (top == NULL){
        top = new linkedList;
        top->var = var;
        top->next = NULL;
    }
    else {
            temp = new linkedList;
            temp->var = var;
            temp->next = top;
            top = temp;
    }
}

void pop(){
    if (top == NULL){
        cout<<"Stack Kosong"<<endl;
    }
    else {
        linkedList *temp;
        temp = top;
        top = top->next;
    }
}
 void display(){
    if (top == NULL){
        cout<<"Stack Kosong"<<endl;
    }
    else {
        linkedList *temp = top;
        while (temp!= NULL){
            cout<<temp->var<<" \n";
            temp = temp->next;
        }
        cout<<endl;
    }
 }
int main(){
    int n;
    cout<<"Masukan Jumlah maksimal stack :";
    cin>>n;
    for(int i=0;i<n;i++){
        infotype x;
        cout<<"Masukan Isi Variabel : ";
        cin>>x;
        push(x);
    }
    display();
    pop();
    display();
    return 0;
}




//temp
void gantiInteger(string str, int hasil[])
{
	stringstream ss;
    str = spasi(str);
	ss << str;
	
	string temp;
	int found;
	while (!ss.eof()) {
		ss >> temp;

		if (stringstream(temp) >> found){
		    hasil[idxArrHasil] = found;
		    idxArrHasil++;
		}
	}
}