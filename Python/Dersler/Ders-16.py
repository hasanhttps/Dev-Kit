#-------------------------------------------------*args------------------------------**kwargs------------------------------------------------------------

# def findcount(*args):#Args yazilma sebebi qaydanin ismi eledir onun yerine istenilen data ismi yazila biler.Esas burada ulduzdur.
#     print(args)


# findcount(1,2,3,4,6y,y,97606,789,67,5,46,45,5,True,"Salam","False",56)#istenilen sayda ve istenilen tipde data gondere bilerik. Cunki args datani tople kimi qebul edir.

# def findcount(**kwargs):#Adini istenilen kimi qoya bilerik args kimi Meselen : **Ikiulduz vs.
#     print(kwargs)

# findcount(name = "Cavid",surname="15")#Gonderileni dictionary kimi qebul edir deye key value kimi daxil etmelisiniz.

#--------------------------------------------------------------------------------------------------------------------------------------------------------

#Task1

# def funksiya(*args):
#     float1 = 0
#     int1 = 0
#     bool1 = 0
#     str1 = 0
#     for i in args:
#         if type(i) == float:
#             float1 +=1
#         elif type(i) == int:
#             int1 +=1
#         elif type(i) == bool:
#             bool1 +=1
#         elif type(i) == str:
#             str1 +=1
#     return f"{float1}Eded floatdir,{int1}Eded intdir,{bool1}Eded booldur,{str1}Eded strdir"
# print(funksiya(14,14.0,"Salam",True))

#---------------------------------------------------------------------------------------------------------------------------------------------------------

#LEGB

# name = "Cavid"#Globaldadir her bir seyde islene biler.

# def foo ():
#     global name#Dedikde istediyi emeliyyati uzerinde gorur isdese adini deisir deyerini deisir vs.
#     name = 13#Localdir sadece funksiyanin icerisinde islene biler.
#     print(name)


# foo()#Dedikde locali verecek.

#----------------------------------------------------------------------------------------------------------------------------------------------------------

#Non lochal
# def out():
#     name = "out"
#     print(f"{name} Our function")
#     def inner():
#         nonlocal name
#         print(f"{name} inner function")
#     inner()
#     print(name)
# out()

#-----------------------------------------------------------------------------------------------------------------------------------------------------------

#recursiya -- >> funksiyanin oz ozunu cagirmasi

# def foo():
#     print("Salam")

#     foo()
    
# foo()

#------------------------------------------------------------------------------------------------------------------------------------------------------------

# def findfactorial(number): # 3 
    
#     if number == 1:
#         return 1
    
#     return number * findfactorial(number -1)

#----------------------------------------------------------------------------------------------------------------------------------------------------------------

# def findnumber(cem):
#     if len(cem) == 0:
#         return 0
#     k = cem.pop()
#     return findnumber(cem) + k

# print(findnumber([15,2,3,7,9]))

#----------------------------------------------------------------------------------------------------------------------------------------------------------------

# # text = input("Cumleni daxil edin :")
# deisimk = input("Deismek istediyiniz kohne sozu daxil edin : ")
# deismeky = input("Deismek istediyiniz yeni sozu daxil edin : ")
# def myreplace(text,deisimk,deismeky):
#     lis = text.split(" ")
#     count = 0
#     for i in lis:
#         count +=1
#         if deisimk == i:
#             lis.remove(i)
#             lis.insert(count,deismeky)
#     f = " ".join(lis)
#     return f

# print(myreplace(text, deisimk, deismeky))