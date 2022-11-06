#include <iostream>
using namespace std;

#define maxsize 100

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
    void deQueue();
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
void Queue::deQueue()
{
    if (this->tail != -1)
    {
        this->head++;
    }
}

void Queue::display()
{
    for (int i = this->head; i <= this->tail; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
void inputAneh(Queue *queue, Queue *mainQueue)
{
    if (mainQueue->head <= mainQueue->tail)
    {
        if (mainQueue->array[mainQueue->head] > queue->array[queue->tail])
        {
            queue->enQueue(mainQueue->array[mainQueue->head]);
            mainQueue->deQueue();
        }
    }
}
int main()
{
    Queue mainQueue;
    int N;
    cout << "Masukan Jumlah N : ";
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int Xi;
        cout << "Masukan Nilai X" << i + 1 << " : ";
        cin >> Xi;
        mainQueue.enQueue(Xi);
    }
    Queue antrian[3];

    for (int i = 0; i < 3; i++)
    {
        if (antrian[i].tail == -1)
        {
            antrian[i].enQueue(mainQueue.array[mainQueue.head]);
            mainQueue.deQueue();
        }
        while (mainQueue.array[mainQueue.head] > antrian[i].array[antrian[i].tail] && (mainQueue.head < mainQueue.tail))
        {
            antrian[i].enQueue(mainQueue.array[mainQueue.head]);
            mainQueue.deQueue();
        }
    }
    for (int i = 0; i < 3; i++)
    {
        inputAneh(&antrian[i], &mainQueue);
    }

    int i = 0;

    while (mainQueue.head <= mainQueue.tail)
    {
        if (antrian[i].array[antrian[i].head] > antrian[i + 1].array[antrian[i + 1].head])
        {
            if (antrian[i].array[antrian[i].head] > antrian[i + 2].array[antrian[i + 2].head])
            {
                if (antrian[i + 1].array[antrian[i + 1].head] > antrian[i + 2].array[antrian[i + 2].head])
                {
                    antrian[i + 2].deQueue();
                    mainQueue.deQueue();
                }
                else
                {
                    antrian[i + 1].deQueue();
                    mainQueue.deQueue();
                }
            }
            else
            {
                antrian[i].deQueue();
                mainQueue.deQueue();
            }
        }
        else if (antrian[i + 1].array[antrian[i + 1].head] > antrian[i + 2].array[antrian[i + 2].head])
        {
            if (antrian[i + 1].array[antrian[i + 1].head] > antrian[i].array[antrian[i].head])
            {
                if (antrian[i + 2].array[antrian[i + 2].head] > antrian[i].array[antrian[i].head])
                {
                    antrian[i].deQueue();
                    mainQueue.deQueue();
                }
                else
                {
                    antrian[i + 2].deQueue();
                    mainQueue.deQueue();
                }
            }
            else
            {
                antrian[i + 1].deQueue();
                mainQueue.deQueue();
            }
        }
        else if (antrian[i + 2].array[antrian[i + 2].head] > antrian[i].array[antrian[i].head])
        {
            if (antrian[i + 2].array[antrian[i + 2].head] > antrian[i + 1].array[antrian[i + 1].head])
            {
                if (antrian[i].array[antrian[i].head] > antrian[i + 1].array[antrian[i + 1].head])
                {
                    antrian[i + 1].deQueue();
                    mainQueue.deQueue();
                }
                else
                {
                    antrian[i].deQueue();
                    mainQueue.deQueue();
                }
            }
            else
            {
                antrian[i + 2].deQueue();
                mainQueue.deQueue();
            }
        }
    }
    cout<<"Data Telah di proses!\n";
    for (int i = 0; i < 3; i++)
    {
        cout<<"Antrian ke-"<<i+1<<":\n";
        antrian[i].display();
    }

    return 0;
}