#include <math.h>
#include "punto.h"

template <class P>
punto<P>::punto(){
    cx=0;
    cy=0;
    }

template <class P>
punto<P>::punto(P x, P y){
    cx=x;
    cy=y;
    }

template <class P>
void punto<P>::SetX(P x){
    cx=x;
    }

template <class P>
void punto<P>::SetY(P y){
    cy=y;
    }

template <class P>
    P punto<P>::GetX(){
    return cx;
}

template <class P>
    P punto<P>::GetY(){
    return cy;
}

template <class P>
void punto<P>::operator++(){
 cx++;cy++;
}

template <class P>
void punto<P>::operator--(){
 cx--;cy--;
}

template <class P>
punto<P> punto<P>::operator+(punto q){
    punto z(cx+q.cx,cy+q.cy);
    return z;
}

template <class P>
punto<P> punto<P>::operator+(P& j){
    punto z(cx+j,cy+j);
    return z;
}

template <class P>
punto<P> punto<P>::operator-(punto q){
    punto z(cx-q.cx,cy-q.cy);
    return z;
}

template <class P>
punto<P> punto<P>::operator-(P& j){
    punto z(cx-j,cy-j);
    return z;
}

template <class P>
P punto<P>::angulo(){
   return atan(cy/cx);
}

template <class P>
P punto<P>::modulo(){
    return sqrt(cx*cx+cy*cy);
}
