#include<iostream>
using namespace std;

struct infoMhs{
    int nim, tahunAngkatan;
    string nama, prodi;
};

struct circularDoubleLinkedList{
    infoMhs info;
    circularDoubleLinkedList *next; 
    circularDoubleLinkedList *prev;
}*head, *tail;

bool isEmpty(){
    if(head == NULL){
        return true;
    }
    return false;
}
void insertFirst(int nim, int tahunAngkatan,string nama, string prodi){
    circularDoubleLinkedList *newNode;
    if(isEmpty())
    {
        head = new circularDoubleLinkedList;
        head->info.nim = nim;
        head->info.tahunAngkatan = tahunAngkatan;
        head->info.nama = nama;
        head->info.prodi = prodi;
        head->next = head;
        head->prev = head;
        tail = head;
    }
    else
    {
        newNode = new circularDoubleLinkedList;
        newNode->info.nama = nama;
        newNode->info.nim = nim;
        newNode->info.prodi = prodi;
        newNode->info.tahunAngkatan = tahunAngkatan;
        newNode->next = head;
        newNode->prev = tail;
        head->prev = newNode;
        tail->next = newNode;
        head = newNode;
    }
}
void insertLast(int nim, int tahunAngkatan,string nama, string prodi){
    circularDoubleLinkedList *newNode;
    if(isEmpty())
    {
        head = new circularDoubleLinkedList;
        head->info.nim = nim;
        head->info.tahunAngkatan = tahunAngkatan;
        head->info.nama = nama;
        head->info.prodi = prodi;
        head->next = head;
        head->prev = head;
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
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}

void deleteLast()
{
    circularDoubleLinkedList *temp;
    temp = tail;
    tail = tail->prev;
    tail->next = head;
    delete temp;
}
void deleteFirst()
{
    circularDoubleLinkedList *temp;
    temp = head;
    tail->next = temp->next;
    head = head->next;
    head->prev = tail;
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
    insertLast(121140173, 2021, "Ahmad Fadillah", "Teknik Informatika");
    insertLast(121140178, 2021, "Muhammad Daffa Fahreza", "Teknik Informatika");
    insertLast(121140187, 2021, "Bani Adam Tampubolon", "Teknik Informatika");
    insertLast(121140168, 2021, "Andreas Gumarang Sihotang", "Teknik Informatika");
    insertFirst(121140188, 2021, "Ihsan Triyadi", "Teknik Informatika");
    deleteFirst();
    deleteLast();
    printAll();
}