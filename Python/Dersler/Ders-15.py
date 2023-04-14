#Functiouns -->> Mueyyen bir isi icra eden kod blokudur.


#len() -->> funksiyadir


#newlist = []


#newlist.clear()-->> method

#-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#Function declaration -->> funksiyanin yaradilmasi (elan) olunmasi

#funksiya xususi def -->> keywordu ile isleyir

# def sayhi():
#     pass
#     #body

#sayhi() -->> funksiyanin cagrilmasi , ise salinmasi

# def sayhi():
#     print("Salam dostlar!!")
    
# sayhi()

# a = 3

# b = 8

# def sum():
#     print(a+b)
# sum()
#----------------------------------------------------------------------------------------------------------------------------------------------------------
#Ideal Function

#1 - Funksiya adi gorduyu ise uygun olmalidir.
#2 - Funksiyanin comenti serti olmalidir.
#3 - Funksiya yalniz bir ish elemelidir.
#4 - Eyni adda funksiya ola bilmez.


# def foo():
#     """
#     Salam funksiya izahi budur
#     """
# foo()

#----------------------------------------------------------------------------------------------------------------------------------------------------------

#Musbet terefleri

#1 - Funksiya kod tekrarinin arsisini alir

#2 - Kodu daha yigcam edir isimizi cox asand edir.

#3 - Isimizi asandlasdirir.

#----------------------------------------------------------------------------------------------------------------------------------------------------------
# a = 5 
# b = 15

# def sum():#Funksiya yarandi.
#     print(a + b)#Kod icra olundu


# sum()#dedikdebize toplayib cavabi verecek#Interpretator burani oxuduqdan sonra basdan kodu oxuyur def yaratdiginiz funksiyani gorur ve hemin sum() a geri dondukde bunu oraya kopyaliyir eger defin icerisinde 
#bir sey bile deissek butun sum() funksiyasina malik kodlar deisir.

#----------------------------------------------------------------------------------------------------------------------------------------------------------

# a = 5 
# b = 15

# def sum():#Funksiya yarandi.
#     print(a + b)#Kod icra olundu

# f = sum()
# print(f)

#return neticeni geriye return edir


# a = 5 
# b = 15

# def sum():#Funksiya yarandi.
#     c = b - a
#     return c

#----------------------------------------------------------------------------------------------------------------------------------------------------------
# newlist = [0,1,2,3,4,5,6,7,8,9]

# a= max(newlist)

# print(a)

# def _max() :
#     find_max  = newlist[0]
#     for i in newlist:
#         find_max = i
        
        
#Returnden sonra kod islemir
#----------------------------------------------------------------------------------------------------------------------------------------------------------
# student1 = ["Hesen",10]
# student2 = ["Cabir",11]
# student3 = ["Rahib",2]
# student4 = ["Cavid",12]
# student5 = ["Amin",8]

# BC22 = [student1,student2,student3,student4,student5]

# newlist = []

# for i in BC22:
#     if i[1] > 10:
#         print(newlist.append(i))


#---------------------------------------------------------------------------------------------------------------------------------------------------------
# def currentlyYear():
#     import datetime
#     year = datetime.date.today().year
#     return year
# def calculateAge(birthyear):
#     pass

#----------------------------------------------------------------------------------------------------------------------------------------------------------
# student1 = ["Hesen",10]
# student2 = ["Cabir",11]
# student3 = ["Rahib",2]
# student4 = ["Cavid",12]
# student5 = ["Amin",8]


# BC22 = [student1,student2,student3,student4,student5]

# def findstudent(group):
#     newlist = []
#     for i in group:
#        if i[1] > 10 :
#            newlist.append(i)
#     return newlist

# print(findstudent(BC22))#Parametrlerin daxil edilmesi

#----------------------------------------------------------------------------------------------------------------------------------------------------------

# def cem(num1,num2,num3):
#     """num1 : int
#     num2 : int"""
#     return num1+num2+num3
# a = cem(21,23,10)
# print(a)

#----------------------------------------------------------------------------------------------------------------------------------------------------------

#Default parametr -->> 

# def cem(num1,num2,num3,num4 = 0,num5 = 0,num6):
#     return num1+num2+num3+num4+num5+num6


# print(cem(5,6,3))
#Default deyer vermek sag terefden baslayir soldan baslasa error vere biler.

#----------------------------------------------------------------------------------------------------------------------------------------------------------

#Task 1

# def maxim(max):
#     maximum = 0
#     for i in max:
#         if maximum < i:
#             maximum = i
#     return maximum
        
# print(maxim([1,3,5,3]))

# def minim(min):
#     minimum = 0
#     for i in min:
#         if minimum > i:
#             minimum = i
#     return minimum
        
# print(minim([1,3,5,3]))

#----------------------------------------------------------------------------------------------------------------------------------------------------------

#Task2 

# def faktorial(a):
#     count = 1
#     for i in range(1,a +1):
#         count = count * i
#     return count

# print(faktorial())

#----------------------------------------------------------------------------------------------------------------------------------------------------------

