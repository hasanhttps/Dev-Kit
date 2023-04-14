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

konb = float(input("Konsertin biletinin qiymetini daxil edin :"))
b = float(input("Boyuklerin sayini daxil edin :"))
k = float(input("Usaqlarin sayini daxil edin :"))
konbusaqev = k*0.4*konb 
konbusaq = k*konb
konbusaqsor = konbusaq - konbusaqev
konbboyuk = b*konb
konumumi = konbusaqsor +konbboyuk
print("Umumi xerclenecek mebleg",konumumi,"'dir.")