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
            return this->getShuhe_hoehe()* this->getShuhe_Tiefe()* this->getShuhe_Breite();
        }

        //Setters
        void SetShuheGroesse(int x){
            this->Shuhe_Groesse=x;
        };

        void SetShuhe_hoehe(int x){
            this->Shuhe_hoehe=x;
        };

        void SetShuhe_Breite(int x){
            this->Shuhe_Breite=x;
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

        int getShuhe_Breite(){
            return this->Shuhe_Breite;
        }

        int getShuhe_Tiefe(){
            return this->Shuhe_Tiefe;
        }

        int ShuheOberflaeche(){
            return ((this->getShuhe_Breite() * this->getShuhe_hoehe())*2)+((this->getShuhe_Tiefe() * this->getShuhe_hoehe())*2);
        }

    private:
        int Shuhe_Groesse;
        int Shuhe_hoehe;
        int Shuhe_Breite;
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

    cout<<"Geben Sie Ihre Shuhe Breit"<<endl;
    int Shuhe_Breite;
    cin>>Shuhe_Breite;
    shuhe1.SetShuhe_Breite(Shuhe_Breite);

    cout<<"Geben Sie Ihre Shuhe Tiefe"<<endl;
    int Shuhe_Tiefe;
    cin>>Shuhe_Tiefe;
    shuhe1.SetShuhe_Tiefe(Shuhe_Tiefe);

    cout<<"Die Oberflaeche der Kartoune ist:  "<< shuhe1.ShuheOberflaeche() << " cm2"<<endl;
    cout<<"Die Volume Ihre Shuhe ist "<< shuhe1.ShuheVolume() << " cm3"<<endl;

return 0;
}
