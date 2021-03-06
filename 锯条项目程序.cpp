///////////////////////////////////////////////////////////////////////////////
//  File generated by HDevelop for HALCON/C++ Version 11.0
///////////////////////////////////////////////////////////////////////////////



#ifndef __APPLE__
#  include "HalconCpp.h"
#else
#  ifndef HC_LARGE_IMAGES
#    include <HALCONCpp/HalconCpp.h>
#  else
#    include <HALCONCppxl/HalconCpp.h>
#  endif
#endif



using namespace HalconCpp;


#ifndef NO_EXPORT_MAIN
// Main procedure 
void action()
{

  // Local iconic variables 
  HObject  ho_Image;


  // Local control variables 
  HTuple  hv_AcqHandle;

  //Image Acquisition 01: Code generated by Image Acquisition 01
  OpenFramegrabber("GigEVision", 0, 0, 0, 0, 0, 0, "progressive", -1, "default", 
      -1, "false", "default", "GCP1931M_001B7E", 0, -1, &hv_AcqHandle);
  GrabImageStart(hv_AcqHandle, -1);
  while (0 != 1)
  {
    GrabImageAsync(&ho_Image, hv_AcqHandle, -1);
    //Image Acquisition 01: Do something
  }
  CloseFramegrabber(hv_AcqHandle);

}


#ifndef NO_EXPORT_APP_MAIN
int main(int argc, char *argv[])
{
  // Default settings used in HDevelop (can be omitted) 
  SetSystem("width", 512);
  SetSystem("height", 512);
  action();
  return 0;
}
#endif


#endif


