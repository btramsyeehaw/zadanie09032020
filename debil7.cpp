#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n;
    int j=0;
    int i=0;
    int g=100;
    int d=1;


    cout << "podaj rozmiar kwadratu ";
    cin>>n;
    int tablica[n][n];
    int przekatna[2][n];

    srand(time(NULL));

    for (i=0; i<n; i++) {
           for (j=0; j<n; j++) {
               tablica[i][j]=rand()%(g-d+1);
                if(j==i){
                   przekatna[0][j]=tablica[i][j];
                }
               if(j==n-i-1) {
                przekatna[1][j]=tablica[i][j]; }
               }
    }
    for(i=0; i<n;i++){
        for(j=0;j<n;j++){
            cout<<tablica[i][j]<<" ";
        }
        cout<<endl;
    }

            cout<<endl<<"Oto liczby zawarte w jednej przekatnej: ";

      for (int i=0; i<n; i++) {
        cout<<przekatna[0][i]<<" ";
              }

              cout<<endl<<endl<<"Oto liczby zawarte w drugiej przekatnej: ";

      for (int i=0; i<n; i++){
        cout<<przekatna[1][i]<<" ";
      }
}
