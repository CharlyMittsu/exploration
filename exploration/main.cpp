#include <iostream>
#include <string>
#include <vector>

using std::vector;
using namespace std;


int main () {
    bool game = true;
    
    string lieu1 = "foret";

    string lieu2 = "marais";

    

    while (game == true){
        cout << "choisissez où  allez : "<<lieu1<<" ou  "<<lieu2<<"."<<endl;

        string choix;
        cin >> choix;
        if (choix == lieu1){
            cout <<"vous décidez d'aller dans la foret."<<endl;
        }else if (choix == lieu2){
            cout <<"vous décidez d'aller dans les marais."<<endl;
        }else{
            cout <<"ce lieu n'existe pas"<<endl;
        }
        


    }
    

}