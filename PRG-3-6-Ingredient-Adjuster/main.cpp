//
//  main.cpp
//  PRG-3-6-Ingredient-Adjuster
//
//  Created by Keith Smith on 10/6/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  A cookie recipe calls for the following ingredients:
//  * 1.5 cups of sugar
//  * 1 cup of butter
//  * 2.75 cups of flour
//
//  The recipe produces 48 cookies with this amount of ingredients. Write a program
//  that asks the user how many cookies he or she wants to make, then displays the number
//  of cups of each ingredient needed for the specified number of cookies.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    
    // Generate float constants for given ratio
    const float FLT_CUPS_SUGAR_FIXED = 1.5f,
                FLT_CUPS_BUTTER_FIXED = 1.0f,
                FLT_CUPS_FLOUR_FIXED = 2.75f;
    
    // Declare floats for adjusted ingredient totals
    float fltCupsSugarAdjusted,
          fltCupsButterAdjusted,
          fltCupsFlourAdjusted,
    
    // Declare floats for ratio calculation
          fltCupsSugarRatio,
          fltCupsButterRatio,
          fltCupsFlourRatio;
    
    // Generate constant int for ratio calculation
    const int INT_COOKIE_TOTAL_FIXED = 48;
    
    // Declare ints for initial cookies given and for user input
    int intCookieTotalAdjusted;
    
    // Calculate ratios for later use
    fltCupsSugarRatio = FLT_CUPS_SUGAR_FIXED / INT_COOKIE_TOTAL_FIXED;
    fltCupsButterRatio = FLT_CUPS_BUTTER_FIXED / INT_COOKIE_TOTAL_FIXED;
    fltCupsFlourRatio = FLT_CUPS_FLOUR_FIXED / INT_COOKIE_TOTAL_FIXED;
    
    // Configure decimal for one point of precision
    cout << setprecision(1) << fixed << showpoint;
    
    // Request total cookies desired from user + data validation
    cout << "Please enter the total number of cookies you would like: ";
    cin >> intCookieTotalAdjusted;
    while(!cin || intCookieTotalAdjusted < 0 || intCookieTotalAdjusted > 1000)
    {
        cout << "Please enter a number between 0 and 1,000 cookies:\n";
        cin.clear();
        cin.ignore();
        cin >> intCookieTotalAdjusted;
    }
    
    // Calculate adjusted ingredients
    fltCupsSugarAdjusted = intCookieTotalAdjusted * fltCupsSugarRatio;
    fltCupsButterAdjusted = intCookieTotalAdjusted * fltCupsButterRatio;
    fltCupsFlourAdjusted = intCookieTotalAdjusted * fltCupsFlourRatio;
    
    // Provide user with adjusted ingredients
    cout << "You will need: " << endl;
    cout << fltCupsSugarAdjusted << " cups of sugar" << endl;
    cout << fltCupsButterAdjusted << " cups of butter" << endl;
    cout << fltCupsFlourAdjusted << " cups of flour" << endl;
    
    return 0;
}





