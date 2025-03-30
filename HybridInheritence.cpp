#include<iostream>
using namespace std;
class HoobaDooba{
public :
    string species;
};
class Mars : virtual public HoobaDooba{
public :
    string Alien;
};
class Kepler: virtual public HoobaDooba{
public :
    int Size ;
};
class Earth: public Mars,public Kepler{
public :
    void getInfo(){
        cout<<"Species :"<<species<<endl;
        cout<<"Size :"<<Size<<endl;
        cout<<"Alien :"<<Alien<<endl;
    } 
};

int main(){
    Earth e;
    e.species = "Homo Sapiens";
    e.Alien = "Jaadu";
    e.Size = 200;
    e.getInfo();
}
