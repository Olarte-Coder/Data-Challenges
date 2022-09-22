#include<iostream>

using namespace std;

int main(){
    int cantidad=0; char numeros[100][100]; int detect=0; int detect2=0; int confirm=0; int confirm2=0;

    cin>>cantidad;

    for(int i=0; i<cantidad; i++){ //store array elements
        for(int j=0; j<cantidad; j++){
            cin>>numeros[i][j];
        }
    }

    for(int x=0; x<cantidad; x++){ //check how many words are in X
        for(int c=0; c<cantidad; c++){
            if(numeros[x][c]=='-' && numeros[x][c+1]=='-'){ //example: compare [0][0] with [0][1] to see if they are equal
              detect++;
            }
            else
            {
              if(detect>=1){ //for the simple fact that there are 2 "-" means that there is a word
                confirm++;
              }
              detect=0;
            }
        }
        if(detect>=2){
           confirm++;
        }
        detect=0;
    }
    cout<<confirm<<" ";

    for(int x=0; x<cantidad; x++){ //check how many words are in Y
        for(int c=0; c<cantidad; c++){
            if(numeros[c][x]=='-' && numeros[c+1][x]=='-'){
              detect2++;
            }
            else
            {
              if(detect2>=1){
                confirm2++;
              }
              detect2=0;
            }
        }
        if(detect2>=2){
           confirm2++;
        }
        detect2=0;
    }
    cout<<confirm2;
}
