#include <iostream>
#include <cmath>

using namespace std;
//-------------------------------------
//Definition de la classe :
//-------------------------------------
class ronde : public rectangulaire
{
protected:

public:
    ronde();
    void afficher();

};
//-------------------------------------
//Definition des methodes :
//-------------------------------------

ronde::ronde() : rectangulaire(){
    if (type=="table Moyenne"){
        prix +=70 ;
    }
    if (type=="table Haute"){
        prix += 80;
    }
    if (type=="table Basse"){
        prix += 60;
    }
}

void ronde::afficher(){
    cout<<"----------------------------------------- "<<endl;
    cout << "C'est un meuble : Table "<<endl;
    cout<<"----------------------------------------- "<<endl;
    cout << "- type   : "<<type<<endl;
    cout << "- modele : ronde"<<endl;
    cout << "- Prix   : "<<prix<<" euros"<<endl;
    cout<<"----------------------------------------- "<<endl;
}
