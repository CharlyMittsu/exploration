#include <iostream>
#include <string>
#include <vector>
#include "lieu.cpp"

using std::vector;
using namespace std;


int main () {
    bool game = true;
    
    
    Lieu lieu1 = Lieu("foret","158 arbres et beaucoup de mousses",5);

    
    Lieu lieu2 = Lieu("marais","attention ogre mechant",19);



    

    while (game == true){
        cout << "choisissez où  allez : "<<lieu1.getNom()<<" ou  "<<lieu2.getNom()<<"."<<endl;

        string choix;
        cin >> choix;
        if (choix == lieu1.getNom()){
            cout <<lieu1.getDescription()<<endl;
        }else if (choix == lieu2.getNom()){
            cout <<lieu2.getDescription()<<endl;
        }else{
            cout <<"ce lieu n'existe pas"<<endl;
        }
        


    }
    

}