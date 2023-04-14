import os

import time


while True:
    secim = input("Zehmet olmasa asagidakilardan birini secin ;\n\n[y] -- |new game|\n[e] -- |exit    | -- ")
    if secim == "y":
        time.sleep(0.5)
        os.system("cls")
        score_1 = 0
        score_2 = 0
        for i in range(1,4):
            print(f"\t\t\t{i} ROUND\n\n")
            player_1_secim = input("""(Player 1) Asagidakilerden birini secin ;\n
            [r] -- rock
            [s] -- scissors
            [k] -- spoke
            [l] -- lizard
            [p] -- paper  : """)
            if player_1_secim != "r" and player_1_secim != "s" and player_1_secim != "k" and player_1_secim != "l" and player_1_secim != "p":
                print("Zehmet olmasa duzgun daxil edin !")
                break
            time.sleep(0.5)
            os.system("cls")
            print(f"\t\t\t{i} ROUND\n\n")
            player_2_secim = input("""(Player 2) Asagidakilardan birini secin ;\n
            [r] -- rock
            [s] -- scissors
            [k] -- spoke
            [l] -- lizard
            [p] -- paper  : """)
            if player_2_secim != "r" and player_2_secim != "s" and player_2_secim != "k" and player_2_secim != "l" and player_2_secim != "p":
                print("Zehmet olmasa duzgun daxil edin !")
                break
            time.sleep(0.5)
            os.system("cls")
            if player_1_secim == "r" and player_2_secim == "s":
                score_1 +=1
                print(f"Rock sicissorsu ezir .\nPlayer 1 -- rock , Player 2 -- sicissors .\nQazanan -- Player 1\nScore : Player 1 -- {score_1} , Player 2 -- {score_2}")
            if player_1_secim == "r" and player_2_secim == "l":
                score_1 +=1
                print(f"Rock lizardii ezir .\nPlayer 1 -- rock , Player 2 -- lizard .\nQazanan -- Player 1\nScore : Player 1 -- {score_1} , Player 2 -- {score_2}")
            if player_1_secim == "r" and player_2_secim == "k":
                score_2 +=1
                print(f"Spock rocku ezir .\nPlayer 1 -- rock , Player 2 -- spock .\nQazanan -- Player 2\nScore : Player 1 -- {score_1} , Player 2 -- {score_2}")
            if player_1_secim == "r" and player_2_secim == "p":
                score_2 +=1
                print(f"Paper rocku ehate edir .\nPlayer 1 -- rock , Player 2 -- paper .\nQazanan -- Player 2\nScore : Player 1 -- {score_1} , Player 2 -- {score_2}")
            elif player_1_secim == "s" and player_2_secim == "r":
                score_2 +=1
                print(f"Rock sicissorsu ezir .\nPlayer 1 -- sicissors , Player 2 -- rock .\nQazanan -- Player 2\nScore : Player 1 -- {score_1} , Player 2 -- {score_2}")
            elif player_1_secim == "s" and player_2_secim == "k":
                score_2 +=1
                print(f"Spock scissorsu ezir .\nPlayer 1 -- scissors , Player 2 -- spock .\nQazanan -- Player 2\nScore : Player 1 -- {score_1} , Player 2 -- {score_2}")
            elif player_1_secim == "s" and player_2_secim == "l":
                score_1 +=1
                print(f"Scissorsu Lizardi kesir .\nPlayer 1 -- scissors , Player 2 -- lizard .\nQazanan -- Player 1\nScore : Player 1 -- {score_1} , Player 2 -- {score_2}")
            elif player_1_secim == "s" and player_2_secim == "p":
                score_1 +=1
                print(f"Scissorsu paperi kesir .\nPlayer 1 -- scissors , Player 2 -- paper .\nQazanan -- Player 1\nScore : Player 1 -- {score_1} , Player 2 -- {score_2}")
            elif player_1_secim == "k" and player_2_secim == "r":
                score_1 +=1
                print(f"Spock rocku ezir .\nPlayer 1 -- spock , Player 2 -- rock .\nQazanan -- Player 1\nScore : Player 1 -- {score_1} , Player 2 -- {score_2}")
            elif player_1_secim == "k" and player_2_secim == "s":
                score_1 +=1
                print(f"Spock scissorsu ezir .\nPlayer 1 -- spock , Player 2 -- scissors .\nQazanan -- Player 2\nScore : Player 1 -- {score_1} , Player 2 -- {score_2}")
            elif player_1_secim == "k" and player_2_secim == "l":
                score_2 +=1
                print(f"Lizard spocku  ezir .\nPlayer 1 -- spock , Player 2 -- lizard .\nQazanan -- Player 2\nScore : Player 1 -- {score_1} , Player 2 -- {score_2}")
            elif player_1_secim == "k" and player_2_secim == "p":
                score_2 +=1
                print(f"Paper spocku ehate edir .\nPlayer 1 -- spock , Player 2 -- paper .\nQazanan -- Player 2\nScore : Player 1 -- {score_1} , Player 2 -- {score_2}")
            elif player_1_secim == "l" and player_2_secim == "r":
                score_2 +=1
                print(f"Rock lizardii ezir .\nPlayer 1 -- lizard , Player 2 -- rock .\nQazanan -- Player 2\nScore : Player 1 -- {score_1} , Player 2 -- {score_2}")
            elif player_1_secim == "l" and player_2_secim == "s":
                score_2 +=1
                print(f"Scissorsu Lizardi kesir .\nPlayer 1 -- lizard , Player 2 -- scissors .\nQazanan -- Player 2\nScore : Player 1 -- {score_1} , Player 2 -- {score_2}")
            elif player_1_secim == "l" and player_2_secim == "k":
                score_1 +=1
                print(f"Lizard spocku  ezir .\nPlayer 1 -- lizard , Player 2 -- spock .\nQazanan -- Player 1\nScore : Player 1 -- {score_1} , Player 2 -- {score_2}")
            elif player_1_secim == "l" and player_2_secim == "p":
                score_1 +=1
                print(f"Lizard paperi ezir .\nPlayer 1 -- lizard , Player 2 -- paper .\nQazanan -- Player 1\nScore : Player 1 -- {score_1} , Player 2 -- {score_2}")
            elif player_1_secim == "p" and player_2_secim == "r":
                score_1 +=1
                print(f"Paper rocku ehate edir .\nPlayer 1 -- paper , Player 2 -- rock .\nQazanan -- Player 1\nScore : Player 1 -- {score_1} , Player 2 -- {score_2}")
            elif player_1_secim == "p" and player_2_secim == "s":
                score_2 +=1
                print(f"Scissorsu paperi kesir .\nPlayer 1 -- paper , Player 2 -- scissors .\nQazanan -- Player 2\nScore : Player 1 -- {score_1} , Player 2 -- {score_2}")
            elif player_1_secim == "p" and player_2_secim == "k":
                score_1 +=1
                print(f"Paper spocku ehate edir .\nPlayer 1 -- paper , Player 2 -- spock .\nQazanan -- Player 1\nScore : Player 1 -- {score_1} , Player 2 -- {score_2}")
            elif player_1_secim == "p" and player_2_secim == "l":
                score_2 +=1
                print(f"Lizard paperi ezir .\nPlayer 1 -- paper , Player 2 -- lizard .\nQazanan -- Player 2\nScore : Player 1 -- {score_1} , Player 2 -- {score_2}")
        if score_1 > score_2:
            print(f"\n\nQazanan -- Player 1 \nScore -- Player 1 -- {score_1} , Player 2 -- {score_2}")
        else:
            print(f"\n\nQazanan -- Player 2 \nScore -- Player 1 -- {score_1} , Player 2 -- {score_2}")
            
    elif secim == "e":
        print("Bye-bye")
        break
    else:
        print("Zehmet olmasa duzgun daxil edin !")
    
    