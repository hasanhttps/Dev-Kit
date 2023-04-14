# 1. Klaviaturadan 10 tam ədəd daxil edilir, mənfi ədədlərin
# faizini, müsbət ədədlərin faizini və 0-ların faizini tapın.

# musbet_count = 0
# menfi_count = 0
# sifir_count = 0
# for i in range(10):
#     tam_eded = int(input("Zehmet olmasa eded daxil edin : "))
    
#     if tam_eded < 0:
#         menfi_count +=1
#     elif tam_eded > 0:
#         musbet_count +=1
#     else:
#         sifir_count +=1

# print(f"Musbetler butun ededlerin {musbet_count*10} faizini , Menfiler butun ededlerin {menfi_count * 10} faizini , sifirlar butun ededlerin {sifir_count * 10} fazini teskil edirler . ")


# 2. Klaviaturadan 10 tam ədəd daxil edilir. Cütlərin və
# təklərin neçə faiz olduğunu hesablayan proqram yazın.

# tek_count = 0
# cut_count = 0

# for i in range(10):
#     tam_eded = int(input("Zehmet olmasa eded daxil edin : "))
#     if tam_eded % 2 == 0:
#         cut_count +=1
#     else:
#         tek_count +=1
# print(f"Cut ededler butun ededlerin {cut_count *10} faizini tek ededler ise {tek_count * 10} faizini teskil edirler . ")

# 3. İstənilən ədədin polindrom olub olmamasını yoxlayan
# proqram yazın.

# eded = int(input("Zehmet olmasa bir eded daxl edin : "))
# eded_klon = eded
# count = 0
# reverse_number = 0
# while eded != 0:
#     count +=1
#     eded //= 10
# eded = eded_klon
# for i in range(count):
#     reverse_number = (reverse_number * 10) + eded % 10
#     eded //=10
# if eded_klon == reverse_number:
#     print("Eded polindromdur.")
# else:
#     print("Eded polindrom deil.")

# 4. 1-100 arasındakı bütün sadə ədədləri çıxaran program
# yazın. Burada, dövr içərisində dövr işlətməlisiniz. Xarici
# dövr 1-100 arasında hərəkət edəcək. Daxili dövr isə
# ədədin sadə olub olmadığını yoxlayacaq.

# for i in range(1,101):
#     count = i
#     is_number_simple = 0
#     while count > 0:
#         if i % count == 0:
#             is_number_simple +=1
#         count -=1
#     if is_number_simple == 2 and is_number_simple != 1:
#         print(i)

# 5. Ekrana istifadəçinin daxil etdiyi say qədər, ulduzlardan üfiqi xətt
# çıxaran proqram yazın.


# say = int(input("Zehmet olmasa birt miqdar daxil edin : "))

# for i in range(say):
#     print("*",end=" ")

# 6. Ekrana, 1-50 aralığındakı rəqəmlərdən ancaq cüt olanları
# çıxaran proqram yazın.

# for i in range(1,51):
#     if i % 2 == 0:
#         print(i)
        
# 7. Istifadəçinin daxil etdiyi aralıqda (məs 10 və 30) cüt rəqəmlərin
# cəmini tək rəqəmlərin hasilini hesablayan proqram yazın. 

# baslanqic_eded = int(input("Zehmet olmasa baslanqic deyerini daxil edin : "))
# sonluq_eded = int(input("Zehmet olmasa sonluq deyerini daxil edin : "))
# cut_count = 0
# tek_count = 1
# for i in range(baslanqic_eded,sonluq_eded):
#     if i % 2==0:
#         cut_count +=i
#     else:
#         tek_count *=i
# print(f"Cut ededlerin cemi {cut_count} , tek ededlerin hasili ise {tek_count}'dir.")

# # 8. 1-100 diapazonunda 3-ə bölünüən bütün ədədləri ekrana çıxaran proqram
# # yazın        

# for i in range(1,100):
#     if i % 3 == 0:
#         print(i)
        
# 9. Ədədin faktorialını tapan proqram yazın. (Məsələn (! - faktorial
# işarəsidir), 5! = 1*2*3*4*5)

# eded = int(input("Zehemt olmasa fakrorialini tapmaq istediyiniz ededi daxil edin : "))
# faktorial = 1
# for i in range(1,eded+1):
#     faktorial *=i
# print(faktorial)

# 10. Ədədin üstünü hesablayan proqram yazın (istifadəçi iki ədəd
# daxil edəcək əsas və üst məs. 2 və 3 cavab 8 alınmalıdır) 

# esas_eded = int(input("Ededin esasini daxil edin : "))
# ust_eded = int(input("Zehmet olmasa ededin ustunu daxil edin : "))
# ededin_ustu = 1
# for i in range(ust_eded):
#     ededin_ustu *= esas_eded
# print(ededin_ustu)

# 11. İstifadəçi tam ədəd daxil edir, bu ədədin qalıqsız bölündüyü
# bütün rəqəmləri ekrana çıxaran proqram yazın.

# tam_eded = int(input('Zehmet olmasa bir tam eded daxil edin : '))
# for i in range(1,tam_eded+1):
#     if tam_eded % i == 0:
#         print(i)

