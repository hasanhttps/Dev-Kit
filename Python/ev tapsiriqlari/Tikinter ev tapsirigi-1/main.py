import tkinter

from tkinter import *

newindow = Tk()

newindow.title("Opacity page")

newindow.geometry("600x600+700+250")

newindow.minsize(500,500)

newindow.resizable(True,True)

newindow.config(bg="yellow")

x = 1
opasity = Label(newindow,text="Opasity : 1")
opasity.pack()
def click2():
    global x
    newindow.wm_attributes("-alpha",x)
    if x < 0.2:
        print("Minimum saydamliq 0.1'e beraberdir.")
        opasity.pack()
    elif x <= 1:
        x -= 0.1
        x = round(x,1)
        newindow.wm_attributes("-alpha",x)
        opasity.config(text=f"Opasity : {x}")
        opasity.pack()
    return x
def click1():
    global x
    newindow.wm_attributes("-alpha",x)
    if x >= 1:
        print("Maksimum saydamliq 1'e beraberdir.")
        opasity.pack()
    elif x < 1:
        x += 0.1
        x = round(x,1)
        newindow.wm_attributes("-alpha",x)
        opasity.config(text=f"Opasity : {x}")
        opasity.pack()
    return x


clickone = Button(newindow,text="+",fg="White",bg="lightblue",font=("Arial",40),command=click1)
clickone.pack(anchor= CENTER,side= RIGHT)

clicktwo = Button(newindow,text="-",fg="White",bg="darkblue",font=("Arial",40),command=click2)
clicktwo.pack(anchor= CENTER,side= LEFT)

newindow.mainloop()