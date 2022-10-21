#include <iostream>

using namespace std;

string Sort_down_to_up(string x){



    string result = "";
    char Max;
    int pos;

    while(x.length() != 0 ){
        Max = x[0];
        pos = 0;
        for(int i=0; i<x.length();i++){
            if(Max < x[i]){
              Max=x[i];
              pos=i;
            }
        }
        result = result+Max;
        x.erase(pos,1);

    }
    return result;

}

string Sort_up_to_down(string x){



    string result = "";
    char Max;
    int pos;

    while(x.length() != 0 ){
        Max = x[0];
        pos = 0;
        for(int i=0; i<x.length();i++){
            if(Max > x[i]){
              Max=x[i];
              pos=i;
            }
        }
        result = result+Max;
        x.erase(pos,1);

    }
    return result;

}

bool IsNummeric(string x){

    bool verify = true;

    for (int i=0; i < x.length(); i++){

        if(!isdigit(x[i])){
            verify = false;
            break;
        }
    }

    return verify;
}

string Fill_In_The_Field(string x, string FillInWith, int LengthOfOutput){
    while (x.length() < LengthOfOutput){
        x = FillInWith + x;
    }

    return x;
}

string Check_If_The_Input_Is_Number(){
    string User_Number;
    //check if Input is a number
    cout << "Geben Sie eine Zahle ein" << endl;
    while(true){
        cin>>User_Number;

        if(!IsNummeric(User_Number)){
            cout << "Geben Sie Bitte genau eine Zahle ein -___- ! " << endl;
        }else{
            break;
        }
    }
    return User_Number;
}

void OutputFunction(string UserInput){
    string BigNumber;
    string SmallNumber;
    int    RestNumberAfterSubtruct;
    while(true){
        /*
            Sort The Number from down to Up and Fill in with 0 if size under 4
            get the two Number to be subtract
        */
        BigNumber = (UserInput.length()== 4) ? Sort_down_to_up(UserInput) : Fill_In_The_Field(Sort_down_to_up(UserInput),"0", 4) ;
        SmallNumber = (UserInput.length()== 4) ? Sort_up_to_down(UserInput) : Fill_In_The_Field(Sort_up_to_down(UserInput),"0", 4) ;

        //Make The Subtraction
        RestNumberAfterSubtruct = stoi(BigNumber) - stoi(SmallNumber);

        //check if We Have The Same Number In the End
        if(UserInput == to_string(RestNumberAfterSubtruct)){continue;}

        //Convert The Rest To String
        UserInput = Fill_In_The_Field(to_string(RestNumberAfterSubtruct),"0", 4);

        //Console Ausgabe
        cout << BigNumber << " - " << SmallNumber << " = " << UserInput<<endl;
        cout <<endl;
    }

}

int main()
{
    //All Local Varibales
    string UserInput;

    //Get A Number From User
    //Muss Impliment if the Size Is Usable for Integer(Maybe Later)
    UserInput=Check_If_The_Input_Is_Number();
    cout << endl;
    cout << endl;
    cout << endl;

    // OutPut
    cout <<"Ausgangszahl "+ UserInput << endl ;
    cout << endl;

    OutputFunction(UserInput);


    return 0;
}

