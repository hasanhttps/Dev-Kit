from tkinter import *

from tkinter import messagebox

import pickle

from tkinter import ttk

import datetime

import math

#--------------Dictioanarys------------------w

users = {
    "user1@gmail.com":{
        "name":"User",
        "surname":"Userli",
        "age":15,
        "password":"12345678",
        "email":"user1@gmail.com"
    },
    "user2@gmail.com":{
        "name":"User",
        "surname":"Userli",
        "age":13,
        "password":"asdfghjkl",
        "email":"user2@gmail.com"
    }
}

try:
    read_users = open("Users.txt","rb")

    users = pickle.load(read_users)
    
    read_users.close()
except:
    write_users = open("Users.txt","wb")
    
    pickle.dump(users,write_users)

    write_users.close()

balance = {
    "user1@gmail.com":13,
    "user2@gmail.com":21
}

try:
    read_balance = open("Balance.txt","rb")
    
    balance = pickle.load(read_balance)
    
    read_users.close()
except:
    write_balance = open("Balance.txt","wb")
    
    pickle.dump(balance,write_balance)

    write_balance.close()

#-------------------------Startup--------------------------

window = Tk()

window.iconbitmap("C:/Users/hasan/Desktop/Python/Cookie clikcer/Images/cookie.ico")
window.title("Registration")
window.geometry("614x410+650+300")
window.minsize(200,210)
window.maxsize(614,410)
window.resizable()

#------------------------Frames---------------------------

game_page_frame = Frame(window,bg="black")

main_page_frame = Frame(window)
main_page_frame.pack(expand=True,fill=BOTH)

home_page_frame = Frame(window)

sign_up_frame = Frame(window)

log_in_frame = Frame(window,bg="#e6e6e6")

game_frame = Frame(window)

shop_frame = Frame(window)

#------------------Global Variables-----------------------

baslangic = 0
start_minute = 0
start_second = 0
result_cookie = 0

#-----------------------Commands--------------------------

def show_balance():
    messagebox.showinfo("Balance",f"Your balance is {balance[entry_login_email.get()]} cp . If you want more cp , you can buy cp from shop.")
    

def back_game_home():
    game_frame.forget()
    home_page_frame.pack(expand=True,fill=BOTH)
    window.title("Home")
    window.geometry("1239x732+350+150")
    window.minsize(1200,700)
    window.maxsize(1920,1080)
    

def start_count_cookie():
    global start_minute
    global start_second
    global baslangic
    if baslangic == 0:
        start_datetime = datetime.datetime.now()
        start_minute = start_datetime.minute
        start_second = start_datetime.second
    baslangic +=1
    count_cookie_label = Label(game_frame,text=f"{baslangic} cookies",bg="#28678A",font=("Calibri",40,"bold"),fg="white")
    count_cookie_label.place(relx=0.06,rely=0.1)
    

def end_time():
    global result_cookie
    global start_minute
    global start_second
    global baslangic
    end_datetime = datetime.datetime.now()
    end_minute = end_datetime.minute
    end_second = end_datetime.second
    time_minute = end_minute - start_minute
    time_second = end_second - start_second
    minute_second = time_minute * 60
    second = minute_second + time_second
    if time_second < 0:
        time_second *= -1
        time_second = 60 - time_second
        time_minute -=1
    result_cookie = baslangic
    persecond = result_cookie / second
    result = Toplevel(bg="white")
    result.iconbitmap("C:/Users/hasan/Desktop/Python/Cookie clikcer/images/notepad.ico")
    result.title("Result")
    result.geometry("500x410+700+250")
    result.minsize(400,310)
    result.maxsize(500,410)  
    persecond = int(persecond)
    if persecond >= 0 and persecond <= 4:
        level = Label(result,text=f"{int(persecond)} click too low . You are turtle.",font=("Calibri",25,"bold"),bg="white")
        level.place(relx = 0.1,rely=0.3)
    elif persecond >= 5 and persecond <= 6:
        level = Label(result,text=f"{int(persecond)} click is normal . You are human.",font=("Calibri",25,"bold"),bg="white")
        level.place(relx = 0.1,rely=0.3)
    elif persecond >=  7 and persecond <= 10:
        level = Label(result,text=f"{int(persecond)} click is nice . You're a T-REX.",font=("Calibri",25,"bold"),bg="white")
        level.place(relx = 0.1,rely=0.3) 
    else:
        level = Label(result,text=f"{int(persecond)} click is amazing . You're a Mob.",font=("Calibri",25,"bold"),bg="white")
        level.place(relx = 0.1,rely=0.3) 
    cp_plus = 5 * persecond
    balance[entry_login_email.get()] += cp_plus
    write_balance = open("Balance.txt","wb")
    pickle.dump(balance,write_balance)
    write_balance.close()
    mesaj = Label(result,text=f"+{cp_plus} cp",font=("Calibri",20,"bold"),bg="white",fg="#1ca641")
    mesaj.place(relx=0.1,rely=0.05)
                            
    result_label = Label(result,text=f"{time_minute}m{time_second}s {result_cookie} cookies\nPersecond : {int(persecond)}",font=("Calibri",25,"bold"),bg="white")
    result_label.place(relx=0.3,rely=0.5)
    baslangic = 0

def start_game():
    home_page_frame.forget()
    game_frame.pack(expand=True,fill=BOTH)
    window.title("Cookie Clicker")        
    window.geometry("1600x900+200+50")
    window.minsize(1200,600)
    window.maxsize(1600,900)

def log_in_acilis():
    main_page_frame.forget()
    log_in_frame.pack(expand=True,fill=BOTH)
    window.title("Log In")
    
def log_in_backbutton():
    log_in_frame.forget()
    main_page_frame.pack(expand=True,fill=BOTH)
    window.title("Registration")

def sign_up_open():
    
    window.title("Sign Up")
    window.geometry("500x500+700+250")
    window.minsize(500,500)
    window.maxsize(700,700)
    main_page_frame.forget()
    sign_up_frame.pack(expand=True,fill=BOTH)

def signupback():
    window.title("Registration")
    window.geometry("614x410+650+300")
    window.minsize(200,210)
    window.maxsize(614,410)
    sign_up_frame.forget()
    main_page_frame.pack(expand=True,fill=BOTH)
    
    
def log_in_user():
    if entry_login_email.get() in users:
        if entry_login_password.get() == users[entry_login_email.get()]["password"]:
            messagebox.showinfo("Welcome","Xos geldiniz !")
            log_in_frame.forget()
            home_page_frame.pack(expand=True,fill=BOTH)
            window.title("Home")
            window.geometry("1239x732+350+150")
            window.minsize(1200,700)
            window.maxsize(1920,1080)
        else:
                messagebox.showwarning("Invalid passwprd","Please input true password !")
    else:
        messagebox.showwarning("Invalid email","Please input true email !")
def adduser():
    try:
            
        if len(entry_name.get()) >= 3:
            
            if len(entry_surname.get()) >=3:
                
                if int(entry_age.get()) > 12 and  int(entry_age.get()) <= 100:

                    if len(entry_email.get()) > 4:
                        
                        if entry_email.get().count("@") > 0:
                            
                            if entry_password.get() == entry_confirm.get(): 
                                
                                if len(entry_password.get()) > 7:
                                
                                    users.update({entry_email.get():{
                                        "name":entry_name.get(),
                                        "surname":entry_surname.get(),
                                        "age":entry_age.get(),
                                        "password":entry_password.get(),
                                        "email":entry_email.get()
                                    }})
                                    balance.update({
                                        entry_email.get():0
                                    })
                                    write_balance = open("Balance.txt","wb")
                                    pickle.dump(balance,write_balance)
                                    write_balance.close()
                                    addfile = open("Users.txt","wb")
                                    pickle.dump(users,addfile)
                                    addfile.close()
                                    messagebox.showinfo("Bilgilendirme","Siz ugurla qeydiyyatdan kecdiniz ")
                                    sign_up_frame.forget()
                                    window.title("Log In")
                                    log_in_frame.pack(expand=True,fill=BOTH)
                                    window.geometry("614x410+650+300")
                                    window.minsize(200,210)
                                    window.maxsize(614,410)
                                else:
                                    messagebox.showwarning("Invalid Password","Password must be longer than 7 character !")
                            else:
                                messagebox.showwarning("Invalid password","Password must be same with confirm password !")
                        else:
                            messagebox.showwarning("Incorrect mail","Mail must have minimum 1 \"@\" symbol !")
                    else:
                            messagebox.showwarning("Invalid email","Mail can be minimum 5 charackter !")
                else:
                    messagebox.showwarning("Incorrect age","Age can be minimum 13 , maximum 100 !") 
            else:
                messagebox.showwarning("Invalid surname","Surname must be longer than 2 character !")
        else:
            messagebox.showwarning("Invalid Username","Username must be longer than 2 character !")
                
    except Exception as ex:
        messagebox.showwarning("Eror",ex)       

def back_home():
    window.title("Registration")
    window.geometry("614x410+650+300")
    window.minsize(200,210)
    window.maxsize(614,410)
    home_page_frame.forget()
    main_page_frame.pack(expand=True,fill=BOTH)
    
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

#-----------------------Images-----------------------------

log_in_image = PhotoImage(file="C:/Users/hasan/Desktop/Python/Cookie clikcer/Images/Log.png")
log_in_image_label = Label(log_in_frame,image=log_in_image).pack()

cookie_main_png = PhotoImage(file="C:/Users/hasan/Desktop/Python/Cookie clikcer/Images/cookielabel.png")
cookie_main_label = Label(home_page_frame,image=cookie_main_png).pack()

acilis_sekil = PhotoImage(file="C:/Users/hasan/Desktop/Python/Cookie clikcer/images/login sehife.png")
acilis_sekil_label = Label(main_page_frame,image=acilis_sekil).pack()

cookie_clicker_background = PhotoImage(file="C:/Users/hasan/Desktop/Python/Cookie clikcer/images/wp7667538-cookie-clicker-wallpapers.gif")
cookie_clicker_background_label = Label(game_frame,image=cookie_clicker_background).pack()

back_image = PhotoImage(file="C:/Users/hasan/Desktop/Python/Cookie clikcer/images/backimage.gif")

settings_image = PhotoImage(file="C:/Users/hasan/Desktop/Python/Cookie clikcer/images/setting.png")

information_image = PhotoImage(file="C:/Users/hasan/Desktop/Python/Cookie clikcer/images/information.png")

home_button_image = PhotoImage(file="C:/Users/hasan/Desktop/Python/Cookie clikcer/images/house.png")

cookie_image = PhotoImage(file="C:/Users/hasan/Desktop/Python/Cookie clikcer/images/cookie.png")

back_game_image = PhotoImage(file="C:/Users/hasan/Desktop/Python/Cookie clikcer/images/left-arrow.png")

hideimage = PhotoImage(file="C:/Users/hasan/Desktop/Python/Final Project/images/hide-interface-symbol.gif")

exitimage = PhotoImage(file="C:/Users/hasan/Desktop/Python/Final Project/images/pngwing.com-_5_.gif")

showimage = PhotoImage(file="C:/Users/hasan/Desktop/Python/Final Project/images/show.gif")

#-----------------------Buttons----------------------------

#Registration

sign_up_button = Button(main_page_frame,text="Sign Up",font=("Calibre",11),command=sign_up_open,bg="white")
sign_up_button.place(rely=0.5,relx=0.45,relwidth=0.13,relheight=0.08)

verify = Button(sign_up_frame,text="Sign Up",font=("Calibre",12),command=adduser)
verify.place(relx=0.45,rely=0.8)

log_in_button = Button(main_page_frame,text="Log In",font=("Calibre",11),command=log_in_acilis,bg="white")
log_in_button.place(rely=0.4,relx=0.45,relwidth=0.13,relheight=0.08)

log_in_buttonuser = Button(log_in_frame,command=log_in_user,text="Log In",bg="#d4babf")
log_in_buttonuser.place(relx=0.47,rely=0.8,relwidth=0.09,relheight=0.08)

#Home buttons

play_button = Button(home_page_frame,text="Play",bg="white",fg="black",font=("Calibri",26, "bold"),command=start_game)
play_button.place(relx=0.05,rely=0.1,relwidth=0.15,relheight=0.07)

balance_button = Button(home_page_frame,text="Balance",bg="white",fg="black",font=("Calibri",26, "bold"),command=show_balance)
balance_button.place(relx=0.05,rely=0.2,relwidth=0.15,relheight=0.07)

shop_button = Button(home_page_frame,text="Shop",bg="white",fg="black",font=("Calibri",26, "bold"))
shop_button.place(relx=0.05,rely=0.3,relwidth=0.15,relheight=0.07)

settings_button = Button(home_page_frame,image=settings_image,bg="white")
settings_button.place(relx=0.05,rely=0.85,relwidth=0.045,relheight=0.07)

information_button = Button(home_page_frame,image=information_image,bg="white")
information_button.place(relx=0.05,rely=0.75,relwidth=0.045,relheight=0.07)

home_button = Button(home_page_frame,image=home_button_image,bg="white",command=back_home)
home_button.place(relx=0.9,rely=0.1,relwidth=0.045,relheight=0.07)

#Back Buttons

log_in_back = Button(log_in_frame,image=back_image,bg="white",command=log_in_backbutton)
log_in_back.place(rely=0.05,relx=0.05,relwidth=0.07,relheight=0.09)

sign_up_back = Button(sign_up_frame,image=back_image,bg="white",command=signupback)
sign_up_back.place(rely=0.05,relx=0.05,relwidth=0.07,relheight=0.07)

back_game_button = Button(game_frame,bg="#28678A",image=back_game_image,command=back_game_home)
back_game_button.place(relx=0.93,rely=0.05,relwidth=0.035,relheight=0.05)


#Game Frame Button

cookie_button = Button(game_frame,bg="#28678A",image=cookie_image,command=start_count_cookie)
cookie_button.place(relx=0.05,rely=0.28)

end_time_button = Button(game_frame,bg="#28678A",fg="white",text="End Time",font=("Calibri",45, "bold"),command=end_time)
end_time_button.place(relx=0.05,rely=0.6,relwidth=0.165,relheight=0.09)

#Show hide

exitbutton = Button(main_page_frame,image=exitimage,command=exitprogram,bg="white")
exitbutton.place(relx=0.9,rely=0.8,relwidth=0.07,relheight=0.11)

showbutton = Button(sign_up_frame,image=showimage,command=showbuttonfunc)
showbutton.place(rely= 0.55,relx = 0.75,relheight=0.038,relwidth=0.049)

showbuttonconfirm = Button(sign_up_frame,image=showimage,command=showbuttonfuncconfirm)
showbuttonconfirm.place(rely= 0.65,relx = 0.75,relheight=0.04,relwidth=0.049)


#-----------------------Labels----------------------------

#Label acaunt

login_email_label = Label(log_in_frame,text="Email :",bg="#ccf0f0")
login_email_label.place(relx=0.25,rely=0.2)

login_password_label = Label(log_in_frame,text="Password :",bg="#ccf0f0")
login_password_label.place(relx=0.25,rely=0.5)

#Label Register

name_label = Label(sign_up_frame,text="Name :")
name_label.place(relx=0.15,rely=0.15)

surname_label = Label(sign_up_frame,text="Surname :")
surname_label.place(relx=0.15,rely=0.25)

age_label = Label(sign_up_frame,text="Age :")
age_label.place(relx=0.15,rely=0.35)

email_label = Label(sign_up_frame,text="Email :")
email_label.place(relx=0.15,rely=0.45)

password_label = Label(sign_up_frame,text="Password  :")
password_label.place(relx=0.15,rely=0.55)

confirm_label = Label(sign_up_frame,text="Confirm :")
confirm_label.place(relx=0.15,rely=0.65)

count_cookie_label = Label(game_frame,text=f"{baslangic} cookies",bg="#28678A",font=("Calibri",40,"bold"),fg="white")
count_cookie_label.place(relx=0.06,rely=0.1)

#------------------------Entry----------------------------

#Entry accaunt

entry_login_email = Entry(log_in_frame,font=("Calibri",12))
entry_login_email.place(relx=0.4,rely=0.2)

entry_login_password = Entry(log_in_frame,font=("Calibri",12))
entry_login_password.place(relx=0.4,rely=0.5)

#Entry Register

entry_name = Entry(sign_up_frame,font=("Calibri",12))
entry_name.place(relx=0.35,rely=0.15)

entry_surname = Entry(sign_up_frame,font=("Calibri",12))
entry_surname.place(relx=0.35,rely=0.25)

entry_age = Entry(sign_up_frame,font=("Calibri",12))
entry_age.place(relx=0.35,rely=0.35)

entry_email = Entry(sign_up_frame,font=("Calibri",12))
entry_email.place(relx=0.35,rely=0.45)

entry_password = Entry(sign_up_frame,font=("Calibri",12),show="*")
entry_password.place(relx=0.35,rely=0.55)

entry_confirm = Entry(sign_up_frame,font=("Calibri",12),show="*")
entry_confirm.place(relx=0.35,rely=0.65)

#-------------------------End------------------------------

window.mainloop()

#----------------------------------------------------------