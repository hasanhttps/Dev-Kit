menu ='''
Ashaqidaki Emeliyyatlardan birini secin: 
    [p]    --   Emeliyyatlarin print edilmesi:
    [r]    --   AZN balansi artirmaq
    [k]    --   AZN balansdan pul cixarmaq:
    [d]    --   DOLLAR balansdan pul cixarmaq
    [t]    --   AZN to Dollar transver
    [ab]   --   AZN Balansa baxmaq
    [db]   --   DOLLAR Balansa baxmaq
    [e]    --   Exit -->>  '''
aznbalans = 10
dollarbalans = 10
while True:
    try:
        menusecim = input(menu)
        if menusecim == "e":
            break
        elif menusecim == "p":
            print(menu)
        elif menusecim == "r":
            eded = float(input("AZN balansinizi artirmaq ucun artirmaq istediyiniz meblegi daxil edin : "))
            if eded < 1:
                print("Balansinizdan minimum 1 azn artira bilersiniz.")
            else:
                aznbalans += eded
                print(f"balansinizdan {eded} mebleginde pul artirildi. Son mebleg : {aznbalans} manat")
        elif menusecim == "k":
            eded2 = float(input("AZN balansinizinizdan cixarmaq istediyiniz meblegi daxil edin : "))
            if eded2 < 1 or eded2 > aznbalans:
                print("Balansinizdan minimum 1 azn cixa bilersiniz ve ya balansinizdan cox cixa bilmersiniz.")
            else:
                aznbalans -= eded2
                print(f"balansinizdan {eded2} mebleginde pul cixarildi . Son mebleg : {aznbalans} manat")
        elif menusecim == "d":
            eded3 = float(input("Dollar balansinizinizdan cixarmaq istediyiniz meblegi daxil edin : "))
            if eded3 < 1 or eded3 > dollarbalans:
                print("Minimum 1 dollar cixmaq olar")
            else:
                dollarbalans -= eded3
                print(f" balansinizdan {eded3} mebleginde pul cixarildi. Son mebleg : {dollarbalans} dollar")
        elif menusecim == "t":
            select = int(input("""Secim edin:
        [1]Dollar to azn 
        [2]Azn to dollar -- >>"""))
            if select == 1 :
                Mebleg = float(input("Cevirmek istediyiniz  mebleginizi daxil edin : "))
                transver = Mebleg * 1.7
                print(f"{Mebleg} dollar {transver} manat edir.")
            elif select == 2 :
                Meble = float(input("Cevirmek istediyiniz  meblegini daxil edin : "))
                transver =  Meble / 1.7
                print(f"{Meble} manat {transver} dollar edir.")
        elif menusecim == "db" :
            print(dollarbalans + aznbalans / 1.7 ,"dollar deyerinde balansiniz var.")
        elif menusecim == "ab" :
            print(aznbalans + dollarbalans * 1.7 ,"manat deyerinde balansiniz var.")
        else:
            print("Zehmet olmasa duzgun secim edin !!!")
    except ValueError:
         print("Zehmet olmasa daxil etdiyiniz secimleri duzgun edin reqem daxil edilmesi lazim olan yere herf daxil edile bilmez !!! ")