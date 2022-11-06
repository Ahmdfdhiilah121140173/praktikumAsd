#include<iostream>
using namespace std;

struct infoMhs{
    int nim, tahunAngkatan;
    string nama, prodi;
};

struct circularDoubleLinkedList{
    infoMhs info;
    circularDoubleLinkedList *next; 
}*head, *tail;

void insert(int nim, int tahunAngkatan,string nama, string prodi){
    circularDoubleLinkedList *newNode;
    if(head==NULL)
    {
        head = new circularDoubleLinkedList;
        head->info.nim = nim;
        head->info.tahunAngkatan = tahunAngkatan;
        head->info.nama = nama;
        head->info.prodi = prodi;
        head->next = head;
        tail = head;
    }
    else
    {
        newNode = new circularDoubleLinkedList;
        newNode->info.nim = nim;
        newNode->info.tahunAngkatan = tahunAngkatan;
        newNode->info.nama = nama;
        newNode->info.prodi = prodi;
        newNode->next = head;
        tail->next = newNode;
        tail = newNode;
    }
}
void insertMid(int nim, int tahunAngkatan,string nama, string prodi)
{
    circularDoubleLinkedList *newNode, *midPtr, *lastPtr;
    midPtr = head;
    lastPtr = head;

    newNode = new circularDoubleLinkedList;
    while (lastPtr->next!=head && lastPtr->next->next!=head)
    {
        lastPtr = lastPtr->next->next;
        midPtr = midPtr->next;
    }
    newNode->info.nim = nim;
    newNode->info.tahunAngkatan = tahunAngkatan;
    newNode->info.nama = nama;
    newNode->info.prodi = prodi;
    newNode->next = midPtr->next;
    midPtr->next = newNode;
}
void deleteLast()
{
    circularDoubleLinkedList *temp, *current;
    current = head;
    temp = tail;
    while (current->next!=tail)
    {
        current = current->next;
    }
    current->next = head;
    tail = current;
    delete temp;
}
void deleteFirst()
{
    circularDoubleLinkedList *temp;
    temp = head;
    tail->next = temp->next;
    head = head->next;
    delete temp;
}
void deleteMid()
{
    circularDoubleLinkedList *temp, *prevTemp, *last;
    temp = head;
    last = head;

    while(last->next!=head && last->next->next!=head)
    {
        last = last->next->next;
        prevTemp = temp;
        temp = temp->next;
    }
    prevTemp->next = temp->next;
    delete temp;

}
void printAll()
{
    circularDoubleLinkedList *current;
    current = head;
    
    while(current->next!=head)
    {
        cout<<"Nama\t :"<<current->info.nama<<"\n";
        cout<<"NIM\t :"<<current->info.nim<<"\n";
        cout<<"Prodi\t :"<<current->info.prodi<<"\n";
        cout<<"Angkatan :"<<current->info.tahunAngkatan<<"\n\n";
        current = current->next;
    }
    cout<<"Nama\t :"<<current->info.nama<<"\n";
    cout<<"NIM\t :"<<current->info.nim<<"\n";
    cout<<"Prodi\t :"<<current->info.prodi<<"\n";
    cout<<"Angkatan :"<<current->info.tahunAngkatan<<"\n\n";
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
     printAll();
}