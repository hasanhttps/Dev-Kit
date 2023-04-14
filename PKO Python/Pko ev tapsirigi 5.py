# 1. Istifadəçi ədəd daxil edir. Ekrana əgər ədəd cütdürsə True, təkdirsə False çap olunsun.
# eded = int(input("Zehmet olmasa eded daxil edin : "))
# is_number_simple = eded % 2 == 0
# print(is_number_simple)

# 2. İstifadəçi 1-20 arası ədəd daxil edir. Ədəd sadədirsə True, mürəkkəbdirsə False çap
# olunsun. (Sadə ədədlər yalnız özünə və 1-ə bölünən ədədlərdir)
# while True:#while'ni yoxlamaq ucun qoymusam
#     eded = int(input("Zehmet olmasa 1-20 arasi eded daxil edin : "))
#     is_number_simple = eded > 0 and eded <= 3 or eded % 2 != 0 and eded != 9 and eded != 15
#     print(is_number_simple)

# 3. İstifadəçi 5 rəqəmli ədəd daxil edir. Ədədin polindrom olub olmamasını təyin edin.
# (Polindrom - əksinə və düzünə eyni cür oxunur 12321 polindromdur, 12345 polindrom
# deyil)
# while True:
#     eded = int(input("Zehmet olmasa 5 reqemli eded daxil edin : "))
#     num_1 = eded%10
#     num_2 = (eded // 10)%10
#     num_3 = (eded // 100)%10
#     num_4 = (eded // 1000)%10
#     num_5 = (eded // 10000)
#     is_number_polindrome = num_1 == num_5 and num_2 == num_4
#     print(is_number_polindrome)

# 4. İstifadəçi 6 rəqəmli ədəd daxil edir. Tək yerdə duranların cəmi cüt yerdə duranların
# cəmindən çoxdursa , True , və ya False.
# Numune: (756189) Tək yerdə duranlar - 7,6,8 // Cüt yerdə duranlar - 5,1,9

# while True:
#     eded = int(input("Zehmet olmasa 5 reqemli eded daxil edin : "))
#     num_1 = eded%10
#     num_2 = (eded // 10)%10
#     num_3 = (eded // 100)%10
#     num_4 = (eded // 1000)%10
#     num_5 = (eded // 10000)%10
#     num_6 = (eded // 100000)
    
#     tek_toplam = num_6 + num_4 + num_2
#     cut_toplam = num_5 + num_3 + num_1
    
#     if_tek_boyuk_cut = tek_toplam > cut_toplam
#     print(if_tek_boyuk_cut)

