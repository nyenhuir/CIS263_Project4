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
#include <string>
#include <map>
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
double *maxarr;
string *maxNums;
maxarr = new double[numslots];
//Vector <string> color;
//string *nums= new string[numslots];
map <int,string> usedNum;

int j=0;

    for(i=0;i<=numslots;i++) {
        maxarr[i]=slotvals[i];
//        nums[i]+=""+to_string(i);
//        cout<<"nums["<<i<<"]="+nums[i]+"\n";
        usedNum[i]=to_string(i);
    }


//    for(i=0;i<numslots+1;i++)
//    cout<<"slotvals: " <<i<<"= "<<slotvals[i]<<"\n";

    for(i=1;i<=numslots;i++){
        for(j=1;j<i;j++){

//            cout<<"\ni: "<<i<<" j: "<<j<< " =";
//            cout<<i<<"<"<<i-j<<"+"<<i-(i-j);
            if(maxarr[i]<maxarr[i-j]+maxarr[i-(i-j)]){
//                cout<<"CHANGED";
                maxarr[i]=maxarr[i-j]+maxarr[i-(i-j)];

                    usedNum[i] = usedNum[i - j]+",";
                     usedNum[i] += usedNum[i - (i - j)];
//                    cout << " " + usedNum[i];

            }
//            if(maxarr[i]<maxarr[i-(i-j)]) maxarr[i]=maxarr[i-(i-j)];
//            cout<<slotvals[i]<<"<"<<slotvals[i-j]<<"+"<<slotvals[i-(i-j)];
//            cout<<"Maxval: "<<maxval<<" slotval[i]: "<<slotvals[i]<<" slotval[j]: "<<slotvals[j];

        }
    }
//    for(i=0;i<=numslots;i++) cout<<"Maxarray["<<i<<"]="<<maxarr[i]<<"\n";
//    cout<<"Maxval: "<<maxarr[numslots]<<", "+usedNum[numslots];

    cout<<"From input file: "<<numslots<<" slots: ";
    for(i=1;i<numslots;i++) cout<<slotvals[i]<<", ";
    cout<<slotvals[numslots]<<"\nThe optimal set of bids is worth $"<<maxarr[numslots]<<".\n";
    cout<<"Lengths: "<<usedNum[numslots];
    return 0;
}