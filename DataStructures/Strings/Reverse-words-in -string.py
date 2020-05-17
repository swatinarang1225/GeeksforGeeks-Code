if __name__ == "__main__":
    n = int(input())
    for _ in range(n):
        string = input().split(".")
        string.reverse()
        print(".".join(string))
            
       
