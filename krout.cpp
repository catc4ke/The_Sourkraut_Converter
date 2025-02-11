#include <iostream>
using namespace std;

int main()
{
        float ratio;
        int grams;
        float result;
        int input;

        cout<<endl;
        cout<<"--Krout Converter 1.0--"<<endl<<endl;

        cout<<"Enter weight in grams: "<<endl;
        cin>>grams;
        cout<<endl;

        cout<<"Enter salt percentage: "<<endl;
        cin>> ratio;
        cout<<endl;

        if(ratio==0)
        {
                cout<<"Salt required: "<<endl;
                cout<<"0g"<<endl<<endl;

                return 0;
        }


        ratio = ratio/100;
        result = grams*ratio;

        cout<<"Salt required: "<<endl;
        cout<< result;
        cout<< "g"<<endl;
        cout<<endl;

        cout<<"Enter a key to exit.. "<<endl;
        cin>>input;

        system("exit");
        return 0;
}