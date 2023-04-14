#text files

from tkinter import * 


# def mysave():
#     a = mytext.get("0.0","end")#Birinci argument'in birinci terefi haradan haraya qeder olacagini deyirik indeks kimi 0 1ci sutundur.Ikinci teref ise setirdir.

#     print(a)
    


# window = Tk()

# window.title("Text")
# window.geometry("500x500+700+250")

# mytext = Text(window)
# mytext.pack(expand=True,fill=BOTH)



#------------------------------------------------------------------------------------------------------

#Text


# BT = Button(window,text="Save text",command=mysave)
# BT.pack(side=BOTTOM)

#-------------------------------------------------------------------------------------------------------

#------>ListBox<--------#Mutleq bax proyektde asandliq yaradacaq

#-------------------------------------------------------------------------------------------------------

#Files --- text file (.txt)
#filename filemode ecoding
# open("Tkinter ders-5.py","w",encoding="UTF-8")# noqte yazmadiqda typesiz yazir


#"w" -- >> (write mode) -- >> sizin verdiyiniz adda fayl varsa onu acir icini tamamile silir ve sizin yazmaq istediyiniz datani yazir.


#"r" -- >> (read mode) -- >>  file varsa onu air ve onu oxumaginiza icaze verecek eyer file yoxdursa error atacaq.


#"a" -- >> (append mode) -- >> File varsa acir ve sizin kursorun qaldigi son yerden devam eliyir.


#"r+" -- >> (oxuma ve yazma modu) -- >> Hem oxumaga hem yazmaga icaze verir.


#x -- create mode -- file yoxdursa yaradir . file varsa error atir.

#-------------------------------------------------------------------------------------------------------

# f = open("student.txt","a",encoding="UTF-8")

# f.write("nsbfmnbsdnfbsnd")#Terrs slash n qoyulmadiqda setir setir yazmir .Kursorun qaldigi yerden yazir.(\n)

#write mode

# f.writelines(["\nSeee you again","\nJHSDKFJSH"])

# f.close()#Mutleq acdiqimiz filei silmeliyik.

#read  mode
# text = f.read()
# print(text)


# text = f.readline()#Argumentine byte daxil ede bilerik ve byte oxuyur
# print(text)


# text2 = f.readline()#Her readline dedikde oxuyur ve kursoru kecirir diger setire

# print(text2)


# text = f.readlines()#Dedikde butun setirleri list seklinde print edecek.Her enter backendde \n dir.#Argumentine byte daxil ede bilerik ve byte oxuyur
# print(text)

# text = f.read(10)#Daxil etdiyimiz qeder byte print edecek
# #\n de bir bytedir

# print(text)


#Append mode 
# f = open("student.txt","a",encoding="UTF-8")

# f.write("Eli")#Kursor harda qalibsa ordan yazacaq#
# f.write("Mehriban\n")
# f.write("Vidadi")

# #x create mode 
# f = open("student1.txt","x")#X methodundan istifade edende f .close() a ehtiyyac yoxdur.Fayl olmadiqda yaradir.Uzerinde islemek olmur.Vatr olan fayl adi daxil etdikde error atacaq

# #r+ ---  Yazmaq ve oxumagi eyni anda ede bileriy.
# file = open("student.student.txt","r+")
# a = file.read()
# print(a)

# file.write("kdskfd")


#--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#Task 

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



#--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#20 59
print("It Step")
print("Academy", end=" ")



# window.mainloop()