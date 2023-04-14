
# menu = """
#         [1]   --> yeni telebe elave etmey
#         [2]   --> Secilmish telebeni Edit etmey
#         [3]   --> Secilmish telebeni silmey
#         [4]   --> Ada  gore searching
#         [5]  --> Email daxil edilmish telebenin yashinin oyrenilmesi
#         [6]  --> Eyni groupda olan telebelerin siyahisi
#         [7]  --> butun telebeler
#         [8]  --> Telebenin istirakinin qeyd edilmesi
#         [9]  --> Telebenin qiymetlerinin emaile gore print edilmesi 
#         [0]  --> EXIT
# """

# class Student:
#   def __init__(self,name,surname,fathername,brithyear,group,email,qayib):
#     self.name = name
#     self.surname = surname
#     self.fathername = fathername
#     self.brithyear = brithyear
#     self.group = group
#     self.email = email
#     self.qayib = qayib
#   def calculateage(self):
#     import datetime
#     age = datetime.date.today().year - self.brithyear
#     return age
#   def edit(self,name , surname, fathername , brithyear, group):
#     self.name = name
#     self.surname = surname
#     self.fathername = fathername
#     self.brithyear = brithyear
#     self.group = group
#   def studentinfoshow(self):
#     return f"{self.name} {self.surname} {self.fathername}  {self.brithyear}  {self.group}  {self.email}  {self.qayib}"

# first_student = Student("Hesen","Abdullazade","Huseyn",2008,"11a","admin@gmail.com",[0,1,1,1,0,1])


# allstudent = {
#   first_student.email:first_student
# }

# allstudent["admin@gmail.com"]


# while True: 
#   print(menu)
#   select = input("Menyudan secim edin : ")

  
#   if select == "1":
#     email = input("Email daxil edin : ")

#     if email in allstudent:
#       print("Bu email movcuddur")
#     else:
#       ad = input("Adinizi daxil edin : ")
#       soyad = input("Soydinizi daxil edin : ")
#       ataadi = (input("Ata adinizi daxil edin : "))
#       dogumili = int(input("Dogum ili daxil edin : "))
#       group = input("Qrup adini daxil edin :")
#       qayib = []

#       student = Student(ad,soyad,ataadi,dogumili,group,email,qayib)

#       allstudent.update({student.email:student})
    
    
#   if select == "2":
#     emailsearch = input("Telebenin emailini daxil edin : ")
#     if emailsearch in allstudent:
#       addeisim = input("Deismek istediyinz adi daxil edin : ")
#       soyadeisim = input("Deismek istediyiniz soyadfi daxil edin : ")
#       atadideisim = input("Deismek istediyiniz ata adini daxil edin : ")
#       yasdeisim = int(input("Deismek istediyiniz yasi daxil edin : "))
#       group = input("Deismek istediyiniz qrupu daxil edin : ")

      
#       allstudent[emailsearch].edit(addeisim,soyadeisim,atadideisim,yasdeisim,group)
#   if select == "3":
#     emaildelete = input("Emaili daxil edin :")

    
#     if emaildelete in allstudent:
#       allstudent.pop(emaildelete)
#   if select == "4":
#     emailsearching = input("Telebenin emailini daxil edin ;")
    
#     if emailsearching in allstudent:
#       print(allstudent[emailsearching].studentinfoshow())
#   if select == "5":
#     email = input("Telebenin emailini daxil edin : ")

#     if email in allstudent:
#       print(allstudent[email].calculateage())
#   if select == "6":
#     groupdeisim = input("Qrupu daxil edin : ")

#     for i in allstudent.values():
#       if i.group == groupdeisim:
#         print(allstudent[i.email].studentinfoshow())
#   if select == "7":
#     for key,value in allstudent.items():
#       print(value.studentinfoshow())
#   if select == "8":
#         gmail = input("Telebenin emailini daxil edin :")
#         for i in allstudent.values():
#           if i.email == gmail:
#             istirak_qeyd = int(input("Istifadeci dersde istirak edibse 1 ,eks halda istirak etmeyibse zehmet olmsa 0'i secin : "))
#             i.qayib.append(istirak_qeyd)
#   if select == "9":
#     dail = input("Telebenin emailini daxil edin : ")
#     for d in allstudent.values():
#       if d.email == dail:
#         print(d.qayib)
#   if select == "0":
#     print("Bye Bye")
#     break





my_list = [1,2,3,4]
print(my_list[-3:-2])
1&0