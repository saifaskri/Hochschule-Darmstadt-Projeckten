#include <iostream>

using namespace std;

class Shuhe{

    public:
         Shuhe(string modell="Us"){
            cout<<"=============================================="<<endl;
            cout<<"=============================================="<<endl;
            cout<< "           Welcome By " << modell <<"   "<< endl;
            cout<<"=============================================="<<endl;
            cout<<"=============================================="<<endl;
            cout<<endl;
        };

        int ShuheVolume(){
            return this->getShuhe_hoehe()* this->getShuhe_Tiefe()* this->getShuhe_Oberflaeche();
        }

        //Setters
        void SetShuheGroesse(int x){
            this->Shuhe_Groesse=x;
        };

        void SetShuhe_hoehe(int x){
            this->Shuhe_hoehe=x;
        };

        void SetShuhe_Oberflaeche(int x){
            this->Shuhe_Oberflaeche=x;
        };

        void SetShuhe_Tiefe(int x){
            this->Shuhe_Tiefe=x;
        };

        //Getters
        int getShuhe_Groesse(){
            return this->Shuhe_Groesse;
        }

        int getShuhe_hoehe(){
            return this->Shuhe_hoehe;
        }

        int getShuhe_Oberflaeche(){
            return this->Shuhe_Oberflaeche;
        }

        int getShuhe_Tiefe(){
            return this->Shuhe_Tiefe;
        }

    private:
        int Shuhe_Groesse;
        int Shuhe_hoehe;
        int Shuhe_Oberflaeche;
        int Shuhe_Tiefe;



};

int main()
{
    Shuhe shuhe1("Nike");

    cout<<"Geben Sie Ihre Shuhe Grosse"<<endl;
    int ShuheGroesse;
    cin>>ShuheGroesse;
    shuhe1.SetShuheGroesse(ShuheGroesse);


    cout<<"Geben Sie Ihre Shuhe Hoehe"<<endl;
    int Shuhe_hoehe;
    cin>>Shuhe_hoehe;
    shuhe1.SetShuhe_hoehe(Shuhe_hoehe);

    cout<<"Geben Sie Ihre Shuhe Oberflaeche"<<endl;
    int Shuhe_Oberflaeche;
    cin>>Shuhe_Oberflaeche;
    shuhe1.SetShuhe_Oberflaeche(Shuhe_Oberflaeche);

    cout<<"Geben Sie Ihre Shuhe Tiefe"<<endl;
    int Shuhe_Tiefe;
    cin>>Shuhe_Tiefe;
    shuhe1.SetShuhe_Tiefe(Shuhe_Tiefe);

    cout<<"Die Volume Ihre Shuhe ist "<< shuhe1.ShuheVolume() << " cm3"<<endl;

return 0;
}
