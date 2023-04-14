from tkinter import *

from tkinter import messagebox

import pickle

from tkinter import ttk

import datetime



talep = {
    "Italiano":"12$"
}

try:
    write_talep = open("talepler.txt","rb")

    talep = pickle.load(write_talep)
    
    write_talep.close()
except:
    write_talep = open("talepler.txt","wb")
    
    pickle.dump(talep,write_talep)

    write_talep.close()

sous = {
    "Ketchup":"0.5",
    "Moyonez":"0.3",
    "Pendir sous":"0.6"
}

try:
    write_sous= open("sous.txt","rb")

    pizza_sous = pickle.load(write_sous)
    
    write_sous.close()
except:
    write_sous = open("sous.txt","wb")

    pickle.dump(sous, write_sous)
    
    write_sous.close()
    



pizza_price = {
    "check_kicikboy":"7",
    "check_ortaboy":"9",
    "check_boyukboy":"15"
}

try:
    write_price= open("pizzaprice.txt","rb")

    pizza_price = pickle.load(write_price)
    
    write_price.close()

except:
    write_price = open("pizzaprice.txt","wb")

    pickle.dump(pizza_price, write_price)
    
    write_price.close()


pizza_names = {
    "check_kicikboy":"Marqarita",
    "check_ortaboy":"Vegeterian",
    "check_boyukboy":"Mitlovers"
}

try:
    write_name = open("pizzanames.txt","rb")

    pizza_names = pickle.load(write_name)
    
    write_name.close()
except:
    write_name = open("pizzanames.txt","wb")

    pickle.dump(pizza_names, write_name)
    
    write_name.close()

earning_dictionary = {
    "2021-5-15":"23"
}

try:
    writeearning = open("earning.txt","rb")
    earning_dictionary = pickle.load(writeearning)
    
    writeearning.close()
except:
    writeearning = open("earning.txt","wb")

    pickle.dump(earning_dictionary, writeearning)
    
    writeearning.close()
    
    
alladmins = {
    "hesenabdullazad@gmail.com":{
        "name":"Hesen",
        "surname":"Abdullazzade",
        "age":21,
        "gender":"Male",
        "email":"hesenabdullazad@gmail.com",
        "password":"admin",
        "language":"python"
    }
}


try:
    filewriteadmin = open("alladmins.txt","rb")

    alladmins = pickle.load(filewriteadmin)

    filewriteadmin.close()
except:
    filewriteadmin = open("alladmins.txt","wb")

    pickle.dump(alladmins, filewriteadmin)

    filewriteadmin.close()


alluser = {
    "cavid@gmail.com":{
        "name":"Cavid",
        "surname":"Atamoghlanov",
        "Age":21,
        "Gender":"Male",
        "email":"cavid@gmail.com",
        "password":"1234"
    }
}


try:
    filewrite = open("allusers.txt","rb")

    alluser = pickle.load(filewrite)

    filewrite.close()
except:
    filewrite = open("allusers.txt","wb")

    pickle.dump(alluser, filewrite)

    filewrite.close()



#--------------------------------------------------------------------------------------------------------------------------
#Startup

window = Tk()

#-----------------------------------------------------------------------------------------------------------
#Main page

main_page_frame = Frame(window)
main_page_frame.pack(expand=True,fill=BOTH)


#-----------------------------------------------------------------------------------------------------------------------------
#FRAMES

sign_up_frame = Frame(window)
sign_up_frame_admin = Frame(window)
register_frame = Frame(window)
siparis_frame = Frame(window)
adminpage_frame = Frame(window)
whois_frame = Frame(window)
support_frame = Frame(window,bg="white")
edit_pizza_frame = Frame(window)
new_label = Label(adminpage_frame,text="")
edit_pizza_name = Frame(window)
concatanation = ""
edit_price_frame = Frame(window)
talep_frame = Frame(window)
notifications_frame = Frame(window)

#------------------------------------------------------------------------------------------------------------------------------
#Global variable

total = 0
earning = 0
messaj = 0

#------------------------------------------------------------------------------------------------------------------------------
#Design


window.iconbitmap("C:/Users/hasan/OneDrive/Masaüstü/Python/Final Project/images/3132693.ico")
window.title("Pie Pizza")
window.geometry("500x410+700+250")
window.minsize(200,210)
window.maxsize(500,410)

anasayfa_sekil = PhotoImage(file="C:/Users/hasan/OneDrive/Masaüstü/Python/Final Project/images/Chow-Cheers-Nandos-restaurant-Menu-Design.gif")
ansayfalabel = Label(main_page_frame,image=anasayfa_sekil).pack()

back_image = PhotoImage(file="C:/Users/hasan/OneDrive/Masaüstü/Python/Cookie clikcer/images/backimage.gif")

homeimage = PhotoImage(file="C:/Users/hasan/OneDrive/Masaüstü/Python/Final Project/images/pngwing.com-_4_.gif")

siparisimage = PhotoImage(file="C:/Users/hasan/OneDrive/Masaüstü/Python/Final Project/images/menu.gif")

siparisimagelabel = Label(siparis_frame,image=siparisimage).pack()

hideimage = PhotoImage(file="C:/Users/hasan/OneDrive/Masaüstü/Python/Final Project/images/hide-interface-symbol.gif")

exitimage = PhotoImage(file="C:/Users/hasan/OneDrive/Masaüstü/Python/Final Project/images/pngwing.com-_5_.gif")

showimage = PhotoImage(file="C:/Users/hasan/OneDrive/Masaüstü/Python/Final Project/images/show.gif")

support_image = PhotoImage(file="C:/Users/hasan/OneDrive/Masaüstü/Python/Final Project/images/information.gif")

talep_image = PhotoImage(file="C:/Users/hasan/OneDrive/Masaüstü/Python/Final Project/images/plus.gif")

buynow_image = PhotoImage(file="C:/Users/hasan/OneDrive/Masaüstü/Python/Final Project/images/buy.gif")

secim_image = PhotoImage(file="C:/Users/hasan/OneDrive/Masaüstü/Python/Final Project/images/secim.gif")

settings_image = PhotoImage(file="C:/Users/hasan/OneDrive/Masaüstü/Python/Final Project/images/settings.gif")

save_button_image = PhotoImage(file="C:/Users/hasan/OneDrive/Masaüstü/Python/Final Project/images/save-file.gif")

admin_walpaper = PhotoImage(file="C:/Users/hasan/OneDrive/Masaüstü/Python/Final Project/images/admin (1) (1).gif")

admin_walpaper_label = Label(edit_pizza_frame,image=admin_walpaper).pack()

back_button_image = PhotoImage(file="C:/Users/hasan/OneDrive/Masaüstü/Python/Final Project/images/left-arrow (1).gif")

price_image = PhotoImage(file="C:/Users/hasan/OneDrive/Masaüstü/Python/Final Project/images/price.gif")

check_mark_image = PhotoImage(file="C:/Users/hasan/OneDrive/Masaüstü/Python/Final Project/images/check-mark.gif")

save_talep_image = PhotoImage(file="C:/Users/hasan/OneDrive/Masaüstü/Python/Final Project/images/download.gif")

talep_back_image = PhotoImage(file="C:/Users/hasan/OneDrive/Masaüstü/Python/Final Project/images/backimage.gif")

active_image = PhotoImage(file="C:/Users/hasan/OneDrive/Masaüstü/Python/Final Project/images/active.gif")

notification_image = PhotoImage(file="C:/Users/hasan/OneDrive/Masaüstü/Python/Final Project/images/notification.gif")

trash_bin_image = PhotoImage(file="C:/Users/hasan/OneDrive/Masaüstü/Python/Final Project/images/trash.gif")

#-----------------------------------------------------------------------------------------------------------------------------
#Funksiyalar

def  delete_talep():
    talep.pop(entry_talep_delete.get())
    
    write_talep = open("talepler.txt","wb")
    
    pickle.dump(talep,write_talep)

    write_talep.close()
    
    stringadd = ""
    
    for key,value in talep.items():
        stringadd += f"Name : {key}                       Price : {value}\n\n"

        talep_messaj_label.place(relx=0.25,rely=0.2)
        talep_messaj_label.config(text=stringadd)
        
    messagebox.showinfo("Info",f"{entry_talep_delete.get()} telebi ugurla silindi !")
    
def back_notifications_command():
    window.iconbitmap("C:/Users/hasan/OneDrive/Masaüstü/Python/Final Project/images/pngwing.com (6).ico")
    notifications_frame.forget()
    adminpage_frame.pack(expand=True,fill=BOTH)
    earning_label.place(relx=0.2,rely=0.2,relwidth=0.6,relheight=0.5)
    wiew_more_button.place(relx=0.45,rely=0.6)
    window.geometry("700x600+600+150")
    window.title("Admin Page")
    window.minsize(700,600)
    window.maxsize(800,800)

def notifications_open_frame():

    stringadd = ""
    adminpage_frame.forget()
    notifications_frame.pack(expand=True,fill=BOTH)
    window.title("Notifications")
    window.iconbitmap("C:/Users/hasan/OneDrive/Masaüstü/Python/Final Project/images/notification-bell.ico")
    
    for key,value in talep.items():
        stringadd += f"Name : {key}                       Price : {value}\n\n"

        talep_messaj_label.place(relx=0.25,rely=0.2)
        talep_messaj_label.config(text=stringadd)
       
        
    

def save_talep():
    
       
    talep_pizza_name = entry_talep_name.get()
    
    talep_pizza_price = entry_talep_price.get()
    
    talep.update({talep_pizza_name:talep_pizza_price})

    
    write_talep = open("talepler.txt","wb")
        
    pickle.dump(talep,write_talep)

    write_talep.close()
    
    messagebox.showinfo("Info","Deisiklikler ugurla yadda saxlanildi !")
    


def back_button_talep():
    talep_frame.forget()
    siparis_frame.pack(expand=True,fill=BOTH)
    window.geometry("700x600+600+100")
    window.title("Menu")
    window.minsize(600,800)
    window.maxsize(616,860)
    

def open_talep_frame():
    siparis_frame.forget()
    talep_frame.pack(expand=True,fill=BOTH)
    window.title("Talep")
    window.geometry("700x600+600+250")
    window.minsize(700,600)
    window.maxsize(800,800)

def back_price_frame():
    edit_price_frame.forget()
    edit_pizza_frame.pack(expand=True,fill=BOTH)
    window.title("Edit Menu")

def open_pizza_price():
    window.title("Edit Price")
    edit_pizza_frame.forget()
    edit_price_frame.pack(expand=True,fill=BOTH)
    entry_change_price.place(relx=0.35,rely=0.2)

def save_pizza_price():
    global pizza_price
    
    if price_combobox.get() == pizza_price['check_boyukboy']:
        pizza_price.update({"check_boyukboy":entry_change_price.get()})
    elif price_combobox.get() == pizza_price['check_ortaboy']:
        pizza_price.update({"check_ortaboy":entry_change_price.get()})
    elif price_combobox.get() == pizza_price['check_kicikboy']:
        pizza_price.update({"check_kicikboy":entry_change_price.get()})
    else:
        messagebox.showinfo("Info Screen","You must chose 1 pizza !")
    write_price= open("pizzaprice.txt","wb")

    pickle.dump(pizza_price,write_price)
    
    write_price.close()
        
    check_kicikboy = ttk.Checkbutton(siparis_frame,text=f"{pizza_names['check_kicikboy']} -- {pizza_price['check_kicikboy']}$",variable=sosis_kicikboy,cursor="hand2",command=totalpizza)
    check_kicikboy.place(relx=0.15,rely=0.2,relwidth=0.6,relheight=0.025)

    check_ortaboy = ttk.Checkbutton(siparis_frame,text=f"{pizza_names['check_ortaboy']} -- {pizza_price['check_ortaboy']}$",variable=sosis_ortaboy,cursor="hand2",command=totalpizza)
    check_ortaboy.place(relx=0.15,rely=0.25,relwidth=0.6,relheight=0.025)


    check_boyukboy = ttk.Checkbutton(siparis_frame,text=f"{pizza_names['check_boyukboy']} -- {pizza_price['check_boyukboy']}$",variable=sosis_boyukboy,cursor="hand2",command=totalpizza)
    check_boyukboy.place(relx=0.15,rely=0.30,relwidth=0.6,relheight=0.025)

        
    messagebox.showinfo("Info","Deisiklikler yadda saxlanildi !")   
    

def back_pizza_name():
    edit_pizza_name.forget()
    edit_pizza_frame.pack(expand=True,fill=BOTH)
    window.title("Edit Menu")

def back_edit_frame():
    edit_pizza_frame.forget()
    adminpage_frame.pack(expand=True,fill=BOTH)
    window.geometry("700x600+600+150")
    window.title("Admin Page")
    window.iconbitmap("C:/Users/hasan/OneDrive/Masaüstü/Python/Final Project/images/pngwing.com (6).ico")
    window.minsize(700,600)
    window.maxsize(800,800)

def save_changes():
    global pizza_names
    
    print(change_combobox.get())
    if change_combobox.get() == pizza_names['check_boyukboy']:
        pizza_names.update({"check_boyukboy":entry_change_name.get()})
    elif change_combobox.get() == pizza_names['check_ortaboy']:
        pizza_names.update({"check_ortaboy":entry_change_name.get()})
    elif change_combobox.get() == pizza_names['check_kicikboy']:
        pizza_names.update({"check_kicikboy":entry_change_name.get()})
    else:
        messagebox.showinfo("Info Screen","You must chose 1 pizza !")
    write_name = open("pizzanames.txt","wb")

    pickle.dump(pizza_names, write_name)
    
    write_name.close()
    
    check_kicikboy = ttk.Checkbutton(siparis_frame,text=f"{pizza_names['check_kicikboy']} -- {pizza_price['check_kicikboy']}$",variable=sosis_kicikboy,cursor="hand2",command=totalpizza)
    check_kicikboy.place(relx=0.15,rely=0.2,relwidth=0.6,relheight=0.025)

    check_ortaboy = ttk.Checkbutton(siparis_frame,text=f"{pizza_names['check_ortaboy']} -- {pizza_price['check_ortaboy']}$",variable=sosis_ortaboy,cursor="hand2",command=totalpizza)
    check_ortaboy.place(relx=0.15,rely=0.25,relwidth=0.6,relheight=0.025)


    check_boyukboy = ttk.Checkbutton(siparis_frame,text=f"{pizza_names['check_boyukboy']} -- {pizza_price['check_boyukboy']}$",variable=sosis_boyukboy,cursor="hand2",command=totalpizza)
    check_boyukboy.place(relx=0.15,rely=0.30,relwidth=0.6,relheight=0.025)

        
    messagebox.showinfo("Info","Deisiklikler yadda saxlanildi !")   
    
        

def entry_name_open():
    window.title("Edit Name")
    edit_pizza_frame.forget()
    edit_pizza_name.pack(expand=True,fill=BOTH)
    entry_change_name.place(relx=0.35,rely=0.2)

def settings_open():
    adminpage_frame.forget()
    edit_pizza_frame.pack(expand=True,fill=BOTH)
    window.iconbitmap("C:/Users/hasan/OneDrive/Masaüstü/Python/Final Project/images/edit.ico")
    window.title("Edit Menu")
    window.geometry("500x410+700+250")
    window.minsize(400,310)
    window.maxsize(500,410)


def wiew_label():
    
    global earning
    
    global earning_label
    
    global wiew_more_button
    
    tebrikler_label.config(text=f"Congratulations {alladmins[entry_login_email.get()]['name']}\U0001F389",font="utf-8")
    
    earning_label.config(text=f"Gunluk satis\n ${earning}",bg="white",fg="#8142f5")
    wiew_more_button.config(text="View Sales",command=more)
    
def more():
    global concatanation
    
    global wiew_more_button
    
    global earning
    
    tebrikler_label.config(text="")
    
    for key,value in earning_dictionary.items():
        concatanation += f"Date - {key} : {value}$\n"
        earning_label.config(text=f"{concatanation}",bg="white")
    wiew_more_button.config(text="View Less",command=wiew_label)
    concatanation = ""

def log_in_backbutton():
    register_frame.forget()
    main_page_frame.pack(expand=True,fill=BOTH)
    window.title("Pie Pizza")
    
    
def adminback():
    adminpage_frame.forget()
    window.iconbitmap("C:/Users/hasan/OneDrive/Masaüstü/Python/Final Project/images/3132693.ico")
    register_frame.pack(expand=True,fill=BOTH)
    window.geometry("500x410+700+250")
    window.minsize(200,210)
    window.maxsize(500,410)
    window.title("Log In")
    

def home_menu():
    siparis_frame.forget()
    window.title("Pie Pizza")
    window.geometry("500x410+700+250")
    window.minsize(200,210)
    window.maxsize(500,410)
    main_page_frame.pack(expand=True,fill=BOTH)

def buy():
    global earning
    global total
    if total != 0:
        earning += total
        earning_label.config(text=f"Gunluk satis\n ${earning}")
        earning_dictionary.update({str(datetime.date.today()):str(earning)})

        writeearning = open("earning.txt","wb")
        pickle.dump(earning_dictionary, writeearning)
        
        writeearning.close()
        
        
        writeearning.close()
        print(earning_dictionary)
        yeni_pencere = Toplevel()
        yeni_pencere.title("Siparis Onaylandi")
        yeni_pencere.iconbitmap("C:/Users/hasan/OneDrive/Masaüstü/Python/Final Project/images/check.ico")
        yeni_pencere.geometry("400x300+750+400")
        yeni_pencere.minsize(400,300)
        yeni_pencere.maxsize(400,400)
        yeni_pencere.config(bg="white")
        yeni_pencere_label = Label(yeni_pencere,text=f"Siparis {total} manat deyerindedir.\nOdenis kart vasitesi ile edildi.\nTexmini 30 deqiqe icerisinde yemek unvana catdirilaacaq.",fg="#15731d",bg="white")
        yeni_pencere_label.place(relx=0.15,rely=0.4)
    else:
        messagebox.showinfo("Info screen","Menuden mutleq 1 ve daha cox yemek secilmelidir yoxsa siparis alinmayacaqdir!")
def totalpizza():
    
    global total
    
    total = 0

    count = 0
    
    coun = 0
    
    cou = 0
    
    if sosis_kicikboy.get() == True:
        total += int(pizza_price["check_kicikboy"])
        
        say = int(pizza_price["check_kicikboy"])
        
        count +=1
        
        if len(entry_count_marqarit.get()) != 0:
            try:
                if count !=0:
                    total -= say
                say *= int(entry_count_marqarit.get())
                total += say
                count +=1
            except TypeError:
                messagebox.showinfo("Info","Ancaq reqem daxil ede bilersiniz !")

    if sosis_ortaboy.get() == True:
        total += int(pizza_price["check_ortaboy"])
        
        sayi = int(pizza_price["check_ortaboy"])
        
        coun +=1
        
        if len(entry_count_vegeterian.get()) != 0:
            try:
                if coun != 0:
                    total -=sayi
                sayi *= int(entry_count_vegeterian.get())
                total += sayi
                coun +=1
            except TypeError:
                messagebox.showinfo("Info","Ancaq reqem daxil ede bilersiniz !") 
                
    if sosis_boyukboy.get() == True:
        total += int(pizza_price["check_boyukboy"])
        
        num = int(pizza_price["check_boyukboy"])
        
        cou +=1
        if len(entry_count_mitlovers.get()) != 0:
            try:
                if len(pizza_price["check_boyukboy"]) != 0 :
                    total -= num
                num *= int(entry_count_mitlovers.get())
                total += num
                cou +=1

            except TypeError:
                messagebox.showinfo("Info","Ancaq reqem daxil ede bilersiniz !") 
        
    if sous_variable.get() == True:
        total += float(sous["Ketchup"])
    
    if moyonez.get() == True:
        total += float(sous["Moyonez"])
    
    if pendir.get() == True:
        total += float(sous["Pendir sous"])
    


    
    
    total_label.config(text=f"Total : {total}",bg="#9e8e31")
        
def back_support():
    window.title("Siparis")
    support_frame.forget()
    siparis_frame.pack(expand=True,fill=BOTH)
    window.minsize(600,800)
    window.maxsize(616,860)

def hakkinda():
    window.title("Support")
    siparis_frame.forget()
    support_frame.pack(expand=True,fill=BOTH)
    hakkinda_label = Label(support_frame,text="""Ilk once secimlerden ne isteyirsinizse onu secin daha sonra sipris et buttonuna click etdikde siparis onaylanacaq.\n
Asagidan cemi(total) ne qeder oldugunu gore bilersiniz""",bg="white")
    hakkinda_label.place(relx=0.1,rely=0.10)
    hakkinda_image = Label(support_frame,image=secim_image,bg="white")
    hakkinda_image.place(relx=0,rely=0.14,relwidth=1,relheight=1)
    window.minsize(700,600)
    window.maxsize(800,800)
def log_in_acilis():
    main_page_frame.forget()
    register_frame.pack(expand=True,fill=BOTH)
    window.title("Log In")
    
def log_in_user():
    
    global d
    
    global loginemail
    
    if ad.get() == 1:
        if entry_login_email.get() in alluser:
            if entry_login_password.get() == alluser[entry_login_email.get()]["password"]:
                messagebox.showinfo("Welcome","Xos geldiniz !")
                register_frame.forget()
                siparis_frame.pack(expand=True,fill=BOTH)
                window.geometry("700x600+600+100")
                window.title("Menu")
                window.minsize(600,800)
                window.maxsize(616,860)
            else:
                 messagebox.showwarning("Invalid passwprd","Please input true password !")
        else:
            messagebox.showwarning("Invalid email","Please input true email !")
                
    elif ad.get() == 2:
        
        if entry_login_email.get() in alladmins:
            
            loginemail = entry_login_email.get()
            
            if entry_login_password.get() == alladmins[entry_login_email.get()]["password"]:
                window.iconbitmap("C:/Users/hasan/OneDrive/Masaüstü/Python/Final Project/images/pngwing.com (6).ico")
                messagebox.showinfo("Welcome","Xos geldiniz !")
                register_frame.forget()
                adminpage_frame.pack(expand=True,fill=BOTH)
                earning_label.place(relx=0.2,rely=0.2,relwidth=0.6,relheight=0.5)
                wiew_more_button.place(relx=0.45,rely=0.6)
                window.geometry("700x600+600+150")
                window.title("Admin Page")
                window.minsize(700,600)
                window.maxsize(800,800)
                tebrikler_label.config(text=f"Congratulations {alladmins[entry_login_email.get()]['name']}\U0001F389")
            else:
                 messagebox.showwarning("Invalid passwprd","Please input true password !")
        else:
            messagebox.showwarning("Invalid email","Please input true email !")
    else:
        messagebox.showinfo("Info","Ikisinden birini mutleq secmelisiniz")
    
            

def userfunc():
    
    verify.place(relx=0.4,rely=0.8)
    
    whois_frame.forget()
    
    combobox.place(relx = 1,rely=1)
    
    sign_up_frame.pack(expand=True,fill=BOTH)

def adminfunc():
    verifyadmin.place(relx=0.4,rely=0.8)
    whois_frame.forget()
    sign_up_frame.pack(expand=True,fill=BOTH)
    combobox.place(relx=0.7,rely=0.25)

def hidebuttonc():
    entry_confirm.config(show="*")
    showbuttonconfirm.config(image=showimage,command=showbuttonfuncconfirm)


def showbuttonfuncconfirm():
    entry_confirm.config(show="")
    showbuttonconfirm.config(image=hideimage,command=hidebuttonc)


def hidebutton():
    entry_password.config(show="*")
    showbutton.config(image=showimage,command=showbuttonfunc)
    
def showbuttonfunc():
    entry_password.config(show="")
    showbutton.config(image=hideimage,command=hidebutton)



def exitprogram():
    d = messagebox.askyesno("Exit program","Programi terk etmek istediyinize emin siniz?")
    if d == True:
        window.destroy()
    else:
        pass

def gohome():
    window.title("Pie Pizza")
    window.geometry("500x410+700+250")
    window.minsize(200,210)
    window.maxsize(500,410)
    sign_up_frame.forget()
    main_page_frame.pack(expand=True,fill=BOTH)


def sign_up_open():
    
    window.title("Sign Up")
    window.geometry("700x700+600+150")
    window.minsize(700,700)
    window.maxsize(800,800)
    main_page_frame.forget()
    whois_frame.pack(expand=True,fill=BOTH)

def signupback():
    window.title("Choiche")
    window.geometry("500x410+600+150")
    window.minsize(700,700)
    window.maxsize(800,800)
    sign_up_frame.forget()
    whois_frame.pack(expand=True,fill=BOTH)
    
def ischeck():
    if us.get() == 1:
            
        userfunc()
    elif us.get() == 2:
            
        adminfunc()
        
def addadmin():
    
    try:
        if len(entry_name.get()) >= 3:
            
            if len(entry_surname.get()) >=3:
                
                if int(entry_age.get()) > 15 and  int(entry_age.get()) <= 100:
                    
                    if x.get() == 1 or x.get() == 2:
                        
                        if entry_email.get().count("@") > 0:
                            
                            if len(entry_email.get()) > 4:
                            
                                if entry_password.get() == entry_confirm.get(): 
                                    
                                    if len(entry_password.get()) > 7:
                                
                                        if combobox.get() == "Python"or combobox.get() == "C++" or combobox.get() == "C+" or combobox.get() == "C#" or combobox.get() == "Java" or combobox.get() == "HTML":
                                            
                                            if x.get() == 1:
                                                gender = "Male"
                                            elif x.get() == 2:
                                                gender = "Female"
                                        
                                            alladmins.update({entry_email.get():{
                                                "name":entry_name.get(),
                                                "surname":entry_surname.get(),
                                                "Age":entry_age.get(),
                                                "Gender":gender,
                                                "email":entry_email.get(),
                                                "password":entry_password.get(),
                                                "language":y.get()
                            
                                                
                }})
                                        
                                            if us.get() == 1:
                
                                                adduser()
                                            if us.get() !=1:
                                                addfileadmin = open("alladmins.txt","wb")
                                                pickle.dump(alladmins, addfileadmin)
                                                
                                                addfileadmin.close()
                                                messagebox.showinfo("Bilgilendirme","Siz ugurla qeydiyyatdan kecdiniz ")
                                            sign_up_frame.forget() 
                                            register_frame.pack(expand=True,fill=BOTH)
                                            window.title("Log In")
                                            window.geometry("500x410+700+250")
                                            window.minsize(200,210)
                                            window.maxsize(500,410)
                                    
                                        else:
                                            messagebox.showwarning("Invalid Language","You must be choche 1 language !")
                                    else:
                                        messagebox.showwarning("Invalid Password","Password must be longer than 7 character !")
                                else:
                                    messagebox.showwarning("Invalid password","Password must be same with confirm password !")
                            else:
                                messagebox.showwarning("Invalid email","Mail can be minimum 5 charackter !")
                        else:
                            messagebox.showwarning("Incorrect mail","Mail must have minimum 1 \"@\" symbol !")
                    else:
                        messagebox.showwarning("Invalid Gender","You must choose 1 gender!")
                else:
                    messagebox.showwarning("Incorrect age","Age can be minimum 16 , maximum 101 !") 
            else:
                messagebox.showwarning("Invalid surname","Surname must be longer than 2 character !")
        else:
            messagebox.showwarning("Invalid Username","Username must be longer than 2 character !")            
    except Exception as ex:
        print(ex)
def adduser():
    try:
            
        if len(entry_name.get()) >= 3:
            
            if len(entry_surname.get()) >=3:
                
                if int(entry_age.get()) > 15 and  int(entry_age.get()) <= 100:
                    
                    if x.get() == 1 or x.get() == 2:
                        
                        if len(entry_email.get()) > 4:
                            
                            if entry_email.get().count("@") > 0:
                                
                                if entry_password.get() == entry_confirm.get(): 
                                    
                                    if len(entry_password.get()) > 7:
                                        
                                        if x.get() == 1:
                                            gender = "Male"
                                        elif x.get() == 2:
                                            gender = "Female"
                                    
                                        alluser.update({entry_email.get():{
                                            "name":entry_name.get(),
                                            "surname":entry_surname.get(),
                                            "Age":entry_age.get(),
                                            "Gender":gender,
                                            "email":entry_email.get(),
                                            "password":entry_password.get()
                        
                                            
            }})
                                        
                                        addfile = open("allusers.txt","wb")
                                        pickle.dump(alluser, addfile)
                                        
                                        addfile.close()
                                        messagebox.showinfo("Bilgilendirme","Siz ugurla qeydiyyatdan kecdiniz ")
                                        sign_up_frame.forget()
                                        window.title("Log In")
                                        register_frame.pack(expand=True,fill=BOTH)
                                        window.geometry("500x410+700+250")
                                        window.minsize(200,210)
                                        window.maxsize(500,410)
                                    
                                
                                    else:
                                        messagebox.showwarning("Invalid Password","Password must be longer than 7 character !")
                                else:
                                    messagebox.showwarning("Invalid password","Password must be same with confirm password !")
                            else:
                                messagebox.showwarning("Incorrect mail","Mail must have minimum 1 \"@\" symbol !")
                        else:
                                messagebox.showwarning("Invalid email","Mail can be minimum 5 charackter !")
                    else:
                        messagebox.showwarning("Invalid Gender","You must choose 1 gender!")
                else:
                    messagebox.showwarning("Incorrect age","Age can be minimum 16 , maximum 100 !") 
            else:
                messagebox.showwarning("Invalid surname","Surname must be longer than 2 character !")
        else:
            messagebox.showwarning("Invalid Username","Username must be longer than 2 character !")
                
                
    except Exception as ex:
        messagebox.showwarning("Eror",ex)
        
    

#--------------------------------------------------------Buttons---------------------------------------------------------------
#Main Buttons

sign_up_button = Button(main_page_frame,text="Sign Up",font=("Calibre",11),command=sign_up_open,bg="white")
sign_up_button.place(rely=0.55,relx=0.45,relwidth=0.13,relheight=0.08)


register_button = Button(main_page_frame,text="Log In",font=("Calibre",11),command=log_in_acilis,bg="white")
register_button.place(rely=0.45,relx=0.45,relwidth=0.13,relheight=0.08)


#--------------------------------------------------------------------------------------------------------------------------------------------------
#  user  signup design


sign_up_back = Button(sign_up_frame,image=back_image,bg="white",command=signupback)
sign_up_back.place(rely=0.05,relx=0.05,relwidth=0.05,relheight=0.05)


verify = Button(sign_up_frame,text="Sign Up",font=("Calibre",12),command=adduser)

homebutton = Button(sign_up_frame,image=homeimage,command=gohome,bg="white")
homebutton.place(relx=0.9,rely=0.05)

exitbutton = Button(main_page_frame,image=exitimage,command=exitprogram,bg="white")
exitbutton.place(relx=0.9,rely=0.8,relwidth=0.07,relheight=0.11)

showbutton = Button(sign_up_frame,image=showimage,command=showbuttonfunc)
showbutton.place(rely= 0.45,relx = 0.55,relheight=0.038,relwidth=0.049)

showbuttonconfirm = Button(sign_up_frame,image=showimage,command=showbuttonfuncconfirm)
showbuttonconfirm.place(rely= 0.5,relx = 0.55,relheight=0.04,relwidth=0.049)

#-------------------------------------------------------------------------------------------------------------------------
#Siparis page

support_button = Button(siparis_frame,image=support_image,bg="white",command=hakkinda)
support_button.place(relx=0.9,rely=0.05)

verifyadmin = Button(sign_up_frame,text="Sign Up",font=("Calibre",12),command=addadmin)

check_mark_mitlovers = Button(siparis_frame,image=check_mark_image,bg="white",command=totalpizza)
check_mark_mitlovers.place(relx=0.9,rely=0.3,relwidth=0.05,relheight=0.025)

check_mark_vegeterian = Button(siparis_frame,image=check_mark_image,bg="white",command=totalpizza)
check_mark_vegeterian.place(relx=0.9,rely=0.25,relwidth=0.05,relheight=0.025)

check_mark_marqarit = Button(siparis_frame,image=check_mark_image,bg="white",command=totalpizza)
check_mark_marqarit.place(relx=0.9,rely=0.2,relwidth=0.05,relheight=0.025)

#-------------------------------------------------------------------------------------------------------------------------
#Log In

log_in_buttonuser = Button(register_frame,command=log_in_user,text="Log In",bg="white")
log_in_buttonuser.place(relx=0.45,rely=0.8)

back_button_support = Button(support_frame,image=back_image,bg="white",command=back_support)
back_button_support.place(rely=0.02,relx=0.02,relwidth=0.04,relheight=0.055)

buy_now_button = Button(siparis_frame,image=buynow_image,bg="white",command=buy)
buy_now_button.place(relx=0.45,rely=0.75,relheight=0.07)

menu_home_button = Button(siparis_frame,image=homeimage,bg="white",command=home_menu)
menu_home_button.place(rely=0.05,relx=0.05)

bacbutton_admin = Button(adminpage_frame,image=back_image,bg="white",command=adminback)
bacbutton_admin.place(rely=0.05,relx=0.05,relwidth=0.05,relheight=0.06)

log_in_back = Button(register_frame,image=back_image,bg="white",command=log_in_backbutton)
log_in_back.place(rely=0.05,relx=0.05,relwidth=0.06,relheight=0.08)

#-------------------------------------------------------------------------------------------------------------------------
#Admin Page

settings_button = Button(adminpage_frame,image=settings_image,bg="white",command=settings_open)
settings_button.place(rely=0.2,relx=0.05)

notification_button = Button(adminpage_frame,image=notification_image,bg="white",command=notifications_open_frame)
notification_button.place(rely=0.35,relx=0.05)

earning_label = Label(adminpage_frame,text=f"Gunluk satis\n ${earning}",bg="white",fg="#8142f5")
earning_label.place(relx=0.2,rely=0.2,relwidth=0.6,relheight=0.5)

wiew_more_button = Button(adminpage_frame,text="View Sales",bg="#8142f5",fg="white",command=more)
wiew_more_button.place(relx=0.45,rely=0.6)

change_name_button = Button(edit_pizza_frame,text="Edit Name",fg="#2a2b30",bg="#ffffff",command=entry_name_open)
change_name_button.place(relx=0.45,rely=0.5)

save_button_name = Button(edit_pizza_name,image=save_button_image,bg="white",command=save_changes)
save_button_name.place(relx=0.5,rely= 0.6)

pizza_edit_back = Button(edit_pizza_frame,image=back_button_image,bg="white",command=back_edit_frame)
pizza_edit_back.place(relx=0.05,rely=0.05,relwidth=0.06,relheight=0.06)

back_edit_name = Button(edit_pizza_name,image=back_button_image,bg="white",command=back_pizza_name)
back_edit_name.place(relx=0.05,rely=0.05,relwidth=0.06,relheight=0.06)

edit_pizza_price = Button(edit_pizza_frame,text="Edit Price",fg="#2a2b30",bg="#ffffff",command=open_pizza_price)
edit_pizza_price.place(relx=0.17,rely=0.7)

save_pizza_button = Button(edit_price_frame,image=save_button_image,bg="white",command=save_pizza_price)
save_pizza_button.place(relx=0.5,rely= 0.6)

back_pizza_price = Button(edit_price_frame,image=back_image,bg="white",command=back_price_frame)
back_pizza_price.place(rely=0.05,relx=0.05,relwidth=0.05,relheight=0.06)

#------------------------------------------------------------------------------------------------------------------------------
#Talep onay button

talep_button = Button(siparis_frame,image=talep_image,bg="white",command=open_talep_frame)
talep_button.place(relx=0.84,rely=0.05)

talep_onay_button = Button(talep_frame,image=save_talep_image,bg="white",command=save_talep)
talep_onay_button.place(relx = 0.5,rely = 0.8)

talep_back_button = Button(talep_frame,image=talep_back_image,bg="white",command=back_button_talep)
talep_back_button.place(relx=0.05,rely=0.05)

back_notifications_button = Button(notifications_frame,image=talep_back_image,bg="white",command=back_notifications_command)
back_notifications_button.place(relx=0.05,rely=0.05)

silme_talep_button = Button(notifications_frame,image= trash_bin_image,bg ="white",command=delete_talep)
silme_talep_button.place(relx=0.9,rely=0.1)

#-------------------------------------------------------------------------------------------------------------------------------
#Entry Settings Pizzas

# entry_choiche_name = Entry(edit_pizza_name,font=("Ariel",12))
# entry_choiche_name.place(relx=0.2,rely=0.3)

entry_change_name = Entry(edit_pizza_name,font=("Ariel",10))

entry_change_price = Entry(edit_price_frame,font=("Ariel",10))

#--------------------------------------------------------------------------------------------------------------------------------
#Entry Acaunt

entry_login_email = Entry(register_frame,font=("Ariel",10))
entry_login_email.place(relx=0.35,rely=0.2)

entry_login_password = Entry(register_frame,font=("Ariel",10))
entry_login_password.place(relx=0.35,rely=0.5)

#---------------------------------------------------------------------------------------------------------------------------------
#Entry Register

entry_name = Entry(sign_up_frame,font=("Ariel",10))
entry_name.place(relx=0.3,rely=0.15)

entry_surname = Entry(sign_up_frame,font=("Ariel",10))
entry_surname.place(relx=0.3,rely=0.20)

entry_age = Entry(sign_up_frame,font=("Ariel",10))
entry_age.place(relx=0.3,rely=0.25)

entry_email = Entry(sign_up_frame,font=("Ariel",10))
entry_email.place(relx=0.3,rely=0.4)

entry_password = Entry(sign_up_frame,font=("Ariel",10),show="*")
entry_password.place(relx=0.3,rely=0.45)

entry_confirm = Entry(sign_up_frame,font=("Ariel",10),show="*")
entry_confirm.place(relx=0.3,rely=0.5)

#-----------------------------------------------------------------------------------------------------------------------------
#Entry Talep

entry_talep_delete = Entry(notifications_frame)
entry_talep_delete.place(relx = 0.7,rely=0.1)

entry_talep_name = Entry(talep_frame,font=("Ariel",14))
entry_talep_name.place(relx=0.35,rely=0.3)

entry_talep_price = Entry(talep_frame,font=("Ariel",14))
entry_talep_price.place(relx=0.35,rely=0.5)

#-----------------------------------------------------------------------------------------------------------------------------
#Count of pizzas

entry_count_mitlovers = Entry(siparis_frame,font=("Ariel",8))
entry_count_mitlovers.place(relx=0.8,rely=0.3,relwidth=0.1,relheight=0.025)

entry_count_vegeterian = Entry(siparis_frame,font=("Ariel",8))
entry_count_vegeterian.place(relx=0.8,rely=0.25,relwidth=0.1,relheight=0.025)

entry_count_marqarit = Entry(siparis_frame,font=("Ariel",8))
entry_count_marqarit.place(relx=0.8,rely=0.2,relwidth=0.1,relheight=0.025)

#------------------------------------------------------------------------------------------------------------------------------
#Labels


tebrikler_label = Label(adminpage_frame,bg="white",font=14)
tebrikler_label.place(relx=0.3,rely=0.3)

new_pizza_price = Label(edit_price_frame,text="New Price :")
new_pizza_price.place(relx=0.15,rely=0.2)

past_price_label = Label(edit_price_frame,text="Past :")
past_price_label.place(relx=0.2,rely=0.4)

login_email_label = Label(register_frame,text="Email :")
login_email_label.place(relx=0.2,rely=0.2)

login_password_label = Label(register_frame,text="Password :")
login_password_label.place(relx=0.2,rely=0.5)

name_label = Label(sign_up_frame,text="Name :")
name_label.place(relx=0.15,rely=0.15)

surname_label = Label(sign_up_frame,text="Surname :")
surname_label.place(relx=0.15,rely=0.20)

age_label = Label(sign_up_frame,text="Age :")
age_label.place(relx=0.15,rely=0.25)

gender_label = Label(sign_up_frame,text="Gender :")
gender_label.place(relx=0.15,rely=0.3)

email_label = Label(sign_up_frame,text="Email :")
email_label.place(relx=0.15,rely=0.4)

password_label = Label(sign_up_frame,text="Password  :")
password_label.place(relx=0.15,rely=0.45)

confirm_label = Label(sign_up_frame,text="Confirm Pasword :")
confirm_label.place(relx=0.15,rely=0.5)

total_label = Label(siparis_frame,text="Total : 0")
total_label.place(relx=0.8,rely=0.9)

#-------------------------------------------------------------------------------------------------------------------------------
#Change Pizza name

change_name_label = Label(edit_pizza_name,text="Name :")
change_name_label.place(relx=0.15,rely=0.2)

past_name_label = Label(edit_pizza_name,text="Past Name :")
past_name_label.place(relx=0.2,rely=0.4)

price_image_label = Label(adminpage_frame,image=price_image)
price_image_label.place(relx=0.675,rely=0.2)

#--------------------------------------------------------------------------------------------------------------------------------
#Talep Label

talep_delete_name = Label(notifications_frame,text="Entry Pizza Name",bg="white")
talep_delete_name.place(relx=0.55,rely=0.1)

talep_name_label = Label(talep_frame,text="Pizza Name :",font=12)
talep_name_label.place(relx=0.20,rely=0.3)

talep_price_label = Label(talep_frame,text="Pizza Price :",font=12)
talep_price_label.place(relx=0.199,rely=0.5)

talep_messaj_label = Label(notifications_frame,text="",font=12,bg="white")

notifications_frame.config(bg="white")

#def open notification icinde talep mesaj labeli var

#---------------------------------------------------------------------------------------------------------------------------------
#Radiobutton

x = IntVar()
us = IntVar()
ad = IntVar()

male_gender_button = Radiobutton(sign_up_frame,text="Male",value=1,variable=x)
male_gender_button.place(relx=0.3,rely=0.3)

female_gender_button = Radiobutton(sign_up_frame,text="Female",value=2,variable=x)
female_gender_button.place(relx=0.3,rely=0.34)

user_radiobutton = Radiobutton(whois_frame,text="User",value=1,variable=us,command=ischeck)
user_radiobutton.place(relx=0.3,rely=0.4)

admin_radiobutton = Radiobutton(whois_frame,text="Admin",value=2,variable=us,command=ischeck)
admin_radiobutton.place(relx=0.6,rely=0.4)

user_login_radiobutton = Radiobutton(register_frame,text="User",value=1,variable=ad)
user_login_radiobutton.place(relx=0.35,rely=0.35)

admin_login_radiobutton = Radiobutton(register_frame,text="Admin",value=2,variable=ad)
admin_login_radiobutton.place(relx=0.5,rely=0.35)

#----------------------------------------------------------------------------------------------------------------------------------
#Combobox


name = StringVar()

price = StringVar()

y = StringVar()
        
combobox = ttk.Combobox(sign_up_frame,textvariable=y,state="readonly",values=["Python","C++","C+","C#","Java","HTML"],cursor="hand2")


change_combobox = ttk.Combobox(edit_pizza_name,textvariable=name,state="readonly",values=[pizza_names['check_ortaboy'],pizza_names['check_kicikboy'],pizza_names['check_boyukboy']],cursor="hand2")
change_combobox.place(relx=0.36,rely=0.4)


price_combobox = ttk.Combobox(edit_price_frame,textvariable=price,state="readonly",value=[pizza_price["check_kicikboy"],pizza_price["check_ortaboy"],pizza_price["check_boyukboy"]])
price_combobox.place(relx=0.36,rely=0.4)


#-----------------------------------------------------------------------------------------------------------------------------------
#Checkbutton
sous_variable = IntVar()
moyonez = IntVar()
pendir = IntVar()
sosis_kicikboy = IntVar()
sosis_ortaboy = IntVar()
sosis_boyukboy = IntVar()

check_kicikboy = ttk.Checkbutton(siparis_frame,text=f"{pizza_names['check_kicikboy']} -- {pizza_price['check_kicikboy']}$",variable=sosis_kicikboy,cursor="hand2",command=totalpizza)
check_kicikboy.place(relx=0.15,rely=0.2,relwidth=0.6,relheight=0.025)

check_ortaboy = ttk.Checkbutton(siparis_frame,text=f"{pizza_names['check_ortaboy']} -- {pizza_price['check_ortaboy']}$",variable=sosis_ortaboy,cursor="hand2",command=totalpizza)
check_ortaboy.place(relx=0.15,rely=0.25,relwidth=0.6,relheight=0.025)


check_boyukboy = ttk.Checkbutton(siparis_frame,text=f"{pizza_names['check_boyukboy']} -- {pizza_price['check_boyukboy']}$",variable=sosis_boyukboy,cursor="hand2",command=totalpizza)
check_boyukboy.place(relx=0.15,rely=0.30,relwidth=0.6,relheight=0.025)


ketchup_combobox = ttk.Checkbutton(siparis_frame,text=f"Ketchup -- {sous['Ketchup']}",variable=sous_variable,cursor="hand2",command=totalpizza)
ketchup_combobox.place(relx=0.15,rely=0.35,relwidth=0.4,relheight=0.025)


moyonez_combobox = ttk.Checkbutton(siparis_frame,text=f"Moyonez -- {sous['Moyonez']}",variable=moyonez,cursor="hand2",command=totalpizza)
moyonez_combobox.place(relx=0.15,rely=0.4,relwidth=0.4,relheight=0.025)


pendir_combobox = ttk.Checkbutton(siparis_frame,text=f"Pendir Sousu -- {sous['Pendir sous']}",variable=pendir,cursor="hand2",command=totalpizza)
pendir_combobox.place(relx=0.15,rely=0.45,relwidth=0.4,relheight=0.025)


window.mainloop()





















"""
          ***********
      ***             ***
    **                   **
  *                         *
 *         *         *        *
*                              *
*                              * 
*        ***           ***     *
 *          ************      *  
   *                         *
     **                    **
       ***             ***
           ************

"""












#Bitti 