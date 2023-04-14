#1. Ekrana istifadəçinin daxil etdiyi say qədər, ulduzlardan üfiqi xətt
#  çıxaran proqram yazın.

# say = int(input("Say daxil edin :"))
# column =  0
# while column <= say:
#     print("*",end = " ")
#     column += 1

#2. Ekrana, 1-50 aralığındakı rəqəmlərdən ancaq cüt olanları
#   çıxaran proqram yazın. 

# start = 1
# end = 50 
# while start < end:
#     if start % 2 == 0 :
#         print(start)
#     start += 1




#3. Istifadəçinin daxil etdiyi aralıqda (məs 10 və 30) cüt rəqəmlərin
#   cəmini tək rəqəmlərin hasilini hesablayan proqram yazın.

# eded1=int(input("Eded daxil edin :"))
# eded2=int(input("Eded daxil edin :"))

# sum=0
# z=1

# while eded1<eded2:
    
#     if eded1 %2==0 :
#         sum=sum+eded1
#     else:
#         z=z*eded1
#     eded1 +=1
# print(sum)
# print(z)



# 4. 1-100 diapazonunda 3-ə bölünüən bütün ədədləri ekrana çıxaran proqram yazın.

# sum_1 = 1
# sum_2 = 1000

# while sum_1 < sum_2:
#     if sum_1 %3 == 0:
#         print(sum_1)
#     sum_1 +=1





#5. Ədədin faktorialını tapan proqram yazın. (Məsələn (! - faktorial işarəsidir), 5! = 1*2*3*4*5)

# eded = int(input("Ededinizi daxil edin : ")) 
# st = 1 
# end = 0
# while end<eded:
#     end += 1 
#     st*=end
#     if end==eded:
#         print(st)



# 6. Ədədin üstünü hesablayan proqram yazın (istifadəçi iki ədəd
# daxil edəcək əsas və üst məs. 2 və 3 cavab 8 alınmalıdır) 

# esas = int(input("Eded daxil edin -->>"))
# quvvet = int(input("Quvvet daxil edin -->>"))
# sum_1 = esas

# while True :
#     if quvvet > 1:
#         esas *= sum_1
#     else:
#         print(esas)
#         break
#     quvvet -=1

# 7.
# Istifadəçi tam ədəd daxil edir , bu ədədin sadə olub olmamasını
# tapan proqram yazın.

# eded = int(input("Tam eded daxil edin :"))


# while True:
#     if eded %10 == 1 or eded %10 == 3 or eded %10 == 7 or eded %10 == 9 :
#         print("Eded sadedir")
#         break
#     elif eded == 2:
#         print("Eded sadedir.")
#         break
#     elif eded == 1:
#         print("Eded ne sade ne de murekkebdir")
#         break
#     else:
#         print("eded murekkebdir")
        
#8. İstifadəçi tam ədəd daxil edir, bu ədədin qalıqsız bölündüyü bütün rəqəmləri ekrana çıxaran proqram yazın.

# eded = int(input("Tam eded daxil edin :"))
# summer = 1
# while summer < eded:
#     if eded % summer == 0:
#         print(summer)
#     summer += 1

# 9Cu suali muellim basa salmayib eslinde hec birini basa salmiyib

# 10. Istifadəçi istənilən sayda rəqəmli ədəd daxil edir, onun
# rəqəmlərinin sayını və onların cəmini hesablayan proqram yazın

# count = 0
# eded = int(input("Zehmet olmasa ede daxil edin : "))
# eded_klon = eded

# while True:
#     count +=1
#     if eded // 10 == 0:
#         break
#     eded //=10
# print(count)
# eded_cem = 0
# while True:
#     eded_cem += eded_klon % 10
#     if eded_klon // 10 == 0:
#         break
#     eded_klon //=10
# print(eded_cem)



#11. Istifadəçi istənilən sayda rəqəmli ədəd daxil edir, ədədi əksinə çevirən proqram yazın.


# eded = int(input("Eded daxil edin :"))
# num = 0
# while eded >= 0:
#     if eded>0:
#         reqem = eded%10
#         num = num*10 + reqem
#         eded //= 10
#     else:
#         print(num,"<<--Ededin tersi ")
#         break

#12. Daxil edilmiş ədəddə iki ard arda rəqəmin olub olmamasını yoxlayan proqram yazın.

eded = int(input("Eded daxil edin :"))
while eded>0:
    number1 = eded %10#4
    eded //=10
    number2 = eded %10#3
    if number1 == number2:
        print("iki ard arda eded vardir")
        break

# 13. İstifadəçi ədəd daxil edir, bu ədədin rəqəmlərinin artan
# ardıcıllıqla olub olmamasını yoxlayan proqram yazın. (12299
# artan ardıcıllıq, 122044 artan ardıcıllıq deyil)

# eded = int(input("Zehmet olmasa ededi daxil edin : "))
# hesab = 10
# ard = 0
# while True:
#     kecici = eded % 10
#     if kecici <= hesab:
#         hesab = kecici
#     else:
#         print("Artan ardicilliq deil")
#         break
#     eded //=10
#     if eded == 0:
#         ard = 1
#         break
# if ard == 1:
#     print("Artan ardicilliqdir.")


#-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


eded = int(input("Zehmet olmasa ededi daxil edin : "))
ededin_1 = eded
reverse_number = 0
while ededin_1>0:
    eded_reqem = ededin_1%10
    reverse_number = (reverse_number *10)+eded_reqem
    ededin_1 //=10
if eded == reverse_number:
    print("Eded polindromdur.")
else:
    print("Eded polindrom deil.")
    
