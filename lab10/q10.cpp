#include <iostream>
using namespace std;
#define SIZE 10
template <class T>
class queue {
    T *arr;
    int capacity,front,rear,count;
public:
    queue(int size = SIZE){
        arr = new T[size];
        capacity = size;
        front = 0;
        rear = -1;
        count = 0;
    }
    void dequeue(){
        if (count == 0){
            cout << "UnderFlow\nProgram Terminated\n";
            exit(0);
        }
        cout << "Removing " << arr[front] << '\n';
        front = (front + 1) % capacity;
        count--;
        display();
    }
    void enqueue(T item){
        if (count == capacity){
            cout << "OverFlow\nProgram Terminated\n";
            exit(0);
        }
        cout << "Inserting " << item << '\n';
        rear = (rear + 1) % capacity;
        arr[rear] = item;
        count++;
        display();
    }
    void display(){
        if(front == - 1)
            printf("\nQueue is empty\n");
        else{
            printf("\nQueue is : \n");
            for(int i = front; i <= rear; i++)
                printf("%d ", arr[i]);
            printf("\n");
        }
    }
    ~queue(){ delete[] arr;}
};
int main(){
    queue <int> q(3);
    q.enqueue(1);
    q.enqueue(2);
    q.dequeue();
    q.enqueue(3);

    queue <float> q1(3);
    q1.enqueue(1.12);
    q1.enqueue(2.23);
    q1.dequeue();
    q1.enqueue(3.34);
}