/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       skuznetsov                                                */
/*    Created:      Tue Sep 21 2021                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    1, 2, 3, 4, 5   
// Controller1          controller                    
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

void driveStraight (int numInches) {
  Drivetrain.driveFor(forward, numInches, inches, 40, velocityUnits::pct);
  wait(250, msec);
}

void turn (int numDegrees) {
  Drivetrain.turnToHeading(numDegrees, degrees, 40, velocityUnits::pct);
  wait(250, msec);
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  
}
