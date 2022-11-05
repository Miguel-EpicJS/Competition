#include <iostream>

using namespace std;

    class MyVector {
        int *int_arr;
        int capacity;
        int current;
    public:
        MyVector() {
            int_arr = new int[1];
            capacity = 1;
            current = 0;
        }
        void Push(int nData);
        void PushData(int nData, int index);
        void PopData();
        int  GetData(int index);
        int  GetSize();
        void Print();
    };

    void MyVector::Push(int data)
    {
        if (current == capacity){
            int *temp = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                temp[i] = int_arr[i];
            }

            delete[] int_arr;
            capacity *= 2;

            int_arr = temp;
        }
        int_arr[current] = data;
        current++;
    }
    void MyVector::PushData(int data, int index)
    {
        if (index == capacity){
            Push(index);
        }
        else
            int_arr[index] = data;
    }
    void MyVector::PopData(){
        current--;
    }

    int MyVector::GetData(int index)
    {
        if (index < current){
            return int_arr[index];
        }
    }

    int MyVector::GetSize()
    {
        return current;
    }

    void MyVector::Print()
    {
        for (int i = 0; i < current; i++) {
            cout << int_arr[i] << " ";
        }
        cout << endl;
    }
    
    int main()
    {
        MyVector vect;
        vect.Push(10);
        vect.Push(20);
        vect.Push(30);
        vect.Push(40);

        vect.Print();

        std::cout << "\nTop item is "
            << vect.GetData(3) << std::endl;

        vect.PopData();
        vect.Print();

        cout << "\nTop item is "
            << vect.GetData(1) << endl;
        return 0;
    }
