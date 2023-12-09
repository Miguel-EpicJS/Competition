import sys

def main():
    t = int(input().strip())

    for _ in range(t):
        n, k = map(int, input().split())
        arr = list(map(int, input().split()))


        if k >= 3:
            print("0")
        elif k == 1:
            ans = sys.maxsize
            for i in arr:
                ans = min(ans, i)
            for i in range(n):
                for j in range(n):
                    if i == j:
                        continue
                    ans = min(abs(arr[i] - arr[j]), ans)
            print(ans)
        else:
            ans = sys.maxsize
            modf = []
            for i in arr:
                ans = min(ans, i)
            for i in range(n):
                for j in range(n):
                    if i == j:
                        continue
                    ans = min(ans, abs(arr[i] - arr[j]))
                    modf.append(abs(arr[i] - arr[j]))

            for i in range(n):
                for j in range(len(modf)):
                    ans = min(ans, abs(arr[i] - modf[j]))

            print(ans)

if __name__ == "__main__":
    main()

