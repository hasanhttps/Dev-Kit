from tkinter import *

window = Tk()
window.title("Animation try with while")
window.geometry("614x410+650+550")
window.minsize(200,210)
window.maxsize(614,410)

def up_animation():
    d = 0
    mesafe = 550
    while True:
        d += 1  
        if d % 99999 == 0:
            mesafe -= 1
            window.geometry(f"614x410+650+{mesafe}")
            continue
        if mesafe == 200:
            break

up_button = Button(window,text="Up Frame",command=up_animation)
up_button.place(relx=0.5,rely=0.5)


window.mainloop()