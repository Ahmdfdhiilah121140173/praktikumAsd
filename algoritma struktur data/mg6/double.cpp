#include<iostream>
using namespace std;

struct infoMhs{
    int nim, tahunAngkatan;
    string nama, prodi;
};

struct doubleLinkedList{
    infoMhs info;
    doubleLinkedList *prev;
    doubleLinkedList *next; 
}*head, *tail;

void insert(int nim, int tahunAngkatan,string nama, string prodi){
    doubleLinkedList *newNode;
    if(head==NULL)
    {
        head = new doubleLinkedList;
        head->info.nim = nim;
        head->info.tahunAngkatan = tahunAngkatan;
        head->info.nama = nama;
        head->info.prodi = prodi;
        head->prev = NULL;
        head->next = NULL;
        tail = head;
    }
    else
    {
        newNode = new doubleLinkedList;
        newNode->info.nim = nim;
        newNode->info.tahunAngkatan = tahunAngkatan;
        newNode->info.nama = nama;
        newNode->info.prodi = prodi;
        newNode->prev = tail;
        newNode->next = NULL;
        tail->next = newNode;
        tail = newNode;
    }
}
void insertMid(int nim, int tahunAngkatan,string nama, string prodi)
{
    doubleLinkedList *newNode, *midPtr, *lastPtr;
    midPtr = head;
    lastPtr = head;

    newNode = new doubleLinkedList;
    while (lastPtr->next!=NULL && lastPtr->next->next!=NULL)
    {
        lastPtr = lastPtr->next->next;
        midPtr = midPtr->next;
    }
    newNode->info.nim = nim;
    newNode->info.tahunAngkatan = tahunAngkatan;
    newNode->info.nama = nama;
    newNode->info.prodi = prodi;
    newNode->prev = midPtr;
    newNode->next = midPtr->next;
    midPtr->next = newNode;
}
void deleteLast()
{
    doubleLinkedList *temp;
    temp = tail;
    tail = tail->prev;
    tail->next = NULL;
    delete temp;
}
void deleteFirst()
{
    doubleLinkedList *temp;
    temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp;
}
void deleteMid()
{
    doubleLinkedList *temp, *prevTemp,*afterTemp, *last;
    temp = head;
    last = head;

    while(last->next!=NULL && last->next->next!=NULL)
    {
        last = last->next->next;
        prevTemp = temp;
        temp = temp->next;
        afterTemp = temp->next;
    }
    prevTemp->next = afterTemp;
    afterTemp->prev = prevTemp;
    delete temp;

}
void printAllFromLast()
{
    doubleLinkedList *current;
    current = tail;

    while (current!=NULL)
    {
        cout<<"Nama\t :"<<current->info.nama<<"\n";
        cout<<"NIM\t :"<<current->info.nim<<"\n";
        cout<<"Prodi\t :"<<current->info.prodi<<"\n";
        cout<<"Angkatan :"<<current->info.tahunAngkatan<<"\n\n";
        current = current->prev;
    }
    
}
void printAllFromFirst()
{
    doubleLinkedList *current;
    current = head;
    
    while(current!=NULL)
    {
        cout<<"Nama\t :"<<current->info.nama<<"\n";
        cout<<"NIM\t :"<<current->info.nim<<"\n";
        cout<<"Prodi\t :"<<current->info.prodi<<"\n";
        cout<<"Angkatan :"<<current->info.tahunAngkatan<<"\n\n";
        current = current->next;
    }
}
int main()
{
    insert(121140173, 2021, "Ahmad Fadillah", "Teknik Informatika");
    insert(121140178, 2021, "Muhammad Daffa Fahreza", "Teknik Informatika");
    insert(121140187, 2021, "Bani Adam Tampubolon", "Teknik Informatika");
    insert(121140168, 2021, "Andreas Gumarang Sihotang", "Teknik Informatika");
    insertMid(121140189, 2021, "Daniel Dianutama Barus", "Teknik Informatika");
    deleteFirst();
    deleteLast();
    deleteMid();
    printAllFromFirst();
    cout<<"\n";
    printAllFromLast();
}