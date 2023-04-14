class Car:
    def __init__(self,model,marka,il,qiymet):
        self.model = model
        self.marka = marka
        self.il = il
        self.qiymet = qiymet
        
    def Calculateyear(self):#Eger icerisinde selfden istifade edirikse argument yerine self yazmaq mecburdur
        year = 2022 - self.il
        return year
    
    def carinfo(self):
        print(f"Marka{self.model}")
        print(f"Marka{self.marka}")
        print(f"Il{self.il}")
        print(f"Qiymet{self.qiymet}")
        
        
audi = Car("A7","Audi",2019,52000)
print(audi.Calculateyear())#audi .calculateyear return etdiyiucun onu printe vermek mutleqdir.
audi.carinfo()



# class circle:
#     def __init__(self,radius,pi):
#         self.radius = radius
#         self.pi = pi
#     def sahe(self):
#         print(self.pi * self.radius**2)
#     def uzunluq(self):
#         print(2 * self.pi * self.radius)
# obyekt = circle(3, 3.14)
# obyekt.uzunluq()


# class rectangle:
#     def __init__(self,en,uzunluq):
#         self.en = en
#         self.uzunluq = uzunluq
#     def perimetr(self):
#         print(2 * (self.en + self.uzunluq))
#     def sahe(self):
#         print(self.en * self.uzunluq)
#     def dioqnal(self):
#         i = 1
#         while True:
#             if i**2 == (self.en**2) + (self.uzunluq**2):
#                 print(f"Duzbcaqlinin diaqnali -- {i}")
#                 break
#             i+=1
            
# duzbucaq = rectangle(3, 4)
# duzbucaq.perimetr()
# duzbucaq.sahe()
# duzbucaq.dioqnal()
# import math   
# class triangle: 
    
#     def __init__(self,en):
#         self.en = en
#     def hundurluk(self):
#         x = self.en#4
#         y = self.en /2#2
#         y = int(y)
#         i= 1
#         h = (x**2 - y**2)
#         h = math.sqrt(h)
#         print(round(h))

#     def perimetr(self):
#         print(f"Perimetr -- {self.en * 3}")
#     def sahe(self):
#         x = self.en#4
#         y = self.en /2#2
#         y = int(y)
#         i= 1
#         h = (x**2 - y**2)
#         h = math.sqrt(h)
#         sahe = h*x
#         print(f"Sahe -- {sahe}")
# ucbucaq = triangle(2)
# ucbucaq.perimetr()
# ucbucaq.hundurluk()
# ucbucaq.sahe()


class person:
    def __init__(self,name,surname,age):
        self.name = name
        self.surname = surname
        self.age = age
        
class worker(person):
    def __init__(self, name, surname, age, it ,mail):
        super().__init__(name, surname, age)
        self.it = it
        self.mail = mail
    def check_mail(self):
        if self.mail.count("@gmail.com"):
            return "Duzgundur"
        else:
            return "Sehv meildir"
        
class teacher(worker):
    def __init__(self, name, surname, age,it,mail,ixtisas,kofedarya):
        super().__init__(name, surname, age, it ,mail)
        self.ixtisas = ixtisas
        self.kofedarya = kofedarya
    def check_mail(self):
        if self.mail.count("@hotmail.com"):
            return "Duzgundur"
        else:
            return "Sehvdir"

class Student(person):
    def __init__(self, name, surname, age,it,mail,ixtisas,propeyt,score):
        super().__init__(name, surname, age)
        self.ixtisas = ixtisas
        self.propeyt = propeyt
        self.score = score
        
class decan(teacher,worker):
    def __init__(self, name, surname, age,it,mail,ixtisas,kofedarya):
        teacher.__init__(self, name, surname, age, it, mail, ixtisas, kofedarya)
        
    def check_mail(self):
        if self.mail.count("@gmail.com"):
            return "Duzgundur"
        else:
            return "Sehv meildir"
        
    
obj = person("hesen","abdullazade", 13)

work = worker("hesen", "abdullazade", 15 , "t46578", "hesenabdullazad@gmail.commm")

kit = teacher("Hesen", "d", 17, "hgdfyu787687", "nbsdh@gmail.com", "it", "11a")

student = Student("jbv", "kjyui", 43, "it", "sjkdfj", 16 ,"ghgh","jhgg")

print(kit.check_mail())
print(work.check_mail())