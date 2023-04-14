import pickle


while True:
    select = input("Menyudan birini secin")
    
    
    mystudent = {
    "Admin@gmail.com":{
        "name":"Admin",
        "surname":"Admin surname"
    }
}
    
    try:
        file = open("Task.txt","rb")
        mystudent = pickle.load(file)
        file.close()
        print(mystudent)
    except:
        file = open("Task.txt","wb" )
        pickle.dump(mystudent, file)
        file.close()
    
    
    
    if select == "1":
        pass
    elif select =="2":
        pass
    elif select == "0":
        file = open("Task.txt","wb")
        pickle.dump(mystudent, file)
        file.close()
        break

butuniller = list(range(1965,2022))#Butun illerin tapilmasi

print(butuniller)