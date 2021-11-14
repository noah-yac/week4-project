/*
Noah Yacoub
11/14/2021
ITCS 2530
Week 4 - Project

Objective: Make program that inputs a text file and counts vowels and lists them properly.

Requirements:
    - User must specify the name of the file (from the command line) to analyze when the program is run. If not an error should be generated.
    - Use constants where appropriate.
    - Use I/O (stream) manipulators to format the output so that it is identical to the example below
    - Pass the name of the file to read in from the command line.
    - Add support for extra 3 non-vowel leters for github
*/

#include <iostream>
//adds format manipulators
#include <iomanip>
//includes to_string()
#include <string>
//allows for transforming strings to uppercase easily
#include <algorithm>
//allows input file
#include <fstream>
using namespace std;
 
//Argc is ARGument Count and and argv is ARGument Vector (array of strings (char* means string)).
//counts commands arguement inputs, captures commands arguements input
int main(int argc, char* argv[])
{
    //printf("argc = %d\n", argc);
    //printf("Our argv\n");
    /*
    for (int i = 0; i < argc; i++)
    {
        //1 argc //argv[0] = C:\Users\user\source\repos\Week 4 - Project\Debug>"Week 4 - Project.exe"
        //2 argc //argv[1] = Constitution_of_the_United_States.html
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    */

    if (argc < 2) //arguement count check
    {
        cout << "Error with input agrs.." << endl;
        return 0;
    }
    
    //variables
    string title = " Welcome to my ITCS 2530 vowel counting program ";
    char char1 = '*';
    char char2 = '.';
    double linelength = 50;
    char x;
    int a = 0;
    int e = 0;
    int ix = 0;
    int o = 0;
    int u = 0;
    int xx = 0;
    int y = 0;
    int z = 0;

    //open our file and make sure it is a file arguement
    ifstream inputFile;
    inputFile.open(argv[1]);
    if (!inputFile) //file check
    {
        cout << "Error with wrong file name!" << endl;
        return 0;
    }
    
    //line one (stream manipulator dependant)
    cout << setfill(char1) << left << setw(linelength);
    cout << char1 << '\n';
    //line two
    cout << title;

    //line three (stream manipulator dependant)
    cout << setfill(char1) << left << setw(linelength) << endl;
    cout << char1 << '\n' << '\n';

    //output technical details
    cout << "Analyzing " << argv[1] << " ...\n" << endl;

    //while inputFile has not reached end of file
    while (!inputFile.eof())
    {
        inputFile.get(x);
        if (x == 'a' || x == 'A')
        {
            a++;
        }
        else if (x == 'e' || x == 'E')
        {
            e++;
        }
        else if (x == 'i' || x == 'I')
        {
            ix++;
        }
        else if (x == 'o' || x == 'O')
        {
            o++;
        }
        else if (x == 'u' || x == 'U')
        {
            u++;
        }
        else if (x == 'x' || x == 'X')
        {
            xx++;
        }
        else if (x == 'y' || x == 'Y')
        {
            y++;
        }
        else if (x == 'z' || x == 'Z')
        {
            z++;
        }
    }

    //output statements
    cout << setfill(char2) << setw(linelength-4) << left << "A count : "  << right << a << '\n';
    cout << setfill(char2) << setw(linelength - 4) << left << "E count : "  << right << e << '\n';
    cout << setfill(char2) << setw(linelength - 4) << left << "I count : " << right << ix << '\n';
    cout << setfill(char2) << setw(linelength - 4) << left << "O count : " << right << o << '\n';
    cout << setfill(char2) << setw(linelength - 4) << left << "U count : " << right << u << '\n';
    cout << setfill(char2) << setw(linelength - 4) << left << "X count : " << right << xx << '\n';
    cout << setfill(char2) << setw(linelength - 4) << left << "Y count : " << right << y << '\n';
    cout << setfill(char2) << setw(linelength - 4) << left << "Z count : " << right << z << '\n';

    
    //declare new variable that adds everything together
    int totalvowelcount = a + e + ix + o + u;
    cout << setfill(char2) << setw(linelength - 4) << left << "Total vowel count : " << right << totalvowelcount << '\n';
    int totalvowelcount2 = a + e + ix + o + u + xx + y +z;
    cout << setfill(char2) << setw(linelength - 4) << left << "Total vowel count with extra 3 letters incl : " << right << totalvowelcount2 << '\n';

    // close inputFile, and program
    inputFile.close();
    return 0;
}

/*
removed code:
I already saved after deleted them,
forgot to add them this time,
all that was removed was different output statements and incorrect while conditions.
*/