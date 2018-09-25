#include <WavelengthToRGB.h>

int wavelength = 518;
double Gamma = 0.80;
int MaxIntensity = 255;

WavelengthToRGB RGB;

void setup() {
  
Serial.begin(115200);

RGB.Convert(wavelength, Gamma, MaxIntensity);
int red = RGB.GetRed();
int green = RGB.GetGreen();
int blue = RGB.GetBlue();

Serial.println(red);
Serial.println(green);
Serial.println(blue);

}

void loop() {
  // put your main code here, to run repeatedly:

}