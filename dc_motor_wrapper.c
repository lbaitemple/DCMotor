
/*
 * Include Files
 *
 */
#if defined(MATLAB_MEX_FILE)
#include "tmwtypes.h"
#include "simstruc_types.h"
#else
#include "rtwtypes.h"
#endif



/* %%%-SFUNWIZ_wrapper_includes_Changes_BEGIN --- EDIT HERE TO _END */
# ifndef MATLAB_MEX_FILE

	# include <Arduino.h>
	# include "Wire.h"
	# include "twi.h"
	# include "Adafruit_MotorShield.h"
	# include "Adafruit_MotorShield.cpp"
	# include "Adafruit_PWMServoDriver.h"
	# include "Adafruit_PWMServoDriver.cpp"

	Adafruit_MotorShield AFMS_DC = Adafruit_MotorShield(); 
	Adafruit_DCMotor *dcm1 = AFMS_DC.getMotor(1);
	Adafruit_DCMotor *dcm2 = AFMS_DC.getMotor(2);
	Adafruit_DCMotor *dcm3 = AFMS_DC.getMotor(3);
	Adafruit_DCMotor *dcm4 = AFMS_DC.getMotor(4);

# endif
/* %%%-SFUNWIZ_wrapper_includes_Changes_END --- EDIT HERE TO _BEGIN */
#define u_width 1

/*
 * Create external references here.  
 *
 */
/* %%%-SFUNWIZ_wrapper_externs_Changes_BEGIN --- EDIT HERE TO _END */
/* extern double func(double a); */
/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Output function
 *
 */
void dc_motor_Outputs_wrapper(const int8_T *dir,
			const uint8_T *spd,
			const real_T *xD,
			const uint8_T *mot, const int_T p_width0)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
/* wait until after initialization is done */
if (xD[0]==1) {
    
    /* don't do anything for mex file generation */
    # ifndef MATLAB_MEX_FILE
    
    if (mot[0]==1) {
        dcm1->setSpeed(spd[0]);
        if (dir[0]>0) dcm1->run(FORWARD);
        if (dir[0]<0) dcm1->run(BACKWARD);
        if (dir[0]==0) dcm1->run(RELEASE);
    }

    if (mot[0]==2) {
        dcm2->setSpeed(spd[0]);
        if (dir[0]>0) dcm2->run(FORWARD);
        if (dir[0]<0) dcm2->run(BACKWARD);
        if (dir[0]==0) dcm2->run(RELEASE);
    }
    
    if (mot[0]==3) {
        dcm3->setSpeed(spd[0]);
        if (dir[0]>0) dcm3->run(FORWARD);
        if (dir[0]<0) dcm3->run(BACKWARD);
        if (dir[0]==0) dcm3->run(RELEASE);
    }

    if (mot[0]==4) {
        dcm4->setSpeed(spd[0]);
        if (dir[0]>0) dcm4->run(FORWARD);
        if (dir[0]<0) dcm4->run(BACKWARD);
        if (dir[0]==0) dcm4->run(RELEASE);
    }

# endif
    
}
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}

/*
 * Updates function
 *
 */
void dc_motor_Update_wrapper(const int8_T *dir,
			const uint8_T *spd,
			real_T *xD,
			const uint8_T *mot, const int_T p_width0)
{
/* %%%-SFUNWIZ_wrapper_Update_Changes_BEGIN --- EDIT HERE TO _END */
if (xD[0]!=1) {
    
    /* don't do anything for mex file generation */
    # ifndef MATLAB_MEX_FILE
    AFMS_DC.begin();
    # endif
    
    /* initialization done */ 
    xD[0]=1;
}
/* %%%-SFUNWIZ_wrapper_Update_Changes_END --- EDIT HERE TO _BEGIN */
}

