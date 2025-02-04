#include <Pixel.h>
#include <iostream>
using namespace std;

int main() {
        Pixel p1;
        Pixel p2(10,20,30) ;

        Afficher(p1);
        Afficher(p2);
}
        //... affichage du contenu des pixels pour être sûr que ok