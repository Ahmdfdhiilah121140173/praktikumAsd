#include <iostream>
#define maxsize 100
using namespace std;

class Queue
{
public:
    int head, tail, array[maxsize];
    Queue()
    {
        head = -1;
        tail = -1;
    }
    void enQueue(int value);
    void display();
};

void Queue::enQueue(int value)
{
    if (this->head == -1)
    {
        this->head = 0;
    }
    array[++this->tail] = value;
}

void Queue::display()
{
    for (int i = this->head; i <= this->tail; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    Queue mainQueue;
    int max, N;
    cout << "Masukan Jumlah Queue: ";
    cin >> max;
    cout << "Masukan Jumlah N: ";
    cin >> N;
    for (int i = 0; i < max; i++)
    {
        int x;
        cout << "Masukan Queue ke-" << i + 1 << ": ";
        cin >> x;
        mainQueue.enQueue(x);
    }

    Queue queue[N];
    int mainIdx = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < max / N; j++)
        {
            queue[i].enQueue(mainQueue.array[mainIdx]);
            mainIdx++;
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << "Queue ke-" << i + 1 << " :\n";
        queue[i].display();
    }
}