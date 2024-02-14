#include <iostream>
#include <cmath>

using namespace std;
//-------------------------------------
//Definition de la classe :
//-------------------------------------
class chaise : public meuble
{
protected:

public:
    chaise();
    void afficher();
};
//-------------------------------------
//Definition des methodes :
//-------------------------------------

chaise::chaise(){
    int n;
    cout<<"Choisissez votre modele de chaise svp : "<<endl;
    cout<<"----------------------------------------- "<<endl;
    cout<<"1- Fixe"<<endl;
    cout<<"2- Pliante "<<endl;
    cout<<"3- Bureau"<<endl;
    cout<<"----------------------------------------- "<<endl;
    do{
    cout<<"choix : ";
    cin>>n;
    cout<<"\n ";
    }while(n!=1 && n!=2 && n!=3);
    if (n==1){
        type = "chaise fixe";
        prix = 20;
    }
    if (n==2){
        type = "chaise pliante";
        prix = 30;
    }
    if (n==3){
        type = "chaise bureau";
        prix = 80;
    }
}

void chaise::afficher(){
    cout<<"----------------------------------------- "<<endl;
    cout << "C'est un meuble : Chaise "<<endl;
    cout<<"----------------------------------------- "<<endl;
    cout << "- type : "<<type<<endl;
    cout << "- Prix : "<<prix<<" euros"<<endl;
    cout<<"----------------------------------------- "<<endl;
}
