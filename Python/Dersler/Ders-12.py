# import random
# new = []
# for i in range(0,11) :
#     x = random.randint(0, 100)
#     new.append(x)
# print(new)

#Task 2
# import random
# new = []
# eded = int(input("Eded daxil edin bu araliqda edeler numais olunacaq : "))
# eded1 = int((input("EDed daxil edin : ")))
# tam = int(input("Tam eded daxil edin bu sayda eded daxil edilecek:"))
# for i in range(0,tam) :
#     x = random.randint(eded,eded1)
#     new.append(x)
# print(new)
#Task 3

# import random
# new = []
# eded = int(input("Eded daxil edin : "))
# for i in range(0,50) :
#     x = random.randint(0,100)
#     new.append(x)
# print(new.count(eded),f"qeder {eded} var")
# print(new)

#Task 4

# import random
# new = []
# for i in range(0,10) :
#     x = random.randint(-10,30)
#     new.append(x)
    
# for j in new:
#     if j < 0:
#         a = new.index(j)
#         break
# d = sum(new[a+1:])
# print(d)
# print(new)

#Task 5
menu ="""
[1] --> yeni telebe elave etmek 
[2] --> Secilmish telebeni edit etmek 
[3] -->>Secilmish telebeni silmek
[4] --> Ad agore searching
[5] --> Butun telebeler
[0] -->Exitstudent1 = [Cavid,Hesenov,Eli,1965,[10,10,11]]
"""
allstudent = []
student1 = ["Cavid","Hesenov","Eli",1965,[10,10,11]]
student2 = ["Veli","Agayev","Miraga",1998,[6,9,11]]
student3 = ["Elsen","Melikzade","Mahmud",1999,[8,12,7]]
allstudent.append(student1)
allstudent.append(student2)
allstudent.append(student3)
print(menu)
while True:
    secim = input("Menyudan secim edin : ")
    if secim == "1":
        telebe = input("Telebnin adini daxil edin : ")
        telebsoy = input("Telebnin Soyadini daxil edin : ")
        telebeata = input("Telebnin atasinin adini daxil edin : ")
        telebetev = int(input("Telebnin tevelludunu daxil edin : "))
        studentnew = [telebe,telebesoy,telebeata,telebetev,[]]
        allstudent.append(studentnew)
        
    elif secim == "2":
        pass
    elif secim == "3":
            pass
    elif secim == "4":
        pass
    elif secim == "5":
        for student  in allstudent:
            count = 0
            print("Telebnin adi",allstudent[count][0])
            print("Telebnin  soyadi",allstudent[count][1])
            print("Telebnin ata adi",allstudent[count][2])
            print("Telebnin tevelludu",allstudent[count][3])
            print("Telebnin qiymeti",allstudent[count][4])
            count +=1
    elif secim == "0":
        print("bye - bye")
        break
    else:
        print("Secim yanlishdir ...")