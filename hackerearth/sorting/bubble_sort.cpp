#include <iostream>
#include <vector>

using namespace std;

int bubbleSort(vector<int> a)
{
    int count = 0;
    int n = a.size();
    bool swapped = true;

    while (swapped)
    {
        swapped = false;
        count = count+1;
        for (int i = 0; i < n-2; i++)
        {
            if (a[i] > a[i+1])
            {
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
                swapped = true;
            }
        }
    }

    return count;

}

int main() {
    int num;
    cin >> num;  
    vector<int> arr;
    while (num --)
    {
        int x;
        cin >> x;

        arr.push_back(x);

    }

    cout << bubbleSort(arr);

}
