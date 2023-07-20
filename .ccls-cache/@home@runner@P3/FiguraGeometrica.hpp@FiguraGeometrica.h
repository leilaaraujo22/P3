#ifndef FIGURAGEOMETRICA_HPP
#define FIGURAGEOMETRICA_HPP

#include "Sculptor.hpp"

class FiguraGeometrica
{
    protected:
        float r, g, b, a;
    public:
        FiguraGeometrica(){}
        virtual ~FiguraGeometrica(){}
        virtual void draw(Sculptor &s)=0;
};

#endif 