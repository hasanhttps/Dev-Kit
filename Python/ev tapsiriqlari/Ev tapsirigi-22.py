class Car:
    def __init__(self,marka,model,il):
        self.marka = marka
        self.model = model 
        self.il = il
    def carinfo(self):
        return f"Marka -- {self.marka}\n Model -- {self.model}\n Il -- {self.il}"

class Sedan(Car):
    def __init__(self, marka, model, il,oturacaqsayi):
        super().__init__(marka, model, il)
        self.oturacaqsayi = oturacaqsayi
    def carinfo(self):
        return f"Marka -- {self.marka}\n Model -- {self.model}\n Il -- {self.il}\n Oturacaqsayi -- {self.oturacaqsayi}"

class kupe(Car):
    def __init__(self, marka, model, il , Open_door):
        super().__init__(marka, model, il)
        self.Open_door = Open_door
    def carinfo(self):
        return f"Marka -- {self.marka}\n Model -- {self.model}\n Il -- {self.il}\n Acilan Oturacaqsayi -- {self.Open_door}"

class offroad(Car):
    def __init__(self, marka, model, il , teker_olcu):
        super().__init__(marka, model, il)
        self.teker_olcu = teker_olcu
    def carinfo(self):
        return f"Marka -- {self.marka}\n Model -- {self.model}\n Il -- {self.il}\n Teker Olcusu -- {self.teker_olcu}"
    
class pickup(offroad):
    def __init__(self, marka, model, il, teker_olcu ,luggage):
        super().__init__(marka, model, il, teker_olcu)
        self.luggage = luggage
    def carinfo(self):
        return f"Marka -- {self.marka}\n Model -- {self.model}\n Il -- {self.il}\n Teker Olcusu -- {self.teker_olcu}\n Yuk Dasima max -- {self.luggage}"
    
    
masin = Car("bmw", 700, 2009)
print(masin.carinfo())

setan = Sedan("honda", "eh44", 2003, 4)
print(setan.carinfo())

kup = kupe("toyota","pirius" , 2015, 2)
print(kup.carinfo())

offra = offroad("hummer","climb5", 2018, 38)
print(offra.carinfo())

pick = pickup("mazda", "cx5", 2019, 25, 234)
print(pick.carinfo())