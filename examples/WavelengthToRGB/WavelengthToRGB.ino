#include <WavelengthToRGB.h>

int wavelength = 500;
double Gamma = 0.80;
int MaxIntensity = 255;

WavelengthToRGB RGB;

void setup() {
  
RGB.Convert(wavelength, Gamma, MaxIntensity);
int red = RGB.GetRed();
int green = RGB.GetGreen();
int blue = RGB.GetBlue();

}

void loop() {
  // put your main code here, to run repeatedly:

}