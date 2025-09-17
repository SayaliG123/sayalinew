class List:
    def __init__(self):
        self.__A=[0]
        self.__n=0

    def accept_list(self):
        print("how many numbers? ")
        self.__n=int(input()) 
        for i in range (1,self.__n+1):
            val=int(input("enter the element: "))
            self.__A.append(val)
    
    def disp_list(self):
        print("this is your list")
        for i in range(1,self.__n+1):
            print(self.__A[i],end=" ")
    
    def adjust(self,i,n):
        no=self.__A[i]
        j=i*2
        while j<=n:
            if j<n and self.__A[j]>self.__A[j+1]:
                j+=1
            if no>self.__A[j]:
                self.__A[j//2]=self.__A[j]
                j=2*j
            else:
                break

            self.__A[j//2]=no

    def heap_sort(self):
        for i in range(self.__n//2,0,-1):
            self.adjust(i,self.__n)

        for i in range(self.__n-1,0,-1):
            temp=self.__A[1]
            self.__A[1]=self.__A[i+1]
            self.__A[i+1]=temp

        print("\n3your sorted list is")
        for i in range (1,self.__n+1):
            print(self.__A[i],end=" ")
            

L=List()
L.accept_list()
L.disp_list()
L.heap_sort()

