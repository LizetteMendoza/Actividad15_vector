#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<string> cadenas;
    string op;

    while (true)
    {   cout<<"1) Inizializar"<<endl;
        cout<<"2) Agregar al final"<<endl;
        cout<<"3) Mostrar"<<endl;
        cout<<"0) Salir"<<endl;
        getline(cin,op);


        if(op=="1"){
            size_t n;
            string cadena;

            cout<<"tam: ";
            cin>>n;cin.ignore();
            cout<<"Cadena: ";
            getline(cin,cadena); 

            cadenas = vector<string>(n,cadena);  
        }
        else if(op=="2"){
            string cadena;
            cout<<"Cadena: ";
            cin>> cadena; cin.ignore();

            cadenas.push_back(cadena);

        }
        else if(op=="3"){
            for (size_t i = 0; i < cadenas.size(); i++)
            {
                cout<<cadenas[i]<<", ";
            }
            cout<<endl;
        }
        else if(op=="0"){
            break;
        }

    }
    
    return 0;
}

