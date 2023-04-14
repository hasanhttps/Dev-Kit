# 1. while-dan istifadə edərək, valyuta mübadiləsi, kalkuyator,
# mili kilometrə çevirən programları sonsuz dövrə salın.
# import os
# import time


# menu = "[1] -- Valyuta mubadilesi\n[2] -- Kalkulyator\n[3] -- Convert Mil to km\n[0] -- Cixis etmek"

# while True:
#     print(menu)
#     menu_secim = int(input("Zehmet olmasa yuxaridakilerden birini secin : "))
    
#     if menu_secim == 1:
#         valyuta_secim = int(input("Zehmet olmasa asagidakilerden birini secin :\n[1] -- Azn to Dollar\n[2] -- Azn to Euro\n[3] -- Azn to Rubl\n[0] -- Cixis etmek\n ---- "))
#         azn = float(input("Azn'i daxil edin : "))
#         if valyuta_secim == 1:
#             avro = azn * 0.58
#             print(avro)
#         elif valyuta_secim == 2:
#             dollar = azn * 0.59
#             print(dollar)
#         elif valyuta_secim == 3:
#             rubl = azn * 34.41
#             print(rubl)
#         elif valyuta_secim == 0:
#             time.sleep(1)
#             os.system("cls")
#             break
#     elif menu_secim == 2:
#         try:

#             print("""
#             1) a + b
#             2) a – b
#             3) a * b
#             4) a / b
#             0) Exit
#             """)
#             secim = int(input("Zehmet olmasa yuxaridaki islemlerden birisini secin : "))

#             if secim == 1:
#                 eded_1 = float(input("Zehmet olmasa A ededini daxil edin  : "))
#                 eded_2 = float(input("Zehmet olmasa B ededini daxil edin  : "))
#                 netice = eded_1 + eded_2
#                 islem = "+"
#             elif secim == 2:
#                 eded_1 = float(input("Zehmet olmasa A ededini daxil edin  : "))
#                 eded_2 = float(input("Zehmet olmasa B ededini daxil edin  : "))
#                 netice = eded_1 - eded_2
#                 islem = "-"
#             elif secim == 3:
#                 eded_1 = float(input("Zehmet olmasa A ededini daxil edin  : "))
#                 eded_2 = float(input("Zehmet olmasa B ededini daxil edin  : "))
#                 netice = eded_1 * eded_2
#                 islem = "*"
#             elif secim == 4:
#                 eded_1 = float(input("Zehmet olmasa A ededini daxil edin  : "))
#                 eded_2 = float(input("Zehmet olmasa B ededini daxil edin  : "))
#                 netice = eded_1 / eded_2
#                 islem = "/"
#             elif secim == 0:
#                 time.sleep(1)
#                 os.system("cls")
#                 break
#             else:
#                 print("Zehmet olmasa seciminizi 1 ve 4 arasi edin .")
                
#             print(f"{eded_1} {islem} {eded_2} = {netice}.")
#         except ValueError:
#             print("Eded ve ya secim yerine simvol yazila bilmez.Yalniz ve yalniz reqem yazila biler.")
#         except ZeroDivisionError as zero_error:
#             print(zero_error)
#         except NameError:
#             print("Secim duzgun edilmeyib.")
#     elif menu_secim == 3:
#         mil = int(input("Zehmet olmasa daxil etmek istediyiniz mil miqdarini daxil edin : "))
#         km = mil * 1609
#         print(f"{mil} mil, {km} km edir.")
#     time.sleep(4)
#     os.system("cls")

# 2. Klaviaturadan 10 tam ədəd daxil edilir, mənfi ədədlərin
# faizini, müsbət ədədlərin faizini və 0-ların faizini tapın.

# menfi = 0
# musbet = 0
# sifir = 0
# count = 0

# while count < 10:
#     eded = int(input("Zehmet olmasa eded daxil edin : "))
    
#     if eded < 0:
#         menfi +=1
#     elif eded > 0:
#         musbet +=1
#     elif eded == 0:
#         sifir +=1
    
#     count +=1
    
# print(f"Menfi ededler butun ededlerin {menfi*10}%\'ini teskil edir\nMusbet ededler butun ededlerin {musbet*10}%\'ini teskil edir\nSifirlar ise butun ededlerin {sifir*10}%\'ini teskil edir.")

# 3. Klaviaturadan 10 tam ədəd daxil edilir. Cütlərin və
# təklərin neçə faiz olduğunu hesablayan proqram yazın.


# cut = 0
# tek = 0
# count = 0

# while count < 10:
#     eded = int(input("Zehmet olmasa eded daxil edin : "))
#     if eded %2==0:
#         cut +=1
#     else:
#         tek +=1
#     count +=1
        
# print(f"Tekler {tek*10}% , Cutler ise {cut*10}% teskil edir.")


# 4. İstənilən ədədin polindrom olub olmamasını yoxlayan
# proqram yazın.

# eded = int(input("Zehmet olmasa ededi daxil edin : "))
# ededin_klonu = eded
# reverse_number = 0
# while ededin_klonu>0:
#     eded_reqem = ededin_klonu%10
#     reverse_number = (reverse_number *10)+eded_reqem
#     ededin_klonu //=10
    
# if eded == reverse_number:
#     print("Eded polindromdur.")
# else:
#     print("Eded polindrom deil.")

# 5. 1-100 arasındakı bütün sadə ədədləri çıxaran program
# yazın. Burada, dövr içərisində dövr işlətməlisiniz. Xarici
# dövr 1-100 arasında hərəkət edəcək. Daxili dövr isə
# ədədin sadə olub olmadığını yoxlayacaq.

# count = 1

# while count <= 100:
#     bolunme_sayi = 0
#     eded = 2
#     while (eded <= count//2): 
#         if count % eded == 0:
#             bolunme_sayi+=1
#             break
#         eded +=1
    
#     if bolunme_sayi == 0 and count != 1:
#         print(count,end="  ")
#     count+=1

# 6. Rəqəmi sola sürüşdürən program yazmalısınız. İstifadəçi
# iki ədəd daxil edir. (məs. 12345 və 3, çıxışda 45123
# rəqəmi alınmalıdır)


eded = int(input("Ededi daxil edin : "))
surusdurme = int(input("Surusdurme sayini daxil edin : "))
eded_klon = eded
count = 0
while eded_klon > 0:
    count+=1
    eded_klon //=10
summer = count - surusdurme#8
surusdurulmus_reqem = eded // 10**summer
qalan_eded = eded % 10**summer#89
surusdurulen_eded = (qalan_eded * 10**(surusdurme))+surusdurulmus_reqem
print(surusdurulen_eded)


# 7. İstifadəçi tarix daxil edir (gün,ay,il). Yazdığınız program
# həmin günün həftənin hansı günü olduğunu təyin edir.
# (Nəzərə alın ki , ilk gün -- yəni 01.01.01 - Bazar ertəsidir)

#Bu esas isleyendi digeri islemir

# c = int(input("Il daxil edin : "))
# b = int(input("Ay daxil edin : "))
# a = int(input("Gun daxil edin : "))
# if c >1 :
#     if c%4 == 0:
#         a=a+366*c
#         a=a-1
#     else:
#             a = a+365*c
#             a =a-1
#     if b == 1 :
#         if c == 1:
#             a=a
#         else:
#             a=a-1
#         if b == 2:
#             a=a+30

#     elif b == 3:
#         if c%4 == 0:
#             a=a+62
#         else:
#             a=a+58
#     elif (b == 4):
#         if(c%4 == 0):
#             a=a+93
#         else:
#             a=a+89
#     elif (b == 5):
#         if(c%4 == 0):
#             a=a+123
#         else:
#             a=a+119
#     elif (b == 6):
#         if(c%4 == 0):
#             a=a+154        
#         else:
#             a = a+150        
#     elif (b == 7):
#         if(c%4 == 0):
#             a=a+184
#         else:
#             a=a+180
#     elif (b == 8):
#         if(c%4 == 0):
#             a=a+215
#         else:
#             a=a+211
#     elif (b == 9):
#         if(c%4 == 0):
#             a=a+246
#         else:
#             a=a+242
#     elif (b == 10):
#         if(c%4 == 0):
#             a=a+276
#         else:
#             a=a+272
#     elif (b == 11):
#         if(c%4 == 0):
#             a=a+307
#         else:
#             a=a+303
#     elif (b == 12):
#         if(c%4 == 0):
#             a=a+337
#         else:
#             a=a+333
#     a +=1
#     if(a%7 == 1):
#         print("Bazar ertesidir.")
#     elif(a%7 == 2):
#         print("Cersenbe axsamidir.")
#     elif(a%7 == 3):
#         print("Cersenbedir.")
#     elif(a%7 == 4):
#         print("Cume axsamidir.")
#     elif(a%7 == 5):
#         print("Cume gunudur.")
#     elif(a%7 == 6):
#         print("Senbe gunudur.")
#     elif(a%7 == 0):
#         print("Bazar gunudur.")




# gun = int(input("Zehmet olmasa bugun gunu daxil edin : "))
# ay  = int(input("Zehmet olmasa bu ayi daxil edin : "))
# il = int(input("Zehmet olmasa bu ili daxil edin : "))
# try_gun = 0
# try_ay = 1
# while True:
#     if il % 4 == 0 and il % 100 != 0:
        
#         while try_ay != ay:
#             if try_ay % 2 != 0 or try_ay == 8 or try_ay == 10 or try_ay == 12:
#                 try_gun += 31
#                 try_ay +=1
#             elif try_ay % 2 == 0 and try_ay != 2 or try_ay == 9 or try_ay == 11:    
#                 try_gun +=30
#                 try_ay +=1
#             elif ay == 2:
#                 try_gun += 29
#         umumi_gun = ((il - 1)* 366) + try_gun + gun
#     else:
#         while try_ay != ay:
#             if try_ay % 2 != 0 or try_ay == 8 or try_ay == 10 or try_ay == 12:
#                 try_gun += 31
#                 try_ay +=1
#             elif try_ay % 2 == 0 and try_ay != 2 or try_ay == 9 or try_ay == 11:    
#                 try_gun +=30
#                 try_ay +=1
#             elif ay == 2:
#                 try_gun += 28
#         umumi_gun = (il - 1) * 365 + try_gun + gun
#     if umumi_gun > 0:
#         break
# while True :
#     if umumi_gun // 10 == 0 and umumi_gun != 8 and umumi_gun != 9:
#         break
#     umumi_gun -=7
# if umumi_gun == 1:
#     print("Bazar ertesi")
# elif umumi_gun == 2:   
#     print("2ci gun")
# if umumi_gun == 3:
#     print("Cersenbe")
# elif umumi_gun == 4:
#     print("Cume Axsami")
# elif umumi_gun == 5:
#     print("Cume")
# elif umumi_gun == 6:
#     print("Senbe")
# elif umumi_gun == 7:
#     print("Bazar")

