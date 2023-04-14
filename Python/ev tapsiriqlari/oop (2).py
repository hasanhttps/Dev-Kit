class Car:
    def __init__(self,marka,model,il):
        self.marka = marka 
        self.model = model
        self.il = il
    def car_info(self):
        return (f"Marka -- {self.marka} , Model -- {self.model} , Il -- {self.il}")

class torence(Car):
    def __init__(self,marka,model,il,sedan,kupe,offroad):
        super().__init__(marka,model,il)
        self.sedan = sedan 
        self.kupe = kupe
        self.offroad = offroad
    def car_info(self):
        return f"Marka -- {self.marka}, Model -- {self.model} , Il -- {self.il} , Sedan -- {self.sedan} , Kupe -- {self.kupe} , Offroad -- {self.offroad}"
        
class pickup(torence):
    def __init__(self, marka, model, il, sedan, kupe, offroad,hecm):
        super().__init__(marka, model, il, sedan, kupe, offroad)
        self.hecm = hecm
    def car_info(self):
        return f"Marka -- {self.marka}, Model -- {self.model} , Il -- {self.il} , Sedan -- {self.sedan} , Kupe -- {self.kupe} , Offroad -- {self.offroad} , Hecm -- {self.hecm}"

pick = pickup("Mazda", "cx5", "2020", 8, 4, 4, 198)
print(pick.car_info())
        
masin = Car("mercedes", 700, 2008)
print(masin.car_info())

toren = torence("bmw","cx5", 2016, 8, 2, 4)
print(toren.car_info())
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