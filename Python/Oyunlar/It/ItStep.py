import mymodul as my


menu = """
__________________________________________________________________________________________________________
|[1]   --> yeni telebe elave etmey                                                                        |                                                                
|[2]   --> Secilmish telebeni silmey                                                                      |
|[3]   --> Ada  gore searching                                                                            |
|[4]   --> Email daxil edilmish telebeye qiymet verilmesi                                                 |                                               
|[5]   --> Email daxil edilmish telebenin yashinin oyrenilmesi                                            |
|[6]   --> Email daxil edilmish telebenin Groupunu deishmey                                               |
|[7]   --> Eyni groupda olan telebelerin siyahisi                                                         |  
|[8]   --> butun telebeler                                                                                |
|[0]   --> EXIT                                                                                           |
|_________________________________________________________________________________________________________|  (secim):  """


allstudent = {
    "c":{
        "name": "Cavid",
        "surname": "Hesenli",
        "fathername": "Aga",
        "birthyear": 1993,
        "mark": [7, 11, 12],
        "qrup":"11B",
        "email":"c"

    },
    "elsad@gmail.com":{
        "name": "Elsad",
        "surname": "Agayev",
        "fathername": "Musa",
        "birthyear": 1990,
        "mark": [11, 8, 9],
        "qrup":"11B",
        "email":"elsad@gmail.com"
    }
}




while True:
    print(menu)
    select = input("|Menyudan secim edin| : ")
#-------------------------------------------------------------------------------------------------------------------------


    if select == "1":
        mail = input("Telebenin emailini daxil edin : ")
        if not mail in allstudent:
            ad = input("Telebenin adini daxil edin : ")
            soyad = input("Telebenin soy adini daxil edin : ")
            atad = input("Telebenin ata adini daxil edin : ")
            dogumili = int(input("Telebenin dogumilini daxil edin : "))
            grup = input("Telebenin qrupunu daxil edin : ")
            result = my.insert(mail, ad, soyad, atad, dogumili, grup, allstudent)
            print(result)
        else:
            print("Bele bir telebe artiq movcudur.")
            
            
#--------------------------------------------------------------------------------------------------------------------------


    elif select =="2":
        mail2 = input("Telbenin mailini daxil edin : ")
        result1 = my.delete(mail2, allstudent)
        print(result1)
        
        
#---------------------------------------------------------------------------------------------------------------------------

    elif select =="3":
            search = input("Telebenin adini daxil edin : ")
            result2 = my.searchstudent(search, allstudent)
            print(result2)
            
#----------------------------------------------------------------------------------------------------------------------------

    elif select =="4":
        qiymet = (input("Qiymetlendirmek istediyiniz telebenin sistemdeki emailini daxil edin : "))
        daxil = int(input("Telebeye vermek istediyinz qiymeti daxil edin : "))
        netice = my.qiymetvermek(qiymet, daxil, allstudent)
        print(netice)
        
#----------------------------------------------------------------------------------------------------------------------------

    elif select =="5":
        yash = input("Telebenin yasini oyrenmek ucun emailini daxil edin : ")
        axir = my.yashoyren(yash, allstudent)
        print(axir)
        
#----------------------------------------------------------------------------------------------------------------------------

    elif select =="6":
        exch = input("Qrupunu deismek istediyiniz telebenin emailini daxil edin : ")
        newqrup = input("Telebenin yeni qrupunu daxil edin : ")
        least = my.changeqrup(exch, newqrup, allstudent)
        print(least)
#----------------------------------------------------------------------------------------------------------------------------

    elif select =="7":
        searchgroup = input("Axtardiginiz qrupu daxil edin : ")
        printqrup = my.eyniqrupdakitelebelerinsiyahisi(searchgroup, allstudent)
        print(printqrup)
#----------------------------------------------------------------------------------------------------------------------------

    elif select =="8":
        my.showallstudent(allstudent)
        
#----------------------------------------------------------------------------------------------------------------------------
    elif select =="0":
        print("Bye-bye")
        break
    else:
        print("\nZehmet olmasa duzgun secim edin secim yanlisdir !\n")
    

#-----------------------------------------------------------------------------------------------------------------------------