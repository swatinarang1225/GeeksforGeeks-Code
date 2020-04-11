for i in range(T):
    N, D = input().split()
    arr = list(input().split())
    c = int(D)
    rotated_arr = arr[c:] + arr[0:c]
    print(*rotated_arr)
