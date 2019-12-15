/**
 * @file HSLAPixel.h
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#pragma once

#include <iostream>
#include <sstream>

namespace uiuc {

  // Put your HSLAPixel class definition here.
  // (Remember to end it with a semicolon!)
  class HSLAPixel {
    public:
    double h; 
    double s; 
    double l; 
    double a; 
    HSLAPixel();

    HSLAPixel(double hue, double saturation, double luminance);

    HSLAPixel(double hue, double saturation, double luminance, double alpha);

    HSLAPixel & operator=(HSLAPixel const & other);
    bool operator== (HSLAPixel const & other) const ;
    bool operator!= (HSLAPixel const & other) const ;
    bool operator<  (HSLAPixel const & other) const ;
  };

  std::ostream & operator<<(std::ostream & out, HSLAPixel const & pixel);
  std::stringstream & operator<<(std::stringstream & out, HSLAPixel const & pixel);
}



