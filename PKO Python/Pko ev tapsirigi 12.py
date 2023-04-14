import os

import time

azn_balans = 17
usd_balans = 200


mesaj = """
Ashaqidaki Emeliyyatlardan birini secin: 
[p]    --   Emeliyyatlarin print edilmesi:
[r]    --   AZN balansi artirmaq
[k]    --   AZN balansdan pul cixarmaq:
[d]    --   DOLLAR balansdan pul cixarmaq
[t]    --   AZN to Dollar transver
[c]    --   Dollar to AZN transver
[ab]   --   AZN Balansa baxmaq
[db]   --   DOLLAR Balansa baxmaq
[e]    --   Exit
-----------------------------------------------| 
"""
emeliyyat = "\t\t\t\t\t\t\t\t\t\tEmeliyyatlar\n\n\n"
while True:
    secim = input(mesaj)

    if secim == "p":
        print(emeliyyat)
        time.sleep(3)
    elif secim == "r":
        try:
            azn_balans_artirmaq = float(input("Zehmet olmasa artirmaq istediyinz meblegi post terminalin asagi qismindeki qisme daxil edin : "))
            if azn_balans_artirmaq < 1:
                raise Exception("Bagislayin en asagi 1 azn daxil ede bilersiniz")
            azn_balans += azn_balans_artirmaq
            print(f"Balansiniza {azn_balans_artirmaq} azn yuklendi . Balansiniz -- {azn_balans}")
            emeliyyat += (f"\nBalansiniza {azn_balans_artirmaq} azn yuklendi . Balansiniz -- {azn_balans}")
        except ValueError as v:
            print(v)
        except Exception as ex:
            print(ex)
    elif secim == "k":
        try:
            azn_balans_cixartma = float(input("Azn Balansinizdan cixartmaq istediyinz meblegi secin : "))
            if azn_balans_cixartma > azn_balans:
                raise Exception("Azn Balansinizda kifayet qeder vesait yoxdur.")
            elif azn_balans_cixartma < 1:
                raise Exception("Azn Balansinizdan minimum 1 manat cixartmaq olar . ")
            elif azn_balans_cixartma == azn_balans:
                secure = input("Azn Balansinizin butun hamisini cixartmaga emin siniz ? (Beli) (Xeyir)")
                if secure == "Beli":
                    azn_balans -= azn_balans_cixartma
                    print(f"Azn Balansinizdan {azn_balans_cixartma} azn cixartdiniz . Balansiniz -- {azn_balans} .")
                    emeliyyat +=(f"\nAzn Balansinizdan {azn_balans_cixartma} azn cixartdiniz . Balansiniz -- {azn_balans} .")
                elif secure == "Xeyr":
                    print("Islem iptal edildi.")
                else:
                    print("Zehmet olmasa duzgun secim edin !")
            else:
                azn_balans -= azn_balans_cixartma
                print(f"Azn Balansinizdan {azn_balans_cixartma} azn cixartdiniz . Balansiniz -- {azn_balans} .")
                emeliyyat +=(f"\nAzn Balansinizdan {azn_balans_cixartma} azn cixartdiniz . Balansiniz -- {azn_balans} .")
        except ValueError as v_error:
            print(v_error)
        except Exception as ex:
            print(ex)
    elif secim == "d":
        try:
            dollar_balnas_cixartma = float(input("Dollar Balansinizdan cixartmaq istediyiniz dollar balansini daxil edin : "))
            
            if dollar_balnas_cixartma > usd_balans:
                raise Exception("Dollar Balansinizda kifayet qeder vesait yoxdur.")
            elif dollar_balnas_cixartma < 1:
                raise Exception("Balansdan minimum 1 dollar cixartmaq olar")
            elif dollar_balnas_cixartma == usd_balans:
                secure = input("Balansinizin butun hamisini cixartmaga emin siniz ? (Beli) (Xeyir)")
                if secure == "Beli":
                    usd_balans -= dollar_balnas_cixartma
                    print(f"Dollar Balansinizdan {dollar_balnas_cixartma} dollar cixartdiniz . Balansiniz -- {usd_balans} .")
                    emeliyyat += (f"\nDollar Balansinizdan {dollar_balnas_cixartma} dollar cixartdiniz . Balansiniz -- {usd_balans} .")
                elif secure == "Xeyr":
                    print("Islem iptal edildi.")
                else:
                    print("Zehmet olmasa duzgun secim edin !")
            else:
                usd_balans -= dollar_balnas_cixartma
                print(f"Dollar Balansinizdan {dollar_balnas_cixartma} dollar cixartdiniz . Balansiniz -- {usd_balans} .")
                emeliyyat += f"\nDollar Balansinizdan {dollar_balnas_cixartma} dollar cixartdiniz . Balansiniz -- {usd_balans} ."
        except ValueError as x:
            print(x)
        except Exception as ex:
            print(ex)
    elif secim == "t":
        try:
            azn_to_dollar = float(input("Zehmet olmasa Azn Balansdan Usd balansa kocurmek istediyiniz azn meblegi daxil edin : "))
            if azn_to_dollar > azn_balans:
                raise Exception("Azn Balansinizda kifayet qeder vesait yoxdur .")
            elif azn_to_dollar <= 0:
                raise Exception("Azn Balansinizdan 0 ve ondan asagi mebleg Dollar balansa kocurtme etmek olmaz .")
            else:
                azn_balans -= azn_to_dollar
                usd_balans += azn_to_dollar / 1.7
                print(f"Azn Balansinizdan {azn_to_dollar / 1.7} dollar , Dollar Balansiniza kocuruldu .\nAzn Balansiniz -- {azn_balans}\nDollar Balansiniz -- {usd_balans} ")
                emeliyyat += (f"\nAzn Balansinizdan {azn_to_dollar / 1.7} dollar , Dollar Balansiniza kocuruldu .\nAzn Balansiniz -- {azn_balans}\nDollar Balansiniz -- {usd_balans}")
                time.sleep(7)
        except ValueError as v:
            print(v)
        except Exception as ex:
            print(ex)
    elif secim == "c":
        try:
            dolar_to_azn = float(input("Daxil etmek istediyiniz dollar miqdari daxil edin : "))
            if dolar_to_azn > usd_balans:
                raise Exception("Dollar Balansinizda kifayet qeder vesait yoxdur . ")
            elif dolar_to_azn < 1:
                raise Exception("Dollar Balansinizdan 0 ve ondan asagi mebleg Azn balansa kocurtme etmek olmaz.")
            else:
                azn_balans += dolar_to_azn * 1.7
                usd_balans -= dolar_to_azn
                print(f"Dollar  Balansinizdan {dolar_to_azn * 1.7} azn , Azn Balansiniza kocuruldu .\nAzn Balansiniz -- {azn_balans}\nDollar Balansiniz -- {usd_balans}")
                emeliyyat += (f"\nDollar  Balansinizdan {dolar_to_azn * 1.7} azn , Azn Balansiniza kocuruldu .\nAzn Balansiniz -- {azn_balans}\nDollar Balansiniz -- {usd_balans}")
                time.sleep(7)
        except ValueError as  v :
            print(v)
        except Exception as ex:
            print(ex)
    elif secim == "ab":
        print(f"Sizin {azn_balans} azn vesaitiniz Azn Balansinizda var")
    elif secim == "db":
        print(f"Sizin {usd_balans} dollar vesaitiniz Dollar Balansinizda var")
    elif secim == "e":
        print("Gorusenedek !")
        break
    else:
        print("Secim Yanlisdir !")
        continue
    time.sleep(4)
    os.system("cls")
