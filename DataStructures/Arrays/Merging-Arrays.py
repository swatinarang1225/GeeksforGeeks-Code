def Merge(arr_n,arr_m):
    output = arr_n +arr_m
    output.sort()
    print(" ".join(map(str,output)))
    return 0
        
    
if __name__ =="__main__":
    t = int(input())
    while(t>0):
        n_m = [int(x) for x in input().strip().split()]
        arr_n = [int(x) for x in input().strip().split()]
        arr_m = [int(x) for x in input().strip().split()]
        Merge(arr_n,arr_m)
        t = t-1
        
