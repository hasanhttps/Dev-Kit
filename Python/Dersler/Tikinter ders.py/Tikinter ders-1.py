# #------------------------------------------------------------Tikinter---------------------------------------------------------------
import random

from tkinter import *#Adsiz bir basa funksiyaya muracietdir.


# # Tk() -->>Bu method pencerenin yaradilmasi ucundur

# window  =  Tk() #Acilan pencereye ad verilir.Pencerenin acilisidir
# #Design kodlari baslangic ve son kodun arasinda yani acilis ve baglanis arasinda olmalidir.
# #title -- acilan pencerenin basligidir.

# window.title("Tikinter lesson 1")#Programin ismini deisir.

# window.geometry("500x500")#Acilan zamanki olcudur.#Bu birinci versiyasidir.

# window.geometry("500x500+300+300")#1ci 300 soldan 300 piksel buraxacaq 2ci 300 yuxaridan 300 buraxacaq.Bu ikinci versiyasidir.

# window.geometry("600x600+700+200")


# #---------------------------------------------------------------------------------------------------------------------------------------


# #minsize and maxsize

# window.minsize(600,500)#Minimum 600 en 500 hundurluk olaraq kicilde bileceyik belelikle kicildende programin dizayninin iyrenc bir veziyyete dusmeyinden qurtaririq.
# #1ci en dir2ci hundurluk.

# window.maxsize(1000,600)#Maximum ne qeder boyuyeceyini teyin edirik.


# #---------------------------------------------------------------------------------------------------------------------------------------

# #resizable -- pencerenin olcusunun deishimini aktiv deaktiv edir.

# window.resizable(True,True)#Hem enini deise bilerik hem enini.2ci terefi false etsek hundurluku deishmek olmayacaq.

# #Hemise birinci gelen endir .Ikinci hundurluk.

# #----------------------------------------------------------------------------------------------------------------------------------------

# #WIDGETS -- Dizayn uzerinde istifade edilen her bir element widget adlanir.Widgetlerin hamisi boyuk herfle yazilir.


# #Ilk Usul


# # Label(window,text = "Hakuna Matata")#1ci parametr pencere qebul edir.Ikinci pencere yazi qebul edir.

# # Label(window,text = "Hakuna Matata").pack()#Dedikde ekrana cap olunacaq. 
# #-----------------------------------------------------------------------------------------------
# #Ikinci Usul

# anasayfa = Label(window,text = "Hakuna Matata")#Burada print etmirik pack ile
# anasayfa.pack()

# #Arxa fon verilmedikde foregroundir

# #fg -- foreground) (yazinin rengi)
# anasayfa = Label(window,text = "Hakuna Matata",fg = "red")#fg ederek yazinin rengi deisir 2ci parametre daxildir.Istesek renglerin 16liq say sistemindeki
# #qarsiligini da daxil ede bilerik.
# anasayfa.pack()
# #bg -- backgroundur.Yazinin arxa fonnudur.(Fg ve Bg elementin methodlaridir .Loginlerdede istifade ede bilirik)

# anasayfa = Label(window,text = "Hakuna Matata",fg = "red",bg ="blue")#Bg'de hemcinin16liq say sistemi qebul edir.
# anasayfa.pack()

# #Font
# anasayfa = Label(window,text = "Hakuna Matata",fg = "red",bg ="blue",font="Arial 22")#Dedikde yazi tipini deisirik , bosluq qoyub boyunu da deise bilerik.
# #Bu usulla sadece adi bir sozle olan yazi tiplerini vermek olacaq bu usul o qeder vacib deil.
# anasayfa.pack()

# anasayfa = Label(window,text = "Hakuna Matata",fg = "red",bg ="blue",font = ("Wide Latin",11,"underline"))#1ci parametr istenilen sayda sozlu yazi tipi daxil ede bilerik.
# #2ci parametr boyunu deisir 3cu ise altdan xet falan deye bilerik . Key sesietive deil.3cu parametr normal , bold ,italic,underline qebul edir.
# anasayfa.pack()

# #Pack -- Standart yapisdirmaq demekdir .Biz seyfeni pack etdikde default olaraq yuxari ten ortada verir.Biz onu pack() methodu ile deise bilerik .


# #------------------------------------------------------------------------------------------------------------------------------------------


# window.mainloop()#Proqrami istifadecinin istediyi mudette aciq olmasi ucundur.Pencerenin baglanisidir.

window  =  Tk()

#Task 1


# window.title("Hesen")

# window.geometry("500x500+700+300")
# colors = ["lightblue","green","orange","red"]
# person = {
#     "Name":"Cavid",
#     "Surname":"Atamoghlanov",
#     "Age":24,
#     "Speciality":"Proggrammer",
#     "Status":"Teacher"
# }
# maintext = Label(window, text="Main" , fg="deepskyblue",font=("Comic Sans ms",20,"bold"))
# maintext.pack()
# for key,value in person.items():
#     randcolor = random.choices(colors)
#     maintext = Label(window, text= f" {key} : {value}" , fg=randcolor,font=("Comic Sans ms",20,"bold"))
#     maintext.pack()

#Task 2

window.title("Hesen")

window.geometry("500x500+700+300")

# colors = ["lightblue","green","orange","red"]
# fruit = ["Apple","Banana","Orange","Pear"]

# maintext = Label(window, text="Fruit" , fg="deepskyblue",font=("Comic Sans ms",20,"bold"))
# maintext.pack()

# coun = 1
# for i in range(4):

#     randcolor = random.choices(colors)
#     a = Label(window,text= f" {i+1}) {fruit[i]}" ,fg=randcolor,font=("Comic Sans ms",20,"bold"))
#     a.pack()


#Opacity
# window.wm_attributes("-alpha",0.5)#Programmi seffalasdirir.

# window.mainloop()
#-----------------------------------------------------------------------------------------------------------------------------------
# def sayhi():
#     print("Salam")
# button = Button(window,text = "click me",fg = "blue",bg ="red",font=("Comic sans ms",25,"bold"), command=sayhi)#Comand elave ederek tusa funksiya ataya bilerik.
# button.pack()


# button_1 = Button(window,text = "Left",fg = "blue",bg ="red",font=("Comic sans ms",25,"bold"))
# button_1.pack(side = LEFT)#Buradan istiqameti deise bilirik . Right , Left ,bottom top daxil ede bilirik.
# button_1.pack()


# button_1.pack(anchor = NW)#Verilen datalar bir basa dirnaqsiz verilir. Nw ,W ,N ,Ne,Center,SE,S,Sw,E daxil ede bilirik. N yuxari W sol Esaga S asagi surusdurur.Hamisi boyuk yazilir.


# button_1.pack(anchor = CENTER,side=LEFT)#Center hec ne siz islene bilmir side ile islenmelidir.



#-----------------------------------------------------------------------------------------------------------------------------------

#Config -- Sehifenin yenilenmesi .

# def change1():
#     window.config(bg = "red")#Config edir belelikle secim ede bilirik.Istenilen bir widgedir.
# button_1 = Button(window,text = "Left",fg = "blue",bg ="red",font=("Comic sans ms",25,"bold"),command=change1)
# button_1.pack(anchor = CENTER,side = LEFT)
# def change2():
#     window.config(bg = "blue")
# button_2 = Button(window,text = "Right",fg = "red",bg ="blue",font=("Comic sans ms",25,"bold"),command=change2)
# button_2.pack(anchor = CENTER,side=RIGHT)

# button.pack()


#--------------------------------------------------------------------------------------------------------------------------------
# fiil , expand


# button_1 = Button(window,text = "Left",fg = "blue",bg ="red",font=("Comic sans ms",25,"bold"))
# button_1.pack(expand=True)#Dartila bilen edir sehifeni.Fiil ise dartacagin terefi teyin edir x oxu ve y oxu ile 

# button_1.pack(expand=True,fill=BOTH)#Her terefden dartir. istesek x ve y ile en ve uzunluq deise bilerik. 

#---------------------------------------------------------------------------------------------------------------------------------- 
window.mainloop()