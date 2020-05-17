from itertools import permutations
def Permutations(string):
    result = permutations(string)
    for i in result:
        print("".join(i), end = ' ')
    return 0
 
    
if __name__ == "__main__":
    t = int(input())
    while(t>0):
        for _ in range(t):
            string = input()
            list_1 =[]
            for i in string:
                list_1.append(i)
            list_1.sort()
            Permutations(list_1)
            print()
            t = t-1
        
