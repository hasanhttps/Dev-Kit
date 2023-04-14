# eded_1 = 1
# cem = 0
# eded_2 = 50
# hasil = 1

# while eded_1 < eded_2:
#     if eded_1 %2 == 0:
#         cem+=eded_1
#     elif eded_1%2!=0:
#         hasil*=eded_1
#     eded_1+=1
        
# print(cem)
# print(hasil)

# a = 0

# def artirma():
#     global a
#     a+=1
    
# print(a)
# print(artirma())

# contunie'den asagidaki kodlar islemir


# a = 0

# while a <= 10:
#     a+=1
#     if a%2!=0:
#         continue
#     print(a)


# pasword = "2000Hasan"
# xeta = 0

# sifre = int(input("Zehmet olmasa sifrenizi daxil edin : "))


# while True:
#     sifre = (input("Zehmet olmasa sifrenizi daxil edin : "))
#     if sifre == pasword:
#         print("Welcome")
#         break
#     else:
#         xeta +=1
#         print("Zehmet olmasa yeniden daxil edin ")
#     if xeta == 5:
#         print("5 cehdiniz yanlisdir 30 saniye sonra ")
#         
      
# print(e)

balans = 10
xeta =0
pin = "1234"

while True:
    pin_daxil = input("Zehmet olmasa pininizi daxil edin : ")
    if pin_daxil == pin:
        secim = int(input("Zehmet olmasa seciminizi daxil edin : \n[1] -- Balansa baxmaq\n[2] -- Balansdan pul alma \n[3] -- Balans artirmaq  \n[4] -- cixis etmek\n"))
        if secim == 1:
            print(balans)
        elif secim == 2:
            balan_cekme = int(input("Zehmet olmasa cekmekk istediyiniz balan =s miqdarini girin : "))
            if balan_cekme <= balans:
                print("Buyurun sizin pulunuz.")
            else:
                print("Balansda o qeder pul yixdur.")
        elif secim == 3:
            balans_artirma = int(input("Artirmaq istediyinz balansi zehmet olmasa daxil edin : "))
            balans += balans_artirma
        elif secim == 4:
            print("Sagol")
            break
    else:
        xeta +=1
    if xeta == 3:
        print("Kod yanlisdir siz bloklandiniz ")
        break
    elif xeta == 4:
        print("Kod yanlisdir siz bloklandiniz")

# sadedi = 0   
# eded = int(input("Zehmet olmasa eded daxil edin : "))
# a = 1
# while a <= eded:
#     if eded % a == 0:
#         sadedi+=1
#     a+=1
# if sadedi == 2:
#     print("Eded sadedir")
# else:
#     print("Eded murekkebdir")

#time.sleep(1)impor time kitabxanasi ile edilir ve bir saniye gozledir.
#os.system("cls")terminali silir import os kitabxanasi ile isleyir
