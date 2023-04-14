#------------------------------------------------------------TEKRAR------------------------------------------------------------
#Print


print("It Step")
print("Academy", end=" ")#End printin backendinde olan yazinin arxasiba default "\n" ifadesini deisib istediyibiz qoya bilersiniz.
print("It Step")
#-------------------------------------------------------------------------------------------------------------------
#Escape Secuence


print("\\Hesen\\salam")#Iki ter slash ("\\")print etdikde bir ters slash olaraq gorsenir.
print("Hesen\"")#Print icerisinde ters slash parantez printin xarab olmamasi ucundur eksi teqdirde (yani sadece noqteli vergul qoyduqda )print onu printin baglanisi kimi hesab edir ve syntax error atir.
# print("Hesen "")#Syntax error

#-------------------------------------------------------------------------------------------------------------------
#Type castings
print(float(True))#1.0 verecek
print(str(True))#String tipde True verecek.
print(int(str(3)))#Int tipdede string tipdede cavab 3 alinacaq
print(str(float(3)))
print(float(False))#0.0 verecek.
print(bool(""))#Ici bos olduqda False verecek.
print(bool(" "))#Icerisinde space olduqda True verecek.
# print(float(" "))#Error atacaq
print(bool(0))#False verecek.1 olduqda true verecek

#-------------------------------------------------------------------------------------------------------------------
print(5/2)#Float tipde cavab qayidacaq
print(5//2)#Int tipde cavab qayidacaq
print(10/3)

#-------------------------------------------------------------------------------------------------------------------

try:
    print(6)
# except Exception as ex:#Dedikde errorlarin default qarsiligini ingilisce istifadeciye verir
#     print(ex)#Errorun print edilmesidir
finally:
    print("finally")
