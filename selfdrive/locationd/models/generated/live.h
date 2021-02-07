/******************************************************************************
 *                       Code generated with sympy 1.7                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                         This file is part of 'ekf'                         *
 ******************************************************************************/
void err_fun(double *nom_x, double *delta_x, double *out_3730759611419680762);
void inv_err_fun(double *nom_x, double *true_x, double *out_6064404014051058563);
void H_mod_fun(double *state, double *out_990905570042633888);
void f_fun(double *state, double dt, double *out_2178959022157800977);
void F_fun(double *state, double dt, double *out_5927445659702667646);
void h_3(double *state, double *unused, double *out_5861701234625644834);
void H_3(double *state, double *unused, double *out_2057708741624993270);
void h_4(double *state, double *unused, double *out_3637454447816401198);
void H_4(double *state, double *unused, double *out_6215277552466588904);
void h_9(double *state, double *unused, double *out_6217687642362822503);
void H_9(double *state, double *unused, double *out_7551614663023492019);
void h_10(double *state, double *unused, double *out_3218912298062568092);
void H_10(double *state, double *unused, double *out_153739292318680940);
void h_12(double *state, double *unused, double *out_358044122649162617);
void H_12(double *state, double *unused, double *out_4108722040727379335);
void h_31(double *state, double *unused, double *out_462014884148019540);
void H_31(double *state, double *unused, double *out_2385454432886431028);
void h_32(double *state, double *unused, double *out_101168556102645004);
void H_32(double *state, double *unused, double *out_8380212721367546239);
void h_13(double *state, double *unused, double *out_8394336974798600600);
void H_13(double *state, double *unused, double *out_808863721625890269);
void h_14(double *state, double *unused, double *out_6217687642362822503);
void H_14(double *state, double *unused, double *out_7551614663023492019);
void h_19(double *state, double *unused, double *out_4316714410117964799);
void H_19(double *state, double *unused, double *out_6462449559583628416);
#define DIM 23
#define EDIM 22
#define MEDIM 22
typedef void (*Hfun)(double *, double *, double *);

void predict(double *x, double *P, double *Q, double dt);
const static double MAHA_THRESH_3 = 3.841459;
void update_3(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_4 = 7.814728;
void update_4(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_9 = 7.814728;
void update_9(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_10 = 7.814728;
void update_10(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_12 = 7.814728;
void update_12(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_31 = 7.814728;
void update_31(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_32 = 9.487729;
void update_32(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_13 = 7.814728;
void update_13(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_14 = 7.814728;
void update_14(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_19 = 7.814728;
void update_19(double *, double *, double *, double *, double *);