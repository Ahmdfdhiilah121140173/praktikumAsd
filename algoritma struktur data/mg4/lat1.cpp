#include<iostream>
using namespace std;

struct angka{
    int n;
    angka *next;
}*head;
class function{
    public:
    void Input(int a){
        angka *newNode;
        newNode = new angka;
        newNode->n = a;
        newNode->next = head;
        head = newNode;
    }
    
    void print(){
        while (head!= NULL)
        {
            cout<<head->n<<" ";
            head = head->next;
        }
    }
    /*void sorting(angka *sort){
        int temp;
        for(int i=1; i<=sizeof(sort); i++){
            for(int j=1; j<=sizeof(sort); j++){
                if(sort->n<= sort->next->n){
                    temp = sort->n;
                    sort->n = sort->next->n;
                    sort->next->n = temp;
                }
            }
        }
    }*/
};

int main(){
    function func; 
    int angkaInput;
    string konfirm;

   do{
    cin>>angkaInput;
    func.Input(angkaInput);
    cout<<"Stop? \t YES/NO \n";
    cin>>konfirm;
    }while (konfirm!="YES");
   
    func.print();
    
   
}
