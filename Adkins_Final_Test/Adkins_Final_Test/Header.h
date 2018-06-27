#pragma once
// Including standard libraries
#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <cstdlib>
#include <ctime>

// Including std namespace
using namespace std;

// Declaring functions
void instructions(string& rUserName);
void userInput(string& rUserName, char& rChoice, char& rDare);
void gameLoop(string& rUserName, char& rChoice, char& rDare);
void noDare();
void yesDare(string& rUserName, char& rChoice, char& rDare);
int numberGuess(string& rUserName, char& rChoice, char& rDare);
int initResult(string& rUserName, char& rChoice, char& rDare);
void doorEntry(string& rUserName, char& rChoice, char& rDare);

// Door Results
void extEasy(string& rUserName, char& rChoice, char& rDare);
void modEasy(string& rUserName, char& rChoice, char& rDare);
void modDifficult(string& rUserName, char& rChoice, char& rDare);
void extDifficult(string& rUserName, char& rChoice, char& rDare);

// Enemies
void enemies();
void boss();

// Pointer
void backPicture(); 
