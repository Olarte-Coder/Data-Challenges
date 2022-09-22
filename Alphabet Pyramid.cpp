#include<iostream>

using namespace std;

int main(){
    int entrada=0; char numeral; int hap=0; int n=0; int m=0; int y=0; int l=0;

    cin>>entrada; //ask number
    hap=entrada-1;
    for(int i=0; i<entrada; i++){ //Y axis
        n=m;
        while(n<entrada-1){ //a while is created which repeats spaces until it is equal to the input (when it is the maximum, the spaces are not necessary)
            cout<<" ";
            n++;
        }
        m++;
        for(int j=hap; j<entrada; j++){ //X axis, hap variable what it does is become the number given by the user-1 so that it prints only 1 time. example: if the user gives the number 3 then hap is 2, therefore 2<3(1 time)
             numeral=96+entrada; //a char is created that, using the ASCII table, will search for the maximum number given by the user (example: 3=c)
             printf("%c",numeral+y); //the letter of the maximum number is printed (example: 3=c), the char is added with the number of current repetitions
             y++;
        }
        y=0;
        l++;
        y=y-l; //This is done so that for each cycle, the Y axis is subtracted by the current number of repetitions.
        hap=hap-2; //This is done so that for each cycle it has to print 2 more letters
        cout<<endl;
    }
}