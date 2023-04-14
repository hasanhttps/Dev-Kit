
while True:
    secim = input("Menyudan birini secin :")
    
    
    if secim == "1":
        filename = input("File adi daxil edin : ")
        filename +=".txt"
        try :
            
            open(filename,"x",encoding="UTF-8")
            print(f"{filename} adinda file yaradildi.")
        except:
            print(f"{filename} adinda file movcuddur")
    elif secim == "2":
        ad = input("Zehmet olmasa adinizi daxil edin :")
        soyad = input("Zehmet olmasa soyadinizi daxil edin :")
        ata_ad = input("Zehmet olmasa ata adinizi daxil edin :")
        dogumili = input("Zehmet olmasa dogum ilinizi daxil edin : ")
        
        file_name = input("Save etmek istediyiniz Faylin adini daxil edin :")
        file_name += ".txt"
        
        
        openfile = open(file_name,"a",encoding="UTF-8")
        openfile.write(f"{ad}\t{soyad}\t{ata_ad}\t{dogumili}\n")
        print("Ugurla qeydiyyatdan kecdiniz")
        openfile.close()#Mutleq close edilmelidir.
    elif secim == "3":
        fileadi = input("Faylin adini daxil edin : ")
        fileadi+=".txt"
        f = open(fileadi,"r",encoding="UTF-8")
        # print(f) -- Dedikde filenin uzantisi cixacaq
        
        telebeler = f.readlines()
        for i in telebeler:
           
            print(f"Butun telebeler  {i}")
    elif secim == "4":
        fileninad = input("Axtardiginiz filenin adini daxil edin : ")
        fileninad+=".txt"
        try:
            f = open(fileninad, "r", encoding="UTF-8")
            elifba = f.readlines()
            elifba.sort()
            for i in elifba:
                print(f"{i} ")
            f.close()
        except:
            print(f"{fileninad} adinde bir file yoxdur!!")      
        
        
        f.close()
    elif secim == "5":
        searchfile = input("Filenin adini daxil edin : ")
        searchfile +=".txt"
        telebead = input("Telebenin adini daxil edin :")
        k = open(searchfile,"r",encoding = "UTF-8")
        telebe = k.readlines()
        count = 0
        for i in telebe:
            d = i.split("\t")
            if telebead == d[0]:
                print("\t".join(d)) 
            elif count == len(telebe):
                print("Bele bir telebe yoxdur")
            count +=1
        k.close()
    elif secim == "6":
        ad = input("Filenin adini daxil edin : ")
        ad += ".txt"
        telebeninadi = input("Telebnin adini daxil edin : ")
        read = open(ad,"r",encoding="UTF-8")
        readlist = read.readlines()
        acilmis = open(ad,"w",encoding="UTF-8")
        count = 0
        for i in readlist:
            d = i.split("\t")
            if telebeninadi == d[0]:
                string = readlist[count]
                readlist.remove(string)
                stringformat = "".join(readlist)
                acilmis.write(stringformat)
                print("Telebenin datalari ugurla silindi")
            else:
                count +=1
            
        
            
        read.close()
        acilmis.close()
    elif secim == "0":
        print("Bye Bye")
        break
