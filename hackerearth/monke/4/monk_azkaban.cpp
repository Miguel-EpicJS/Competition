#include <stdio.h>
#include <stack>
using namespace std;

int main() {
    int n,j; scanf("%d", &n);
    long long int arr[n];
    for(int i=0; i<n; i++){
        scanf("%lld", &arr[i]);
    }
    int right[n], left[n]; // 'right' stores values of x, 'left' stores values of y.
    stack<long long int> values, indexes;
    // Calculating values of y for each element of array
    for(int i=0; i<n; i++){
        while(!values.empty() && arr[i] > values.top()){
            right[indexes.top()] = i + 1;
            values.pop();
            indexes.pop();
        }
        values.push(arr[i]);
        indexes.push(i);
    }
    while(!values.empty()){
        right[indexes.top()] = -1;
        values.pop();
        indexes.pop();
    }
    // Calculating values of x for each element of array
    for(int i=n-1; i>=0; i--){
        while(!values.empty() && arr[i] > values.top()){
            left[indexes.top()] = i + 1;
            values.pop();
            indexes.pop();
        }
        values.push(arr[i]);
        indexes.push(i);
    }
    while(!values.empty()){
        left[indexes.top()] = -1;
        values.pop();
        indexes.pop();
    }
    for(int i=0; i<n; i++) printf("%d ", left[i] + right[i]);
}
