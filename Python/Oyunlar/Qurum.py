from datetime import datetime
#0 ve 3 ve 6 ve 9 

menu = """
__________________________________________________________________________________________________________
[1]   --> yeni telebe elave etmey                                                                        |
[2]   --> Secilmish telebeni Edit etmey                                                                  |
[3]   --> Secilmish telebeni silmey                                                                      |
[4]   --> Ada  gore searching                                                                            |
[5]   --> Email daxil edilmish telebeye qiymet verilmesi                                                 |
[6]   --> Email daxil edilmish  telebenin qiymetleri                                                     |
[7]   --> Email daxil edilmish telebenin qiymet ortalamasi                                               |
[8]   --> Email daxil edilen Telebenin  ishtiraqini qeyd etmek                                           |
[9]   --> qayiblarin  sayi                                                                               |
[10]  --> Email daxil edilmish telebenin yashinin oyrenilmesi                                            |
[11]  --> Email daxil edilmish telebenin Groupunu deishmey                                               |
[12]  --> Eyni groupda olan telebelerin siyahisi                                                         |
[13]  --> Email daxil edilmish telebenin oxuduqu muddet verilir (example: Cavid -->> 10 il 3 ay 13 gun)  |
[14]  --> butun telebeler                                                                                |
[0]   --> EXIT                                                                                           |
_________________________________________________________________________________________________________|  (secim):  """


allStudent = {
    "cavid@gmail.com":{
        "name": "Cavid",
        "surname": "Hesenli",
        "fathername": "Aga",
        "brithyear": 1993,
        "mark": [7, 11, 12],
        "view": [0, 1, 1, 0, 1],
        "qrup":"11B",
        "email":"cavid@gmail.com",
        "created_at":datetime.fromisoformat("2022-03-01")

    },
    "elsad@gmail.com":{
        "name": "Elsad",
        "surname": "Agayev",
        "fathername": "Musa",
        "brithyear": 1993,
        "mark": [11, 8, 9],
        "view": [1, 1, 0, 1, 1],
        "qrup":"11A",
        "email":"elsad@gmail.com",
        "created_at":datetime.fromisoformat("2022-02-10")
    }
}
#----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
while True:
    try:
        select = input(menu) 
        if select == "1":
            mail = input("Maili daxil edin : ")
            co = 0
            for i in allStudent:
                if i == mail:
                    print("Bu maile sahib bir insan var zehmet olmasa basqa bir mailden istifade edin !")
                    co +=1
                    continue
            if co != 1:
                ad = input("|Istifadecinin adini daxil edin |: ")
                soyad = input("|Istifadecinin soyadini daxil edin| : ")
                ata = input("|Istifadecinin ata adini daxil edin| : ")
                dogumili = int(input("|Istifadecinin dogumilini daxil edin| : "))
                qrup = input("|Istifadecinin oxudugu qrupu daxil edin| : ")
                muddet = (input("|Daxil oldugunuz tarixi daxil edin meselen (2022-04-15)| : "))
                if len(ad)>=3 and len(soyad)>=3 and len(ata)>=3 and dogumili <= 2004 and dogumili >= 1990:
                    allStudent.update({mail:{"name": ad,
                    "surname": soyad,
                    "fathername": ata,
                    "brithyear": dogumili,
                    "mark": [],
                    "view": [],
                    "qrup":qrup,
                    "email":mail,
                    "created_at": datetime.datetime().fromisoformat(muddet)}})
                else:
                    print("Zehmet olmasa daxil etdiyiniz isimleri minimum 3 herf olmaqla daxil etdiyinize emin olun ve ya dogumilininin minimum 2004 maksimum 1990 oldugunu yoxlayin!")

#----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

        elif select == "2":
            email1 = input("Telebenin emailini daxil edin : ")
            for i in allStudent:
                
                deisimyas = 0
                deisimad = 0
                deisimata = 0 
                deisimsoyad = 0
                deisimqr = 0
                
                if i == email1:
                    secim = input("""Asagidakilar ile telebenin hansi fildinde deisiklik etmek isteirsinizse sece bilersiniz :
                ___________________________________________
                |[1]Telebenin isminin deisilmesi          |
                |[2]Telebenin soyadinin deisdirilmesi     |
                |[3]Telebenin ata adinin deisdirilmesi    |
                |[4]Telebenin dogum ilinin deisdirilmesi  |
                |[5]Telebenin qrupunun deisdirilmesi      |
                |[0]Yadda saxlamaq                        |
                |[E]Cixis                                 | 
                |_________________________________________| (secim): """)
                    for j in allStudent.values():
                        for p in range(0,7):
                            if secim == "1":
                                deisimad = input("Deisdirmek isdediyiniz adi daxil edin : ")
                                j["name"] = deisimad
                                secim = input("""Asagidakilar ile telebenin hansi fildinde deisiklik etmek isteirsinizse sece bilersiniz :
                ___________________________________________
                |[1]Telebenin isminin deisilmesi          |
                |[2]Telebenin soyadinin deisdirilmesi     |
                |[3]Telebenin ata adinin deisdirilmesi    |
                |[4]Telebenin dogum ilinin deisdirilmesi  |
                |[5]Telebenin qrupunun deisdirilmesi      |
                |[0]Yadda saxlamaq                        |
                |[E]Cixis                                 | 
                |_________________________________________| (secim): """)
                                if secim == "0":
                                    emin1 = input("""Deisiklikleri yadda saxlamaga emin siniz  ?
                                [y]-Beli
                                [n]-Xeyr -- >""")
                                    if emin1 == "y":
                                        if deisimad != 0:
                                            j["name"] = deisimad
                                        if deisimsoyad != 0:
                                            j["surname"] = deisimsoyad
                                        if deisimata != 0:
                                            j["fathername"] = deisimata
                                        if deisimyas != 0:
                                            j["brithyear"] = deisimyas
                                        if deisimqr != 0:
                                            j["qrup"] = deisimqr
                                    elif emin1 == "n":
                                        break
                                    else:
                                        print("Zehmet olmasa duzgun daxil edin !")
                            elif secim == "2":
                                deisimsoyad = input("Telebenin deisdirmek istediyinz soyadini daxil edin :")
                                j["surname"] == deisimsoyad
                                secim = input("""Asagidakilar ile telebenin hansi fildinde deisiklik etmek isteirsinizse sece bilersiniz :
                ___________________________________________
                |[1]Telebenin isminin deisilmesi          |
                |[2]Telebenin soyadinin deisdirilmesi     |
                |[3]Telebenin ata adinin deisdirilmesi    |
                |[4]Telebenin dogum ilinin deisdirilmesi  |
                |[5]Telebenin qrupunun deisdirilmesi      |
                |[0]Yadda saxlamaq                        |
                |[E]Cixis                                 | 
                |_________________________________________| (secim): """)
                                if secim == "0":
                                    emin1 = input("""Deisiklikleri yadda saxlamaga emin siniz  ?
                                [y]-Beli
                                [n]-Xeyr -- >""")
                                    if emin1 == "y":
                                        if deisimad != 0:
                                            j["name"] = deisimad
                                        if deisimsoyad != 0:
                                            j["surname"] = deisimsoyad
                                        if deisimata != 0:
                                            j["fathername"] = deisimata
                                        if deisimyas != 0:
                                            j["brithyear"] = deisimyas
                                        if deisimqr != 0:
                                            j["qrup"] = deisimqr
                                    elif emin1 == "n":
                                        continue                           
                            elif secim == "3":
                                deisimata = input("Deisdirmek isdediyiniz ata adini daxil edin : ")
                                j["fathername"] == deisimata
                                secim = input("""Asagidakilar ile telebenin hansi fildinde deisiklik etmek isteirsinizse sece bilersiniz :
                ___________________________________________
                |[1]Telebenin isminin deisilmesi          |
                |[2]Telebenin soyadinin deisdirilmesi     |
                |[3]Telebenin ata adinin deisdirilmesi    |
                |[4]Telebenin dogum ilinin deisdirilmesi  |
                |[5]Telebenin qrupunun deisdirilmesi      |
                |[0]Yadda saxlamaq                        |
                |[E]Cixis                                 | 
                |_________________________________________| (secim): """)
                                if secim == "0":
                                    emin1 = input("""Deisiklikleri yadda saxlamaga emin siniz  ?
                                [y]-Beli
                                [n]-Xeyr -- >""")
                                    if emin1 == "y":
                                        if deisimad != 0:
                                            j["name"] = deisimad
                                        if deisimsoyad != 0:
                                            j["surname"] = deisimsoyad
                                        if deisimata != 0:
                                            j["fathername"] = deisimata
                                        if deisimyas != 0:
                                            j["brithyear"] = deisimyas
                                        if deisimqr != 0:
                                            j["qrup"] = deisimqr
                                        break
                                    elif emin1 == "n":
                                        continue
                            elif secim == "4":
                                deisimyas = int(input("Deisdirmek isdediyiniz adi daxil edin : "))
                                j["brithyear"] = deisimyas
                                secim = input("""Asagidakilar ile telebenin hansi fildinde deisiklik etmek isteirsinizse sece bilersiniz :
                ___________________________________________
                |[1]Telebenin isminin deisilmesi          |
                |[2]Telebenin soyadinin deisdirilmesi     |
                |[3]Telebenin ata adinin deisdirilmesi    |
                |[4]Telebenin dogum ilinin deisdirilmesi  |
                |[5]Telebenin qrupunun deisdirilmesi      |
                |[0]Yadda saxlamaq                        |
                |[E]Cixis                                 | 
                |_________________________________________| (secim): """)
                                if secim == "0":
                                    emin1 = input("""Deisiklikleri yadda saxlamaga emin siniz  ?
                                [y]-Beli
                                [n]-Xeyr -- >""")
                                    if emin1 == "y":
                                        if deisimad != 0:
                                            j["name"] = deisimad
                                        if deisimsoyad != 0:
                                            j["surname"] = deisimsoyad
                                        if deisimata != 0:
                                            j["fathername"] = deisimata
                                        if deisimyas != 0:
                                            j["brithyear"] = deisimyas
                                        if deisimqr != 0:
                                            j["qrup"] = deisimqr
                                        break
                                    elif emin1 == "n":
                                        continue
                            elif secim == "5":
                                deisimqr = input("Deisdirmek isdediyiniz qrupu daxil edin : ")
                                j["qrup"] = deisimqr
                                secim = input("""Asagidakilar ile telebenin hansi fildinde deisiklik etmek isteirsinizse sece bilersiniz :
                ___________________________________________
                |[1]Telebenin isminin deisilmesi          |
                |[2]Telebenin soyadinin deisdirilmesi     |
                |[3]Telebenin ata adinin deisdirilmesi    |
                |[4]Telebenin dogum ilinin deisdirilmesi  |
                |[5]Telebenin qrupunun deisdirilmesi      |
                |[0]Yadda saxlamaq                        |
                |[E]Cixis                                 | 
                |_________________________________________| (secim): """)
                                if secim == "0":
                                    emin1 = input("""Deisiklikleri yadda saxlamaga emin siniz  ?
                                [y]-Beli
                                [n]-Xeyr -- >""")
                                    if emin1 == "y":
                                        if deisimad != 0:
                                            j["name"] = deisimad
                                        if deisimsoyad != 0:
                                            j["surname"] = deisimsoyad
                                        if deisimata != 0:
                                            j["fathername"] = deisimata
                                        if deisimyas != 0:
                                            j["brithyear"] = deisimyas
                                        if deisimqr != 0:
                                            j["qrup"] = deisimqr
#----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------                    
        
        elif select == "3":
            ist = input("Axtarmaq isdeyiniz telebenin mailini daxil edin : ")
            if ist in allStudent:
                emin = input("""Istifadecini silmeye eminsiniz ?
                            [y]-Beli
                            [n]-Xeyr -- >""")
                if emin == "y":
                    allStudent.pop(ist)
                elif emin == "n":
                    print("silinme tamamlanmadi")
                    continue
                    
                else:
                    print("Zehmet olmasa duzgun secim edin !!")
            else:
                print("Istifadecinin adini duzgun daxil edin !")
            
#----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

        elif select == "4":
            search = input("Istifadecinin adini daxil edin : ")
            for s in allStudent.values():
                if i["name"] == search:
                    print(f"\nIstifadecinin adi -- {s['name']}\nIstifadecinin soyadi -- {s['surname']}\nIstifadecinin ata adi -- {s['fathername']}\nIsrifadecinin dogum ili --{s['brithyear']}\nIstifadecinin qiyetleri -- {s['mark']}\nIstifadecinin muveffeqiyyeti -- {s['view']}\nQrup ismi -- {s['qrup']}\nIstifadecinin istifade etdiyi email -- {s['email']}\nIstifadecinin qeydiyat tarixi -- {s['created_at']}")


#----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

        elif select == "5":
            edilmis = input("|Istifadecinin emailini daxil edin| : ")
            qimet = int(input("|Telebenin aldigi qiymeti daxil edin| : "))
            if qimet > 0 and qimet < 13:
                for i in allStudent.values():
                    if i["email"] == edilmis:
                        i["mark"].append(qimet)
            else:
                print("Zehmet olmasa minimum 1 maksimum 12 deyerinde qiymet daxil edin !")
                    
#----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        elif select == "6":
            qiymet = input("Email daxil edin :")
            for i in allStudent.values():
                if i["email"]==qiymet:
                    print(f"Telebenin qiymetleri -- {i['mark']}")

#----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

        elif select == "7":
            ort = input("|Telebenin emailni daxil edin| : ")
            count = 0
            for i in allStudent.values():
                    if i["email"] == ort:
                        h = i["mark"][count]
                        for t in range(0,len(i["mark"])):
                            count +=1
                            if count < len(i["mark"]):  
                                h += i["mark"][count]
                            else:
                                bolme = h / len(i["mark"])
                                print(bolme)
                                
#----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

        elif select == "8":
            edil = input("|Istifadecinin emailini daxil edin| : ")
            istirak = int(input("|Telebenin istirakini qeyd edin (1 - istirak etdi 0 - istirak etmedi)| : "))
            if istirak == 1:
                for i in allStudent.values():
                    if i["email"] == edil:
                        i["view"].append(istirak)

#----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

        elif select == "9":
            qayib = input("|Telebenin emailini daxil edin| : ")
            for i in allStudent.values():
                if i["email"] == qayib:
                    d = i["view"].count(0)
                    print(f"Telebenin qayiblarinin sayi -- {d}")
        
#----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

        elif select == "10":
            yas = input("|Telebenin emailini daxil edin| : ")
            for i in allStudent.values():
                if i["email"] == yas:
                    age = datetime.date.today().year - i["brithyear"]
                    print("Telebenin yasi ",age,"dur")
                    
#----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

        elif select == "11":
            qrupdeisim = input("Qrupunu deisdirmek istediyiniz telebenin emailini daxil edin : ")
            qrupd = input("Deiseceyiniz qrupu daxil edin : ")
            for i in allStudent.values():
                if i["email"] == qrupdeisim:
                    i["qrup"] = qrupd

#----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

        elif select == "12":
            group = input("Axtardiginiz qrupun adini daxil edin : ")
            for i in allStudent.values():
                if i['qrup'] == group:
                    print(f"\nIstifadecinin adi -- {i['name']}\nIstifadecinin soyadi -- {i['surname']}\nIstifadecinin ata adi -- {i['fathername']}\nIsrifadecinin dogum ili --{i['brithyear']}\nIstifadecinin qiyetleri -- {i['mark']}\nIstifadecinin muveffeqiyyeti -- {i['view']}\nQrup ismi -- {i['qrup']}\nIstifadecinin istifade etdiyi email -- {i['email']}\nIstifadecinin qeydiyat tarixi -- {i['created_at']}")        
                    
#----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

        elif select == "13":
            dail = input("Telebenin emailni daxil edin : ")
            for t in allStudent.values():
                if t["email"] == dail:
                    qosulma = datetime.datetime.year - t["created_at"].year
                    qosulmaay = datetime.datetime().today().month - t["created_at"].month
                    qosulmagun = datetime.datetime().today().day - t["created_at"].day
                    print(f"{qosulma}-->>il {qosulmaay}-->>ay {qosulmagun}-->>gun evvel It stepe qosulub")
                    print("Istifadecinin it stepden qeydiyyatdan kecdiyi zaman -- ",qosulma)

#----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

        elif select == "14":
            for key in allStudent.values():
                print(f"\nIstifadecinin adi -- {key['name']}\nIstifadecinin soyadi -- {key['surname']}\nIstifadecinin ata adi -- {key['fathername']}\nIsrifadecinin dogum ili --{key['brithyear']}\nIstifadecinin qiyetleri -- {key['mark']}\nIstifadecinin muveffeqiyyeti -- {key['view']}\nQrup ismi -- {key['qrup']}\nIstifadecinin istifade etdiyi email -- {key['email']}\nIstifadecinin qeydiyat tarixi -- {key['created_at']}")
        elif select == "0":
            break
        else:
            print("Zehmet olmasa duzgun secim edin!")

    except ValueError():
        print("Zehmet olmasa deyeri duzgun daxil edin !")
    except NameError():
        print("Zehmet olmada duzgun daxil edin !")
        
        
##-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------