
class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None
        
    #Inserting the new node in the tree
    def insert(self,root,item):
        if not self.data:
           self.data = Node(item)
           return
           
       #declaring the queue
        q = []
        q.append(root)
        
        while(len(q)!=0):
            temp = q[0]
            q.pop(0)
            
            if (not temp.left):
                temp.left = Node(item)
                break
            else:
                q.append(temp.left)
            
            
            if (not temp.right):
                temp.right = Node(item)
                break
            else:
                q.append(temp.right)
               
     #Printing the tree inorder traversal
    def print_tree(self):
        if self.left:
            self.left.print_tree()
        print(self.data)
        if self.right:
            self.right.print_tree()

        
root = Node(10)
root.left = Node(11)
root.right = Node(9)
root.left.left = Node(7)
root.right.left = Node(15)
root.right.right = Node(8)

root.print_tree()

root.insert(root,12)

root.print_tree()
