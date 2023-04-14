#with as , pickle , listbox , -->>final project<--

#with acir onun kodlari 1 tab qabagda yazilir 1 tab arxada oxumur kod bloku k9imidir oxuduqdan sonra bagliyir.

# with open("Task.txt","r",encoding="utf-8") as f:
#     print(f.read())#Kursor axira gelib dayandigi ucun 2ci defe oxumur yani iki dene f.read demeyin menasi yoxdur
    
#colde yazilanda tanimir ve valueerror atir


#-------------------------------------------------------------------------------------------------------------------

##r,w,a,r+,x -- >> (wb,rb,ab,xb,rb+)


import pickle


# originalname = "Admin@gmail.com"
# originalpassword = 12345689
# print(originalpassword)
# print("-------------------------------")

# kapsul = pickle.dumps(originalpassword)#verilmish datani kapsullasdirir ve print edir.Tipi bytedir.String ve dictionary formada olan yazini sadece bezi qisimlerini kapsullasdirir.
# print(kapsul)


# # pickle.dump(obj, file)#Verilmish datani kapsullasdirir verdiyimiz fyle'a elave edir.

# print("-------------------------------")
# a = pickle.loads(kapsul)#Tipini ozuyle deisir.Tipi intdir
# print(a)
# pickle.dump()#Data ve fayl veririrk binery formata cevirir,kapsullasdirir  e verdiyimiz fayla yazir


# file_1 = open("Task.txt", "wb")
# pickle.dump(originalname, file)




# file_2 = open("Task.txt","rb")
# c = pickle.load(file_2)
# print(c)


# file_1.close()

# file_2.close()


#----------------------------------------------------------------------------------------------------------------------------


mystudent = {
    "Admin@gmail.com":{
        "name":"Admin",
        "surname":"Admin surname"
    }
}


file = open("Task.txt","wb")

pickle.dump(mystudent, file)

file.close()


#----------------------------------------------------------------------------------------------------------------
#List Box
# from tkinter import *


# mystudent = {
#     "Admin@gmail.com":{
#         "name":"Admin",
#         "surname":"Admin surname"
#     }
# }

# window = Tk()


# window.title("List Box")
# window.geometry("500x500+750+250")


# listbox = Listbox(window)
# listbox.place(relx = 0.2,rely=0,relwidth=0.8,relheight=0.8)


# listbox1.insert(1,"Hesen")
# listbox.insert(2,"Cavid")
