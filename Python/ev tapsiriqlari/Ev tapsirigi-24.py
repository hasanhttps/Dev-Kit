class CentralProsessingUnit:
    def __init__(self,*argument):
        self.argument = argument

    def sort(self,reverse): 
        self.reverse = reverse
        print(self.reverse)
        yenilist = list(self.argument)
        if self.reverse == "reverse":
            yenilist.sort()
            yenilist.reverse()
        elif self.reverse == "":
            yenilist.sort()
        
        return yenilist

        

    def sum(self):
        d = 0
        for i in list(self.argument):
            d+=i
        return d
    def max(self):
        max_eded = 0 
        for i in list(self.argument):
            if i > max_eded:
                max_eded = i
        return max_eded
    def min(self):
        list2 = list(self.argument)
        list2.sort()
        list2 = list2[0]
            
        return list2
    def eded_sayi(self):
        coun = len(list(self.argument))
        return coun
    def indeks_search(self,element):
        self.element = element
        indeks = list(self.argument).index(self.element)
        return indeks
            
Cpu_1 = CentralProsessingUnit(100,10,1,9,0,1,2,3,4,5)

print(Cpu_1.sort(""))
print(Cpu_1.sum())
print(Cpu_1.max())
print(Cpu_1.min())
print(Cpu_1.eded_sayi())
print(Cpu_1.indeks_search(100))

