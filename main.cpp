// HOMEWORK_17_11_2025.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Wallet.h"
#include "Moyennedepaiement.h"
#include "CarteBancaire.h"
#include "ComptePaypal.h"
#include "PortfeuilleCrypto.h"
#include "Personne.h"
#include "Utilisateur.h"
#include "Compte.h"
#include "CompteCourant.h"
#include"CompteEpargne.h"

int main() {

   

 



/*
    CarteBancaire* CB1 = new CarteBancaire("RIDA ZAOUEK", "CARTE BANCAIRE", 5000.00);
    CB1->afficher();
    CB1->payer();
    CB1->afficher();

    CarteBancaire* CB2 = new CarteBancaire("CHAIMAA ZAOUEK", "CARTE BANCAIRE", 3000.00);
    CB2->afficher();
    CB2->payer();
    CB2->afficher();

    CarteBancaire* CB3 = new CarteBancaire("ABDLEKARIM ZAOUEK", "CARTE BANCAIRE", 3000.00);
    CB3->afficher();
    CB3->payer();
    CB3->afficher();

    CarteBancaire* CB4 = new CarteBancaire("IMRANE ZAOUEK", "CARTE BANCAIRE", 3000.00);
    CB4->afficher();
    CB4->payer();
    CB4->afficher();

    CarteBancaire* CB5 = new CarteBancaire("ADNANE ZAOUEK", "CARTE BANCAIRE", 3000.00);
    CB5->afficher();
    CB5->payer();
    CB5->afficher();

    CarteBancaire* CB6 = new CarteBancaire("OMAR ZAOUEK", "CARTE BANCAIRE", 3000.00);
    CB6->afficher();
    CB6->payer();
    CB6->afficher();

    CarteBancaire* CB7 = new CarteBancaire("MEHDI ZAOUEK", "CARTE BANCAIRE", 3000.00);
    CB7->afficher();
    CB7->payer();
    CB7->afficher();

    CarteBancaire* CB8 = new CarteBancaire("DOHA ZAOUEK", "CARTE BANCAIRE", 3000.00);
    CB8->afficher();
    CB8->payer();
    CB8->afficher();

    CarteBancaire* CB9 = new CarteBancaire("HOUDA ZAOUEK", "CARTE BANCAIRE", 3000.00);
    CB9->afficher();
    CB9->payer();
    CB9->afficher();

    CarteBancaire* CB10 = new CarteBancaire("HIBA ZAOUEK", "CARTE BANCAIRE", 3000.00);
    CB10->afficher();
    CB10->payer();
    CB10->afficher();

    delete CB1;
    delete CB2;
    delete CB3;
    delete CB4;
    delete CB5;
    delete CB6;
    delete CB7;
    delete CB8;
    delete CB9;
    delete CB10;
*/



    /*

    ComptePaypal* CP1 = new ComptePaypal(1000.00, "RIDA ZAOUEK", "ComptePaypal","zaouekreda04@gmail.com");
    CP1->afficher();
    CP1->recharger_solde();
    CP1->afficher();
    CP1->payer();
    CP1->afficher();

    ComptePaypal* CP2 = new ComptePaypal(2000.00,"IMRANE ZAOUEK", "ComptePaypal",  "zaouekimrane04@gmail.com");
    CP2->afficher();
    CP2->recharger_solde();
    CP2->afficher();
    CP2->payer();
    CP2->afficher();

    ComptePaypal* CP3 = new ComptePaypal(3000.00, "ADNANE ZAOUEK", "ComptePaypal",  "zaouekadnane04@gmail.com");
    CP3->afficher();
    CP3->recharger_solde();
    CP3->afficher();
    CP3->payer();
    CP3->afficher();

    ComptePaypal* CP4 = new ComptePaypal(4000.00, "CHAIMAE ZAOUEK", "ComptePaypal",  "zaouekchaimaa04@gmail.com");
    CP4->afficher();
    CP4->recharger_solde();
    CP4->afficher();
    CP4->payer();
    CP4->afficher();

    delete CP1,CP2, CP3, CP4;



    PortfeuilleCrypto* PC1 = new PortfeuilleCrypto(7000.56, "MUSTAPHA ZAOUEK","PortfeuilleCrypto", "zaouekchaimaa04@gmail.com", "gdteuye47");
    PC1->afficher();
    PC1->payer();
    PC1->afficher();
    PC1->recharger_solde();
    PC1->afficher();

    PortfeuilleCrypto* PC2 = new PortfeuilleCrypto(8000.56, "HOUSSINE ZAOUEK","PortfeuilleCrypto", "zaouekchaimaa04@gmail.com", "uehd145");
    PC2->afficher();
    PC2->payer();
    PC2->afficher();
    PC2->recharger_solde();
    PC2->afficher();

    PortfeuilleCrypto* PC3 = new PortfeuilleCrypto(8700.56, "HASSAN ZAOUEK", "PortfeuilleCrypto", "zaouekhassan04@gmail.com", "ikjqo7210");
    PC3->afficher();
    PC3->payer();
    PC3->afficher();
    PC3->recharger_solde();
    PC3->afficher();

    PortfeuilleCrypto* PC4 = new PortfeuilleCrypto(8500.56, "ABDLHAK ZAOUEK","PortfeuilleCrypto", "zaouekabdlhak04@gmail.com","gzt1547");
    PC4->afficher();
    PC4->payer();
    PC4->afficher();
    PC4->recharger_solde();
    PC4->afficher();

    PortfeuilleCrypto* PC5 = new PortfeuilleCrypto(8000.56, "GHIZLAN ZAOUEK","PortfeuilleCrypto", "zaouekghizlan04@gmail.com","abc123");
    PC5->afficher();
    PC5->payer();
    PC5->afficher();
    PC5->recharger_solde();
    PC5->afficher();

    PortfeuilleCrypto* PC6 = new PortfeuilleCrypto(8000.56, "RACHID ZAOUEK","PortfeuilleCrypto", "zaouekrachid04@gmail.com", "def123");
    PC6->afficher();
    PC6->payer();
    PC6->afficher();
    PC6->recharger_solde();
    PC6->afficher();

    PortfeuilleCrypto* PC7 = new PortfeuilleCrypto(8000.56, "ADAM ZAOUEK","PortfeuilleCrypto", "zaouekadam04@gmail.com", "ccv124");
    PC7->afficher();
    PC7->payer();
    PC7->afficher();
    PC7->recharger_solde();
    PC7->afficher();

    PortfeuilleCrypto* PC8 = new PortfeuilleCrypto(8000.56, "SIMOHAMMED ZAOUEK","PortfeuilleCrypto", "zaoueksimohammed04@gmail.com", "nbyu125");
    PC8->afficher();
    PC8->payer();
    PC8->afficher();
    PC8->recharger_solde();
    PC8->afficher();

    PortfeuilleCrypto* PC9 = new PortfeuilleCrypto(8000.56, "NAJAT ZAOUEK","PortfeuilleCrypto", "zaoueknajat04@gmail.com", "jhol154");
    PC9->afficher();
    PC9->payer();
    PC9->afficher();
    PC9->recharger_solde();
    PC9->afficher();

    PortfeuilleCrypto* PC10 = new PortfeuilleCrypto(8000.56, "KAMAL ZAOUEK","PortfeuilleCrypto", "zaouekkamal04@gmail.com", "plfo985");
    PC10->afficher();
    PC10->payer();
    PC10->afficher();
    PC10->recharger_solde();
    PC10->afficher();

    delete PC1;
    delete PC2;
    delete PC3;
    delete PC4;
    delete PC5;
    delete PC6;
    delete PC7;
    delete PC8;
    delete PC9;
    delete PC10;*/


Compte* c1 = new CompteCourant("dirham", 4000.50, 2000.00, "RIDA ZAOUEK", "CARTEVISA", 3000.50);
cout << endl << "CREDITER DU COMPTE COURANT" << endl;
c1->crediter(1000.50);
cout << endl << "DEBITER DU COMPTE COURANT" << endl;
c1->debiter(2500.10);
cout << endl;
c1->afficher();
cout << endl;
Compte* c2 = new CompteCourant("dirham", 2000.40, 3000.50, "HIBA ZAOUEK", "CARTEVISA", 4000.50);
cout << endl << "CREDITER DU COMPTE COURANT" << endl;
c2->crediter(1000.50);
cout << endl;
cout << endl << "DEBITER DU COMPTE COURANT" << endl;
cout << endl;
c2->debiter(2500.10);
cout << endl;
c2->afficher();
cout << endl;
Compte* c3 = new CompteEpargne("dirham", 950.99, 1000.50, "RIDA ZAOUEK", "CARTEVISA", 1500.50);
cout << endl << "CREDITER DU COMPTE COURANT" << endl;
c3->crediter(1000.50);
cout << endl;
cout << endl << "DEBITER DU COMPTE COURANT" << endl;
cout << endl;
c3->debiter(500.10);
cout << endl;
c3->afficher();
cout << endl;

Wallet* w1=new Wallet(3,0);
cout << endl;
Moyennedepaiement* CB1 = new CarteBancaire("RIDA ZAOUEK", "CARTEVISA", 4500.00);
//CB1->payer();
cout << endl<<"L 'AFFICHAGE DE Moyennedepaiement" << endl;
CB1->afficher();
cout << endl;
w1->add_moy_paiement(CB1);
cout <<endl<< "L 'AFFICHAGE DE WALLET 1 APRES ADD" << endl;
cout << endl;
w1->afficher();
cout << endl;
Moyennedepaiement* CP2 = new ComptePaypal(4000.00, "CHAIMAE ZAOUEK", "ComptePaypal", "zaouekchaimaa04@gmail.com");
//CP2->payer();
cout << endl << "L 'AFFICHAGE DE Moyennedepaiement" << endl;
cout << endl;
CP2->afficher();
cout << endl;
w1->add_moy_paiement(CP2);
cout << endl;
cout <<endl<< "L 'AFFICHAGE DE WALLET 1 APRES ADD" << endl;
w1->afficher();
cout << endl;
Moyennedepaiement* PC5 = new PortfeuilleCrypto(8000.56, "KAMAL ZAOUEK", "PortfeuilleCrypto", "zaouekkamal04@gmail.com", "plfo985");
//PC5->payer();
cout << endl << "L 'AFFICHAGE DE Moyennedepaiement" << endl;
PC5->afficher();
cout << endl;
w1->add_moy_paiement(PC5);
cout <<endl<< "L 'AFFICHAGE DE WALLET 1 APRES ADD" << endl;
w1->afficher();
cout << endl;
Moyennedepaiement* PC6 = new PortfeuilleCrypto(1475.19, "NAJAT ZAOUEK", "PortfeuilleCrypto", "zaoueknajat04@gmail.com", "jhol154");
//PC6->payer();
cout << endl << "L 'AFFICHAGE DE Moyennedepaiement" << endl;
PC6->afficher();
cout << endl;
w1->add_moy_paiement(PC6);
cout <<endl<< "L 'AFFICHAGE DE WALLET 1 APRES ADD" << endl;
w1->afficher();
cout << endl;
Wallet* w2 = new Wallet(1, 0);
w2->add_moy_paiement(CB1);
cout << endl << "L 'AFFICHAGE DE WALLET 2  APRES ADD" << endl;
w2->afficher();
cout << endl;
Utilisateur* u1 = new Utilisateur("RIDA ", " ZAOUEK", "BA26577","0606288899","hay mohammadi rue 4 appartement 10", "reda@gmail.com", 4, 0,w2);
u1->add_account(c1);
u1->add_account(c3);
cout <<endl<< "L 'AFFICHAGE DE L'UTILISATEUR" << endl;
u1->afficher();
cout << endl;
cout << endl;
cout << endl;

cout << endl << "LA SUPPRESSION D'UN COMPTE" << endl;
u1->delete_account(1);
cout << endl;
cout << endl;
cout << endl << "L'AFFICHAGE DES COMPTES APRES LA SUPPRESSION " << endl;
cout << endl;
u1->afficher();
cout << endl;
cout << endl;

cout << endl << "CHERCHER UN ACCOUNT " << endl;
cout << endl;
u1->search_account(3)->afficher();
cout << endl;
cout << endl;

Wallet* w3 = nullptr;

Utilisateur* u2 = new Utilisateur("abdou ", " khalil", "NU45766", "0625140320", "hay massira rue 4 appartement 7", "abdou@gmail.com", 4, 0, w3);
cout << endl << "MODIFIER LES INFORMATIONS " << endl;
cout << endl;
u2->update_informations("ISMAIL", "JALAL", "AD24150", "0678451230", "ANASSI GROUPE 4 IMMEUBLE 20");
cout << endl;
cout << endl;


cout << endl << "L'AFFICHAGE DES MODIFICATIONS SUR LES INFORMATIONS DE L'UTILISATEUR" << endl;
cout << endl;
u2->afficher();
cout << endl;
cout << endl;


delete CB1;
delete CP2;
delete PC5;
delete PC6;
delete w1;
delete w2;
delete u1;
delete w3;
delete u2;



}



    
    


// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
