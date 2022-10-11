#include <iostream>

using namespace std;

int main()
{
    string slowo;
    cout << "Podaj slowo: ";
    cin >> slowo;
    int le = slowo.length();
    int len = le - 1;
    int wsp = 0;
    string tab[le];
   
    //aaaama
    //lolla
    //aaala
    for(int i = 0; i<=len; i++)
    {
        if(i==len){
            cout<<slowo[i];
            break;
        }
        if(slowo[i]==slowo[i+1]){
            if(slowo[i+1]==slowo[i+2]){
                wsp = 3;
               
                for(int j = i+2; j<=len; j++){
                   
                    if(slowo[j]==slowo[j+1]){
                        wsp++;
                    }
                    else{
                        if(slowo[i]==slowo[i-1])
                        {
                            break;
                        }
                        else{
                            cout<<wsp<<slowo[j];
                            break;
                        }
                       
                    }
                }
            }
            else{//aaaaab
                if(slowo[i-1]==slowo[i]){
                    continue;
                }
                else{
                    cout<<slowo[i]<<slowo[i];
                }
            }
           
        }
        else{
            if(slowo[i]==slowo[i-1])
            {
                continue;
            }
            else{
             cout<<slowo[i];
            }
        }
    }

    return 0;
}