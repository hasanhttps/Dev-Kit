# 1. AZN-i seçimdən asılı olaraq (1,2 və ya 3 ) Avroya, Dollara , Rubla çevirən program
# yazın. ( 1 - Avro, 2 - Dollar və s.)

# secim = int(input("Zehmet olmasa bir secim edin : "))
# azn = int(input("Azn'i daxil edin ; "))
# if secim == 1:
#     avro = azn * 0.58# 21.07.2022 saat : 23;15
#     print(avro)
# elif secim == 2:
#     dollar = azn * 0.59# 21.07.2022 saat : 23;15
#     print(dollar)
# elif secim == 3:
#     rubl = azn * 34.41# 21.07.2022 saat : 23;15
#     print(rubl)

# 3. Endirimi hesablayan program yazırıq. İstifadəçi qiyməti və qramı daxil edir. 100qr-3%,
# 200 qr - 5%, 300 və daha çox 7% endirim edilir.

# qiymet = int(input("Zehmet olmasa qiymeti daxil edin : "))
# qram = int(input("Zehmet olmasa qrami daxil edin  : "))

# if qram < 100:
#     print(qiymet)
# elif qram >= 100 and qram < 200:
#     endirim = 0.03
#     qiymet = qiymet - (qiymet * endirim)
#     print(qiymet)
# elif qram >=200 and qram < 300:
#     endirim = 0.05
#     qiymet  = qiymet - (qiymet * endirim)
#     print(qiymet)
# elif qram >=300:
#     endirim = 0.07
#     qiymet = qiymet - (qiymet * endirim)
#     print(qiymet)

# 4. Kəsr ədədin tam hissəsinin olub olmadığını yoxlayan program yazın.

# kesr_eded = float(input("Zehmet olmasa kesr eded daxil  edin : "))

# if int(kesr_eded) == 0:
#     print("Ededin tam hissesi yoxdur.")
# else:
#     print("Ededin tam hissesi var.")

# 5. Tarix və zaman daxil edilir, düzgün daxil edilib edilmədiyini yoxlayın ( Məsələn 25:62
# saat daxil edilə bilməz)

# saat = int(input("Saati daxil edin : "))
# deqiqe = int(input("Deqiqeni daxil edin : "))

# if saat >= 0 and saat <= 23:
#     print("Saat duzgundur")
#     if deqiqe >= 0 and deqiqe <=60:
#         print("Deqiqe duzgundur.")
#     else:
#         print("Deqiqe duzgun deil.")
# else:
#     print("Saat sehvdir")

# # 6. İstifadəçi doğulduğu ay və günü daxil edir onun bürcünü tapan program yazın.

# ay = int(input("Doguldugunuz ayi daxil edin : "))
# gun = int(input("Doguldugunuz gunu daxil edin : "))
# yg = (ay*100)+gun
# if yg >= 1222 and yg <= 1231:
#     print("Oglaq Burcusunuz.")
# elif yg >= 101 and yg <= 119:
#     print("Oglaq Burcusunuz.")
# elif yg >= 120 or yg >=201 and yg <= 130 or yg<= 218:
#     print("Dolca Burcusunuz.")
# elif yg >= 219 or yg >=301 and yg <= 228 or yg<= 320:
#     print("Baliq Burcusunuz.")
# elif yg >= 321 or yg >=401 and yg <= 331 or yg<= 419:
#     print("Qoc Burcusunuz.")
# elif yg >= 420 or yg >=501 and yg <= 430 or yg<= 520:
#     print("Buga Burcusunuz.")
# elif yg >= 521 or yg >=601 and yg <= 531 or yg<= 620:
#     print("Ekizler Burcusunuz.")
# elif yg >= 621 or yg >=701 and yg <= 630 or yg<= 722:
#     print("Xerceng Burcusunuz.")
# elif yg >= 723 or yg >=801 and yg <= 731 or yg<= 822:
#     print("Sir Burcusunuz.")
# elif yg >= 823 or yg >=901 and yg <= 830 or yg<= 922:
#     print("Qiz Burcusunuz.")
# elif yg >= 923 or yg >=1001 and yg <= 931 or yg<= 1022:
#     print("Terezi Burcusunuz.")
# elif yg >= 1023 or yg >= 1101 and yg <= 1030 or yg<= 1121:
#     print("Eqreb Burcusunuz.")
# elif yg >= 1122 or yg >=1201 and yg <= 1131 or yg<= 1221:
#     print("Oglaq Burcusunuz.")
# else :
#     print("Zehmet olmasa gunleri 05 deilde 5 seklinde daxil edin aylarida hemcinin meselen : 1ci ay 1ci gun olduqda 1 ve 1 daxil edin ve ya ay qismine 12den boyuk gun qismine ise 31 den boyuk eded girmein ")

# 7. Tramvay və ya traleybus biletinin nömrəsi daxil edilir (6 rəqəmli), onun Xoşbəxt rəqəm
# olub olmadığını yoxlayın. Xoşbəxt rəqəm - Soldakı 3 rəqəmin cəmi sağdakı 3 rəqəmin
# cəminə bərabərdir

# tramvay = int(input("Biletin nomresini daxil edin : "))

# soldan_bir =  tramvay // 100000
# soldan_iki = (tramvay // 10000)%10
# soldan_uc  = (tramvay // 1000)%10
# sagdan_bir = (tramvay // 100)%10
# sagdan_iki = (tramvay // 10)%10
# sagdan_uc  =  tramvay % 10

# if soldan_bir + soldan_iki + soldan_uc == sagdan_bir + sagdan_iki + sagdan_uc:
#     print("Xosbext reqemdir.")

# 8. Ekrana oyun menyusu çıxır, 3 seçimli (Yeni oyun, Oyunu davam etmək, Çıxış). Program
# istifadəçinin seçimini ekrana çıxarır.

# print("\t\t\tMenyu\n[1] -- Yeni Oyun\n[2] -- Oyuna devam et\n[0] -- Cixis")
# secim = int(input("Yuxaridakilerden birini secin : "))
# if secim == 1 :
#     print("Yeni oyun")
# elif secim == 2:
#     print("Oyuna devam etmek")
# elif secim == 0:
#     print("Cixis")

# 9. İstifadəçi yaşını və cinsini daxil edir, onun təqaüd yaşının olub olmadığını tapan program
# yazın. İstifadəçi saatı daxil edir , (saat və dəqiqə). Günün hissəsinə uyğun olaraq
# kompüter istifadəçini salamlayır. (məs : 09:00 - Sabahın xeyir)


# yas = int(input("Yasinizi daxil edin : "))
# cins = input("Zehmet olmasa insiniz daxil edin : ")

# if yas >=65 and cins == "Kisi":
#     print("Tequd yasinizdir.")
# elif yas >=55 and cins == "Qadin":
#     print("Tequd yasinizdir.")
# else:
#     print("Teqaud yasiniz deil.")

# saat = int(input("Saati daxil edin : "))
# deqiqe = int(input("Deqiqeni daxil edin : "))

# if  saat >= 0 and saat <= 5  and deqiqe >= 0 and deqiqe < 60:
#     print("Geceniz xeyir")
# elif saat > 5 and saat <= 12 and deqiqe >= 0 and deqiqe < 60:
#     print("Sabahiniz xeyir")
# elif saat > 12 and saat <=17 and deqiqe >= 0 and deqiqe < 60:
#     print("Axsaminiz xeyir")    
# else:
#     print("Bele bir saat movcud deil")
    
# 10. İl daxil edilir onun uzun il olub olmamasını yoxlayın. (Uzun il , 400ə bölünür və ya 4ə
# bölünüb 100-ə bölünmür)

# il = int(input("Zehmet olmasa her hansi bir ili daxil edin : "))

# if il % 4 == 0 and il % 100 != 0:
#     print("Uzun ildir .")
# else:
#     print("IL uzun deil.")

# 11. Istənilən tarix daxil edilir. Ondan sonraki günü ekrana çıxaran program yazın.

# gun = int(input("Zehmet olmasa gunu daxil edin : "))

# if gun >= 1 and gun < 30:
#     print(gun+1)
# elif gun == 30 :
#     print(1)

# 12. İdeal çəki hesablayan program yazın. İstifadəçi boy və çəkini daxil edir, neçə kq almalı
# və ya atmalı olduğunu program istifadəçiyə deyir. ( ideal çəki = boy - 110)

# boy = int(input("Zehmet olmasa boyunuzu daxil edin : "))
# ceki = int(input("Zehmet olmasa cekiniz daxil edin : "))

# ideal_ceki = boy - 110
# lazim_ceki = ideal_ceki - ceki

# if lazim_ceki > 0:
#     print(abs(lazim_ceki),"Almalisiniz")
# elif lazim_ceki < 0 :
#     print(abs(lazim_ceki),"Atmalisiniz")
# else:
#     print("Ideal cekidesiniz.")

# 13. İstifadəçi beşrəqəmli ədəd daxil edir, əgər ədədin bütün rəqəmləri sadədirsə, istifadəçiyə
# bu haqda məlumat verilir. ( sadə rəqəmlər - yalnız 1-ə və özünə bölünə bilən ədədlər)
    
# eded = int(input("Besreqemli eded daxil edin : "))

# reqem_1 = eded // 10000
# reqem_2 = (eded // 1000)%10
# reqem_3 = (eded // 100)%10
# reqem_4 = (eded // 10)%10
# reqem_5 = eded % 10

# if (reqem_1 % 2 != 0 and reqem_1 % 3 != 0 and reqem_1 % 5 != 0) or reqem_1 == 2 or reqem_1 == 3 or reqem_1 == 5:
#     if (reqem_2 % 2 != 0 and reqem_2 % 3 != 0 and reqem_2 % 5 != 0) or reqem_2 == 2 or reqem_2 == 3 or reqem_2 == 5:
#         if (reqem_3 % 2 != 0 and reqem_3 % 3 != 0 and reqem_3 % 5 != 0) or reqem_3 == 2 or reqem_3 == 3 or reqem_3 == 5:
#             if (reqem_4 % 2 != 0 and reqem_4 % 3 != 0 and reqem_4 % 5 != 0) or reqem_4 == 2 or reqem_4 == 3 or reqem_4 == 5:
#                 if (reqem_5 % 2 != 0 and reqem_5 % 3 != 0 and reqem_5 % 5 != 0) or reqem_5 == 2 or reqem_5 == 3 or reqem_5 == 5:
#                     print("ededin butun reqemleri sadedir")
#                     #Muellim casib butun hallari nezere alaraq tyazdim alqoritmi

# 14. İstiadəmi 0-dan 35-ə kimi ədəd daxil edir. 36-ədədlik oyun kartlarına uyğun olaraq, bu
# ədədə uyğun işarəni (ürək, pika, kərpic, xaç) və onun dəyərini (
# 6,7,8,9,10,valet,dama,karol,tuz) qaytaran program yazın. (36 if və ya 36 switch lazım
# deyil) . Başqa yollarla yazmağı yoxlayın . ( ardıcıllıq , ÜRƏK,PİKA,KƏRPİC,XAÇ.
# Məsələn 11 yazılsa, ekrana 8 xaç yazısı çıxmalıdır, 0 daxil olunarsa - 6 ürək və s.)

# while True:
#     kart_secim = int(input("Zehmet olmasa 0'dan 35'e kimi eded daxil edin : "))

#     if kart_secim >=0 and kart_secim <= 4 :
#         kart_adi = "Kerpic"
#         kart_nomre = kart_secim + 6
#         kart = f"{kart_nomre} {kart_adi}"
#     elif kart_secim >= 9 and kart_secim <= 13:
#         kart_adi = "Pika"
#         kart_nomre = kart_secim - 3   
#         kart = f"{kart_nomre} {kart_adi}"
#     elif kart_secim >= 18 and kart_secim <= 22:
#         kart_adi = "Urek"
#         kart_nomre = kart_secim - 12   
#         kart = f"{kart_nomre} {kart_adi}"
#     elif kart_secim >= 27 and kart_secim <= 31:
#         kart_adi = "Xac"
#         kart_nomre = kart_secim - 21
#         kart = f"{kart_nomre} {kart_adi}"
#     elif kart_secim == 5 or kart_secim == 14 or kart_secim == 23 or kart_secim == 32:
#         kart = "Valet"
#     elif kart_secim == 6 or kart_secim == 15 or kart_secim == 24 or kart_secim == 33:
#         kart = "Dama"
#     elif kart_secim == 7 or kart_secim == 16 or kart_secim == 25 or kart_secim == 34:
#         kart = "Karol"
#     elif kart_secim == 8 or kart_secim == 17 or kart_secim == 26 or kart_secim == 35:
#         kart = "Tuz"

#     print(kart)

