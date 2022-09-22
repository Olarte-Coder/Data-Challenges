#include<iostream>
#include<cstring>
#define cantidad 1000

using namespace std;

int main(){
    char pa1[cantidad]={}; char pa2[cantidad]={}; int long1=0; int long2=0; int found=0; int found2=0;
    cin>>pa1;
    cin>>pa2;
    long1=strlen(pa1); long2=strlen(pa2);
    if(long1==long2){
        for(int i=0; i<long1; i++){ //first counter for the words of the first set
            found=false;
            found2=false;
            for(int y=0; y<long2; y++){ //second counter for the words of the second set
                if(pa1[i]==pa2[y]){
                    found=true;
                }
                if(pa2[i]==pa1[y]){
                    found2=true;
                }
            }
            if(found==false || found2==false){ //if found stops being true (due to a word from set 1 that DOES NOT EXIST in set 2) the program will stop printing NO as an answer
              cout<<"NO"<<endl;
              return 0;
            }
        }
        cout<<"YES"<<endl;  //if after all the FOR cycles, there is never false (the word of set 1 corresponding to 2 is always found), it prints YES
        return 0;
    }
    else
    {
     cout<<"NO"<<endl; //NO is printed because an anagram MUST MEET THE SAME NUMBER OF WORDS IN BOTH SETS
     return 0;
    }
}