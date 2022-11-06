//1. Di dalam rekaman kelas ASD RD pert 4, pak eko menjelaskan tentang parameter pointer hapus di timestamp : 1:41:58. yang terdapat pada sub program DeleteFirst, pointer hapus, digunakan untuk mengambil nilai pada node yang akan dihapus.
//2. Di dalam rekaman kelas ASD RD pertemuan 4, pak eko menjelaskan tentang variabel predTemp, dan temp pada DeleteList pada timestamp: 1:59:05.  temp akan menjadi first dengan data yang sama sedangkan predTemp akan diset NULL, setelah itu ditelusuri dimana letak last selama tidak ditemukan NULL maka akan terus ditelusuri setelah itu alamat setelahnya akan masuk ke predTemp. Jika temp sama dengan alamat awal, maka dilakukan deleteFirst, jika tidak sama maka lakukan deleteAfter yang mana dimasukkan parameternya yakni predTemp.
//3. Program yang sudah di integrasi dari semua program yang ada di materi mg4 : 
#include<iostream>
using namespace std;

struct SLL{
    int var;
    SLL *next;
}*el, *lel;

    
  void createEmpty(){
    el = new SLL;
    el = NULL;
  }
  bool createEmptyBool(){
    el = new SLL;
    return el == NULL;
  }

   void deallocation(SLL* del){ 
      SLL *temp, *curr;
      temp = del;
      curr = el;
      while (curr->next!=temp)
      {
         curr = curr->next;
      }
      curr->next = temp->next;

      delete del;
   }
  void createHead(int var){
     el = new SLL;
     el->var = var;
     el->next = NULL;
     lel = el;
  }
   void addFirst(int var){
      SLL *newNode;
      newNode = new SLL;
      newNode->var = var;
      newNode->next = el;
      el = newNode;
   }
   void addLast(int var){
      SLL *newNode;
      newNode = new SLL;
      newNode->var = var;
      newNode->next = NULL;
      lel->next = newNode;
      lel = newNode;
   }
   void deleteFirst(){
      SLL *temp;
      temp = el;
      el = el->next;
      delete temp;
   }
   void deleteMid(){
      SLL *prev, *fastPtr, *slowPtr;
      fastPtr = el;
      slowPtr = el;
      
      while(fastPtr->next!=NULL && fastPtr->next->next!=NULL){
         fastPtr = fastPtr->next->next;
         prev = slowPtr;
         slowPtr = slowPtr->next;
      }
      prev->next = slowPtr->next;
      delete slowPtr;
   }
    void insertMid(int s){
      SLL *prev, *fastPtr, *slowPtr, *newNode;
      newNode = new SLL;

      fastPtr = el;
      slowPtr = el;
      
      while(fastPtr->next!=NULL && fastPtr->next->next!=NULL){
         fastPtr = fastPtr->next->next;
         prev = slowPtr;
         slowPtr = slowPtr->next;

      }
      newNode->var = s;
      newNode->next = slowPtr->next;
      slowPtr->next = newNode;

   }
   void deleteLast(){
      SLL *temp, *curr;
      curr = el;
      temp = lel;
      while (curr->next!=lel)
      {
       curr = curr->next;  
      }
      curr->next = NULL;
      lel = curr;
      delete temp;
   }
   void pembacaanData(){
       SLL *tmp;
       tmp = new SLL;
       tmp = el;
       while(tmp!=NULL){
        cout<<tmp->var<<" ";
        tmp = tmp->next;
       }
       delete tmp;
   }

int main(){
   createHead(3);
   addFirst(4);
   addLast(8);
   addLast(7);
   addLast(9);
   addLast(8);
   addLast(7);
   addLast(4);
   
   pembacaanData();
   cout<<" \n";
   deleteMid();
   pembacaanData();
   insertMid(100);
   cout<<"\n";
   //x.deallocation(el->next);
   //x.deleteFirst();
   //x.deleteLast();
   pembacaanData();
}

