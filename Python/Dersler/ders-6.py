#Error handing
"""
try:
    il = int(input("Ilinizi daxil edin :"))
    if il / 4 == 0 :
        print("Iliniz uzun ildir")
    else:
        print("Edediniz qisa ildir")
except ValueError:
    print("Eded herf ola bilmez")
"""
#Task 2
"""
try:
    ed4 = int(input("4 reqemli eded daxil edin -->"))#1234
    no1 = int(ed4 // 1000)
    no2 = int((ed4 // 100)%10)
    no3 = int(((ed4 // 10)%100)%10)
    no4 = int((ed4 %1000)%100)%10
    netice = no3*1000 +no4 *100 + no1 *10 + no2
    print(netice)
except ValueError:
    print("Ismini dogru daxil edin ")
"""
#----------------------------------------------------------------------------------------------------------------------------------------------------------------------
#Task 3
"""
ed1 = int(input("eded daxil edin :"))
ed2 = int(input("ededi daxil edin :"))
while ed1 < ed2 :
    if ed1 %2 == 0 :
        print(ed1)
    ed1 +=1"""
"""menfi= 0
musbet = 0
sifir = 0
start = 0
while start <= 10:
    eded=int(input("Ededinizi daxil edin :"))
    if eded < 0 :
        menfi+=1
    elif eded >0 :
        musbet+=1
    else:
        sifir+=1
    start+=1
print(musbet)
print(menfi)"""
#-------------------------------------------------------------------------------------------------
"""while True:
    select= input("Secim edin \n\t -- valyuta\n\t -- kalkulyator\n\t -- Milli \n\t-->>")
    if select == "1":
        azn = float(input("Balans daxil edin :"))
        select = input("\n[1] Dollar\n[2] -- rubl [3] --yevro")
        if select == "1":
            azn /= 1.7"""
#-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------