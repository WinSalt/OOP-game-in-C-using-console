#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <cstdlib>
#include <list>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
//#include <conio.h>
#include <sstream>
using namespace std;

#define UMIEJETNOSC_AKTYWNA 5 //tury
#define UMIEJETNOSC_ODNAWIANA 5 //tury
#define SZANSA_NA_ROZSIEW 10 //szansa na 100 %
#define ILOSC_GATUNKOW_BEZ_CZLOWIEKA 10
#define CZLOWIEK 'H'
#define WILK 'W'
#define OWCA 'O'
#define LIS 'L'
#define ZOLW 'Z'
#define ANTYLOPA 'A'

#define TRAWA '_'
#define MLECZ 'M' 
#define GUARANA 'G'
#define WILCZEJAGODY 'J' 
#define BARSZCZ 'B'
			
#define KEY_UP 87
#define KEY_DOWN 83
#define KEY_LEFT 65
#define KEY_RIGHT 68
#define ENTER 13
#define ESC 69
#define TAB 84

enum DIRECTION {
	UP,
	DOWN,
	LEFT,
	RIGHT,
	NO_CHANGE
};

struct COORDINATES {
	int x;
	int y;
};

class Swiat;



