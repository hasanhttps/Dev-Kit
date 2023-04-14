# 1. Ədədin cüt və ya tək olmasını təyin edən program yazın.

# eded = int(input("Zehmet olmasa eded daxil edin : "))

# if eded % 2 == 0:
#     print("Eded cutdur")
# else:
#     print("Eded tekdir")
    
# 2. İki ədəd daxil edin onlardan kiçik olanı ekrana çıxarın.( 41,42 - Ekrana -
# Kiçik ədəd 41dir çıxsın)

# eded_1 = int(input("Zehmet olmasa eded daxil edin  : "))
# eded_2 = int(input("Zehmet olmasa eded daxil edin  : "))

# if eded_1 < eded_2:
#     kicik_eded = eded_1
#     print("Kicik eded",kicik_eded,"dir.")
# elif eded_1 == eded_2:
#     print("Ededlerin ikiside de beraberdir.")
# else:
#     kicik_eded = eded_2
#     print("Kicik eded",kicik_eded,"dir.")

# 3. Daxil edilən ədədin mənfi və ya müsbət olmasını təyin edən program
# yazın. ( 0 halını da nəzərə alın)

# eded = int(input("Zehmet olnmasa eded daxil edin : "))

# if eded < 0 :
#     print("eded menfidir.")
# elif eded > 0 :
#     print("Eded musbetdir.")
# else:
#     print("Eded ne menfi ne de musbetdir.")

# 4. Kalkulyator düzəltməli. İki kəsr ədəd daxil edilir a və b. Ekrana seçimlər
# çıxır
# 1) a + b
# 2) a – b
# 3) a * b
# 4) a / b
# Seçilən rəqəmə əsasən, nəticə ekrana çıxır.

# while True:
#     print("""    1) a + b
#     2) a – b
#     3) a * b
#     4) a / b""")
#     secim = int(input("Zehmet olmaasa yuxaridaki islemlerden birisini secin : "))
#     eded_1 = float(input("Zehmet olmasa A ededini daxil edin  : "))
#     eded_2 = float(input("Zehmet olmasa B ededini daxil edin  : "))

#     if secim == 1:
#         netice = eded_1 + eded_2
#     elif secim == 2:
#         netice = eded_1 - eded_2
#     elif secim == 3:
#         netice = eded_1 * eded_2
#     elif secim == 4:
#         netice = eded_1 / eded_2
#     else:
#         print("Zehmet olmasa seciminizi 1 ve 4 arasi edin .")
        
#     print(netice)

# 5. İstifadəçi ədəd daxil edir, ədədin 1-50 aralığında olub olmadığını yoxlayan
# program yazın.

# eded = int(input("Zehmet olmasa eded dail edin : "))

# if eded >= 1 and eded <= 50:
#     print("Eded 1 - 50 araligindadir.")
# else:
#     print("Eded 1- 50 araliginda deil .")

# 6. İstifadəçi iki ədəd daxil edir. ( X və Y ) Əgər X Y-ə qalıqsız bölünürsə
# ekrana Yes çıxır, əks halda No.

# eded_1 = int(input("Zehmet olmasa X ededini daxil edin  : "))
# eded_2 = int(input("Zehmet olmasa Y ededini daxil edin  : "))

# if eded_1 % eded_2 == 0:
#     print("Yes")
# else:
#     print("No")

# 7. İstifadəçi ədəd daxil edir. Onun 3-ə, 5-ə, 7-ə bölünüb bölünməməsini
# (qalıqsız) yoxlayın. (Ayrı-ayrı)

# eded = int(input("Zehmet olmasa eded daxil edin : "))

# if eded % 3 == 0:
#     print("Eded 3 'e qaliqsiz bolunur.")
# if eded % 5 == 0:
#     print("Eded 5'e qaliqsiz bolunur.")
# if eded % 7 == 0:
#     print("Eded 7'e qaliqsiz bolunur")

# 8. Ədədin modulunu hesablayan program yazın.

# eded = int(input("Zehmet olmasa eded daxil edin : "))

# if eded < 0 :
#     eded *= -1
    
# print(eded)

# 9. Maximum 4 rəqəmli ədəd daxil edilir. Ədədin neçə rəqəmdən ibarət
# olduğunu hesablayan program yazın.


# eded = int(input("Zehmet olmasa maksimum 4 reqemli eded daxil edin : "))

# if eded // 10 == 0:
#     print("Eded tek reqemlidir.")
# elif eded // 100 == 0:
#     print("Eded iki reqemlidir.")
# elif eded // 1000 == 0:
#     print("Eded uc reqemlidir.")
# elif eded // 10000 == 0:
#     print("Eded dord reqemlidir.")
# else:
#     print("En cox dord reqemli daxil ede bilersiniz.")

# 10. 5 rəqəmli ədəd daxil edilir. Onun ploindrom olub olmamasını təyin edən
# program yazın.

# eded = int(input("Zehmet olmasa 5 reqemli eded daxil edin : "))

# reqem_1 = eded // 10000
# reqem_2 = (eded//1000)%10
# reqem_3 = (eded//100)%10
# reqem_4 = (eded//10)%10
# reqem_5 = eded%10

# if reqem_1 == reqem_5 and reqem_2 == reqem_4:
#     print("Eded palindromdur.")
# else:
#     print("Eded polindrom deil.")

# 11. Əvvəldən şifrə saxlanılır. Istfiadəçi şifrə daxil edir , əgər şifrə bazadakı
# şifrəyə bərabər olsa, ekrana , --Access succesfully completed-- çıxır, əks
# halda --Acces denied-- çıxır.

# password = "userguest1234"

# entry_password = input("Zehmet olmasa sifrenizi daxil edin : ")

# if entry_password == password:
#     print("--Access succesfully completed--")
# else:
#     print("--Acces denied--")

print("Salam Visual Studio Code")