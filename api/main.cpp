#include <iostream>
#include <string>
#include "thetiki.h"
#include "theoritiki.h"
#include "ygeias.h"
#include "oikonomiko.h"
#include <fstream>
using namespace std;
int checker;
int main() {
    int choice;
    double mark1,mark2,mark3,mark4;
    string uni;
    cout << "ΚΑΤΕΥΘΗΝΣΗ:";
    cin>>choice;
    cout<<"ΜΑΘΗΜΑ 1 ΒΑΘΜΟΣ:";
    cin>>mark1;
    cout<<"ΜΑΘΗΜΑ 2 ΒΑΘΜΟΣ:";
    cin>>mark2;
    cout<<"ΜΑΘΗΜΑ 3 ΒΑΘΜΟΣ:";
    cin>>mark3;
    cout<<"ΜΑΘΗΜΑ 4 ΒΑΘΜΟΣ:";
    cin>>mark4;
    cout<<"\n"<<endl;
    if(choice==1){
        thetiki thet1 (mark1,mark2,mark3,mark4);//δημιουργώ αντικείμενα
        cout<<"ΜΕΣΟΣ ΟΡΟΣ:"<<thet1.getAvg()<<" ΜΟΡΙΑ";//μο

        /////////////////////////////////////////////////////////////////







    }else if (choice==2){
        ifstream f("theo.txt");

        if (!f.is_open()) {
            cout << "could not open file";
            return 1;
        }

        string name;
        int mark;
        int category;
        bool admitted = false;

        // Read school name and required mark for each school
        while (getline(f, name)) {
            f >> category;
            f >> mark;
            f.ignore(); // Ignore newline character after reading mark

            theoritiki theo1(mark1, mark2, mark3, mark4);
            //cout << "Μέσος όρος: " << theo1.getAvg() << " μορια" << endl;
            cout << "Σχολή:" << name << " Απαιτούμενα μορια:"<<mark;

            if (category == 1) {
                checker = theo1.cat1();
            } else if (category == 2) {
                checker = theo1.cat2();
            } else if (category == 3) {
                checker = theo1.cat3();
            } else if (category == 4) {
                checker = theo1.cat4();
            } else if (category == 5) {
                checker = theo1.cat5();
            } else if (category == 6) {
                checker = theo1.cat6();
            } else if (category == 7) {
                checker = theo1.cat7();
            } else {
                checker = theo1.getAvg();
            }
            cout<<"\nΜΟΡΙΑ:"<<checker;
            if (checker >= mark) {
                cout << "\x1b[32m" << "\nΕισάγεστε στη σχολή.\n" << "\x1b[0m" << std::endl;
                admitted = true;
            } else {
                cout << "\x1b[31m" << "\nΔεν εισάγεστε στη σχολή.\n" << "\x1b[0m" << std::endl;
            }
        }

        if (!admitted) {
            cout << "\x1b[31m" << "\nΔεν εισάγεστε σε καμια σχολή.\n" << "\x1b[0m" << std::endl;
        }

        f.close();










        ///////////////////////////////////////////////////////////////
    }else if(choice==3){
        ygeias yg1(mark1,mark2,mark3,mark4);//δημιουργώ αντικείμενο
        cout<<"ΜΕΣΟΣ ΟΡΟΣ:"<<yg1.getAvg()<<" ΜΟΡΙΑ";//μο

        ///////////////////////////////////////////////////////////////
    }else if(choice==4){
        oikonomiko oik1 (mark1,mark2,mark3,mark4);//δημιουργώ αντικείμενο
        cout<<"ΜΕΣΟΣ ΟΡΟΣ:"<<oik1.getAvg()<<" ΜΟΡΙΑ";//μο

    }else{
        cout<<"ΛΑΝΘΑΣΜΕΝΗ ΚΑΤΑΧΩΡΗΣΗ ΔΕΔΟΜΕΝΩΝ\n";
    }
}

