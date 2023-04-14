#If else elif
"""
if sert :
    ptint()
    ptint()
ptint()


"""
"""if 6>8:
  print("6 boyukdur 5-den")
print("end")
number = float(input("eded girin :"))
if number % 2 == 0 :
    print("bu eded cutdur")"""
"""
admin = (input("Log in :"))
parol = (input("Parolu daxil edin :"))
if admin == admin and parol == admin :    
    print("Welcome")
print("end")
"""   
#-----------------------------------------------------------------------------------------------
#ELSE --> 
"""login = input("login :")
if login == "Cavid":
    print("Welcome World")
else:
    print("login sehvdir!")
print("end")
"""
"""ed = int(input("eded daxil edin :"))
if ed <= 100  and ed>=1:
    print("OLur")
else:
    print("1 ve 100 arasinda deil")"""
"""
ed = int(input("Ededi daxil edin :"))
if ed % 3 == 0 and ed % 5 and ed % 7 :
    print("Edede bolunur.")
else :
    print("bolunmur")"""
#Task 3
"""num = int(input("iki reqemli eded daxil edin :"))
if num   % 11 == 0 :
    print("polinqrom beraberdir")
else:
    print("beraber deil ")"""
    
"""il = int(input("Ili daxil edin :"))
if il % 4 ==0 :
    print("Uzun ildir")
else :
    print("uzun il deil")"""
#-------------------------------------------------------------------------------------------------------------------------------------------------------------
# -->>ELIF<<--
#elif ifden sonra gelir coxlu if olduqda her birini oxumayacaq sadece ifden sonra ellif isletdikde her birini yoxlamayacaq 
#ve belelikle optimizasiya etmis olacaqyiq ve interpretatorun isi asand olacaqdir.elif mutleq sekilde ife bagli olmalidir ifsiz islenmir.

"""pul = float(input("pulu daxil edin :"))
avro = 2.10 * pul
dollar = 1.7 * pul
rubl =  50 * pul
av = 1
dol = 2
rub = 3
secim = int(input("(1- dollar 2- avro 3- rubl)secin :"))
if secim == 1 :
    print(dollar)
elif  secim == 2:
    print(avro)
elif secim == 3 :
    print(rubl)"""

#-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
#Nested If
#Istediyimiz vaxd ifin icerisinde if islede bilerik .
#------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#Ev tapsirigi 8
#1. Ədədin cüt və ya tək olmasını təyin edən program yazın
"""ed = float(input("eded daxil edin :"))
if ed % 2 == 0:
    print("eded cutdur.")
else:
    print("eded cut deil.")
print(".....")"""
#-------------------------------------------------------------------------------------
#2. İki ədəd daxil edin onlardan kiçik olanı ekrana çıxarın.( 41,42 - Ekrana -
#Kiçik ədəd 41dir çıxsın)
"""ed1 = float(input("Birinci ededi daxil edin :"))
ed2 = float(input("Ikinci ededi daxil edin :"))
if ed1 > ed2 :
    print("kicik olan eded -->",ed2)
elif ed2>ed1 :
    print("kicik olan eded -->",ed1)
else :
    print("ededler beraberdir.")"""
#------------------------------------------------------------------------------------
#3. Daxil edilən ədədin mənfi və ya müsbət olmasını təyin edən program
#yazın. ( 0 halını da nəzərə alın)
"""daxiledileneded = float(input("Ededi daxil edin :"))
if daxiledileneded > 0 and daxiledileneded != 0 :
    print("eded musbetdir")
elif daxiledileneded <0 :
    print("eded menfidir")
else: 
    print("eded ne menfi ne musbetdir eded 0 dir.")"""
"""4. Kalkulyator düzəltməli. İki kəsr ədəd daxil edilir a və b. Ekrana seçimlər
çıxır
1) a + b
2) a – b
3) a * b
4) a / b
Seçilən rəqəmə əsasən, nəticə ekrana çıxır"""
"""a = float(input("Kesr eded daxil edin :"))
b = float(input("kesr eded daxil edin :"))
select = int(input("1 ve 4 arasi secim edin 1) a + b  2) a - b  3) a * b 4) a / b  :")) 
if select == 1 :
    print(a+b)
elif select == 2 :
    print(a-b)
elif select == 3 :
    print(a*b)
elif select == 4 :
    print(a/b)"""
#-------------------------------------------------------------------------------------------------
#5. İstifadəçi ədəd daxil edir, ədədin 1-50 aralığında olub olmadığını yoxlayan
#program yazın.
"""eded = float(input("Ededi daxil edin :"))
if eded >= 1 and eded <= 50 :
    print("eded 1 - 50 arasinda bir ededdir .")
else :
    print("eed 1- 50 arasinda bir eded deil .")
"""
#--------------------------------------------------------------------------------------------------.
#6. İstifadəçi iki ədəd daxil edir. ( X və Y ) Əgər X Y-ə qalıqsız bölünürsə
# ekrana Yes çıxır, əks halda No.
"""x = float(input("eded daxil edin :"))
y = float(input("eded daxil edin :"))
if x % y == 0 :
    print("Yes")
else :
    print("No")"""
#-------------------------------------------------------------------------------------------------------
#7. İstifadəçi ədəd daxil edir. Onun 3-ə, 5-ə, 7-ə bölünüb bölünməməsini
# (qalıqsız) yoxlayın. (Ayrı-ayrı)
"""eded = float(input("eded daxil edin :"))
if eded % 3 == 0 :
    print("eded 3 e qaliqsiz bolunur.")
elif eded % 5 == 0 :
    print("eded 5e qaliqsiz bolunur.")
elif eded % 7 == 0 :
    print("eded 7e qaliqsiz bolunur.")
else :
    print("eded 7e 5e 3e qaliqli bolunur .")"""
#-------------------------------------------------------------------------------------------------------
#8. Ədədin modulunu hesablayan program yazın.
"""eded = float(input("eded daxil edin :"))
eded1 = eded * -1
if eded < 0 :
    print("ededin  modulu -->",eded1)
elif eded >= 0 :
    print("ededin modulu -- >",eded)
else:
    print("Herf deil , eded daxil edin :")"""
#-------------------------------------------------------------------------------------------------------------
#9. Maximum 4 rəqəmli ədəd daxil edilir. Ədədin neçə rəqəmdən ibarət
# olduğunu hesablayan program yazın.
"""eded = float(input("Maximum 4 reqemli eded daxil edin:"))
if eded >= -9 and eded <= 9 :
    print("eded tek reqemlidir .")
elif eded >= -99 and eded <= 99 :
    print("eded iki reqemlidir")
elif eded >= -999 and eded <= 999:
    print("ededn 3 reqemlidir .")
else:
    print("eded 4 reqemlidir")"""
#-----------------------------------------------------------------------------------------------------------------
#10. 5 rəqəmli ədəd daxil edilir. Onun ploindrom olub olmamasını təyin edən
# program yazın.
"""num = int(input("5 reqemli eded daxil edin :"))
if num   % 11111 == 0 :
    print("polinqrom beraberdir")
else:
    print("beraber deil ")"""
#--------------------------------------------------------------------------------------------------------------------------
#11. Əvvəldən şifrə saxlanılır. Istfiadəçi şifrə daxil edir , əgər şifrə bazadakı
# şifrəyə bərabər olsa, ekrana , --Access succesfully completed-- çıxır, əks
# alda --Acces denied-- çıxır.
Password = 12345

inputpass = int(input("Kodunuzu daxil edin :"))
if inputpass = Password :
    print("--Acsses succsesfully completed--")
else :
    print("--Acces denied--")
print(......)  
    

#-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------