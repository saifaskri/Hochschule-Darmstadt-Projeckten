#include <iostream>

using namespace std;

int main()
{

    int a,b,n,KleineStueckenZahl,GroesseStueckenZahl;

    cout << "Geben Sie Wie Viel Kg von Den Kleinen Sie Haben ein A" << endl;
    cin>>a;
    cout << "Geben Sie Wie Viel Kg von Den Grossen Sie Haben ein B" << endl;
    cin>>b;
    cout << "Geben Sie Wie Viel Kg Sie Wollen Ein N" << endl;
    cin>>n;

    KleineStueckenZahl = n%5;
    GroesseStueckenZahl = n/5;

    if(a>=KleineStueckenZahl && b>=GroesseStueckenZahl){
        cout<<"Sie berauchen "<< KleineStueckenZahl <<" von Kleinen Stuecken A und "<< GroesseStueckenZahl<< " von Grossen Stuecken B" <<endl;
    }else{
        cout<< "Nichzt Möglich" << -1 ;
    }

    return 0;
}
