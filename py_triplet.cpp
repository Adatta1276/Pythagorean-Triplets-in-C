#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    double num1,num2,num3,opChoice,startNum,result;

    cout<<"Operations : 1. Check if three numbers form a Pythagorean triplet. \n 2. Enter a number and find a Pythagorean triplet starting with it. \n\n";
    cout<<"Enter the operation you want to perform (1 for the first, 2 for the second) : \n";
    cin>>opChoice;

    if(opChoice == 1) {
        cout<<"Enter the first number : \n";
        cin>>num1;

        cout<<"Enter the second number : \n";
        cin>>num2;

        cout<<"Enter the third number : \n";
        cin>>num3;

        if((num1*num1) + (num2*num2) == (num3*num3)) {

            cout<<"Yay! The numbers "<<num1<<","<<num2<<","<<num3<<" do form a Pythagorean triplet! \n";
        }

        else {

            cout<<"Hmm. Those numbers don't fall in a Pythagorean triplet. \n";
        }



    }

    else {

        cout<<"Enter the first number of the Pythagorean triplet : \n";
        cin>>num1;

        cout<<"A Pythagorean triplet with "<<num1<<" as its first number is "<<num1<<","<<((num1/2)*(num1/2)-1)<<","<<((num1/2)*(num1/2)+1);


    }


}