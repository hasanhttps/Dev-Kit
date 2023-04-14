menu = """
        [1]  --> yeni telebe elave etmey
        [2]  --> Secilmish telebeni Edit etmey
        [3]  --> Secilmish telebeni silmey
        [4]  --> Ada  gore searching
        [5]  --> adi daxil edilmish telebeye qiymet verilmesi
        [6]  --> Adi daxil edilmish  telebenin qiymetleri
        [7]  --> butun telebeler
        [0]  --> EXIT
"""


allstudent = []
student1 = ["Cavid","Hesenov","Eli",1995,[10,7,11]]
student2 = ["Hesen","Melikzade","Veli",2004,[6,5,7]]
student3 = ["Vidadi","Cavadov","Mahmud",2000,[11,12,10]]


allstudent.append(student1)
allstudent.append(student2)
allstudent.append(student3)


while True:
    try:
        print(menu)
        select = input("Menyudan secim edin : ")

        if select == "1":
            name = input("Telebenin adini daxil edin : ")
            surname = input("Telebenin soyadini daxil edin : ")
            father = input("Telebenin atasinin adini daxil edin : ")
            birthday = int(input("Telebenin dogum ilini daxil edin : "))

            
            if birthday >= 1990 and birthday <= 2004:
            
                if len(name) >= 3 :
                    newstudent = [name,surname,father,birthday,[]]
                    allstudent.append(newstudent)
                    print(newstudent)
            else:
                print("Yasininiz 1990 ile 2004 arasi olmalidir .")
                

        elif select == "2":
            nem = input("Istifadecinin adini daxil edin : ")
            for g in allstudent:
                if nem == g[0]:
                    k = input("""Telebenin adini deismek isteyirsinizse -- a \n Telebenin soyadini deismek isteyirsinizse -- s \n Telebenin dogum iliini deismek isteyirsenizse -- d \n Telebenin ata adini deismek isteyirsenizse -- t \n qiymetini deismek isteyirsinizse -- q' ni secin : """)
                    if k == "a" :
                        adi = input("Adini ne ile deisdirmek isteyirsinizsa daxil edin : ")
                        g.pop(0)
                        g.insert(0,adi)
                    elif k == "s":
                        soy = input("Soyadini ne ile deisdirmek isteyirsinizsa daxil edin : ")
                        g.pop(1)
                        g.insert(1,soy)
                    elif k == "d":
                        dogum = int(input("Dogum ilini ne ile deisdirmek isteyirsinizsa daxil edin : "))
                        g.pop(2)
                        g.insert(2,dogum)
                    elif k == "t":
                        ata = input("Ata adini ne ile deisdirmek isteyirsinizsa daxil edin : ")
                        g.pop(3)
                        g.insert(3,ata)
                    elif k == "q":
                        qimet = input("Qiymetini ne ile deisdirmek isteyirsinizsa daxil edin : ")
                        g.pop(4)
                        g.insert(4,qimet)
                    else:
                        print("Zehmet olmasa dogru secim edin .")
                else:
                    print("Zehmet olmasa dogru secim edin .")
        elif select == "3":
            ad = input("Telebenin adini daxil edin : ")
            for i in allstudent:
                if ad == i[0]:
                    index = allstudent.index(i)
                    silinen = allstudent.pop(index)
                    print(f"{silinen} telebe silindi.")
                
        elif select == "4":
            search = input("Telebenin adini daxil edin : ")
            for j in allstudent:
                if j[0].count(search):
                    index = allstudent.index(j)
                    print(j)
                else:
                    print("Telebe tapilmadi")
                    break
                    
        elif select == "5":
            qiymettelebe = input("Istifadecini secin : ")
            qiymet = int(input("Hansi qiymetleri vermek isteyirsinizse daxil edin : "))
            if qiymet >= 1 and qiymet <= 12:
                for k in allstudent:
                    if qiymettelebe == k[0]:
                        k[4].append(qiymet)
                        ischeck=False
                        print(f"{k[0]} e {qiymet} bal verdiniz: {k[4]}")
                if ischeck:
                    print("Telebe tapilmadi")
            else:
                print("Qiymet minimum 1 ,maksimum 2 ola biler.")
                continue
        elif select == "6":
            ad1 = input("Istifadecinin adini daxil edin : ")
            for f in allstudent:
                if ad1 == f[0]:
                    
                    print(f"Istifadecinin qiymetleri -- {f[4]}")
        elif select == "7":
            ist = input("Axtarmaq istediyiniz istifadecinin adini daxil edin : ")
            coun = 0
            for p in allstudent:
                if ist == p[0]:
                    print(p,"--Axtarmaq istediyiniz telebe")
            
            for s in allstudent:
                print(f"Istifadecinin adi -- {allstudent[coun][0]}\nIstifadecinin soy adi -- {allstudent[coun][1]}\nIstidadecinin yasi -- {2022 - allstudent[coun][3]}\nIstifadecinin qiymetleri -- {allstudent[coun][4]} ")
                coun +=1
        elif select == "0":
            break
        else:
            print("Zehmet olmasa dogru secim edin")
    except ValueError:
        print("Zehmet olmasa duzgun secim edin .")