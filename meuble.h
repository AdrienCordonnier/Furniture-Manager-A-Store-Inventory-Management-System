#include <iostream>
#include <cmath>

using namespace std;
//-------------------------------------
//Definition de la classe :
//-------------------------------------
class meuble
{
protected:
    string type;
    double prix;

public:
    meuble();
    virtual void afficher() = 0;
    double  get_prix();
    virtual ~meuble(){};
    string  get_type();

};
//-------------------------------------
//Definition des methodes :
//-------------------------------------

meuble::meuble(): prix(0){}

double meuble::get_prix(){return prix;}
string meuble::get_type(){return type;}

void meuble::afficher(){
    cout << "C'est un meuble"<<endl;
}
