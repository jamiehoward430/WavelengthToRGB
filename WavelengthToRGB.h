/*
  WavelengthToRGB.h - Library for converting wavelength to RGB values.
  Created by Jamie G. Howard, September 25, 2018.
  Released into the public domain.
*/
#ifndef WavelengthToRGB_h
#define WavelengthToRGB_h

#include "Arduino.h"

class WavelengthToRGB
{
  public:
    WavelengthToRGB();
	void Convert(int wavelength,double gamma, int maxint);
	int Adjust(double colour, double factor);
	int GetRed();
	int GetGreen();
	int GetBlue();

	
  private:
    int _MaxIntensity;
	double _Gamma;
	
	double _Red;
	double _Green;
	double _Blue;
	double _Factor;

	int RED;
	int GREEN;
	int BLUE;	

};


#endif