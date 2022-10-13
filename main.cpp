/*
PIC 10A Homework 2, num2month.cpp
Author: Moris Gomez
UID: 705089833
Discussion Section: 5B
Date: 10/14/2022
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "enter a number (1 - 12): ";
    int userInput; 
    cin >> userInput; 
    string month1 = "January  "; // 1 = (0, 9) + 9
    string month2 = "February "; // 2 = (9, 9) + 9
    string month3 = "March    "; // 3 = (18, 9) + 9
    string month4 = "April    "; // 4 = (27, 9) + 9
    string month5 = "May      "; // 5 = (36, 9) + 9
    string month6 = "June     "; // 6 = (45, 9) + 9
    string month7 = "July     "; // 7 = (63, 9) + 9
    string month8 = "August   "; // 8 = (72, 9) + 9
    string month9 = "September"; // 9 = (81, 9) + 9
    string month10 = "October  "; // 10 = (90, 9) + 9
    string month11 = "November "; // 11 = (99, 9) + 9
    string month12 = "December "; // 12 = (106, 9) + 9
    string giantString = month1 + month2 + month3 + month4 + month5 + month6 + month7 + month8 + month9 + month10 + month11 + month12;
    //line 28 uses concatenation and prints: "January  February March    April    May      June     July     August   SeptemberOctober  November December"
    int n = (userInput - 1) * 9; 
    //line 30: whatever value user submits, we can subtract 1 and multiply by 9 to get the starting index for the substr function.
    string actualMonth = giantString.substr(n, 9); //(start index, length of the substring)
    cout << "Month: " << actualMonth;
    return 0;
}
