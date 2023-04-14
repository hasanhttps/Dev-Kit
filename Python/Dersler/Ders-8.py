# #range 3 formasi var
# #    ----1 . range (end)  -->> default olaraq 0 dan verilmish reqeme kimi ededleri verir.Sonuncu daxil deil (example : 10 -->> 0,1,2,3,4,5,6,7,8,9)-----

# for j in range (6):
#     print(j)

# #    ----2 . range (start,end) -->> startdan ende kimi ededleri verir (example : 2,8 -->> 2.3.4.5.6.7)----

# for j in range (-2,6):
#     print(j)

# #    ----3 . range (start,end ,step) -->> Verilmish adimlarla gedir (example : 2,8,2 -->> 2,4,6  axirda 2 yazdigimiza gore 2 2 artir)----

# for j in range (6,12,3):
#     print(j)

#Baslangic sondan kicik olmalidir!!!

#Baslangic sondan kicik olmagi ucun default olan +1 yerine (yani step yerine -1 qoyulmalidir ki azala azala kicik olan ende catsin)ozumuz - eded qoymaliyiq.
#----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#ici dolu kvadrat :
"""
for row in range(1,6):
    for column in range(1,6):
        print("*", end=" ")
    print( )
"""
#Ici bos kvadrat :
"""
for row in range(1,6):
    for column in range(1,6):
        if row == 1 or column == 1:
            print("*", end=" ")
        else:
            print(" ")
    print( )
"""
for row in range(1,6):
    for column in range(1,6):
        if row %2 != 0:
            print("1", end=" ")
        else :
            print("0", end=" ")
    print()

for row in range(1,6):
    for column in range(1,6):
        if column %2 != 0:
            print("1", end=" ")
        else:
            print("0", end=" ")
    print()

#----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
for row in range(1,6): 
    for column in range(1,6):
        print(row,end =" ")
    print()


for row in range(6,0,-1): 
    for column in range(1,6):
        print(row,end =" ")
    print()


#----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
summer = 1
for row in range(26):
    for column in range(26):
        print(summer,end =" ")
        summer +=1
    print()


#----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

for row in range(1,6):
    for column in range(1,6):
        if row %2 !=0 :
            if column %2 == 0:
                print("1",end =" ")
            else :
                print("0",end=" ")
        elif row %2 ==0 :
            if column %2 != 0:
                print("1",end =" ")
            else :
                print("0",end=" ")
    print()

for row in range(1,6):
    for column in range(1,6):
        print((row + column)%2,end =" ")
          
    print()







