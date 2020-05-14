def Missing(arr,n):
    sum_actual = sum(arr)
    sum_expected = 0
    for i in range(1, n+1):
        sum_expected = sum_expected +i
    missing_number = sum_expected - sum_actual
    print(missing_number)
    return 0


if __name__ == '__main__':
    t = int(input())
    while(t>0):
        n = int(input())
        arr = [int(x) for x in input().strip().split()]
        Missing(arr,n)
        t=t-1
