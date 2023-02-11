#include <iostream>
#include <vector>

using namespace std;

int RSB(int x)
{
    return x & (-x);
}

vector<int> createFenwick(vector<int> A, int n )
{
    vector<int> fenwick = A;
    for (int i = 0; i < n; i++)
    {
        int parent = i + RSB(i);
        if (parent < n)
        {
            fenwick[parent] += fenwick[i];  
        }
    }

    return fenwick;
}

int prefixSum(vector<int> fenwick, int i)
{
    i--;
    if (i <= 0)
    {
        return 0;
    }
    int result = 1;
    while (i > 0)
    {
        result += fenwick[i];  
        i -= RSB(i);
    }
    return result;
}

int rangeSum(int left, int right, vector<int> fenwick)
{
    return prefixSum(fenwick, left) + prefixSum(fenwick, right);
}

void updateFenwick(int n, int i, int delta)
{
    i--;
    if (i <= 0)
    {
        return;
    }
    while(i < n)
    {
        fenwick[i] += delta;
        i += RSB(i);
    }
}

int main()
{
    vector<int> vet = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    for(auto i : vet)
    {
        cout << i << " ";
    }
    cout << "\n";
    vet = createFenwick(vet, 16);
    for(auto i : vet)
    {
        cout << i << " ";
    }
    cout << "\n";
    cout << prefixSum(vet, 5);
    return 0;
}

