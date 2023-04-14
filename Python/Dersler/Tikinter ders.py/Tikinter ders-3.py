# # from tkinter import *
# # if True == 0:
# #     print("sd")

# # window = Tk()

# # window.title("Check button")

# # window.geometry("600x500+700+300")
# # #-----------------------------------------------------------------------------------------------------------------------

# # #Task 1 
# # # def reng():
# # #     if x.get() == 1:
# # #         window.config(bg="yellow")
# # #     elif x.get() == 2:
# # #         window.config(bg="red")
# # #     elif x.get() == 3:
# # #         window.config(bg="green"

# # # x = IntVar()

# # # rdbtonyel = Radiobutton(window,text="Yellow",value=1,variable=x)
# # # rdbtonyel.pack()

# # # rdbtonred = Radiobutton(window,text="Red",value=2,variable=x)
# # # rdbtonred.pack()

# # # rdbtongreen = Radiobutton(window,text="Green",value=3,variable=x)
# # # rdbtongreen.pack()

# # # buttonreng = Button(window,text="Onayla",command=reng)
# # # buttonreng.pack()


# # #---------------------------------------------------------------------------------------------------------------------
# # #RadioButton

# # # def runrdbtn():
# # #     print(type(x.get()))#bize deyeri verir
# # #     print(y.get())




# # # x = IntVar()

# # # rdbtn1 = Radiobutton(window,text="one",value=1,variable=x)#Bize verdiyi deyer valuedir .value= funksiyasi ile vereceyi deyeri deise bilirik.
# # # rdbtn1.pack()

# # # rdbtn2 = Radiobutton(window,text="two",value=2,variable=x)#Bu ucunden yalniz biri secile biler .X i intvar dediyimiz laue int olmalidir .eger strvar deseydik stringde vermeliydik deyeri
# # # rdbtn2.pack()

# # # rdbtn3 = Radiobutton(window,text="three",value=3,variable=x)#Radio buttondan sadece biri secile bilir.and
# # # rdbtn3.pack()

# # # y = StringVar()
# # # y.set(5)#baslangic deyerdir
# # # rdbtn11 = Radiobutton(window,text="three",value="4",variable=y)#Eyni deisene bahgli olduqda hamiindan yalniz birini sece bilirik.Ama qruplasdirdiqda iki ferqli sual kimi istifade 
# # # rdbtn11.pack()

# # # rdbtn11 = Radiobutton(window,text="three",value="5",variable=y)
# # # rdbtn11.pack()

# # # rdbtn11 = Radiobutton(window,text="three",value="6",variable=y)
# # # rdbtn11.pack()

# # # Bton = Button(window,text="click me",command=runrdbtn)


# # #-----------------------------------------------------------------------------------------------------------------

# # #Check Buttons
# # #Check buttonlarda command argumentide vardir.
# x1 =StringVar()#Her ucundende eyni vaxta data gele bileceyi ucun ucu ucunde ayri ayri deisen yaradmaliyiq
# x2 =StringVar()#Bele yazdiqda hamisi secili gelir lakin intvar kimi yazdiqda 0 ve 1lerde ibaret oldugu ucun secildoikde 1 gelecek secilmedikde 0 gelecek.Setir 78 e bax
# x3 =StringVar()

# y1 =IntVar()
# y2 =IntVar()                                                
# y3 =IntVar()
# def cbtnfunc():
#     print(x1.get())
#     print(x2.get())
#     print(x3.get())
# cbtn1 = Checkbutton(window,text="1 ",variable=y1)#Check buttonda necesini istesek sece bilerik .
# cbtn1.pack()


# cbtn2 = Checkbutton(window,text="2",variable=y2)
# cbtn2.pack()


# cbtn3 = Checkbutton(window,text="3",variable=y3)#Biz kommand vere bilirik.
# cbtn3.pack()

# button1 = Button(window,text="click me",command=cbtnfunc)
# button1.pack()


# #--------------------------------------------------------------------------------------------------------------------------------


# #Task 2
# # y1 =IntVar()
# # y2 =IntVar()
# # y3 =IntVar()

# # def birlesme():
# #     label1.config(text="")
# #     if y1.get() == True:
# #         label1.config(text="Salam")
# #     if y2.get() == True:
# #         label1.config(text="Salam  Cavid")
# #     if y3.get() == True:
# #         label1.config(text="Salam  Cavid  Rahib")
# #     if y3.get() == True and y2.get() !=True:
# #         label1.config(text="Salam  Rahib")
# #     if y3.get() == True and y2.get() !=True and y1.get() !=True:
# #         label1.config(text="Rahib")

        

# # cbtn1 = Checkbutton(window,text="Salam",variable=y1,command=birlesme)#Check buttonda necesini istesek sece bilerik .
# # cbtn1.pack()


# # cbtn2 = Checkbutton(window,text="Cavid",variable=y2,command=birlesme)
# # cbtn2.pack()


# # cbtn3 = Checkbutton(window,text="Rahib",variable=y3,command=birlesme)#Biz kommand vere bilirik.
# # cbtn3.pack()


# # label1 = Label(window,text=" ")
# # label1.pack()

# #---------------------------------------------------------------------------------------------------------------------------------


# #Yeni argumentler

# # x = IntVar()

# # def abcd():
# #     rbtn1.destroy()#destroy -- ramdan silir.Herseyi silmek olur.Istenilen bir widget


# # rbtn1 = Radiobutton(window, text="red", variable=x,value=1, cursor="hand2",selectcolor="red",activebackground="red",activeforeground="blue")
# # #Kursor mausun ala bileceyi deyerlerdir (Ala bileceyi gorunusler).
# # rbtn1.pack()
# # #destroy -- ramdan silir.Herseyi silmek olur.Istenilen bir widget
# # # selectcolor -- secimin rengi
# # #activebackground -- secime klik etdigde reng deismesi
# # #activeforeground -- secim zamani yazinin rengi
# # #cursor -- buttonun uzerinde olduqda mausun isaresinin deismesi .Buutun kursorlari yazma axtarsan internetde var.(Spider,cross,fleur,hand1 etc.).Kursor in tkinter yaz internete.
# # rbtn2 = Radiobutton(window, text="yellow", variable=x,value=2,cursor="circle")
# # rbtn2.pack()

# #-----------------------------------------------------------------------------------------------------------------------------------

# # from tkinter import ttk#Funksiyonalliqlari getirir.

# # #combobox -- butun funksiyonalliqlari isteyir diigerlerindeki kimi ve value daxil olunur.Valueye collection verilir


# # x = IntVar()


# # cmbxmenu = ttk.Combobox(window,textvariable=x,values=[1,2,3,4])#ttk. ile isleyir. textvariable 
# # cmbxmenu.pack()
# if True == 0:
#     print("sd")

# window.mainloop()


# #Ev tapsirigi evde comboboxun write funksiyasini sondurmek ucun lazim olan funksiyani arasdir.



#***Gelen defe guclu sorgu sual olacaq yaxsi hazirlas mutleq Muellim guclu tekrara edecek .**