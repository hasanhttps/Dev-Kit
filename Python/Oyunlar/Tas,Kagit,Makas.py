#Oyunu oynamaq üçüçn yazılmış programı çalışdıraraq interpretartda yani aşağı qismə klikləyərək oradan 1 və 3 arası rəqəm daxil etməliyik .
#Oyun əgər visual studioda çalıştırılırsa ctrl + f5 , pycharmda shift + f10 ,  python idedə isə enterə basmağınız kifayətdir. 
#========-----(Daş , Kağız , Qayçı)-----=======
while True:
    try:
        choos1 = int(input("""Birinci Seçimi edin:
        [1]Daş
        [2]Kağız
        [3]Qayçı   -->> """))
        print("\n\n\n\n\n\n\n\n\n\n\n\n")
        choos2 = int(input("""Ikinci Seçimi edin:
        [1]Daş
        [2]Kağız
        [3]Qayçı   -->> """))
    except ValueError:
        print("Zəhmət olmasa rəqəm daxil edin və ya daxil etdiyiniz ədədi int tipində daxil edin (Yani ədəd kəsr şəklində deil tam şəkildə olmalıdır!!)")
        continue
    if choos1 == choos2 :
        print("Heç heçə")
    elif choos1 == 1 and choos2 == 2 :
        print("Kağız daşı əhatə edir , beləliklə İkinci tərəf qazandı.")
    elif choos1 == 1 and choos2 == 3 :
        print("Daş qayçını əzir , beləliklə Birinci tərəf qazandı.")
    elif choos1 == 2 and choos2 == 1 :
        print("Kağız daşı əhatə edir , beləliklə Birinci tərəf qazandı.")
    elif choos1 == 2 and choos2 == 3 :
        print("Qayçı Kağızı kəsir , beləliklə İkinci tərəf qazandı.")
    elif choos1 == 3 and choos2 == 1 :
        print("Daş qayçını əzir , beləliklə İkinci tərəf qazandı.")
    elif choos1 == 3 and choos2 == 2 :
        print("Qayçı Kağızı kəsir , beləliklə Birinci tərəf qazandı.")
    else :
        print("Daxil etdiyiniz ədəd xətalıdır.Zəhmət olmasa seçiminizi 1 və  3 arası edin . 3dən artıq və ya 1 dən kiçik ədədlər qəbul olunmur!")
        continue    
    
    print("Oyun  yekunlaşdı")