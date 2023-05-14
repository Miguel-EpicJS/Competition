#include <stdio.h>

#define MAXN 500000

int arr[MAXN];

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int count = 0, sum = 0;
    int hash[MAXN + 1] = {0};
    hash[0] = 1;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
	if (sum - k >= 0)
	    count += hash[sum - k];
        hash[sum]++;
    }
    printf("%d", count);
    return 0;
}
