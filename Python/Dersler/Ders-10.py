
# import random
# while True :
#     Ad = input("Adinizi daxil edin : ")
#     x = random.choice(Ad)
#     if x.upper() == x and x.lower() == x :
#         print("x"+"x")
#---------------------------------------------------------------------------------------------------------------------------------------------
# import string
# upper = string.ascii_uppercase
# lower = string.ascii_lowercase
# AllAlpha = string.ascii_letters
# symbol = string.punctuation
# nums = string.digits
# Hexsymbol = string.hexdigits # 16liq say sisteminde her seyi simvolu cixardir
# ocsymbol = string.octdigits # 8lik say sistemi qarsiligini verir
# print(upper)
# print(lower)
# print(AllAlpha)
# print(symbol)
# print(nums)

# print(Hexsymbol)
# print(ocsymbol)
#-------------------------------------------------------------------------------------------------------------
# ord()
# chr()


# print(ord("A"))#Asctablede sirasini gosderir
# print(chr(36))#Utf8 Asxii table sirasina gore verir



#-------------------------------------------------------------------------------------------------------------
#Practics
# full = "Salam menim adim hesen soy adim eliyev"
# for i in full:
#     print(i)
# for i in range(len(full)):
#     print(i)
#     for i in range(len(full)):
#         print(full[i])
# for i in range(5):
#     for j  in range(5):
#         if i == 1:
#             print("A",end=" ")
#         elif i == 2 :
#             print("B",end=" ")
#         elif i == 3:
#             print("C",end=" ")
#         elif i == 4:
#             print("D",end=" ")     
#         elif i == 5:
#             print("E",end=" ")                              
#     print()
#  for i in range(65,70):
#     for j  in range(5):
#         print(chr(i),end=" ")
#     print()
#TASK 1
# ch = 5
# for i in range(69,64,-1):
#     for j  in range(ch):
#         print(chr(i),end=" ")
#     ch -=1
#     print()
#TASK2
"""
import random
import string
boy = int(input("Nece dene Boyuk eded isteyirsiniz daxil edin : "))
kic = int(input("Nece dene Kicik eded isteyirsiniz daxil edin : "))
sym = int(input("Nece dene Symbol eded isteyirsiniz daxil edin : "))
reqem = int(input("Nece dene reqem isteyirsinizse daxil edin : "))
passs =""
upper = string.ascii_uppercase
lower = string.ascii_lowercase
symbol = string.punctuation
nums = string.digits
for i in range(boy):
    passs += random.choice(upper)
for i in range(kic):
    passs += random.choice(lower)
for i in range(sym):
    passs += random.choice(symbol)
for i in range(reqem):
    passs += str(random.choice(nums))
print(passs)
"""
"""Şifrənin çətinlik dərəcəsini yoxlayan proqram yazın. Bu bölmədə
qeyd olunan sətir metodlarından istifadə edin.

Istifadeci parol daxil edir, eger parol ashagdaki shertleri odeyirse, print edirsizki guclu paroldur, eks halda zeif paroldu.
QEYD: 
1) Eger zeif parol daxil edibse yeniden parol daxil etmeyni isteyirsiz.(sonsuz shekilde, o vaxta kimi ki, guclu parol daxil etsin)
2) Eger guclu parol daxil edibse, kod bitmelidir.

Yoxlamanı aşağıdaki meyarlara uyğun aparın:
1. Uzunluq: 8 simvoldan başlayaraq.(parol minimum 8 symbol olmalidir)
2. Latın əlifbasının böyük və kiçik hərfləri: A, a, Z, z.(parolda  en azi 1 kicik ve 1 boyuk herf olmalidir)
3. Rəqəmlər: 0-dan 9-a kimi.(parolda  en azi 1 reqem olmalidir)
4. Simvollar: @, #, %, & (parolda bu symbollardan en azi 1-i olmalidir)
"""
import random
import string
while True:
    password = input("Parolunuzu daxil edin : ")
    upper = string.ascii_uppercase
    lower = string.ascii_lowercase
    nums = string.digits
    sym = " @, #, %, &"
    if len(password) >= 8 :
        for i in range(0,10000000000):
            i = random.choice(upper)
            if password.count(i) > 0:
                for i  in range(0,1000000000000000000000000000000000000):
                    i = random.choice(lower)
                    if password.count(i) > 0 :
                        for i in range(0,10000000000):
                            i = random.choice(nums)
                    
                            if password.count(i) > 0  :
                                for i in range(0,10000000000):
                                    i = random.choice(sym)
                                    if password.count(i) > 0  :
                                        print("Kodunuz dogrudur .....")
                                        break
                                
    else:
        print("Zehmet olmasa dogru secim edin .")
        continue
import string
while True:
    password = input("Yaratmaq istediyiniz kodu daxil edin :  ")
    if len(password) > 8:
        if password.isalpha()==False and password.isnumeric()==False and password.isupper()==False and password.islower()==False\
                and password.count("@")==True or password.count("#")==True or password.count("%")==True or password.count("&")==True:
            print("\nPasswordunuz gucludur\n")
            break
        else:
            print("Kodunuz zeifdir.Zehmet olmasa en azi 1 boyuk kicik herf, 1 simvol ve 1 eded daxil edin.")
            continue
    else:
        print("Kodunuz  zeifdir.Zehmet olmasa minimum 8 simvol olmaqla daha cox simvol elave edin .")
        
