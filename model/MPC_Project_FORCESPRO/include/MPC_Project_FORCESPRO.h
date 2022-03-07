/*
MPC_Project_FORCESPRO : A fast customized optimization solver.

Copyright (C) 2013-2021 EMBOTECH AG [info@embotech.com]. All rights reserved.


This software is intended for simulation and testing purposes only. 
Use of this software for any commercial purpose is prohibited.

This program is distributed in the hope that it will be useful.
EMBOTECH makes NO WARRANTIES with respect to the use of the software 
without even the implied warranty of MERCHANTABILITY or FITNESS FOR A 
PARTICULAR PURPOSE. 

EMBOTECH shall not have any liability for any damage arising from the use
of the software.

This Agreement shall exclusively be governed by and interpreted in 
accordance with the laws of Switzerland, excluding its principles
of conflict of laws. The Courts of Zurich-City shall have exclusive 
jurisdiction in case of any dispute.

*/

/* Generated by FORCESPRO v5.1.0 on Monday, March 7, 2022 at 2:38:37 PM */
#ifndef MPC_Project_FORCESPRO_H
#define MPC_Project_FORCESPRO_H

#ifndef SOLVER_STDIO_H
#define SOLVER_STDIO_H
#include <stdio.h>
#endif


#ifndef SOLVER_STANDARD_TYPES
#define SOLVER_STANDARD_TYPES

typedef signed char solver_int8_signed;
typedef unsigned char solver_int8_unsigned;
typedef char solver_int8_default;
typedef signed short int solver_int16_signed;
typedef unsigned short int solver_int16_unsigned;
typedef short int solver_int16_default;
typedef signed int solver_int32_signed;
typedef unsigned int solver_int32_unsigned;
typedef int solver_int32_default;
typedef signed long long int solver_int64_signed;
typedef unsigned long long int solver_int64_unsigned;
typedef long long int solver_int64_default;

#endif


/* DATA TYPE ------------------------------------------------------------*/
typedef double MPC_Project_FORCESPRO_float;


typedef double MPC_Project_FORCESPROinterface_float;

/* SOLVER SETTINGS ------------------------------------------------------*/

/* MISRA-C compliance */
#ifndef MISRA_C_MPC_Project_FORCESPRO
#define MISRA_C_MPC_Project_FORCESPRO (0)
#endif

/* restrict code */
#ifndef RESTRICT_CODE_MPC_Project_FORCESPRO
#define RESTRICT_CODE_MPC_Project_FORCESPRO (0)
#endif

/* print level */
#ifndef SET_PRINTLEVEL_MPC_Project_FORCESPRO
#define SET_PRINTLEVEL_MPC_Project_FORCESPRO    (2)
#endif

/* timing */
#ifndef SET_TIMING_MPC_Project_FORCESPRO
#define SET_TIMING_MPC_Project_FORCESPRO    (1)
#endif

/* Numeric Warnings */
/* #define PRINTNUMERICALWARNINGS */

/* maximum number of iterations  */
#define SET_MAXIT_MPC_Project_FORCESPRO         (200)	

/* scaling factor of line search (affine direction) */
#define SET_LS_SCALE_AFF_MPC_Project_FORCESPRO  (MPC_Project_FORCESPRO_float)(0.9)      

/* scaling factor of line search (combined direction) */
#define SET_LS_SCALE_MPC_Project_FORCESPRO      (MPC_Project_FORCESPRO_float)(0.95)  

/* minimum required step size in each iteration */
#define SET_LS_MINSTEP_MPC_Project_FORCESPRO    (MPC_Project_FORCESPRO_float)(1E-08)

/* maximum step size (combined direction) */
#define SET_LS_MAXSTEP_MPC_Project_FORCESPRO    (MPC_Project_FORCESPRO_float)(0.995)

/* desired relative duality gap */
#define SET_ACC_RDGAP_MPC_Project_FORCESPRO     (MPC_Project_FORCESPRO_float)(0.0001)

/* desired maximum residual on equality constraints */
#define SET_ACC_RESEQ_MPC_Project_FORCESPRO     (MPC_Project_FORCESPRO_float)(1E-06)

/* desired maximum residual on inequality constraints */
#define SET_ACC_RESINEQ_MPC_Project_FORCESPRO   (MPC_Project_FORCESPRO_float)(1E-06)

/* desired maximum violation of complementarity */
#define SET_ACC_KKTCOMPL_MPC_Project_FORCESPRO  (MPC_Project_FORCESPRO_float)(1E-06)

/* desired maximum violation of stationarity (only checked if value is > 0) */
#define SET_ACC_KKTSTAT_MPC_Project_FORCESPRO  (MPC_Project_FORCESPRO_float)(-1)

/* RETURN CODES----------------------------------------------------------*/
/* solver has converged within desired accuracy */
#define OPTIMAL_MPC_Project_FORCESPRO      (1)

/* maximum number of iterations has been reached */
#define MAXITREACHED_MPC_Project_FORCESPRO (0)

/* solver has stopped due to a timeout */
#define TIMEOUT_MPC_Project_FORCESPRO   (2)

/* no progress in line search possible */
#define NOPROGRESS_MPC_Project_FORCESPRO   (-7)

/* fatal internal error - nans occurring */
#define NAN_MPC_Project_FORCESPRO  (-10)

/* invalid values in parameters */
#define PARAM_VALUE_ERROR_MPC_Project_FORCESPRO   (-11)

/* too small timeout given */
#define INVALID_TIMEOUT_MPC_Project_FORCESPRO   (-12)

/* thread error */
#define THREAD_FAILURE_MPC_Project_FORCESPRO  (-98)

/* locking mechanism error */
#define LOCK_FAILURE_MPC_Project_FORCESPRO  (-99)

/* licensing error - solver not valid on this machine */
#define LICENSE_ERROR_MPC_Project_FORCESPRO  (-100)



/* PARAMETERS -----------------------------------------------------------*/
/* fill this with data before calling the solver! */
typedef struct MPC_Project_FORCESPRO_params
{
    /* vector of size 3 */
    MPC_Project_FORCESPRO_float xinit[3];

    /* matrix of size [3 x 5] (column major format) */
    MPC_Project_FORCESPRO_float linear_model1[15];

    /* matrix of size [3 x 5] (column major format) */
    MPC_Project_FORCESPRO_float linear_model2[15];

    /* matrix of size [3 x 5] (column major format) */
    MPC_Project_FORCESPRO_float linear_model3[15];

    /* matrix of size [3 x 5] (column major format) */
    MPC_Project_FORCESPRO_float linear_model4[15];

    /* matrix of size [3 x 5] (column major format) */
    MPC_Project_FORCESPRO_float linear_model5[15];

    /* matrix of size [3 x 5] (column major format) */
    MPC_Project_FORCESPRO_float linear_model6[15];

    /* matrix of size [3 x 5] (column major format) */
    MPC_Project_FORCESPRO_float linear_model7[15];

    /* matrix of size [3 x 5] (column major format) */
    MPC_Project_FORCESPRO_float linear_model8[15];

    /* matrix of size [3 x 5] (column major format) */
    MPC_Project_FORCESPRO_float linear_model9[15];

    /* vector of size 5 */
    MPC_Project_FORCESPRO_float f_error1[5];

    /* vector of size 5 */
    MPC_Project_FORCESPRO_float f_error2[5];

    /* vector of size 5 */
    MPC_Project_FORCESPRO_float f_error3[5];

    /* vector of size 5 */
    MPC_Project_FORCESPRO_float f_error4[5];

    /* vector of size 5 */
    MPC_Project_FORCESPRO_float f_error5[5];

    /* vector of size 5 */
    MPC_Project_FORCESPRO_float f_error6[5];

    /* vector of size 5 */
    MPC_Project_FORCESPRO_float f_error7[5];

    /* vector of size 5 */
    MPC_Project_FORCESPRO_float f_error8[5];

    /* vector of size 5 */
    MPC_Project_FORCESPRO_float f_error9[5];

} MPC_Project_FORCESPRO_params;


/* OUTPUTS --------------------------------------------------------------*/
/* the desired variables are put here by the solver */
typedef struct MPC_Project_FORCESPRO_output
{
    /* vector of size 50 */
    MPC_Project_FORCESPRO_float output[50];

} MPC_Project_FORCESPRO_output;


/* SOLVER INFO ----------------------------------------------------------*/
/* diagnostic data from last interior point step */
typedef struct MPC_Project_FORCESPRO_info
{
    /* iteration number */
    solver_int32_default it;

	/* number of iterations needed to optimality (branch-and-bound) */
	solver_int32_default it2opt;
	
    /* inf-norm of equality constraint residuals */
    MPC_Project_FORCESPRO_float res_eq;
	
    /* inf-norm of inequality constraint residuals */
    MPC_Project_FORCESPRO_float res_ineq;

    /* primal objective */
    MPC_Project_FORCESPRO_float pobj;	
	
    /* dual objective */
    MPC_Project_FORCESPRO_float dobj;	

    /* duality gap := pobj - dobj */
    MPC_Project_FORCESPRO_float dgap;		
	
    /* relative duality gap := |dgap / pobj | */
    MPC_Project_FORCESPRO_float rdgap;		

	/* infinity norm of gradient of Lagrangian*/
	MPC_Project_FORCESPRO_float gradient_lag_norm;

    /* duality measure */
    MPC_Project_FORCESPRO_float mu;

	/* duality measure (after affine step) */
    MPC_Project_FORCESPRO_float mu_aff;
	
    /* centering parameter */
    MPC_Project_FORCESPRO_float sigma;
	
    /* number of backtracking line search steps (affine direction) */
    solver_int32_default lsit_aff;
    
    /* number of backtracking line search steps (combined direction) */
    solver_int32_default lsit_cc;
    
    /* step size (affine direction) */
    MPC_Project_FORCESPRO_float step_aff;
    
    /* step size (combined direction) */
    MPC_Project_FORCESPRO_float step_cc;    

	/* solvertime */
	MPC_Project_FORCESPRO_float solvetime;   

} MPC_Project_FORCESPRO_info;









/* SOLVER FUNCTION DEFINITION -------------------------------------------*/
/* Time of Solver Generation: (UTC) Monday, March 7, 2022 2:38:37 PM */
/* User License expires on: (UTC) Monday, August 22, 2022 10:00:00 PM (approx.) (at the time of code generation) */
/* Solver Static License expires on: (UTC) Monday, August 22, 2022 10:00:00 PM (approx.) */
/* Solver Generation Request Id: 3b9bd838-4ea2-41d1-8443-d81d17672ab4 */
/* examine exitflag before using the result! */
#ifdef __cplusplus
extern "C" {
#endif
extern solver_int32_default MPC_Project_FORCESPRO_solve(MPC_Project_FORCESPRO_params *params, MPC_Project_FORCESPRO_output *output, MPC_Project_FORCESPRO_info *info, FILE *fs);

;



#ifdef __cplusplus
}
#endif

#endif
