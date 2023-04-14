
# import random
# list1 = []



# for i in range(0,5):
#     list2 = []
#     while True:

       
#         sade = 0
#         number = 1
#         f = random.randint(1000, 99999)
        
#         while f >= number:
            
#             if f % number == 0:
#                 sade +=1
#             number +=1
#         if sade == 2:
#             list2.append(f)
#         if len(list2) == 5:
#             break
            
#     list1.append(list2)


# print(list1)
        
    
# import random
        
# list1 = []

# for i in range(10):
#     list1=[]
#     d = 0
#     for i in range(0,10):
#         list2 = []
        

#         for i in range(0,5):
#             rand = random.randint(100, 999)
#             d += rand
#             list2.append(rand)


# import random


# list1 = []

# while True:
    
#     eded = random.randint(-20, 20)
#     number =1
#     sade = 0
#     while eded >= number:
#         if eded % number == 0:
#             sade +=1
#         number +=1
#     if sade == 2:
#         eded =-1 * eded
#         list1.append(eded)
#     if len(list1) == 20:
#         break
# # print(list1)
# import string
# list1 = []
# import random

# say = int(input("Say daxil edin : "))
# s3 = string.ascii_letters


# for i in range(say):
#     herf =""
#     for i in range(3):
#         k = random.choice("sghhfsjksjkd")
#         herf += k

#     list1.append(herf)  
# print(list1)







# class F:
    
#     def __init__(self,list1):
#         self.list1 = list1
        
#     def tapilma(self):
#         float_list = []
#         int_list = []
#         for i in self.list1:
#             if type(i) == int:
#                 float_list.append(i)
#             elif type(i) == float:
#                 int_list.append(i)
#         return f"Float -- {float_list}\n Int -- {int_list}"
                
# funksiya = F([1.0,2,3.2,5,6,7,8,9,2.0])
# print(funksiya.tapilma())



# class F:
#     listb = []
    
#     def funktion(self,list1,list2):
#         for i in self.list1:
#             if i not in  list2:
#                 listb.append(i)

#         return set(listb)


# import random
# class F:
#     def massiv(self):
#         maxd = 0
#         list1 = []
#         newlist = []
#         d = []
#         k = 0
#         for i in range(20):
#             rand = random.randint(-10,20)
#             print(rand)
#             list1.append(rand)
#             print(list1)
#         for i in list1:
#             if i > 0 and type(i)==int:
#                 d.append(i)
#                 maxd +=i
#                 if maxd > k:
#                     k = maxd
#                     newlist.append(i)
#             else:
#                 maxd = 0
#         return  newlist
# fgh = F()
# print(fgh.massiv())

# fullName = "123456789*/"
# print(fullName[6: 10])# Axrinci indeks cixmir
# # name = "Hakuna"

# # print(name.center(50, "*"))
# # text = ["adim","Hesendir"]
# # # newList_2 = text.split(" ")#Liste cevirir

# # " ".join(text)

# # print(text)
# newList = ["Banan", "Alma", "Nar", "Heyva"]

# text = ",".join(newList)

# print(text)



# # def findCount(*args):#Tuple qaytarir
# #     print(type(args))

# # findCount(1,1,54,1,54,1,45,1,56,"grege","Ergerg", True, False)
import random
d = int(input("Say daxil edin : "))
list2 = []
k = []

def funksiya(d):
    global list2
    global k
    f = random.randint(9999, 99999) 
    number = 0
    say = 0
    while number <= f:
        number +=1
        if f % number == 0:
            say +=1
        elif say > 2:
            f = random.randint(9999, 99999) 
            number = 0
            say = 0
        
    if d == 0:
        return k
    if say == 2 :
        k.append(f)
        return funksiya(d-1)

print(funksiya(d))