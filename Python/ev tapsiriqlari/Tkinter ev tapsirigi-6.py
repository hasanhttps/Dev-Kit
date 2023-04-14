from tkinter import * 

from tkinter import ttk

from tkinter import messagebox

from datetime import * 

window = Tk()


alluser = {
    "cavid@gmail.com":{
        "name":"Cavid",
        "surname":"Atamoghlanov",
        "fathername":"Tel",
        "password":"1234",
        "email":"cavid@gmail.com",
        "dogumili":2022,
        "cins":"kisi"


    },
    "elsad@gmail.com":{
        "name":"Elsad",
        "surname":"Elsadov",
        "fathername":"Tel",
        "password": "3456",
        "email":"elsad@gmail.com",
        "dogumili":2022,
        "cins":"kisi"
    },
    "Rahib@gmail.com":{
        "name":"Rahib",
        "surname":"Melikzade",
        "fathername":"Tel",
        "password":"fgdfg",
        "email":"Rahib@gmail.com",
        "dogumili":2022,
        "cins":"kisi"
    },
    "hasanabdullazad@gmail.com":{
        "name":"Hesen",
        "surname":"Abdullazade",
        "fathername":"Tel",
        "password":"2008HesElid",
        "email":"hasanabdullazad@gmail.com",
        "dogumili":2022,
        "cins":"kisi"
    },
    "vidadi@gmail.com":{
        "name":"Vidadi",
        "surname":"Ovcuyev",
        "fathername":"Tel",
        "password":"Vidadi075283",
        "email":"vidadi@gmail.com",
        "dogumili":2022,
        "cins":"kisi"
    }
        
}




window.title("Hycane")


window.geometry("600x600+700+200") 


window.minsize(500,300)

window.maxsize(900,900)


#---------------------------------------------------------------------------------------------------------------

#Functions
f =5
def ekleme():
    global f
    ad = entrysignup.get()
    soyad = surnameentry.get()
    ata = entryfathername.get()
    gmail = entryemail.get()
    kod = entrypasswordsignup.get()
    kod2 = entryconfirm.get()
    value = x.get()
    if value == 1:
        gender = "Kisi"
    else:
        gender = "Qadin"
    if len(ad) < 2 and len(soyad) < 2 and len(ata) < 2:
        messagebox.showinfo("Info","Istifadeci adi,soyadi,ata adi minimum 3 ola biler")
    elif kod != kod2:
        messagebox.showinfo("Info","Istifadecinin passwordu ve confirm passwordu beraber olmalidir !")
    elif gmail.count("@") <= 0 :
        messagebox.showinfo("Info","Istifadecinin gmailinde en az bir @ isaresi olmalidir.")
    else:
        alluser.update({gmail:{"name": ad,
        "surname": soyad,
        "fathername": ata,
        "password":kod,
        "email":gmail,
        "year": comboboxil.get(),
        "month":comboboxay.get(),
        "day":comboboxgun.get(),
        "cins":gender}})
        print(alluser)
        f +=1
        messagebox.showinfo("Info screen",f"{ad}  siz ugurla qeydiyyatdan kecdiniz")
        signupframe.forget()
        signinframe.pack(expand=True,fill=BOTH)
def checkstudent():
    
    global f
    email1 = entrysignin.get()
    password = entrypassword.get()
    d = 0
    s = 0
    if email1 in alluser.keys():
        d +=0
        s += 0
        if password == alluser[email1]["password"]:
        
            messagebox.showinfo("Info","Xos geldiniz!")
        
        elif s == f:
            messagebox.showerror("Error","Password yanlishdir")
    elif d == f:
        messagebox.showerror("Error","Email yanlishdir")


def signin():
    btnpencere.forget()
    signinframe.pack(expand=True,fill=BOTH)
def signup():
    btnpencere.forget()
    signupframe.pack(expand=True,fill=BOTH)
    window.title("Register")
    
    
#----------------------------------------------------------------------------------------------------------------

signupframe=Frame(window)

signinframe=Frame(window)
#----------------------------------------------------------------------------------------------------------------
#Labels     Sign in

#-----------------------------------------------------------------------------------

#Sign in 

signinlabel = Label(signinframe,text="Sign in",fg="black")
signinlabel.place(rely=0.1,relx=0.350)
entrysignin = Entry(signinframe,font=("Comic Sans ms",8))
entrysignin.place(rely=0.129,relx=0.354)

#-----------------------------------------------------------------------------------

passwordlabel = Label(signinframe,text="Password",fg="black")
passwordlabel.place(rely=0.3,relx= 0.350)
entrypassword = Entry(signinframe,font=("Comic Sans ms",8))
entrypassword.place(rely=0.329,relx= 0.354)

#------------------------------------------------------------------------------------

welcomelabel = Label(signinframe,text="")

#------------------------------------------------------------------------------------

buttonsignin = Button(signinframe,text="Sign In",command=checkstudent)
buttonsignin.place(rely=0.5,relx=0.35)

#----------------------------------------------------------------------------------------------------------------

#Sign up Label


signuplabel = Label(signupframe,text="Name",fg="black")
signuplabel.place(rely=0.1,relx=0.123)
entrysignup = Entry(signupframe,font=("Comic Sans ms",8))
entrysignup.place(rely=0.129,relx=0.127)

#-----------------------------------------------------------------------------------

passwordlabel = Label(signupframe,text="Password",fg="black")
passwordlabel.place(rely=0.1,relx= 0.623)
entrypasswordsignup = Entry(signupframe,font=("Comic Sans ms",8))
entrypasswordsignup.place(rely=0.129,relx= 0.627)

#-------------------------------------------------------------------------------------

surnamelabel = Label(signupframe,text="Surname",fg="black")
surnamelabel.place(rely=0.3,relx= 0.123)
surnameentry = Entry(signupframe,font=("Comic Sans ms",8))
surnameentry.place(rely=0.329,relx= 0.127)

#-------------------------------------------------------------------------------------

emaillabel = Label(signupframe,text="Email",fg="black")
emaillabel.place(rely=0.2,relx=0.123)
entryemail = Entry(signupframe,font=("Comic Sans ms",8))
entryemail.place(rely=0.229,relx=0.127)

#-------------------------------------------------------------------------------------

confirmlabel = Label(signupframe,text="Confirm Password",fg="black")
confirmlabel.place(rely=0.2,relx=0.623)
entryconfirm = Entry(signupframe,font=("Comic Sans ms",8))
entryconfirm.place(rely=0.229,relx=0.627)

#-------------------------------------------------------------------------------------

fathernamelabel = Label(signupframe,text="Father Name",fg="black")
fathernamelabel.place(rely=0.3,relx=0.623)
entryfathername = Entry(signupframe,font=("Comic Sans ms",8))
entryfathername.place(rely=0.329,relx=0.627)

#-------------------------------------------------------------------------------------

comboboxgunlabel = Label(signupframe,text="gun",fg="black")
comboboxgunlabel.place(rely=0.561,relx=0.094)
comboboxaylabel = Label(signupframe,text="ay",fg="black")
comboboxaylabel.place(rely=0.561,relx=0.394)
comboboxillabel = Label(signupframe,text="Il",fg="black")
comboboxillabel.place(rely=0.561,relx=0.694)

#---------------------------------------------------------------------------------------------------------------

#Radio Buttons Sign up

x = IntVar()

radibtonmen = Radiobutton(signupframe,text="Kisi",value=1,variable=x)
radibtonmen.place(rely=0.450,relx= 0.3)
radibtonwomen = Radiobutton(signupframe,text="Qadin",value=2,variable=x)
radibtonwomen.place(rely=0.450,relx= 0.6)

#----------------------------------------------------------------------------------------------------------------

#Check Buttons Sign up

y1 = IntVar()

y2 = StringVar()

y3 = IntVar()
comboboxgun = ttk.Combobox(signupframe,textvariable=y1,state="readonly",values=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31])
comboboxgun.place(rely=0.6,relx=0.1)
comboboxay = ttk.Combobox(signupframe,textvariable=y2,state="readonly",values=["Yanvar","Fevral","Mart","Aprel","May","Iyun","Iyul","Avqust","Sentyabr","Oktyabr","Noyabr","Dekabr"])
comboboxay.place(rely=0.6,relx=0.4)
comboboxil = ttk.Combobox(signupframe,textvariable=y3,state="readonly",values=[2022,2021,2020,2019,2018,2017,2016,2015,2014,2013,2012,2011])
comboboxil.place(rely= 0.6 ,relx=0.7)

#---------------------------------------------------------------------------------------------------------------
signupbutton = Button(signupframe,text="Register",fg="black",command= ekleme)
signupbutton.place(rely=0.7,relx=0.5)
#----------------------------------------------------------------------------------------------------------------
#Buttons

btnpencere = Frame(window,bg="#7F00FF")
btnpencere.pack(expand=True,fill=BOTH)


btnsignin = Button(btnpencere,text="Sign In",command=signin)
btnsignin.place(relx=0.45,rely=0.4,relwidth=0.1)

btnsignup = Button(btnpencere,text="Register",command=signup)
btnsignup.place(relx=0.45,rely=0.5,relwidth=0.1)


#----------------------------------------------------------------------------------------------------------------






window.mainloop()