/*****************************************************************
 * Reuben Nyenhuis
 * CIS263 Project 4 (Option 1)
 * In-memory Document Database with AVL Trees
 * Date: 6/19/19
 *
 * This code allows the user to create message "documents" that are
 * made up of a message id, a message password, a text based message
 * to be stored, and a number of invalid password attempts allowed.
 * The documents are then stored in an AVL tree based on the id.
 * The user can than request to view a message by entering the
 * identification along with the password. If the correct password
 * is given, the message is displayed and the message "document" is
 * removed from the AVL Tree database. If the password is incorrect,
 * the user is allowed to re-enter the password for the user-specified
 * number of times, after which if the password is still incorrect,
 * the "document" is also removed from the database.
 ******************************************************************/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
string inputline="",firstline="",secondline="",numstr="";
int i=0,slot=0,numslots=0;
double *slotvals;

int count=0;

ifstream myfile("input.txt");
if(myfile.is_open()){
    while(getline(myfile,inputline)){
        count++;
        if(count==1){
            firstline=inputline;
            numslots = stoi(inputline);
            slotvals = new double[numslots+1];
            for(i=0;i<numslots;i++) slotvals[i]=0;

        }
        if(count==2){
            secondline=inputline;
            for(i=0;i<secondline.length();i++){
                if(secondline.at(i)==' '){
                    slot++;
                    slotvals[slot]=stod(numstr);
                    numstr = "";
                }
                else {
                    numstr+=secondline.at(i);
                }
            }
        }
    }
    slot++;
    slotvals[slot]=stod(numstr);
    myfile.close();
}
else{
    cout<<"Unable to open file.\n";
}

double maxval=0;
double *test;
int remaining=0,j=0;

    test = new double[numslots];
    for(i=0;i<numslots;i++) test[i]=0;

    maxval = slotvals[numslots];
    cout<<"slotvals: " <<slotvals[0]<<","<<slotvals[1]<<","<<slotvals[2]<<","<<slotvals[3];
    for(i=1;i<=numslots;i++){
        for(j=1;j<=i;j++){
            cout<<"\ni: "<<i<<" j: "<<j<< " =";
            cout<<"Maxval: "<<maxval<<" slotval[i]: "<<slotvals[i]<<" slotval[j]: "<<slotvals[j];
            if((slotvals[i]+slotvals[j])>maxval&&((i+j)<=numslots)){
                maxval = slotvals[i]+slotvals[j];
                cout<<"maxvelafter: "<<maxval;
            }

        }
    }
    cout<<"Maxval: "<<maxval;
    return 0;
}