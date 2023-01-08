
#include<iostream>

using namespace std;
int  main(){
    int x[10];
	int i,j;
	bool duplicate;
    for ( i = 0; i < 10; ) {
        duplicate = 0;
		cout << "Entre value: ";
       cin >> x[i];

    
        for ( j = 0; j <i; j++ ) {
            if ( x[i] == x[j] ) {
                cout << "Value already exists.\n Entre a different value" ;
                duplicate = 1;
                break;
            }
        }

        if ( duplicate == 0 )
           i++;
    }    
	  for ( i = 0; i < 10; i++)
	  cout << x[i] << ' ';
	  cout << '\n';
}
