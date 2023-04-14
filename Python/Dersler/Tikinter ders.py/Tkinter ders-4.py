#entry.delete(), frame.  icon. image.  text.

from tkinter import *
window = Tk()



window.title("Check button")

window.geometry("600x500+700+300")
#--------------------------------------------------------------------------------------------------------

#Delete
# def delete():
#     entry1.delete(0,1)#Indekslerin silinmesi sonuncu daxil deil.Hamisini silmek ucun (0,END)
    
    


# entry1 = Entry(window)
# entry1.pack()

# bton1= Button(window,text="Click me",command=delete)
# bton1.pack()

#---------------------------------------------------------------------------------------------------------

#Frame

# def hide():
#     frame2.forget()#Dedikde sadece gizledir ramdan silmir.Place ile ortaya cixarilmis frame'i gizletmek olmur.

# def showt():
#     frame2.pack(expand=True,)
    
# frame1 = Frame(window,bg="darkblue")
# frame1.place(relx= 0.1,rely= 0.1,relwidth= 0.8, relheight= 0.8)#Icine hec bir sey qoyulmadigi ucun 1 pikseldir ve seffafdir.



# entry1 = Entry(frame1)
# entry1.pack()#Frame hara getse buda ora gedecek



# frame2 = Frame(frame1,bg="skyblue")#Frame uzerinde frame vermek olur.
# frame2.place(relx=0.1,rely=0.1,relwidth=0.8,relheight=0.8)

# btn1 = Button(window,text="Click me",command=hide)
# btn1.pack(side=BOTTOM)


# btn2 = Button(window,text="Click me 2",command=show)
# btn2.pack(side=BOTTOM)

#------------------------------------------------------------------------------------------------------------


#Task 1



def signin():
    btnframe.forget()
    signinframe.pack(expand=True,fill=BOTH)
def signup():
    btnframe.forget()
    signupframe.pack(expand=True,fill=BOTH)
def backsignin():
    signinframe.forget()
    btnframe.pack(expand=True, fill=BOTH)
window.config(bg="#a60303")



signinframe=Frame(window,bg ="red")#Fil her iki terefe yayilir ve frame butun pencereni tutur.
signupframe=Frame(window,bg ="blue")
###########################################
#Button start


btnframe = Frame(window, bg="green")
btnframe.pack(expand=True,fill=BOTH)

btnsignin = Button(btnframe,text="Sign In",bg="Red",command=signin)
btnsignin.place(relx=0.45,rely=0.4,relwidth=0.1)

btnsignup = Button(btnframe,text="Sign Up",background="Blue",command=signup)
btnsignup.place(relx=0.45,rely=0.5,relwidth=0.1)


#Button end
##################################################
#Sign In Start


btnback = Button(signinframe,text="<", command=backsignin)
btnback.place(relx=0.05,rely=0.05)

##################################################
#Sign up Start

btnbacksignup = Button(signinframe,text="<",command=backsignin)
btnbacksignup.place(relx=0.05,rely=0.05)

#################################################



#------------------------------------------------------------------------
#Toplevel()
#Toplevel ikinci bir penceredir.


# a = Toplevel(window)
# a.title("Toplevel")#Teze pencereye ad vermek olur.

#--------------------------------------------------------------------------
#Flat icondan yukleye bilerem
#Icon

#window.iconbitmap(r"bitcoin.ico")#Bitmap ancaq ico goturur.

#Photo ---Tikinter esasen gif goturur.

# image1 = PhotoImage(file="ezgif.ezgif.com-gif-maker.gif")#Widgetdir.Seklin unvanini file 'a veririk


# labelimage = Label(window,image=image1)

window.mainloop() 