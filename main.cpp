#include <iostream>
#include "tree.h"

void menu() {
//      system("cls");
    cout<<"==========================================================="<<endl;
    cout<<"\t\tPractica Operaciones"<<endl;
    cout<<"==========================================================="<<endl;

      //char* str="7/4*((a+b)*a)+3";
      //char* str="7/4*((a+-+--b)*a)+3";
      //char* str="2+(3)";
    char* str="+";
    BTree t(str);
    t.root->insertLeft("*");
    t.root->insertRight("3");
    t.root->childLeft->insertLeft("+");
    t.root->childLeft->insertRight("^");
    t.root->childLeft->childLeft->insertLeft("3");
    t.root->childLeft->childLeft->insertRight("*");
    t.root->childLeft->childLeft->childRight->insertLeft(".5");
    t.root->childLeft->childLeft->childRight->insertRight("4");
    t.root->childLeft->childRight->insertLeft("2");
    t.root->childLeft->childRight->insertRight("5");
    // t.construct();
    cout<<t.operate();
}

int main(int argc, char const *argv[]) {
    menu();

    cout << "\nPress enter to continue ..."; 
    cin.get(); 
    return EXIT_SUCCESS;
}

