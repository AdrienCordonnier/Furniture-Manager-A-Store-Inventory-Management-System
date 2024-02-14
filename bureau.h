#include <iostream>
#include <cmath>

using namespace std;
//-------------------------------------
//Definition de la classe :
//-------------------------------------
class bureau : public rectangulaire
{
protected:
    int nb_tiroirs;
public:
    bureau();
    void afficher();
    void ajouter_tiroir(double);
    void supprimer_tiroir(double);


};

//-------------------------------------
//Definition des methodes :
//-------------------------------------

bureau::bureau():rectangulaire(1){
    do{
        cout<<"Saisissez le nombre de tiroirs de la table bureau entre 1 et 6 svp : "<<endl;
        cout<<"choix : ";
        cin>>nb_tiroirs;
    }while(nb_tiroirs<1 | nb_tiroirs>6);
    prix += nb_tiroirs *15;

}

void bureau::afficher(){

    cout<<"----------------------------------------- "<<endl;
    cout << "C'est un meuble  : Table "<<endl;
    cout<<"----------------------------------------- "<<endl;
    cout << "- type           : "<<type<<endl;
    cout << "- modele         : Rectangulaire special bureau"<<endl;
    cout << "- Tiroirs        : "<<nb_tiroirs<< " tiroirs"<<endl;
    cout << "- Prix table     : "<<prix-(nb_tiroirs)*15<<" euros"<<endl;
    cout << "- Prix tiroirs   : "<<(nb_tiroirs)*15<<" euros"<<endl;
    cout<<"----------------------------------------- "<<endl;
    cout << "- Prix Bureau    : "<<prix<<" euros"<<endl;
    cout<<"----------------------------------------- "<<endl;
}

void bureau::ajouter_tiroir(double a){
    if (nb_tiroirs+a<7){
        double prix2;
        prix2 = prix -(nb_tiroirs)*15;
        nb_tiroirs += a;
        prix = prix2 + nb_tiroirs *15;
    }
    else{
        double prix2;
        prix2 = prix -(nb_tiroirs)*15;
        nb_tiroirs = 6;
        prix = prix2 + nb_tiroirs *15;
    }
}

void bureau::supprimer_tiroir(double a){
    if (nb_tiroirs-a>1){
        double prix2;
        prix2 = prix -(nb_tiroirs)*15;
        nb_tiroirs -= a;
        prix = prix2 + nb_tiroirs *15;
    }
    else{
        double prix2;
        prix2 = prix -(nb_tiroirs)*15;
        nb_tiroirs = 1;
        prix = prix2 + nb_tiroirs *15;
    }
}
