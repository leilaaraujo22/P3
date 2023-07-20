#ifndef CUTSPHERE
#define CUTSHPERE
#include "Sculptor.hpp"
#include "FiguraGeometrica.hpp"

class CutSphere : public FiguraGeometrica{
  private:
    int xcenter;
    int ycenter;
    int zcenter;
    int radius;
  public:
    CutSphere(int xcenter, int ycenter, int zcenter, int radius);

    void draw (Sculptor &s);
    };

    #endif