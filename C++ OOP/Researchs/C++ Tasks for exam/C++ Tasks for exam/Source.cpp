#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

class Boat
{
private:

    char dir;
    int length;
    vector<int> boatrow;
    vector<int> boatcol;
    int hits;
    string name;

public:

    //Default contstructor
    Boat(char d, int lgth, vector<int> r, vector<int> c, int hit, string nme)
    {
        dir = d;
        length = lgth;
        boatrow = r;
        boatcol = c;
        hits = hit;
        name = nme;
    }

    //set boat hit
    void setHit()
    {
        hits++;
    }

    int checkSunk(int BoatSize)
    {
        if (hits >= BoatSize)
        {
            return 9;
        }
        else
        {
            return 0;
        }
    }

    //get boat grid coordinates
    void boatCoordinates()
    {
        cout << "Coordinates for boat " << name << endl << endl;
        for (int i = 0; i < length; i++)
        {
            cout << "Grid [" << boatrow[i] << "][" << boatcol[i] << "]" << endl;
        }
        cout << endl;
    }

    //check coordinate bombed to find particular boat
    string getBoat(int r, int c)
    {
        for (int i = 0; i < length; i++)
        {
            if ((boatrow[i] == r) && (boatcol[i] == c))
            {
                return name;
            }
        }
        return "";
    }
};

enum BoatSize { Submarine = 2, Destroyer = 3, Battleship = 4, Carrier = 5 };
void initGrid(int grid[][10]);
void printBoard(int grid[][10]);
void printGameBoard(int grid[][10]);
int resetColAndRow(int col, int& row, int BoatSize, char d);
char getDirection(int d);
int checkSpaces(int grid[][10], int c, int r, int s, char d);
void editGrid(int grid[][10], int col, int row, int BoatSize, char dir);
bool setBoat(int grid[][10], int BoatSize, int name, vector<Boat>& boatList);
void editBoatInfo(int grid[][10], int c, int r, int BoatSize, char d, vector<Boat>& boatList, int name);
int playGame(int grid[][10], vector<Boat>& boatList);
int getSpace(int grid[][10], int row, int col);

int main()
{
    int grid[10][10];
    vector<Boat> boatList;
    char play;
    initGrid(grid);
    //    printBoard(grid);  uncomment to see initialised grid
    setBoat(grid, Carrier, 1, boatList);  //set the boats onto the grid
    setBoat(grid, Battleship, 2, boatList);
    setBoat(grid, Battleship, 3, boatList);
    setBoat(grid, Destroyer, 4, boatList);
    setBoat(grid, Destroyer, 5, boatList);
    setBoat(grid, Destroyer, 6, boatList);
    setBoat(grid, Submarine, 7, boatList);
    setBoat(grid, Submarine, 8, boatList);
    setBoat(grid, Submarine, 9, boatList);
    setBoat(grid, Submarine, 10, boatList);

    cout << "Welcome to Battleships.  Press c to play the game" << endl << endl;
    cout << "The board will show a 1 for a hit and a 9 for a miss" << endl << endl;
    cin >> play;
    if (play == 'c')
    {
        playGame(grid, boatList);
    }
    return 0;
}

void initGrid(int grid[][10])
{
    for (int col = 0; col < 10; col++) //Outer column loop
    {
        for (int row = 0; row < 10; row++) //Inner row loop
        {
            grid[col][row] = 0;
        }
    }
}

void printBoard(int grid[][10])  //Print the board with the boats placed on it
{
    cout << "   0|1|2|3|4|5|6|7|8|9" << endl << endl;
    for (int i = 0; i < 10; i++)  //column loop
    {
        for (int j = 0; j < 10; j++)  //row loop
        {
            if (j == 0)
            {
                cout << i << "  "; //print row number and spaces before new row
            }
            cout << grid[i][j];
            if (j != 9)
            {
                cout << "|";
            }
        }
        cout << endl; //new line at end of column
    }
    cout << endl;
}

void printGameBoard(int grid[][10]) //This is the board that is printed for playing the game.  You cannot see the boats
{
    cout << "   0|1|2|3|4|5|6|7|8|9" << endl << endl;
    for (int i = 0; i < 10; i++)  //column loop
    {
        for (int j = 0; j < 10; j++)  //row loop
        {
            if (j == 0)
            {
                cout << i << "  "; //print row number and spaces before new row
            }
            if (grid[i][j] == 1)  //if the space is a hit, print it
            {
                cout << 1;
            }
            else if (grid[i][j] == 9)  //if the space is a miss, print it
            {
                cout << 9;
            }
            else
            {
                cout << 0;  //otherwise, just print a 0
            }

            if (j != 9)
            {
                cout << "|";
            }
        }
        cout << endl; //new line at end of column
    }
    cout << endl;
}

bool setBoat(int grid[][10], int BoatSize, int name, vector<Boat>& boatList)
//This function places the individual boats onto the initialised grid
{
    srand(time(0));
    int col = 0;
    int row = 0;
    char d = 'v';
    bool placementFailure = true;
    char check = 'v';
    int cS = 0;

    d = getDirection(rand() % 10);  //randomly pick which direction to place boat
    col = resetColAndRow(col, row, BoatSize, d);  //This function returns a random column and row (by reference) of where
    //to place the boat

    while (placementFailure)
    {
        if (d == 'h')
        {
            cS = checkSpaces(grid, col, row, BoatSize, d);//check to make sure the boat can be placed without overlapping another boat
            if (cS == 1)//if the boat overlaps, generate another random column, row and direction and start the loop again
            {
                d = getDirection(rand() % 10);
                col = resetColAndRow(col, row, BoatSize, d);
                cS == 0;
                continue;
            }
            editGrid(grid, col, row, BoatSize, d);//place the boat on the grid
            editBoatInfo(grid, col, row, BoatSize, d, boatList, name);//create the boat object
            return 0;
        }//end of 'if horizontal'
        else if (d == 'v')
        {
            cS = checkSpaces(grid, col, row, BoatSize, d);
            if (cS == 1)
            {
                d = getDirection(rand() % 10);
                col = resetColAndRow(col, row, BoatSize, d);
                cS == 0;
                continue;
            }
            editGrid(grid, col, row, BoatSize, d);
            editBoatInfo(grid, col, row, BoatSize, d, boatList, name);
            return 0;
        }
    }//end of while loop
}//end of setBoat function

char getDirection(int d)
{
    if (d > 4)
    {
        return 'h';  //randomly pick which direction to place boat
    }
    else
    {
        return 'v';
    }
}

void editGrid(int grid[][10], int col, int row, int BoatSize, char dir)
//This function puts the numbers that correspond to the boat type on the grid
{
    if (dir == 'h')
    {
        for (int i = 0; i < BoatSize; i++)
        {
            grid[row][col] = BoatSize;
            col++;
            cout << endl;
        }
    }
    else if (dir == 'v')
    {
        for (int i = 0; i < BoatSize; i++)
        {
            grid[row][col] = BoatSize;
            row++;
            cout << endl;
        }
    }
    else
    {
        cout << "Error!  No direction passed" << endl;
    }
    //printBoard(grid);  //uncomment to see finished grid
}

int checkSpaces(int grid[][10], int c, int r, int s, char d)
//check the grid to make sure that none of the boats will overlap
{
    int check = 0;
    if (d == 'h')
    {
        for (int i = c; i < c + s; i++)
        {
            check = grid[r][i];
            if (check != 0)
            {
                return 1;
            }
        }

        return 0;
    }
    else
    {
        for (int i = r; i < r + s; i++)
        {
            check = grid[i][c];
            if (check != 0)
            {
                return 1;

            }
        }

        return 0;
    }
}

int resetColAndRow(int col, int& row, int BoatSize, char d)
{
    switch (BoatSize) //Generate random column and row based on boat size so we don't go over the edge of the grid
    {
    case Submarine:
        if (d == 'h')
        {
            col = rand() % 8;
            row = rand() % 10;
        }
        else
        {
            col = rand() % 10;
            row = rand() % 8;
        }
        break;
    case Destroyer:
        if (d == 'h')
        {
            col = rand() % 7;
            row = rand() % 10;
        }
        else
        {
            col = rand() % 10;
            row = rand() % 7;
        }
        break;
    case Battleship:
        if (d == 'h')
        {
            col = rand() % 6;
            row = rand() % 10;
        }
        else
        {
            col = rand() % 10;
            row = rand() % 6;
        }
        break;
    case Carrier:
        if (d == 'h')
        {
            col = rand() % 5;
            row = rand() % 10;
        }
        else
        {
            col = rand() % 10;
            row = rand() % 5;
        }
    }
    return col;
}

void editBoatInfo(int grid[][10], int c, int r, int BoatSize, char d, vector<Boat>& boatList, int name)
//This function creates the boat objects
{
    switch (name)
    {
    case 1:
        if (d == 'h')
        {
            vector<int> r1(5);
            //  put coordinate data into the vectors using at()
            for (int i = 0; i < (int)r1.size(); ++i)
            {
                r1.at(i) = r;
            }
            vector<int> c1(5);
            for (int i = 0; i < (int)c1.size(); ++i)
            {
                c1.at(i) = c;
                c++;
            }
            //Aircraft Carrier
            Boat carrierBoat('h', 5, r1, c1, 0, "Aircraft Carrier");
            boatList.push_back(carrierBoat);
        }
        else if (d == 'v')
        {
            vector<int> r1(5);
            for (int i = 0; i < (int)r1.size(); ++i)
            {
                r1.at(i) = r;
                r++;
            }
            vector<int> c1(5);
            for (int i = 0; i < (int)c1.size(); ++i)
            {
                c1.at(i) = c;
            }
            //Aircraft Carrier
            Boat carrierBoat('v', 5, r1, c1, 0, "Aircraft Carrier");
            boatList.push_back(carrierBoat);
        }
        break;
    case 2:
        if (d == 'h')
        {
            vector<int> r1(4);
            for (int i = 0; i < (int)r1.size(); ++i)
            {
                r1.at(i) = r;
            }
            vector<int> c1(4);
            for (int i = 0; i < (int)c1.size(); ++i)
            {
                c1.at(i) = c;
                c++;
            }
            //Battleship 1
            Boat battleship1Boat('h', 4, r1, c1, 0, "Battleship 1");
            boatList.push_back(battleship1Boat);
        }
        else if (d == 'v')
        {
            vector<int> r1(4);
            for (int i = 0; i < (int)r1.size(); ++i)
            {
                r1.at(i) = r;
                r++;
            }
            vector<int> c1(4);
            for (int i = 0; i < (int)c1.size(); ++i)
            {
                c1.at(i) = c;
            }
            //Battleship 1
            Boat battleship1Boat('v', 4, r1, c1, 0, "Battleship 1");
            boatList.push_back(battleship1Boat);
        }
        break;
    case 3:
        if (d == 'h')
        {
            vector<int> r1(4);
            for (int i = 0; i < (int)r1.size(); ++i)
            {
                r1.at(i) = r;
            }
            vector<int> c1(4);
            for (int i = 0; i < (int)c1.size(); ++i)
            {
                c1.at(i) = c;
                c++;
            }
            //Battleship 2
            Boat battleship2Boat('h', 4, r1, c1, 0, "Battleship 2");
            boatList.push_back(battleship2Boat);
        }
        else if (d == 'v')
        {
            vector<int> r1(4);
            for (int i = 0; i < (int)r1.size(); ++i)
            {
                r1.at(i) = r;
                r++;
            }
            vector<int> c1(4);
            for (int i = 0; i < (int)c1.size(); ++i)
            {
                c1.at(i) = c;
            }
            //Battleship 2
            Boat battleship2Boat('v', 4, r1, c1, 0, "Battleship 2");
            boatList.push_back(battleship2Boat);
        }
        break;
    case 4:
        if (d == 'h')
        {
            vector<int> r1(3);
            for (int i = 0; i < (int)r1.size(); ++i)
            {
                r1.at(i) = r;
            }
            vector<int> c1(3);
            for (int i = 0; i < (int)c1.size(); ++i)
            {
                c1.at(i) = c;
                c++;
            }
            //Destroyer 1
            Boat destroyer1Boat('h', 3, r1, c1, 0, "Destroyer 1");
            boatList.push_back(destroyer1Boat);
        }
        else if (d == 'v')
        {
            vector<int> r1(3);
            for (int i = 0; i < (int)r1.size(); ++i)
            {
                r1.at(i) = r;
                r++;
            }
            vector<int> c1(3);
            for (int i = 0; i < (int)c1.size(); ++i)
            {
                c1.at(i) = c;
            }
            //Destroyer 1
            Boat destroyer1Boat('v', 3, r1, c1, 0, "Destroyer 1");
            boatList.push_back(destroyer1Boat);
        }
        break;
    case 5:
        if (d == 'h')
        {
            vector<int> r1(3);
            for (int i = 0; i < (int)r1.size(); ++i)
            {
                r1.at(i) = r;
            }
            vector<int> c1(3);
            for (int i = 0; i < (int)c1.size(); ++i)
            {
                c1.at(i) = c;
                c++;
            }
            //Destroyer 2
            Boat destroyer2Boat('h', 3, r1, c1, 0, "Destroyer 2");
            boatList.push_back(destroyer2Boat);
        }
        else if (d == 'v')
        {
            vector<int> r1(3);
            for (int i = 0; i < (int)r1.size(); ++i)
            {
                r1.at(i) = r;
                r++;
            }
            vector<int> c1(3);
            for (int i = 0; i < (int)c1.size(); ++i)
            {
                c1.at(i) = c;
            }
            //Destroyer 2
            Boat destroyer2Boat('v', 3, r1, c1, 0, "Destroyer 2");
            boatList.push_back(destroyer2Boat);
        }
        break;
    case 6:
        if (d == 'h')
        {
            vector<int> r1(3);
            for (int i = 0; i < (int)r1.size(); ++i)
            {
                r1.at(i) = r;
            }
            vector<int> c1(3);
            for (int i = 0; i < (int)c1.size(); ++i)
            {
                c1.at(i) = c;
                c++;
            }
            //Destroyer 3
            Boat destroyer3Boat('h', 3, r1, c1, 0, "Destroyer 3");
            boatList.push_back(destroyer3Boat);
        }
        else if (d == 'v')
        {
            vector<int> r1(3);
            for (int i = 0; i < (int)r1.size(); ++i)
            {
                r1.at(i) = r;
                r++;
            }
            vector<int> c1(3);
            for (int i = 0; i < (int)c1.size(); ++i)
            {
                c1.at(i) = c;
            }
            //Destroyer 3
            Boat destroyer3Boat('v', 3, r1, c1, 0, "Destroyer 3");
            boatList.push_back(destroyer3Boat);
        }
        break;
    case 7:
        if (d == 'h')
        {
            vector<int> r1(2);
            for (int i = 0; i < (int)r1.size(); ++i)
            {
                r1.at(i) = r;
            }
            vector<int> c1(2);
            for (int i = 0; i < (int)c1.size(); ++i)
            {
                c1.at(i) = c;
                c++;
            }
            //Submarine1
            Boat submarine1Boat('h', 2, r1, c1, 0, "Submarine 1");
            boatList.push_back(submarine1Boat);
        }
        else if (d == 'v')
        {
            vector<int> r1(2);
            for (int i = 0; i < (int)r1.size(); ++i)
            {
                r1.at(i) = r;
                r++;
            }
            vector<int> c1(2);
            for (int i = 0; i < (int)c1.size(); ++i)
            {
                c1.at(i) = c;
            }
            //Submarine 1
            Boat submarine1Boat('v', 2, r1, c1, 0, "Submarine 1");
            boatList.push_back(submarine1Boat);
        }
        break;
    case 8:
        if (d == 'h')
        {
            vector<int> r1(2);
            for (int i = 0; i < (int)r1.size(); ++i)
            {
                r1.at(i) = r;
            }
            vector<int> c1(2);
            for (int i = 0; i < (int)c1.size(); ++i)
            {
                c1.at(i) = c;
                c++;
            }
            //Submarine 2
            Boat submarine2Boat('h', 2, r1, c1, 0, "Submarine 2");
            boatList.push_back(submarine2Boat);
        }
        else if (d == 'v')
        {
            vector<int> r1(2);
            for (int i = 0; i < (int)r1.size(); ++i)
            {
                r1.at(i) = r;
                r++;
            }
            vector<int> c1(2);
            for (int i = 0; i < (int)c1.size(); ++i)
            {
                c1.at(i) = c;
            }
            //Submarine 2
            Boat submarine2Boat('v', 2, r1, c1, 0, "Submarine 2");
            boatList.push_back(submarine2Boat);
        }
        break;
    case 9:
        if (d == 'h')
        {
            vector<int> r1(2);
            for (int i = 0; i < (int)r1.size(); ++i)
            {
                r1.at(i) = r;
            }
            vector<int> c1(2);
            for (int i = 0; i < (int)c1.size(); ++i)
            {
                c1.at(i) = c;
                c++;
            }
            //Submarine 3
            Boat submarine3Boat('h', 2, r1, c1, 0, "Submarine 3");
            boatList.push_back(submarine3Boat);
        }
        else if (d == 'v')
        {
            vector<int> r1(2);
            for (int i = 0; i < (int)r1.size(); ++i)
            {
                r1.at(i) = r;
                r++;
            }
            vector<int> c1(2);
            for (int i = 0; i < (int)c1.size(); ++i)
            {
                c1.at(i) = c;
            }
            //Submarine 3
            Boat submarine3Boat('v', 2, r1, c1, 0, "Submarine 3");
            boatList.push_back(submarine3Boat);
        }
        break;
    case 10:
        if (d == 'h')
        {
            vector<int> r1(2);
            for (int i = 0; i < (int)r1.size(); ++i)
            {
                r1.at(i) = r;
            }
            vector<int> c1(2);
            for (int i = 0; i < (int)c1.size(); ++i)
            {
                c1.at(i) = c;
                c++;
            }
            //Submarine 4
            Boat submarine4Boat('h', 2, r1, c1, 0, "Submarine 4");
            boatList.push_back(submarine4Boat);
        }
        else if (d == 'v')
        {
            vector<int> r1(2);
            for (int i = 0; i < (int)r1.size(); ++i)
            {
                r1.at(i) = r;
                r++;
            }
            vector<int> c1(2);
            for (int i = 0; i < (int)c1.size(); ++i)
            {
                c1.at(i) = c;
            }
            //Submarine 4
            Boat submarine4Boat('v', 2, r1, c1, 0, "Submarine 4");
            boatList.push_back(submarine4Boat);
        }
        break;
    }
}

int playGame(int grid[][10], vector<Boat>& boatList)
{
    bool gameInProgress = true;
    int row = 0;
    int col = 0;
    int guess = 0;
    int hit = 0;
    int miss = 0;
    int space = 0;
    char d = 'g';
    string btname = "";
    int sunk = 0;

    while (gameInProgress)
    {
        printGameBoard(grid);
        //printBoard(grid);  //uncomment to see the game board with the boats on it
        cout << "Enter a row coordinate: ";
        cin >> row;
        cout << "Enter a column coordinate: ";
        cin >> col;
        cout << endl;
        guess++;
        space = getSpace(grid, row, col);

        switch (space)
        {
        case 0:
            cout << "You have missed" << endl;
            grid[row][col] = 9;
            miss++;
            break;
        case 1:
            cout << "This space has already been bombed.  You have wasted a guess!" << endl;
            break;
        case 2:
            grid[row][col] = 1;
            hit++;

            btname = boatList[6].getBoat(row, col);  //Check to see if boat is Submarine 1
            if (btname == "Submarine 1")
            {
                cout << "You have bombed " << btname << "!" << endl;
                boatList[6].setHit();
                sunk = boatList[6].checkSunk(Submarine);
                if (sunk == 9)
                {
                    cout << "You have sunk Submarine 1." << endl;
                }
            }
            else if (btname.empty())
            {
                btname = boatList[7].getBoat(row, col);  //Check to see if boat is Submarine 2
                if (btname == "Submarine 2")
                {
                    cout << "You have bombed " << btname << "!" << endl;
                    boatList[7].setHit();
                    sunk = boatList[7].checkSunk(Submarine);
                    if (sunk == 9)
                    {
                        cout << "You have sunk Submarine 2." << endl;
                    }
                }
                else if (btname.empty())
                {
                    btname = boatList[8].getBoat(row, col);  //Check to see if boat is Submarine 3
                    cout << "You have bombed " << btname << "!" << endl;
                    boatList[8].setHit();
                    sunk = boatList[8].checkSunk(Submarine);
                    if (sunk == 9)
                    {
                        cout << "You have sunk Submarine 3." << endl;
                    }
                }
                else if (btname.empty())
                {
                    btname = boatList[9].getBoat(row, col);  //Check to see if boat is Submarine 4
                    cout << "You have bombed " << btname << "!" << endl;
                    boatList[9].setHit();
                    sunk = boatList[9].checkSunk(Submarine);
                    if (sunk == 9)
                    {
                        cout << "You have sunk Submarine 4." << endl;
                    }
                }
            }
            btname.clear();
            break;
        case 3:
            grid[row][col] = 1;
            hit++;

            btname = boatList[3].getBoat(row, col);  //Check to see if boat is Destroyer 1
            if (btname == "Destroyer 1")
            {
                cout << "You have bombed " << btname << "!" << endl;
                boatList[3].setHit();
                sunk = boatList[3].checkSunk(Destroyer);
                if (sunk == 9)
                {
                    cout << "You have sunk Destroyer 1." << endl;
                }
            }
            else if (btname.empty())
            {
                btname = boatList[4].getBoat(row, col);  //Check to see if boat is Destroyer 2
                if (btname == "Destroyer 2")
                {
                    cout << "You have bombed " << btname << "!" << endl;
                    boatList[4].setHit();
                    sunk = boatList[4].checkSunk(Destroyer);
                    if (sunk == 9)
                    {
                        cout << "You have sunk Destroyer 2." << endl;
                    }
                }
                else if (btname.empty())
                {
                    btname = boatList[5].getBoat(row, col);  //Check to see if boat is Destroyer 3
                    cout << "You have bombed " << btname << "!" << endl;
                    boatList[5].setHit();
                    sunk = boatList[5].checkSunk(Destroyer);
                    cout << "sunk is " << sunk << endl;
                    if (sunk == 9)
                    {
                        cout << "You have sunk Destroyer 3." << endl;
                    }
                }
            }
            btname.clear();
            break;
        case 4:
            grid[row][col] = 1;
            hit++;

            btname = boatList[1].getBoat(row, col);  //Check to see if boat is Battleship 1
            if (btname == "Battleship 1")
            {
                cout << "You have bombed " << btname << "!" << endl;
                boatList[1].setHit();
                sunk = boatList[1].checkSunk(Battleship);
                if (sunk == 9)
                {
                    cout << "You have sunk Battleship 1." << endl;
                }
            }
            if (btname.empty())
            {
                btname = boatList[2].getBoat(row, col);  //Check to see if boat is Battleship 2
                cout << "You have bombed " << btname << "!" << endl;
                boatList[2].setHit();
                sunk = boatList[2].checkSunk(Battleship);
                if (sunk == 9)
                {
                    cout << "You have sunk Battleship 2." << endl;
                }
            }
            btname.clear();
            break;
        case 5:
            cout << "You have bombed the aircraft carrier! " << endl;
            grid[row][col] = 1;
            hit++;
            boatList[0].setHit();
            sunk = boatList[0].checkSunk(Carrier);
            if (sunk == 9)
            {
                cout << "You have sunk the aircraft carrier." << endl;
            }
            break;
        }//end of switch
        if (hit == 30)
        {
            gameInProgress = false;
        }
    }//end of while game is playing loop

    cout << "Thank you for playing!  You have sunk all my battleships in " << guess << " moves!" << endl;
    return 0;
}//end of playGame function

int getSpace(int grid[][10], int row, int col)
{
    int space = 0;
    space = grid[row][col];
    return space;
}


//#include <iostream>
//#include <conio.h>
//using namespace std;
//
//int slaam;
//
//int main() {
//
//	// Task 1
//
//	//if (0) cout << "ok1" << endl; else if (bool(0)) cout << "ok2" << endl; else cout << "neither first nor second." << endl;
//	
//
//	// Task 2
//
//	//switch (slaam){
//	//case 0:
//	//	cout << "ok1" << endl;
//	//case 1:
//	//	cout << "ok2" << endl;
//	//default:
//	//	break;
//	cout << 15 % 'r' << endl;
//}
//
