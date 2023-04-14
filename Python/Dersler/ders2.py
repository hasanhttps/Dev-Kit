#1ci hisse
#Key sesitive-->> Boyuk ve kicik herife hessasliq anlayisi.Python key sesitive ye duyarlidir.A beraberdeil a ya.
#variable-->> (Deisen)



vergi = 0.20

maasCavid = 5000

print("\tmaash")
print("cavid", 5000- (500*0.18))
print("ilqar", 5000- (2000*0.18))
print("elsen", 5000- (1000*0.18))
print("fuad", 5000- (4000*0.18))
print("husein", 5000- (3000*0.18))
 
#----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#(variable)deisenlerin adlandirilimasi-->>
("""
    1.reqemle bashlaya bilmez
    2.symbolla baslaya bilmz.
    _le bashlaya biler ama
    3.deisenin adinda boshluq ve tre olmaz
    4.Xususi keyworden istifade edile bilmez(if,else ,while,int ,bool,str olmaz)ama _if ve ya if_ olar
    """)
_cavid = 5
nameCavid = "Cavid"


# Example:
en = 5
uzunluq = 25
perimetrduzbucaq= 2*(en+uzunluq)
sahe = en*uzunluq
print(sahe)
print(perimetrduzbucaq)
#-----------------------------------------------------------------------------------------------------------
# input() -->> informasiyanin daxil edilmesi ucundur





"""name = input("adinizi daxil edin")
surname = input("soyadinizi daxil edin")
print("istifadecinin adi-->>>", surname)
print("deisenin saxladigi deyer -->>",name)"""
#input() -->> Butun informasialarin typei stringdir
"""name = input("adinizi daxil edin :")
surname = input("soyadinizi daxil edin: ")
Age = input ("Yasinizi daxil edin:")
print("istifadecinin adi-->>>", name)
print("istifadecinin soyadi -->>",surname)
print("istifadecinin yasi -->> ",Age)"""
 
 #---------------------------------------------------------------------------------------------------------------------------
 #TypeCastin -->> typelarin cevrilmesi
"""
str-> int (Int ancaq tam eded saxlaya biler)
int->str (istenilen bir typei str-e cevire biler)
int->float (15=>15.0)
float->int (15.5=15)
int->bool int  (0 dan bashqa istenilen eded truedir)
bool->int   (False-->0,True 1 verir)
str-> bool (dirnaq icinde istenilen bir symbol truedir,Dirnaq boshdursa Falsedir)
"""



#-----------------------------------------------------------------------------------------------------------------------------------------------
"""number_1 = input ("Birinci deyeri daxil edin")
number_1 = int(number_1)
number_2 = input ("Ikinci deyeri daxil edin")
number_2 = int(number_2)

edediorta = (number_1+number_2) / 2
 
print(edediorta)"""


"""name = input("adinizi daxil edin :")
surname = input("soyadinizi daxil edin: ")
Birthday = input("Dogumilinizi daxil edin :")
print("istifadecinin adi-->>>", surname)
print("deisenin saxladigi deyer -->>",name)
print("Dogumili -->>",Birthday)"""

"""Radius = int(input("Cevrenin radiusunu daxil edin:"))
pi=3
cevreninuzunlugu = 2 * pi* Radius
Sahe = pi * Radius * Radius
print("cevrenin sahesi",Sahe)
print("Cevrenin uzunlugu",cevreninuzunlugu)"""


#Task 4:
"""
Pulumuz = float(input("pulunuzu daxil edin:")
pultam = int(Pulumuz)
pulkesr = Pulumuz - pultam
print("manat",Pulumuz)
print("qepik",pulkesr)
"""
#-------------------------------------------------------------------------------------------------------------------------------------------
"""pul=float(input("Cevirmek istediyiniz meblegi daxil edin:"))

mezenne = 1.7

result = pul /mezenne
print("sizin pulunuz -->>",result,"dollar edir")"""

"""
en = float(input("otagin enini daxil edin :"))
uzunluq = float(input("otagin uzunlugunu daxil edin :"))
hundurluk = float(input("otagin hundurluyunu daxil edin :"))
Sahe = 2*(en+uzunluq)*hundurluk
qalansahe = (sahe*0.8 )
boya= qalansahe * 0.5
print(qalansahe,"bu qeder m2 -->",boya ,"Boya lazimdir")
"""
"""Pul = float(input("pulunuzu daxil edin:"))
pultam = int(Pul)
pulkesr = Pul-pultam
print("manat",pultam)
print("qepik",pulkesr)"""
#1. İki rəqəm daxil edilir, onların ədədi ortasını tapan proqram yazın.
"""eded_1 = float(input("Reqemi daxil edin :"))
eded_2 = float(input("Ikinci Reqemi daxil edin :"))
ededi_orta = (eded_1 + eded_2)/2
print("edediorta-->>",ededi_orta)"""

#2. iİstifadəçi a və b-ni daxil edir, ax+b=0 tənliyini hesablayıb x-i tapan proqram yazın. 

"""a = float(input("a'ni daxil edin :"))
b = float(input("b'ni daxil edin :"))
x = b/a
print("x beraberdir-->>",x)"""

#3. İstifadəçi rəqəm daxil edir, rəqəmin kubunu tapan proqram yazın.
"""
Reqem = float(input("Kubun tapilmasi ucun ededi daxil edin :"))
kub = Reqem *Reqem *Reqem
print("ededin kubu",kub,"'e beraberdir")
"""
# 4. Düzxətli bərabərsürətli hərəkətlə gedilən məsafəni növbəti düsturla hesablayın: S = v*t + (a*t 2 )/2, burada v – sürət,  t – zaman, а – təcildir. (istifadəçi a,t,v-ni daxil edir)
"""a = float(input("Tecili daxil edin :"))
t = float(input("Zamani daxil edin :"))
v = float(input("Sureti daxil edin :"))
S = v * t +(a*t*t)/2
print("Mesafe",S,"e beraberdir")
 """
 #5. İstifadəçi Dolların miqdarını daxil edir. Bunu manata çevirən proqram yazın. 
"""mebleg=float(input("Cevirmek istediyiniz meblegi daxil edin:"))

mezenne = 1.7

netice = mebleg/mezenne
print("sizin pulunuz -->>",netice,"dollar edir")"""
#6. Mili kilometrə çevirən proqram yazın. Bir mil – 1.609 km.
"""m = float(input("Mili daxil edin:"))
km = m*1.609
print(m,"mil",km,"kmdir")"""
#7. İstifadəçi klaviaturadan aeroporta qədər olan məsafəni və onun bu məsafəni qət etmə müddədini  daxil edir. Onun getmə sürətini hesablayın. .
"""s = float(input("Mesafeni daxil edin:"))
t = float(input("Mesafeyi qet etmeye serf olunan zamani daxil edin :"))
v = s/t
print("Qet etme muddeti",v,("'e beraberdir"))"""
#8. N ədədinin F faizini tapan proqram yazın. (F və N istifadəçi daxil edir)  
"""N = float(input("N ededini daxil edin :"))
F = float(input("Faizi daxil edin :"))
Faiz = (N /100)*F
print("ededin faizi",Faiz,"'e beraberdir")
"""
#9. Çevrənin uzunluğu istifadəçi tərəfindən daxil edilir. Çevrənin diametrini tapan proqram yazın.
#Qeyd:eger cevrenin uzunlugu = 2 * pi * r dirse buradan r= cevreninuzunluigu /(2*pi)ni cixartmaq olar)
"""pi = 3.14
Ceuz = float(input("Cevrenin uzunlugunu daxil edin:"))
r = Ceuz /(2* pi)
d = 2*r
print("Cevrenin diametri",d,"'a beraberdir")"""
#10. İstifadəçi konsertin biletinin qiymətini və konsertə gedəcək böyüklərin və uşaqların (ayrı-ayrı) sayını daxil edir. Ümumi xərclənəcək məbləği ekrana çıxarın. (Uşaqlara bilet 40faiz ucuzdur)
"""konb = float(input("Konsertin biletinin qiymetini daxil edin :"))
b = float(input("Boyuklerin sayini daxil edin :"))
k = float(input("Usaqlarin sayini daxil edin :"))
konbusaqev = k*0.4*konb 
konbusaq = k*konb
konbusaqsor = konbusaq - konbusaqev
konbboyuk = b*konb
konumumi = konbusaqsor +konbboyuk
print("Umumi xerclenecek mebleg",konumumi,"'dir.")"""
#11. Otağın eni, uzunluğu, hündürlüyü daxil edilir. Ekrana bu otağın divarlarını boyamaq üçün nə qədər rəng gedəcəyini hesablayan proqram yazmaq lazımdır. 1 m2 divar üçün 0.5 litr rəng gedir və divarların 20faizi pəncərə və qapıdır. 
#Dustur: 2 * ( en + uzunluq ) * hundurluk

"""en = float(input("Otaqin enini daxil edin: "))
uzunluq = float(input("Otaqin uzunluqunu daxil edin: "))
hundurluk = float(input("Otaqin hundurluyunu daxil edin: "))

otaqinKvadratMetri = (2 * (en + uzunluq) * hundurluk) * 0.8

litirBoya = otaqinKvadratMetri * 0.5
print(otaqinKvadratMetri, "Bu qeder kvadrat metire --> ", litirBoya, "Boya lazimdir")"""
#12. İstifadəçi üçrəqəmli ədəd daxil edir. Bu ədədin hər bir rəqəmini ayrı ayrı ekrana çıxarın. (məsələn. 315. Ekrana 3,1,5) 
# ed = int(input("ucreqemli eded daxil edin:"))
# ed1 = [1,2,3 ,  ed]
# print("eded-->>",ed1)
#13. Ekrana 3 rəqəmli ədəd daxil edilir. Onu tərsinə çevirin. (məsələn. 357 daxil edili, ekrana 753 çıxarmaq lazımdır) 