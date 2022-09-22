#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char palabra[1000];
    int i=0; int j=0;

    cin>>palabra;
    j=strlen(palabra)-1;

    for(int x=0;x<strlen(palabra)/2;x++)
    {
        if(palabra[i]!=palabra[j])
        {
            cout<<"NO";
            return 0;
        }
        i++;
        j--;
    }
    printf("SI\n");
    return 0;
}