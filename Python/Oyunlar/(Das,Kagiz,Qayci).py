
import random
roound = 0
while True :
    print("""
          ============================================
          ================Oyunun Menüsü===============
          ============================================""")
    try:
        oyun = int(input("""Seçim edin:
    [1]Start
    [2]Exit -->>"""))
    except ValueError:
        print("Dogru secim edin.")
        continue

    roound = 0
    playerwin = 0
    botwin = 0
    while roound <= 3 :
        

        botn = 0
        playern = 0
        try:
            if oyun == 1 :
                playerselect = (input("""Seçim edin:
                [R]Rock
                [P]Paper
                [S]Scissors
                [L]Lizard
                [K]Spock -->>"""))
                botselect = random.choice("RPSLK")
                if playerselect == "S" and botselect == "P":
                    print("Qayçı Kağızı kəsir , beləliklə siz qazandınız.[Robotun secimi -->>",botselect,"Oyuncunun secimi -->>",playerselect,"]")
                    playern +=1
                elif playerselect == botselect:
                    print("Hec-hece.[Robotun secimi -->>",botselect,"Oyuncunun secimi -->>",playerselect,"]")
                elif playerselect == "P" and botselect == "S":
                    print("Qayçı Kağızı kəsir , beləliklə kompyuter qazandı.[Robotun secimi -->>",botselect,"Oyuncunun secimi -->>",playerselect,"]")
                    botn +=1
                elif playerselect == "P" and botselect == "K":
                    print("Kağız Spocku əhatə edir , beləliklə siz qazandınız.[Robotun secimi -->>",botselect,"Oyuncunun secimi -->>",playerselect,"]")
                    playern +=1
                elif playerselect == "K" and botselect == "P":
                    print("Kağız Spocku əhatə edir , beləliklə kompyuter qazandı.[Robotun secimi -->>",botselect,"Oyuncunun secimi -->>",playerselect,"]")
                    botn +=1
                elif playerselect == "R" and botselect == "L":
                    print("Daş timsahı əzir , beləliklə siz qazandınız.[Robotun secimi -->>",botselect,"Oyuncunun secimi -->>",playerselect,"]")
                    playern +=1
                elif playerselect == "L" and botselect == "R":
                    print("Daş timsahı əzir , beləliklə kompyuter qazandı.[Robotun secimi -->>",botselect,"Oyuncunun secimi -->>",playerselect,"]")
                    botn +=1
                elif playerselect == "R" and botselect == "P":
                    print("Kağız daşı əhatə edir , beləliklə kompyuter qazandı.[Robotun secimi -->>",botselect,"Oyuncunun secimi -->>",playerselect,"]")
                    botn +=1
                elif playerselect == "P" and botselect == "R":
                    print("Kağız daşı əhatə edir , beləliklə siz qazandınız.[Robotun secimi -->>",botselect,"Oyuncunun secimi -->>",playerselect,"]")
                    playern +=1
                elif playerselect == "R" and botselect == "S":
                    print("Daş qayçını əzir , beləliklə siz qazandınız.[Robotun secimi -->>",botselect,"Oyuncunun secimi -->>",playerselect,"]")
                    playern +=1
                elif playerselect == "S" and botselect == "R":
                    print("Daş qayçını əzir , beləliklə kompyuter qazandı.[Robotun secimi -->>",botselect,"Oyuncunun secimi -->>",playerselect,"]")
                    botn +=1
                elif playerselect == "L" and botselect == "S":
                    print("Qayçı timsahı kəsir , beləliklə kompyuter qazandı.[Robotun secimi -->>",botselect,"Oyuncunun secimi -->>",playerselect,"]")
                    botn +=1
                elif playerselect == "S" and botselect == "L":
                    print("Qayçı timsahı kəsir , beləliklə siz qazandınız.[Robotun secimi -->>",botselect,"Oyuncunun secimi -->>",playerselect,"]")
                    playern +=1
                elif playerselect == "K" and botselect == "L":
                    print("Timsah spocku kəsir , beləliklə kompyuter qazandı.[Robotun secimi -->>",botselect,"Oyuncunun secimi -->>",playerselect,"]")
                    botn +=1
                elif playerselect == "L" and botselect == "K":
                    print("Timsah spocku kəsir , beləliklə siz qazandınız.[Robotun secimi -->>",botselect,"Oyuncunun secimi -->>",playerselect,"]")
                    playern +=1
                elif playerselect == "R" and botselect == "K":
                    print("Spock daşı yeyir , beləliklə kompyuter qazandı.[Robotun secimi -->>",botselect,"Oyuncunun secimi -->>",playerselect,"]")
                    botn +=1
                elif playerselect == "K" and botselect == "R":
                    print("Spock daşı yeyir , beləliklə siz qazandınız. [Robotun secimi -->>",botselect,"Oyuncunun secimi -->>",playerselect,"]")
                    playern +=1
                elif playerselect == "L" and botselect == "P":  
                    print("Timsah kağızı yeyir , beləliklə siz qazandınız. [Robotun secimi -->>",botselect,"Oyuncunun secimi -->>",playerselect,"]")
                    playern +=1
                elif playerselect == "P" and botselect == "L":
                    print("Timsah kağızı yeyir , beləliklə kompyuter qazandı. [Robotun secimi -->>",botselect,"Oyuncunun secimi -->>",playerselect,"]")
                    botn +=1
                elif playerselect == "S" and botselect == "K":
                    print("Spock qayçını əhatə edir  , beləliklə kompyuter qazandı. [Robotun secimi -->>",botselect,"Oyuncunun secimi -->>",playerselect,"]")
                    botn +=1
                elif playerselect == "K" and botselect == "S":
                    print("Spock qayçını əhatə edir  , beləliklə siz  qazandınız. [Robotun secimi -->>",botselect,"Oyuncunun secimi -->>",playerselect,"]")
                    playern +=1
                else:
                    print("Zəhmət olmasa doğru seçim edin .")
                    continue
                
                if playern > botn :
                    playerwin += 1
                elif playern == botn :
                    playerwin += 1
                    botwin +=1
                else:
                    botwin +=1 
                print("Kompyuterin xali -->>",botwin)
                print("Sizin xaliniz -->>",playerwin)
                
                if roound == 3 :
                    if playerwin > botwin:
                        print("Siz qazandiniz.Tebrikler")
                    elif playerwin == botwin :
                        print("Berabere.")
                    else :
                        print("\"Kompyuter qazandi\"")
                if botwin == 3 or playerwin == 3:
                    break
            elif oyun == 2 :
                break
        except ValueError:
            print("Zehmet olmasa reqem deil herf daxil edin.Boyuk herflere diqqet edin !")
        if roound == 3 :
            if playerwin > botwin:
                print("\"Siz qazandiniz.Tebrikler\"")
            elif playerwin == botwin :
                print("\"Berabere.\"")
            else :
                print("\"Kompyuter qazandi\"")
        
        roound +=1
    tryagain = input("Try again: [Y] Yeniden basla -- [N] Oyunu terk et -->>")

    if tryagain == "Y":
        continue
    else:         
        break
