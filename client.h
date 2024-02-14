#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
using namespace std;

//--------------------------------
//Définition de la classe
//--------------------------------

class client{
protected:
    vector<meuble*>  m_meuble;

public:
            client(){};
    void    ajouter();
    void    supprimer();
    virtual ~client();
    virtual void afficher();
    void    menu();
};
//--------------------------------
//Définition des methodes
//--------------------------------

void client::ajouter()
{   int choix ;
    do{
    cout<<"---------------------"<<endl;
    cout<<"     Vous ajoutez    "<<endl;
    cout<<"---------------------"<<endl;
    cout<<"  1 - Une chaise  "<<endl;
    cout<<"  2 - Une Table rectangulaire "<<endl;
    cout<<"  3 - Une Table ronde"<<endl;
    cout<<"  4 - Un bureau      "<<endl;
    cout<<"---------------------"<<endl;
    cin>>choix;

    }while(choix!=1 && choix!=2 && choix!=3 && choix!=4);
    if(choix == 1){
        m_meuble.push_back(new chaise);
    }
    if(choix == 2){
        m_meuble.push_back(new rectangulaire);
    }
    if(choix == 3){
        m_meuble.push_back(new ronde);
    }
    if(choix == 4){
        m_meuble.push_back(new bureau);
    }

}

void client::afficher()
{
    int n,c = 0,t = 0;

    for (int i =0 ; i< m_meuble.size() ; i++)
    {
        n += 1;
        cout<<"-------------------------"<<endl;
        cout<<"   meuble numero "<<i+1 <<endl;
        cout<<"-------------------------"<<endl;
        m_meuble[i]->afficher();


    if(m_meuble[i]->get_type() == "chaise fixe" | m_meuble[i]->get_type() == "chaise pliante" |m_meuble[i]->get_type() == "chaise bureau"  ){
            c+= 1;

        }
    if(m_meuble[i]->get_type() == "table Moyenne" |m_meuble[i]->get_type() == "table Haute" |m_meuble[i]->get_type() == "table Basse"  ){
            t+= 1;

        }
    }
    cout<<"-------------------------"<<endl;
    cout<<"Il y a : "<<n <<" meubles differents"<<endl;
    cout<<"Il y a : "<<c <<" Chaise(s) et : "<<t<<" tables."<<endl;
    cout<<"-------------------------"<<endl;
}

client::~client(){
    for (int i=0;i<m_meuble.size();i++)
        delete( m_meuble[i]);
}

void client::supprimer()
{
    int n;
    cout<<"Quel element voulez-vous supprimer : "<<endl;
    cin>>n;
    m_meuble.erase(m_meuble.begin()+(n-1));
}

void client::menu()
{
    int n;
    client c;
    cout<<"--------------------"<<endl;
    cout<<"    MENU meubles"<<endl;
    cout<<"--------------------"<<endl;
    do{
            do{
        cout<<"1 - Ajouter meuble"<<endl;
        cout<<"2 - Afficher meuble"<<endl;
        cout<<"3 - Supprimer meuble"<<endl;
        cout<<"4 - Ajouter des tiroirs a un bureau"<<endl;
        cout<<"5 - Quitter"<<endl;
        cout<<"--------------------"<<endl;
        cout<<"Entrez une option : ";

        cin >> n;
            }while(n<1| n>4);
    if(n == 1)
    {
        system("cls");
        c.ajouter();
        system("cls");
    }
    if(n == 2)
    {
        system("cls");
        c.afficher();
        system("pause");
        system("cls");
    }
    if(n == 3)
    {
        system("cls");
        c.supprimer();
        system("pause");
        system("cls");
    }
    if(n == 4)
    {
        int n1,n2;
        cout<<"Quel element voulez-vous ajouter des tiroirs : "<<endl;
        cin>>n1;
        cout<<"combien de tiroirs : "<<endl;
        cin>>n2;
        system("cls");
        m_meuble[n1]->ajouter_tiroir(n2);
        system("pause");
        system("cls");
    }

    }while(n!= 5);

}
