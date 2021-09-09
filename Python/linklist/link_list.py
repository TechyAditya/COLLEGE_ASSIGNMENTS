class Node:
    def __init__(self, dataval=None):
        self.data=dataval
        self.next=None

    def append(self, dataval):
        if self.data==None:
            self.data=dataval
        else:
            temp=self
            while(temp.next!=None):
                temp=temp.next
            newnode=Node(dataval)
            temp.next=newnode
        

    def __str__(self):
        datalist=[]   # List
        if self.data==None:
            return(str(datalist))
        else:
            temp=self
            datalist.append(temp.data)
            while(temp.next!=None):
                temp=temp.next
                datalist.append(temp.data)
            return(str(datalist))

    def insert_at_beginning(self,dataval):
        if self.data==None:  # list is empty
            self.data=dataval
        else:
            newnode=Node(dataval)
            self.data, newnode.data = newnode.data,self.data
            newnode.next=self.next
            self.next=newnode

    def insert_at_end(self,dataval):
        self.append(dataval)

    def length(self):
        if self.data==None:
            return(0)
        else:
            count=1
            temp=self
            while temp.next!=None:
                count+=1
                temp=temp.next
            return(count)
        
    def insert_at_any_position(self,dataval,pos):
        if pos==1:
            self.insert_at_beginning(dataval)
        elif pos < 1:
            return
        elif pos>self.length():
            return
        else:
            count=1
            temp=self
            while count<pos-1:
                temp=temp.next
                count+=1
            newnode=Node(dataval)
            newnode.next=temp.next
            temp.next=newnode

    def insert_after_node(self, dataval, key):
        if self.data==None:
            return
        ''' if self.length()==0:
                 return'''
        temp=self
        while temp.data!=key:
            temp=temp.next
            if temp.next==None:
                return
        newnode=Node(dataval)
        newnode.next=temp.next
        temp.next=newnode

    def insert_before_node(self,dataval,key):
        if self.data==key:
            self.insert_at_beginning(dataval)
        elif self.data==None:
            return
        else:
            temp=self
            while temp.next.data!=key:
                if temp.next.next==None:
                    return
                else:
                    temp=temp.next
            newnode=Node(dataval)
            newnode.next=temp.next
            temp.next=newnode

    def delete_at_beginning(self):
        if self.data==None:
            return
        elif self.next==None:
            self.data=None
        else:
            self.data=self.next.data
            self.next=self.next.next

    def delete_value(self, key):
        if self.data==None:
            return
        elif self.data==key:
            self.data=self.next.data
            self.next=self.next.next
        else:
            temp=self
            while(temp!=None):
                if temp.next.data==key:
                    temp.next=temp.next.next
                    return
                else:
                    temp=temp.next
                    
                
   
    
             
'''
Insert / Delete into a list
1) At Beginning
2) At the End  (Append in case of Insertion)
3) At any position and delete a node with a particular value
4) Before a node
5) After a node
'''

ll=Node()     # Empty Linked List is created
print(ll)

ll.append(22) # Linked List becomes Singletone
ll.append(33)
ll.append(44)
print(ll)

ll.insert_at_beginning(12)
print(ll)

ll.insert_at_beginning(10)
print(ll)
print(ll.length())

ll.insert_at_any_position(25,4)
print(ll)

ll.insert_at_any_position(5,1)
print(ll)

ll.insert_at_any_position(105,20)
print(ll)

ll.insert_after_node(15, 12)
print(ll)

ll.insert_before_node(14,15)
print(ll)

ll.insert_before_node(14,65)
print(ll)

print("After deletion of First Node")
ll.delete_at_beginning()
print(ll)

ll.delete_value(22)
print(ll)