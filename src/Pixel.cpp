#include "Pixel.h"
#include <iostream>
using namespace std;

Pixel::Pixel()
{
r=0;
v=0;
b=0;

}

Pixel::Pixel(unsigned int nr, unsigned int nv, unsigned int nb )
{
r=nr;
v=nv;
b=nb;

}

void Pixel::Afficher()

{

cout<<"rouge: "<<r<<endl;
cout<<"vert: "<<v<<endl;
cout<<"bleau: "<<b<<endl;


}