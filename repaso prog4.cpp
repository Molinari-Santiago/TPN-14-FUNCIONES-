#include<bits/stdc++.h>
using namespace std;
void Codigo(string fr);

int main() {
    string fr;
    cout << "Ingrese contraseña: ";
    getline(cin, fr);
    Codigo(fr);
    return 0;
}

void Codigo(string fr) {
    string aux;

    for (int i = 0; i < fr.size(); i++) {
        if (isupper(fr[i])) {
            aux += tolower(fr[i]); 
        }
	    if (islower(fr[i])) {
            aux += toupper(fr[i]); 
      
    }
    if(fr[i]=='1'){
    	aux+=fr[i];
		aux+='2';
	}
	 if(fr[i]=='2'){
    	aux+=fr[i];
		aux+='3';
	}
	 if(fr[i]=='3'){
    	aux+=fr[i];
		aux+='4';
	}
	 if(fr[i]=='4'){
    	aux+=fr[i];
		aux+='5';
	}
	 if(fr[i]=='5'){
    	aux+=fr[i];
		aux+='6';
	}
	 if(fr[i]=='6'){
    	aux+=fr[i];
		aux+='7';
	}
	 if(fr[i]=='7'){
    	aux+=fr[i];
		aux+='8';
	}
	 if(fr[i]=='8'){
    	aux+=fr[i];
		aux+='9';
	}

  
}
   cout << "Resultado: " <<aux<< endl;
   }

