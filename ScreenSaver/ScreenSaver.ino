/*
  MeggyJr_Blink.pde
 
 Example file using the The Meggy Jr Simplified Library (MJSL)
  from the Meggy Jr RGB library for Arduino
   
 Blink a damned LED.
   
   
 
 Version 1.25 - 12/2/2008
 Copyright (c) 2008 Windell H. Oskay.  All right reserved.
 http://www.evilmadscientist.com/
 
 This library is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this library.  If not, see <http://www.gnu.org/licenses/>.
 	  
 */

 
 
 
 

/*
 * Adapted from "Blink,"  The basic Arduino example.  
 * http://www.arduino.cc/en/Tutorial/Blink
 */

#include <MeggyJrSimple.h>    // Required code, line 1 of 2.
int x = 0;

void setup()                    // run once, when the sketch starts
{
  MeggyJrSimpleSetup();  // Required code, line 2 of 2.
}

void loop()                     // run over and over again
{
  ScreenSaver();
  DisplaySlate();
  delay(500);
}

void ScreenSaver()
{
      for (int a = 1; a < 7; a++)
    {
      DrawPx(1, a, x);
      DrawPx(a, 1, x);
      DrawPx(a, 6, x);
      DrawPx(6, a, x);
      x = random(0, 7);
    }
    for (int b = 0; b < 8; b++)
    {
      DrawPx(0, b, x);
      DrawPx(b, 0, x);
      DrawPx(b, 7, x);
      DrawPx(7, b, x);
      x = random(0, 7);
    }
    for (int c = 2; c < 6; c++)
    {
      DrawPx(2, c, x);
      DrawPx(c, 2, x);
      DrawPx(c, 5, x);
      DrawPx(5, c, x);
      x = random(0, 7);
    }
    for (int d = 0; d < 4; d++)
    {
      DrawPx(3, 3, x);
      DrawPx(4, 3, x);
      DrawPx(3, 4, x);
      DrawPx(4, 4, x);
      x = random(0, 7);
    }
}

