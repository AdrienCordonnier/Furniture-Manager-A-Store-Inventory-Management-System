#include <iostream>
#include <cmath>

using namespace std;
//-------------------------------------
//Definition de la classe :
//-------------------------------------
class rectangulaire : public meuble
{
protected:

public:
    rectangulaire();
    rectangulaire(int);
    virtual void afficher();

};

//-------------------------------------
//Definition des methodes :
//-------------------------------------

rectangulaire::rectangulaire(){
    int n;
    cout<<"Choisissez votre modele de table svp : "<<endl;
    cout<<"----------------------------------------- "<<endl;
    cout<<"1- Moyenne"<<endl;
    cout<<"2- Haute "<<endl;
    cout<<"3- Basse"<<endl;
    cout<<"----------------------------------------- "<<endl;
    do{
    cout<<"choix : ";
    cin>>n;
    cout<<"\n ";
    }while(n!=1 && n!=2 && n!=3);
    if (n==1){
        type = "table Moyenne";
        prix = 140;
    }
    if (n==2){
        type = "table Haute";
        prix = 160;
    }
    if (n==3){
        type = "table Basse";
        prix = 120;
    }
}
rectangulaire::rectangulaire(int a){
    int n;
    cout<<"Choisissez votre modele de table svp : "<<endl;
    cout<<"----------------------------------------- "<<endl;
    cout<<"1- Moyenne"<<endl;
    cout<<"2- Haute "<<endl;
    cout<<"----------------------------------------- "<<endl;
    do{
    cout<<"choix : ";
    cin>>n;
    cout<<"\n ";
    }while(n!=1 && n!=2);
    if (n==1){
        type = "table Moyenne";
        prix = 140;
    }
    if (n==2){
        type = "table Haute";
        prix = 160;
    }
}

void rectangulaire::afficher(){
    cout<<"----------------------------------------- "<<endl;
    cout << "C'est un meuble : Table "<<endl;
    cout<<"----------------------------------------- "<<endl;
    cout << "- type   : "<<type<<endl;
    cout << "- modele : Rectangulaire"<<endl;
    cout << "- Prix   : "<<prix<<" euros"<<endl;
    cout<<"----------------------------------------- "<<endl;
}
