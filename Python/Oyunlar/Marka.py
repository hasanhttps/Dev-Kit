import random


cars = {
    1:{
    }
}


colors = ("sari","qara","mavi","ag","narinci","yasil","boz","qirmizi")
brands = ["Bmw","Mercedes","Kia","Wolksvagen","Toyota"]
modelbmw = ["x1","x2","x3","x4","x5"]
modelmercedes = ["s100","s200","s300","s400","s500"]
modelKia = ["k1","k2","k3","k4","k5"]
modelWolksvagen = ["w1","w2","w3","w4","w5"]
modelToyota = ["t1","t2","t3","t4","t5"]
years = [2021,2022,2019,2018,2017,2016,2015,2014,2013,2012,2011,2010,2009,2008]
count = 0
for i in range(0,50):
    color = random.choice(colors)
    brand = random.choice(brands)
    if brand == "Bmw":
        model = random.choice(modelbmw)
    elif brand == "Mercedes":
        model = random.choice(modelmercedes)
    elif brand == "Kia":
        model = random.choice(modelKia)
    elif brand == "Wolksvagen":
        model = random.choice(modelWolksvagen)
    elif brand == "Toyota":
        model = random.choice(modelToyota)
    year = random.choice(years)
    
    count +=1
    cars.update({count:{"Marka": brand,"model": model,"reng": color,"il": year }})

for i, j in cars.items():
    print(f"\n{i} : {j}")

    
