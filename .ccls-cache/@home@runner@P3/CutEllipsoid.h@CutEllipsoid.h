#ifndef CUTELLPISOID
#define CUTELLIPSOID
#include "Sculptor.hpp"
#include "FiguraGeometrica.hpp"

class CutEllipsoid : public FiguraGeometrica{
  private:
    int xcenter;
    int ycenter;
    int zcenter;
    int rx;
    int ry;
    int rz;
  public:
    CutEllipsoid (int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    void draw (Sculptor &s);
  };

  #endif