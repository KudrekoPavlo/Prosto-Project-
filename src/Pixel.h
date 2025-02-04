#ifndef _PIXEL_H
#define _PIXEL_H

unsigned char rouge, vert, blue;  

// fonction constructeur sans parametres qui initialise le couleur par defaut comme noire (0,0,0)

Pixel();

// constructeur avec les parametres qui ajoute les parametres de couleur qui passe en parametre

Pixel(unsigned char r, unsigned char v, unsigned char b);

//fonction destructeur
~Pixel();

#endif
