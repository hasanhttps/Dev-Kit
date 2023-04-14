# entry , place,messageboxs

from tkinter import *

from tkinter import messagebox


#---------------------------------------***ENTRY--INPUT***----------------------------------------------------------

# window = Tk()
# window.title("Tkinter Lesson 2")
# window.geometry("600x600+700+300")
# window.minsize(500,300)

#entry -- input

# entry1 = Entry(window)
# entry1.pack()

# entry2 = Entry(window,fg="red",bg="blue",font=("Comic Sans ms",18,"bold"))
# entry2.pack()

# entry3 = Entry(window,show="")#Dedikde yazilan interpretator terefinden oxunur lakin istifadeci onu "*" olaraq gorur.
# entry3.pack()
# window.mainloop()

# entry4 = Entry(window,show="")#Dedikde yazilanda istifadeci gore bilir
# entry4.pack()
#------------------------------------------------------------------------------------------------------------------------


# def sayhi():
#     text = entry.get()#get methodu vasitesile passwordun icerisine yazilan gorsenir .#
#     print(text)
# entry = Entry(window,show="*")
# entry.pack()

# button1 = Button(window,text="click me",command=sayhi)
# button1.pack()
# window.mainloop()

#-------------------------------------------------------------------------------------------------------------------------

#Task 1


# def saydamliq():
#     s = entry1.get()
#     return window.wm_attributes("-alpha",s)
# entry1 = Entry(window)
# entry1.pack()

# buton = Button(window,text="input",command=saydamliq)
# buton.pack()
# window.mainloop()

#---------------------------------------------------------------------------------------------------------------------------

#place() -- >> x , y, relx , width , height , relwidht , relheight

# x , y -- >> Kordinatin piksel ile verilmesi ucundur


#relx , rely -- >> Kordinatin ekranin olcusune nisbeten  verilmesi ucundur(faiz ile)


# button = Button(window,text= "Click me")
# button.place()#Bura mesafe daxil edilmese buton print olmayacaq.


# # button.place(x = 20 , y = 30 , width= 50, height=50)#x y e gore kordinatin daxil edilmesi'dir.

# button.place(relx= 0.1,rely=0.5,relwidth=0.1 , relheight=0.1 )#Faize gore kordinatin daxil edilmesidir. Bu zaman ekrani kiciltsekde ona nisbeten buton poencereden arali olacaqdir.Max 1 olar min 0
# window.mainloop()

#----------------------------------------------------------------------------------------------------------------------------

# messagebox.showerror("Error screen","Duzgun istiffade edin !")#Show error -- return ok.

# messagein = messagebox.showinfo("Info screen","Sen nie online deilsen isi ??")#return ok.

# mesage = messagebox.askokcancel("Ask screen","Ask ok cancle")#return (True or False)

# messagewarning = messagebox.showwarning("Warning screen","Ask ok cancle")#return ok

# messageask = messagebox.askquestion("Ask question","Ask ok cancle")#return yes or no

# messageaskno = messagebox.askyesnocancel("Ask question","Ask ok cancle")#return(None,False,True)

# messagetry = messagebox.askretrycancel("Ask question","Ask try")#return (None ,False,True)
# window = Tk()
# def check():
#     email = entryemail.get()
#     labelusername = entryusername.get()
#     if labelusername == "step" and email == "step@gmail.com":
#         messagebox.showinfo("Info screen","Sisteme xosh geldiniz !")
# window.title("Sign in")
# window.geometry("360x440+700+250")
# window.minsize(360,440)


# sign = Label(window,text="Sign Up",font=("Calibre",25),fg= "grey")
# sign.place(relx = 0.3 , rely = 0.1, relwidth=0.4)


# labelusername = Label(window,text="Username",font=("calibre",10),fg="#535757")
# labelusername.place(relx = 0.1,rely=0.2)

# entryusername = Entry(window, font=("Calibre",10))
# entryusername.place(relx = 0.1, rely=0.25 , relwidth=0.8)

# usernameerror = Label(window,text="Username must be 5 characters long!",font=("calibre",8),fg="red")
# usernameerror.place(relx = 0.09,rely = 0.32)

# #-----------------------------------------------------------------------------------------------------------


# labelemail = Label(window,text="Email",font=("calibre",10),fg="#535757")
# labelemail.place(relx = 0.09,rely=0.38)

# entryemail = Entry(window, font=("Calibre",16))
# entryemail.place(relx = 0.1, rely=0.43 , relwidth=0.8)

# emailerror = Label(window,text="Email is not valid!",font=("calibre",8),fg="red")
# emailerror.place(relx = 0.09,rely = 0.5)


# #-----------------------------------------------------------------------------------------------------------

# sign_up = Button(window,text="Sign Up",command=check)
# sign_up.place(relx = 0.30,rely = 0.7,relwidth=0.4)


# window.mainloop()
#-------------------------------------------------------------------------------------------------------------------------------
#Task 2





#21: 44 den bax
from tkinter import *

from tkinter import messagebox

window = Tk()

def hidebutton():
    entrypassword.config(show="*")
    showbutton.config(text="show",command=showbuttonfunc)
def showbuttonfunc():
    password = entrypassword.get()
    entrypassword.config(show=password)
    showbutton.config(text="hide",command=hidebutton)
window.title("Sign in")
window.geometry("360x440+700+250")
window.minsize(360,440)



showbutton = Button(window,text="show",font=("calibre",7),fg="#535757",command=showbuttonfunc)
showbutton.place(relx = 0.91,rely=0.61)

sign = Label(window,text="Sign Up",font=("Calibre",25),fg= "grey")
sign.place(relx = 0.3 , rely = 0.1, relwidth=0.4)

#---------------------------------------------------------------------------------------------------------------------------

labelusername = Label(window,text="Username",font=("calibre",10),fg="#535757")
labelusername.place(relx = 0.1,rely=0.2)

entryusername = Entry(window, font=("Calibre",10))
entryusername.place(relx = 0.1, rely=0.25 , relwidth=0.8)

usernameerror = Label(window,text="Username must be 5 characters long!",font=("calibre",8),fg="red")
usernameerror.place(relx = 0.09,rely = 0.32)

#-----------------------------------------------------------------------------------------------------------


labelemail = Label(window,text="Email",font=("calibre",10),fg="#535757")
labelemail.place(relx = 0.09,rely=0.38)

entryemail = Entry(window, font=("Calibre",10),fg="#535757")
entryemail.place(relx = 0.1, rely=0.43 , relwidth=0.8)

emailerror = Label(window,text="Email is not valid!",font=("calibre",8),fg="red")
emailerror.place(relx = 0.09,rely = 0.5)


#-----------------------------------------------------------------------------------------------------------

labelpassword = Label(window,text="Password",font=("calibre",10),fg="#535757")
labelpassword.place(relx = 0.09,rely=0.56)

entrypassword = Entry(window, font=("Calibre",10),show="*")
entrypassword.place(relx = 0.1, rely=0.61 , relwidth=0.8)

emailerror = Label(window,text="Email is not valid!",font=("calibre",8),fg="red")
emailerror.place(relx = 0.09,rely = 0.5)

sign_up = Button(window,text="Sign Up")
sign_up.place(relx = 0.30,rely = 0.7,relwidth=0.4)


window.mainloop()