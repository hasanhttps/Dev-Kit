
#                                                                        ===========================Stringler============================




# #--------------------------------------------------------------------------------------------------------------------------------------

# #String SLICE
# # fulname  = "JHSGFHGSDKJGHSJKDF"   
# # print(fulname[6:10])--start ve end verilir
# # print(fulname[:10])--en basdan en sona default olaraq verilir
# # print(fulname[10:])--10 dan sona qeder 
# # print(fulname[:])--basdan sona qedere hamisni print edir
# # print(fulname[0:15:2])--rangedeki kimi step yerine yani 3cu parametrde nece nece artacagini deye bilirik ve ya azalacagini
# fulname ="123456789"
# # print(fulname[6:1:-1])--sira nomresi ile isleyir
# # print(fulname[::-1])--fulnameni ters cevirir

# #--------------------------------------------------------------------------------------------------------------------------------------
# #String Methods

# # count -->> Count metodu  verilmish elementin sayini tapir
# # print(fulname.count("7"))
# # index()-->> sagdan sola axtarir
# # rindex()-->> soldan saga ededin hansi sirada yerlesdiyini deir
# # len()--funksiya musteqil dir 

# # print(fulname.index("3"))

# # print(fulname.index("0"))#error->> olmayan elemeenti verdikde error atir

# #------------------------------------------------------------------------------------------------------------------------------------

# # find() ve rfind()

# # Find eledikde ve ya rfind  etdikde elemt tapildiqda index verilir tapilmadiqda -1 verilir

# #------------------------------------------------------------------------------------------------------------------------------------

# # surname = "HhsjHappLoWkApitalisE"
# # eded = "23"

# # .capitalize() -- >> Gues my number -- sadece ilk herifi boyudur
# # .lower() -- >> gues my number -- butun herfleri kicildir
# # .upper() -- >> GUES MY NUMBER -- butun herfleri boyudur 
# # .title() -- >> Gues My Number -- burun sozlerin bas herfini boyudur

# # change methods -->> verilmish stringi tapir
# # Bunlarin hamisi change methodlardir .

# # check methods -->> yoxlanis metodlari
# # ==================================
# #.isupper()--Hamisi boyuk olanda true verir.
# #.islower()-- Hamisi kicik olanda True verir.
# #.isalpha()--Elifbada olan herflerden basqa bir simvol isledilibse o zaman False verecek.
# # print(eded.isnumeric())
# # .isdigit,.isalnum .isnumeric ile eyni seydir
# # Bunlarin hamisi change methodlardir .

# #------------------------------------------------------------------------------------------------------------------------------------

# name = "Hakuna"

# """# print(name.center(50,"*"))

# # print(name.ljust(50,"*"))--soz soldaa yerlesir 50 ulduz sagda

# # print(name.rjust(50,"*"))--sozu sagda yerlesdiririr 
# # ev tapsiriginda var diqetle bax
# # """

# #------------------------------------------------------------------------------------------------------------------------------------

# #strip()  lstip() rstip()
# # print(name.strip())-- dedikde deyisenin daxilindeki butun spaceleri silir
# # print(name.ltrip())-- dedikde deyisenin solundaki butun boshluqlari silir rstrip ise sagdakilari silir



# #------------------------------------------------------------------------------------------------------------------------------------
# s ="hesen oxuyur hesen"
# #.replace(old,new) 

# # print(s.replace("hesen", "cavid muellim"))
# # print(s.replace("hesen", "cavid muellim",1))-- ilk 1ini tapir ve belelikle sadece birini evez edir

# #------------------------------------------------------------------------------------------------------------------------------------
# # print(s.lower().count("h"))-- Belelikle key sensietiveni aradan qaldirir

# #startswitdth
# #endswidth

# # print(s.startswith("hesen"))
# #Multiline komment \n oldugu ucun startswith




#--------------------------------------------------------------------------------------------------------------------------------------

# menyu ="""Ashaqidaki Emeliyyatlardan birini secin: 
#     [p]    --   Emeliyyatlarin print edilmesi:
#     [r]    --   AZN balansi artirmaq
#     [k]    --   AZN balansdan pul cixarmaq:
#     [d]    --   DOLLAR balansdan pul cixarmaq
#     [t]    --   AZN to Dollar transver
#     [ab]   --   AZN Balansa baxmaq
#     [db]   --   DOLLAR Balansa baxmaq
#     [e]    --   Exit -->>"""

# aznbalans = 10
# dollarbalans = 10

# while True:
#     try:
#         menu = input(menyu)
#         if menu == "p":
#             print(menu)
                   
#         elif menu == "e":
#             break
#         elif menu == "r":
#             eded = int(input("AZN balansinizi artirmaq ucun artirmaq istediyiniz meblegi daxil edin : "))
#             aznbalans += eded
#             print(f"Balansiniz {aznbalans} manat meblegindedir")
#         elif menu == "k":
#             cixart = int(input("AZN balansinizinizdan cixarmaq istediyiniz meblegi daxil edin : "))
#             if cixart > 0 and cixart <= aznbalans:
#                 sonbalans = aznbalans - cixart
#                 aznbalans = sonbalans
#                 print(f"balansinizdan {cixart} mebleginde pul cixarildi qaldi {sonbalans}.")
#             elif cixart <= 0 :
#                 print("Cixardacaginiz mebleg 0 dan kicik ola bilmez.")          
#             else:
#                 print("Cixaracaginiz mebleg Balansinizdan kicik ola bilmez")
#         elif menu == "ab" :
#             print(aznbalans + dollarbalans * 1.7 ,"manat deyerinde balansiniz var.")
                
#         elif menu == "d" :
#             cixar = int(input("Dollar balansinizinizdan cixarmaq istediyiniz meblegi daxil edin : "))
#             if cixar > 0 and cixar != dollarbalans:
#                 sondollar = dollarbalans - cixar
#                 dollarbalans = sondollar
#                 print(f"balansinizdan {cixar} mebleginde pul cixarildi qaldi {sondollar}.")
#             elif cixar <= 0 :
#                 print("Cixardacaginiz mebleg 0 dan kicik ola bilmez.")
#         elif menu == "t":
#             select = int(input("""Secim edin:
# [1]Dollar to azn 
# [2]Azn to dollar -- >>"""))
#             if select == 1 :
#                 Mebleg = float(input("Cevirmek istediyiniz  mebleginizi daxil edin : "))
#                 transver = Mebleg * 1.7
#                 print(f"{Mebleg} dollar {transver} manat edir.")
#             elif select == 2 :
#                 Meble = float(input("Cevirmek istediyiniz dolar meblegini daxil edin : "))
#                 transver =  Meble / 1.7
#                 print(f"{Meble} manat {transver} dollar edir.")
#         elif menu == "db" :
#             print(dollarbalans + aznbalans / 1.7 ,"dollar deyerinde balansiniz var.")
#         else:
#             print("Zehmet olmasa duzgun secim edin !!!")
#     except ValueError:
#         print("Zehmet olmasa daxil etdiyiniz secimleri duzgun edin reqem daxil edilmesi lazim olan yere herf daxil edile bilmez !!! ")       



# while True :
#     Ad = input("Adinizi daxil edin : ")
#     if Ad.lower() == Ad and Ad.isalpha() == True:
#         print("Secim dogrudur")
#         break
#     else :
#         print("Dogru secim edin .")
#         continue

surname = "HhsjHappLoWkApitalisE"
if surname.count("H") > 0 :
    print("Beli isleyir")