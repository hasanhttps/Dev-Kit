#--------------------------------------------------------map()---------lampda()--------filter()----------------------------------------------------------



#MAP()---Ozu sirayla verilen listi deyisene yigir ve ozu size verir.

#-------------------------------------------------------------------------------------------------------------------------------------------------------

#Filter()-->>True ve False ile isleyir cavab false olduqda yadda saxlamir ve 1ci arqumentde verilen deisene elave olunmur , lakin True olduqda bunu 1ci arqumentde daxil edilen deisende yadda saxlayir.
#Iki cur print ede bilerik 
#1.Liste cevirib print etmek
#2.Dovrde yazib print ederek.

#Eks teqdirde bize ramda deisenin saxlandigi yaddas sahesini print edecek.

# ages  = [1,2,3,4,5,6,7,8,9]

# def myfunc(x):
#     if x < 7:
#         return False
#     else:
#         return True
    
# adults = filter(myfunc,[1,2,3,4,5,6,7,8,9])
# print(list(adults))


#-------------------------------------------------------------------------------------------------------------------------------------------------------

#LAMPDA()---Anonim funksiya

# a = ["Hesen","Aga","Eli"]

# netice = map(lambda x: x[0],a)#x: x[0]  O'ci indeksi return edecek.

# print(list(netice))

# lambda a,b : a * b#Kimi de istifade ede bilerik
#------------------------------------------------------------------------------------------------------------------------------------------------------

#Moduls import modul

# import time
# import os
# import string
# import datetime
# import math
# import random

#from random import * #Bele etdikde random.randint yazmaga ehtiyac olmur bir basa randint de yazmaq olur.|Example|:randint(a,b)

# from random import date # datetime.date i evez edir.

# import random as r #Eledikde r.randint desek kifayet edir .|Example|:r.randint(a,b)

#from time import sleep as s #Bu , time.sleep() yerine s() kimi yaza bilmeyimize komek edir.

# time.sleep#Programi saxlayir