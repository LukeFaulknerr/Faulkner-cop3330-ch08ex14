/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Luke Faulkner
 */

#include <iostream>

void f(const int x);


using namespace std;

int main(){
    const int x = 2;
    
    f(x);
    return 0;
}

void f(const int x){
    cout << "The passed integer variable " << x << " cannot be modified if it is passed as a constant value.\n";
    cout << "You may want to pass constant variables if you want to make sure they cannot be modified, either within the function or through pointers.\n";
    cout << "There might not be a point to passing the variable in the first place, though, as you can just use it in the desired function by declaring it there.\n";
    cout << "However, if you want to be able to use the passed variable by changing it, it is best to pass a basic, modified form of it.\n";

    return;
}

