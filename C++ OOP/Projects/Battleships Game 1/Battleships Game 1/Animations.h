#pragma once


char* destroyera = new char[] {
    R"(
	                                  |    |    |
                                         )_)  )_)  )_)
                                        )___))___))___)\
                                       )____)____)_____)\\
                                     _____|____|____|____\\\__
                            ---------\                   /---------
                              ^^^^^ ^^^^^^^^^^^^^^^^^^^^^
                                ^^^^      ^^^^     ^^^    ^^
                                     ^^^^      ^^^
	)"
};

char* submarinea = new char[] {
    R"(
                                    __    __    __
                                    |==|  |==|  |==|
                                    __|__|__|__|__|__|_
                                __|___________________|___
                            __|__[]__[]__[]__[]__[]__[]__|___
                            |............................o.../
                            \.............................../
                        ,~')_,~')_,~')_,~')_,~')_,~')_,~')/,~')_
    )"
};

char* battleshipa = new char[] {
    R"(
                                                # #  ( )
                                            ___#_#___|__
                                        _  |____________|  _
                                _=====| | |            | | |==== _
                            =====| |.---------------------------. | |====
            <--------------------'   .  .  .  .  .  .  .  .   '--------------/
                \                                                             /
                \_______________________________________________WWS_________/
            wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww
        wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww
            wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww
    )"
};

void animations() {



    for (int j = 1; j < 100; j++) {
        if (_kbhit()) {
            _getch();
            return;
        }
        color(j % 14);
        for (int i = 0; destroyera[i] != '\0'; i++) cout << destroyera[i];
        delay(0.05);
        system("cls");
        gotoXy(45, 15);
        cout << "[" << j << "%]";
        gotoXy(0, 0);
        color(j % 14 + 1);
        for (int i = 0; submarinea[i] != '\0'; i++) cout << submarinea[i];
        delay(0.05);
        system("cls");
        gotoXy(45, 15);
        cout << "[" << j << "%]";
        gotoXy(0, 0);
        color(j % 14 + 2);
        for (int i = 0; battleshipa[i] != '\0'; i++) cout << battleshipa[i];
        delay(0.05);
        gotoXy(45, 15);
        cout << "[" << j << "%]";
        gotoXy(0, 0);
        system("cls");
    }
}

void help() {
    color(10);
    char* helpLabel = new char[] {
        R"(
Battle Ship is Originally a Table Game Designed to be Played with 2 Player. This Version of Battle Ship Designed to play with AI.
In Battle Ship Game You Must Leave a Gap among the fleets (ships). You Have 4 Types of Ships and Totally 10 ships. You can change 
Bot Level from Settings to play. You Can Play Game with ARROW KEYS and Enter. You may Find Useful Settings such as <Player Asist>
mode. You can Set your Area Manual or Random on the Player's Behalf. Game is < Color - Coded > so Here is the Meaning of them :


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
						
Alert Sound - Indicates that the process that you want is unacceptable.
'H' (Hit)  -  Indicates the cordination you have guessed posseses a ship body part.
'M' (Miss) -  Indicates the cordination you have guessed doesn't posseses a ship.
'M' (Miss last) - Indicates the cordination you have guessed missed by you last guess.
'~' (Destroyed Ship) - Indicates that the ship's all body parts have been destroyed.
'*' (Guess) - Indicates player's current cursor position.
'.' (Assist) - Indicates that you can't guess cordination due to game's logic.
'.' '~' 'H' 'M' (Cursor In) - Indicates that player's guess Collapse

					                                                 by Abbas and KesireXanim Xanim
)"
    };
    for (int i = 0; helpLabel[i] != '\0'; i++) {
        if (helpLabel[i] == '\'' && helpLabel[i + 1] == '.' && helpLabel[i + 2] == '\'' && helpLabel[i + 4] == '\'') color(notField);
        else if (helpLabel[i] == '\'' && helpLabel[i + 1] == 'H' && helpLabel[i + 2] == '\'' && helpLabel[i + 4] != '\'') color(hitCol);
        else if (helpLabel[i] == '\'' && helpLabel[i + 1] == 'M' && helpLabel[i + 2] == '\'' && helpLabel[i + 10] == 'l') color(notField);
        else if (helpLabel[i] == '\'' && helpLabel[i + 1] == 'M' && helpLabel[i + 2] == '\'' && helpLabel[i + 5] != 'C') color(missC);
        else if (helpLabel[i] == '\'' && helpLabel[i + 1] == '~' && helpLabel[i + 2] == '\'' && helpLabel[i + 4] != '\'') color(vanished);
        else if (helpLabel[i] == '\'' && helpLabel[i + 1] == '*' && helpLabel[i + 2] == '\'') color(curColor);
        else if (helpLabel[i] == '\'' && helpLabel[i + 1] == '.' && helpLabel[i + 2] == '\'') color(notField);
        cout << helpLabel[i];
        delay(0.05);
        if (helpLabel[i] == '\n') color(10);
        if (_kbhit()) {
            _getch();
            while (helpLabel[i] != '\n') cout << helpLabel[i++];
            cout << endl;
        }
    }
    system("pause");
}