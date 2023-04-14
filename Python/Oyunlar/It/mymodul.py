import mymodul


import datetime


#-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
#1ci funksiya



def insert(mail,ad,soyad,atad,dogumili,grup,allstudent):
    if len(ad) < 3:
        
        return "Telebenin adi minimum 3 symbol olmalidir."
    

    elif len(atad) < 3:
        
        return "Telebenin ata adi minimum 3 symbol olmalidir."
    
    
    elif len(soyad) < 3:
        
        return "Telebenin soyadi minimum 3 symbol olmalidir."
    
    
    elif not dogumili > 1980 and dogumili < 2006:
        
        
        return "Yas 16 ile 42 arasi olmalidir."
    else:
        student = {
        "name": ad,
        "surname": soyad,
        "fathername": atad,
        "birthyear": dogumili,
        "mark": [],
        "qrup":grup,
        "email":mail}
        allstudent.update({mail:student})
   
        return("Telebnin qeydiyyati ugurla basa catdi")
    
    
    
#-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
#2ci Funksiya

def delete(mail2,allstudent):
    
    for i in allstudent:
        
        if mail2 == i:
            
            secim = input("""Telebeni silmeye eminsiniz ?
                          [y]--Beli
                          [n]--xeyir                     :""")
            if secim == "y":
                s = allstudent.pop(i)
                
                return f"Silinen Telebe == {s}"
            elif secim == "n":
                print("Telebe silinmedi")
            else:
                print("Zehmet olmasa seciminizi serte uygun edin !!")
        
#-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
#3cu funksiya

def searchstudent(search,allstudent):
    for key,value in allstudent.items():
        if value['name'] == search:
            print(f"Istifadecinin adi -- {value['name']}\nIstifadecinin soyadi -- {value['surname']}\nIstifadecinin ata adi -- {value['fathername']}\nIstiadecinin dogumili -- {value['birthyear']}\nIstifadecinin qiymetleri --  {value['mark']}\nIstifadecinin tehsil aldigi qrup -- {value['qrup']}\nIstifadecinin emaili -- {value['email']} ")
            
#-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
#4cu Funksiya  

def qiymetvermek(qiymet,daxil,allstudent):
    for i in allstudent.values():
        if i["email"] == qiymet:
            d = i["mark"].append(daxil)
            return f"{qimet} adli telebeye qiymet gonderilidi."


#-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

#5ci Funksiya
def yashoyren(yash,allstudent):
    for i in allstudent.values():
        if i["email"] == yash:
            dogum = i["birthyear"]
            telebeyas = datetime.date.today().year - dogum
            return f"Telebenin yasi {telebeyas}' dur."
        
#---------------------------------------------------------------------------------------------------------------------------------------------------------------------

#6ci Funksiya
def changeqrup(exch,newqrup,allstudent):
    for i in allstudent.values():
        if i["email"] == exch:
            i["qrup"] = newqrup
            return f"Telebenin yeni qrupu {newqrup}, olaraq teyin edildi."
            
#----------------------------------------------------------------------------------------------------------------------------------------------------------------------

#7ci Funksiya
def eyniqrupdakitelebelerinsiyahisi(searchgroup,allstudent):
        for value in allstudent.values():
            if value["qrup"] == searchgroup:
                print(f"Istifadecinin adi -- {value['name']}\nIstifadecinin soyadi -- {value['surname']}\nIstifadecinin ata adi -- {value['fathername']}\nIstiadecinin dogumili -- {value['birthyear']}\nIstifadecinin qiymetleri --  {value['mark']}\nIstifadecinin tehsil aldigi qrup -- {value['qrup']}\nIstifadecinin emaili -- {value['email']}\n ")
        return "........"
#----------------------------------------------------------------------------------------------------------------------------------------------------------------------
#8ci funksiya



def showallstudent(allStudent):
    
    for key,value in allStudent.items():
        print(f"Istifadecinin adi -- {value['name']}\nIstifadecinin soyadi -- {value['surname']}\nIstifadecinin ata adi -- {value['fathername']}\nIstiadecinin dogumili -- {value['birthyear']}\nIstifadecinin qiymetleri --  {value['mark']}\nIstifadecinin tehsil aldigi qrup -- {value['qrup']}\nIstifadecinin emaili -- {value['email']}\n ")