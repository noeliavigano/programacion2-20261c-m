///Fecha:
///Autor:
///Comentario:

#include <iostream>

using namespace std;


void fOmision(int a=1, int b=10);

int main(){

    fOmision(4,15);
    fOmision();
    fOmision(5);

	system("pause");
	return 0;

}

void fOmision(int a, int b){
    int i;
    for(i=a; i<=b;i++){
        cout<<i<<"\t";
    }
    cout<<endl;
}
