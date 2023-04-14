
#=========================================================================Listler=====================================================================


#LIST  ----> List collection(Toplu) istenilen sayda typede ve istenilen sayda data saxlaya bilir.
# newList = [1,2,3,4,5,6,7,8,"KJHSFGKJHSJKDF",True]
# print(type(newList))
#------------------------------------------------------------------------------------------------------
#List slice 
# newList = [1,2,3,4,5,6,7,8,"KJHSFGKJHSJKDF",True]
# print(newList[0])

# print(newList[:3])

# print(newList[2:])

# print(newList[::-1])

# print(newList[-3::1])
#------------------------------------------------------------------------------------------------------
#join split

# text = "Salam meniim adim hesendir"

# newlist_2 = text.split(" ")# -->>bosluqlari liste cevirir salam bir data olur , menim bir data ,adim bir data ,hesendir bir data yani avtomatik liste cevirecek.

# print(newlist_2)
#------------------------------------------------------------------------------------------------------
# newList = ["KJHSFGKJHSJKDF","Bnan"]# -- Reqem yazmaq olmaz

# text = " ".join(newList)

# print(text)
#------------------------------------------------------------------------------------------------------
#len()

# print(len(newList))

#------------------------------------------------------------------------------------------------------
# newlist[0]dedikde bize indexi verir yani ilk datani .

# newlist[0] dedikde ilk element cixir eger newlist[0][2] desek ilk elmentin 2 ci indexini veririr
#------------------------------------------------------------------------------------------------------

#NESTED LIST 
# allstudents = [["esen","Hesenli",14],["hfksf","khsghks",15]]

# print(allstudents[1][0][2])## -- Indexlerle tapa bilerik

#------------------------------------------------------------------------------------------------------
#Task 1
# tel1 = ["Hese","Abd","Eli"]
# tel2 = ["Dasqin","Abd","Veli"]
# tel3 = ["Vidadi","Abd","Nazim"]
# tel4 = ["Mahmud","Melikzade","Sakir"]
# tel5 = ["Nazim","Mecid","Sabir"]
# allstudents = [tel1,tel2,tel3,tel4,tel5]
# ad = input("Adinizi daxil edin : ")
# for i in range(len(allstudents)):
#     if ad == allstudents[0][0]:
#         print("okay")
#         break
#     elif ad == allstudents[1][0]:
#         print("okay")
#         break
#     elif ad == allstudents[2][0]:
#         print("okay")
#         break
#     elif ad == allstudents[3][0]:
#         print("okay")
#         break
#------------------------------------------------------------------------------------------------------
#in -- icinde
# if "i" in "Cavid":
#     print("Var")
# else:
#     print("Yoxdur  ")else yazdiqda her dovrde else oldugu ucun dogru deil 
#------------------------------------------------------------------------------------------------------
# == Dovrde else yazmagin yolu :: ==
# ischeck = 0
# if "i" in "Cavid":
#     print("Var")
# else:
#     ischeck +=1
# if ischeck >0:
#     print("Yoxdur")


#----------------------------------------------------------------------------------------------------

#LIST METHODS
#len() -- funksiyadir

newlist = ["Banan","Alma","Heyva"]


# print(newlist)

# newlist[1] = "Nar" #Indekse muraciet ederek replace ede bilerik 
#Count

# print(newlist.count("Alma"))
#------------------------------------------------------------------------------------------------------

#Clear Method
#clear()-->> listin icini silir ama list ozu qalir 
# newlist.clear()
# print(newlist)
#------------------------------------------------------------------------------------------------------
#Append Method

#append()-->> listin sonuna elave yeni bir element elave edir

# newlist.append("Qazan dibi")

# print(newlist)
#------------------------------------------------------------------------------------------------------

#Insert Method
#insert()-->>listin istenilen yerine indexin yerine yeni element elave edir .
# newlist.insert(0, "Ananas") 

# print(newlist)
#------------------------------------------------------------------------------------------------------
#Pop Method
#pop()-->> hecbir argumentverilmedikde sonuncunu silir

#pop(5)-->> argument daxil etdiyimizde daxil etdiyimiz argumenti aindex olaraq qebul edir ve onu silir

# newlist.pop()

# print(newlist)

# newlist.pop(5)

# print(newlist)
#------------------------------------------------------------------------------------------------------
#Remove Method

#remove()  -->> verilmish element silinir

# newlist.remove("Alma")# Alman9 Tapir silir ama ikinci varsa onu silmir dayanir.

# print(newlist)
#------------------------------------------------------------------------------------------------------
#Copy Method

# a = newlist.copy()#Ikiside eyni datani saxlayir ve uyvanlari eyni olmur
#Belelikle 2ci listi deisdikde birincisi deismir
#------------------------------------------------------------------------------------------------------
#Ram 
#Ram 2 cur isleyir:
#  *Stack
#  *Hip
#Stack == ardicilliqla deyisen veririk .Verilmish datani bir basa saxlayir
# Sadece listlerde :
# a = 6
# b = a
# b = 3 dedikde ikiside deisir cunki bunlarin ikisinj=de ramda eynbi unvana baxir hansiki hipde olan adrese ve a ve b stackda beraberlesir .
#------------------------------------------------------------------------------------------------------
#Del Method
#del eyer list verilerse ramdan silir
#del newlist
#del newlist[0]
#print(newlist)
#------------------------------------------------------------------------------------------------------

#REVERSE METHOD
#reverse()-->> listi tersine cevirir
#newlist.reverse()

#print(newlist)

#------------------------------------------------------------------------------------------------------
#Sort Method
#sort()-->> elifba sirasina gore b=ve ya kicikden boyuye sort edir

# newlist.sort()

# print(newlist)--Str oldugu ucun elifba sirasi ile olacaq  eyer int olsaydi bize kicikden boyuye verecek

# newlist.sort(reverse=True)

# print(newlist)--Elifba sirasininin Tersine gore sort edecek int olsada boyukden kiciye sort edecek idi.

#------------------------------------------------------------------------------------------------------

#Task 2
#Verilmish listin en boyuk elementini tapan algoritm yazin 


# number = [90,25,35,13,10,3,22,31]

# max = 0

# for i in range(len(number)):
#     if number[i]