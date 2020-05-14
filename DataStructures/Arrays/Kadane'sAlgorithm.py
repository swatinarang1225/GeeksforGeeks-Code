def subarrays(arr,n):
    max_so_far = max(arr)
    inner_max = 0
      
    for i in range(0, n): 
        inner_max = inner_max + arr[i] 
        if inner_max < 0: 
            inner_max = 0
        elif (max_so_far < inner_max): 
            max_so_far = inner_max              
    print( max_so_far )
    return 0
if __name__ == '__main__':
    t = int(input())
    while(t>0):
        n = int(input())
        arr = [int(x) for x in input().strip().split()]
        subarrays(arr,n)
        t = t-1
