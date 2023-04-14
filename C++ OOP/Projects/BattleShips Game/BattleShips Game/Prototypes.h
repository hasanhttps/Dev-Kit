#pragma once


void logo();
inline void color();
void gotoXy();
void menu(int*);
void area();
void settings();
void printArea(char**);
void printChoose(char**, char**);
void fillChoose(char**&);
void fillRand(char**&);
void fillManual(char**&);
void showChange(char**&, int);
void guessCoord(char**&, char**&);
void HardBotHit(char**&);
void normalBotHit(char**&);
void easyBotHit(char**&);
void win();
void delay(float);
bool check(char, int, char**);
bool checkSub(char, int, char**);
bool checkRotateS(char, int, char**);
bool checkBShip(char, int, char**);
bool checkRotateB(char, int, char**);
bool checkC(char, int, char**);
bool checkRotateC(char, int, char**);