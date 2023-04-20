#include <iostream>
using namespace std;
int main(){
    int n=0;
    char lista_nomi[3][5] = {"", "", ""};
    char nome[5] = {""};
    cin >> lista_nomi[0];
    cin >> lista_nomi[1];
    cin >> lista_nomi[2];
    cout << endl;
    cin >> nome;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            if (lista_nomi[i][j]==nome[j]){
                n++;
            }
        }
        if( n==4){
            cout << i;
        }

        n= 0;

    }
    return 0;
}
