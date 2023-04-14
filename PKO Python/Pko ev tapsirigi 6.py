# • İstifadəçi iki kəsr ədəd daxil edir. Onların tam və kəsr hissələrinin
# cəmini tapın.
# ( Məsələn : 1.5 və 3.2 - Tam hissə cəmi 4 , kəsr hissə cəmi 0.7 edir)

# eded_1 = float(input("Kesr eded daxil edin ; "))
# eded_2 = float(input("Kesr eded daxil edin ; "))

# eded_1_tam = int(eded_1)
# eded_1_kesr = eded_1 - eded_1_tam

# eded_2_tam = int(eded_2)
# eded_2_kesr = eded_2 - eded_2_tam

# tam = eded_1_tam +eded_2_tam
# kesr = eded_1_kesr + eded_2_kesr
# print(tam,kesr)

# • İstifadəçi sahib olduğu pulu daxil edir (Kəsr halda: məsələn 15.30).
# İstifadəçinin neçə manat və neçə qəpiyi olduğunu ekrana çıxarın. (
# Ekrana 15 manat, 30 qəpik çıxmalıdır)

# pul = float(input("Sahib oldugunuz pulu daxil edin : "))
# manat = int(pul)
# qepik = pul - manat
# print(f"{manat} manat, {qepik} qepik pulunuz var.")


# • İstifadəçi kütləni tonla daxil edir (Kəsr ədəd). Ekrana
# ton,kiloqram,qram halında çıxarın. (Məsələn 126.456789 Ton, Ekrana
# 126 Ton, 456 kq, 789 q çıxmalıdır)

# kutle_ton = float(input("Zehmet olmasa kutleni (tonla) daxil edin : "))

# ton = int(kutle_ton)
# kq = int((kutle_ton - ton)*1000)
# qram = int(((kutle_ton - ton)*1000 - kq)*1000)

# print(f"{ton} Ton, {kq} kq, {qram} q.")

# • İstifadəçi bir notebookun qiymətini, almaq istədiyi sayı, və endirim
# faizini daxil edir. Program ekrana ümumi sifarişin neçə AZN olacağını
# çıxarır.

# notebook_qiymet = int(input("Zehmet olmasa almaq istediyiniz notebook'un qiymetini daxil edin : "))
# notebook_say = int(input("Zehmet olmasa notebook'dan nece dene almaq istediyinizi daxil edin : "))
# notebook_endirim = int(input("Zehmet olmasa endirim faizini daxil edin : "))
# total = (notebook_qiymet * notebook_say) - ((notebook_qiymet * notebook_say)*(notebook_endirim / 100))
# print(total)

# • İstifadəçi flaş drive-ın gigabayt ilə ölçüsünü daxil edir. 760
# Megabaytlıq kinonun həmin flaşa neçə dəfə yerləşəcəyini tapan
# program yazın.

# gigabayt = int(input("Zehmet olmasa flas drivenin gigabayt ile olcusunu daxil edin :"))
# giga_mega = gigabayt * 1024
# count_film = giga_mega / 760
# print(f"{gigabayt} gigabaytliq flas drivenin icerisine {count_film} qeder kino yerleser.")

# • İstifadəçi imtahanı uğurla verən tələbələrin sayını və
# “borclu”ların(imtahanı verməyənlər) sayını daxil edir. Sinifin neçə
# faiz borclulardan və neçə faiz uğurlu tələbələrdən ibarət olduğunu
# hesablayan program yazın.

# ugurlu_telebe = int(input("Zehmet olmasa imtahani ugurla veren telebe sayini daxil edin : "))
# borclu_telebe = int(input("Zehmet olmasa imtahani vermeyenlerin sayini daxil edin : "))
# butun_telebeler = ugurlu_telebe + borclu_telebe
# borclu_faiz = int(borclu_telebe / butun_telebeler * 100)
# ugurlu_faiz = int(100 - borclu_faiz)
# print(f"Umumi sinifde {ugurlu_faiz}% telebe imtahani ugurla kecib , {borclu_faiz}% imtahani vermeyib.")

# • İstifadəçi filmin gigabaytla ölçüsünü daxil edir. Bu filmi saxlamaq
# üçün neçə disket lazım olduğunu hesablayan program yazın. (1
# Disketin ölçüsü 1.44megabaytdır)

# gigabayt = int(input("Zehmet olmasa filmin gigabayt ile olcusunu daxil edin :"))
# giga_to_mega = gigabayt * 1024
# disket_need_count = giga_to_mega / 1.44
# print(disket_need_count)