
extern "C"{

double mass;

void set_mass(double x){ mass = x;}

double rotational_inertia;

void set_rotational_inertia(double x){ rotational_inertia = x;}

double center_to_front;

void set_center_to_front(double x){ center_to_front = x;}

double center_to_rear;

void set_center_to_rear(double x){ center_to_rear = x;}

double stiffness_front;

void set_stiffness_front(double x){ stiffness_front = x;}

double stiffness_rear;

void set_stiffness_rear(double x){ stiffness_rear = x;}

}
extern "C" {
#include <math.h>
/******************************************************************************
 *                       Code generated with sympy 1.7                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                         This file is part of 'ekf'                         *
 ******************************************************************************/
void err_fun(double *nom_x, double *delta_x, double *out_6196713837050448686) {
   out_6196713837050448686[0] = delta_x[0] + nom_x[0];
   out_6196713837050448686[1] = delta_x[1] + nom_x[1];
   out_6196713837050448686[2] = delta_x[2] + nom_x[2];
   out_6196713837050448686[3] = delta_x[3] + nom_x[3];
   out_6196713837050448686[4] = delta_x[4] + nom_x[4];
   out_6196713837050448686[5] = delta_x[5] + nom_x[5];
   out_6196713837050448686[6] = delta_x[6] + nom_x[6];
   out_6196713837050448686[7] = delta_x[7] + nom_x[7];
}
void inv_err_fun(double *nom_x, double *true_x, double *out_5952161102178974133) {
   out_5952161102178974133[0] = -nom_x[0] + true_x[0];
   out_5952161102178974133[1] = -nom_x[1] + true_x[1];
   out_5952161102178974133[2] = -nom_x[2] + true_x[2];
   out_5952161102178974133[3] = -nom_x[3] + true_x[3];
   out_5952161102178974133[4] = -nom_x[4] + true_x[4];
   out_5952161102178974133[5] = -nom_x[5] + true_x[5];
   out_5952161102178974133[6] = -nom_x[6] + true_x[6];
   out_5952161102178974133[7] = -nom_x[7] + true_x[7];
}
void H_mod_fun(double *state, double *out_3749255405319199885) {
   out_3749255405319199885[0] = 1.0;
   out_3749255405319199885[1] = 0.0;
   out_3749255405319199885[2] = 0.0;
   out_3749255405319199885[3] = 0.0;
   out_3749255405319199885[4] = 0.0;
   out_3749255405319199885[5] = 0.0;
   out_3749255405319199885[6] = 0.0;
   out_3749255405319199885[7] = 0.0;
   out_3749255405319199885[8] = 0.0;
   out_3749255405319199885[9] = 1.0;
   out_3749255405319199885[10] = 0.0;
   out_3749255405319199885[11] = 0.0;
   out_3749255405319199885[12] = 0.0;
   out_3749255405319199885[13] = 0.0;
   out_3749255405319199885[14] = 0.0;
   out_3749255405319199885[15] = 0.0;
   out_3749255405319199885[16] = 0.0;
   out_3749255405319199885[17] = 0.0;
   out_3749255405319199885[18] = 1.0;
   out_3749255405319199885[19] = 0.0;
   out_3749255405319199885[20] = 0.0;
   out_3749255405319199885[21] = 0.0;
   out_3749255405319199885[22] = 0.0;
   out_3749255405319199885[23] = 0.0;
   out_3749255405319199885[24] = 0.0;
   out_3749255405319199885[25] = 0.0;
   out_3749255405319199885[26] = 0.0;
   out_3749255405319199885[27] = 1.0;
   out_3749255405319199885[28] = 0.0;
   out_3749255405319199885[29] = 0.0;
   out_3749255405319199885[30] = 0.0;
   out_3749255405319199885[31] = 0.0;
   out_3749255405319199885[32] = 0.0;
   out_3749255405319199885[33] = 0.0;
   out_3749255405319199885[34] = 0.0;
   out_3749255405319199885[35] = 0.0;
   out_3749255405319199885[36] = 1.0;
   out_3749255405319199885[37] = 0.0;
   out_3749255405319199885[38] = 0.0;
   out_3749255405319199885[39] = 0.0;
   out_3749255405319199885[40] = 0.0;
   out_3749255405319199885[41] = 0.0;
   out_3749255405319199885[42] = 0.0;
   out_3749255405319199885[43] = 0.0;
   out_3749255405319199885[44] = 0.0;
   out_3749255405319199885[45] = 1.0;
   out_3749255405319199885[46] = 0.0;
   out_3749255405319199885[47] = 0.0;
   out_3749255405319199885[48] = 0.0;
   out_3749255405319199885[49] = 0.0;
   out_3749255405319199885[50] = 0.0;
   out_3749255405319199885[51] = 0.0;
   out_3749255405319199885[52] = 0.0;
   out_3749255405319199885[53] = 0.0;
   out_3749255405319199885[54] = 1.0;
   out_3749255405319199885[55] = 0.0;
   out_3749255405319199885[56] = 0.0;
   out_3749255405319199885[57] = 0.0;
   out_3749255405319199885[58] = 0.0;
   out_3749255405319199885[59] = 0.0;
   out_3749255405319199885[60] = 0.0;
   out_3749255405319199885[61] = 0.0;
   out_3749255405319199885[62] = 0.0;
   out_3749255405319199885[63] = 1.0;
}
void f_fun(double *state, double dt, double *out_4382724080370470079) {
   out_4382724080370470079[0] = state[0];
   out_4382724080370470079[1] = state[1];
   out_4382724080370470079[2] = state[2];
   out_4382724080370470079[3] = state[3];
   out_4382724080370470079[4] = state[4];
   out_4382724080370470079[5] = dt*((-state[4] + (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(mass*state[4]))*state[6] + stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(mass*state[1]) + (-stiffness_front*state[0] - stiffness_rear*state[0])*state[5]/(mass*state[4])) + state[5];
   out_4382724080370470079[6] = dt*(center_to_front*stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(rotational_inertia*state[1]) + (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])*state[5]/(rotational_inertia*state[4]) + (-pow(center_to_front, 2)*stiffness_front*state[0] - pow(center_to_rear, 2)*stiffness_rear*state[0])*state[6]/(rotational_inertia*state[4])) + state[6];
   out_4382724080370470079[7] = state[7];
}
void F_fun(double *state, double dt, double *out_5045801728585093620) {
   out_5045801728585093620[0] = 1;
   out_5045801728585093620[1] = 0;
   out_5045801728585093620[2] = 0;
   out_5045801728585093620[3] = 0;
   out_5045801728585093620[4] = 0;
   out_5045801728585093620[5] = 0;
   out_5045801728585093620[6] = 0;
   out_5045801728585093620[7] = 0;
   out_5045801728585093620[8] = 0;
   out_5045801728585093620[9] = 1;
   out_5045801728585093620[10] = 0;
   out_5045801728585093620[11] = 0;
   out_5045801728585093620[12] = 0;
   out_5045801728585093620[13] = 0;
   out_5045801728585093620[14] = 0;
   out_5045801728585093620[15] = 0;
   out_5045801728585093620[16] = 0;
   out_5045801728585093620[17] = 0;
   out_5045801728585093620[18] = 1;
   out_5045801728585093620[19] = 0;
   out_5045801728585093620[20] = 0;
   out_5045801728585093620[21] = 0;
   out_5045801728585093620[22] = 0;
   out_5045801728585093620[23] = 0;
   out_5045801728585093620[24] = 0;
   out_5045801728585093620[25] = 0;
   out_5045801728585093620[26] = 0;
   out_5045801728585093620[27] = 1;
   out_5045801728585093620[28] = 0;
   out_5045801728585093620[29] = 0;
   out_5045801728585093620[30] = 0;
   out_5045801728585093620[31] = 0;
   out_5045801728585093620[32] = 0;
   out_5045801728585093620[33] = 0;
   out_5045801728585093620[34] = 0;
   out_5045801728585093620[35] = 0;
   out_5045801728585093620[36] = 1;
   out_5045801728585093620[37] = 0;
   out_5045801728585093620[38] = 0;
   out_5045801728585093620[39] = 0;
   out_5045801728585093620[40] = dt*(stiffness_front*(-state[2] - state[3] + state[7])/(mass*state[1]) + (-stiffness_front - stiffness_rear)*state[5]/(mass*state[4]) + (-center_to_front*stiffness_front + center_to_rear*stiffness_rear)*state[6]/(mass*state[4]));
   out_5045801728585093620[41] = -dt*stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(mass*pow(state[1], 2));
   out_5045801728585093620[42] = -dt*stiffness_front*state[0]/(mass*state[1]);
   out_5045801728585093620[43] = -dt*stiffness_front*state[0]/(mass*state[1]);
   out_5045801728585093620[44] = dt*((-1 - (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(mass*pow(state[4], 2)))*state[6] - (-stiffness_front*state[0] - stiffness_rear*state[0])*state[5]/(mass*pow(state[4], 2)));
   out_5045801728585093620[45] = dt*(-stiffness_front*state[0] - stiffness_rear*state[0])/(mass*state[4]) + 1;
   out_5045801728585093620[46] = dt*(-state[4] + (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(mass*state[4]));
   out_5045801728585093620[47] = dt*stiffness_front*state[0]/(mass*state[1]);
   out_5045801728585093620[48] = dt*(center_to_front*stiffness_front*(-state[2] - state[3] + state[7])/(rotational_inertia*state[1]) + (-center_to_front*stiffness_front + center_to_rear*stiffness_rear)*state[5]/(rotational_inertia*state[4]) + (-pow(center_to_front, 2)*stiffness_front - pow(center_to_rear, 2)*stiffness_rear)*state[6]/(rotational_inertia*state[4]));
   out_5045801728585093620[49] = -center_to_front*dt*stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(rotational_inertia*pow(state[1], 2));
   out_5045801728585093620[50] = -center_to_front*dt*stiffness_front*state[0]/(rotational_inertia*state[1]);
   out_5045801728585093620[51] = -center_to_front*dt*stiffness_front*state[0]/(rotational_inertia*state[1]);
   out_5045801728585093620[52] = dt*(-(-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])*state[5]/(rotational_inertia*pow(state[4], 2)) - (-pow(center_to_front, 2)*stiffness_front*state[0] - pow(center_to_rear, 2)*stiffness_rear*state[0])*state[6]/(rotational_inertia*pow(state[4], 2)));
   out_5045801728585093620[53] = dt*(-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(rotational_inertia*state[4]);
   out_5045801728585093620[54] = dt*(-pow(center_to_front, 2)*stiffness_front*state[0] - pow(center_to_rear, 2)*stiffness_rear*state[0])/(rotational_inertia*state[4]) + 1;
   out_5045801728585093620[55] = center_to_front*dt*stiffness_front*state[0]/(rotational_inertia*state[1]);
   out_5045801728585093620[56] = 0;
   out_5045801728585093620[57] = 0;
   out_5045801728585093620[58] = 0;
   out_5045801728585093620[59] = 0;
   out_5045801728585093620[60] = 0;
   out_5045801728585093620[61] = 0;
   out_5045801728585093620[62] = 0;
   out_5045801728585093620[63] = 1;
}
void h_25(double *state, double *unused, double *out_1194493752725564015) {
   out_1194493752725564015[0] = state[6];
}
void H_25(double *state, double *unused, double *out_4322809749043410751) {
   out_4322809749043410751[0] = 0;
   out_4322809749043410751[1] = 0;
   out_4322809749043410751[2] = 0;
   out_4322809749043410751[3] = 0;
   out_4322809749043410751[4] = 0;
   out_4322809749043410751[5] = 0;
   out_4322809749043410751[6] = 1;
   out_4322809749043410751[7] = 0;
}
void h_24(double *state, double *unused, double *out_6810928436673228481) {
   out_6810928436673228481[0] = state[4];
   out_6810928436673228481[1] = state[5];
}
void H_24(double *state, double *unused, double *out_5585198813239150883) {
   out_5585198813239150883[0] = 0;
   out_5585198813239150883[1] = 0;
   out_5585198813239150883[2] = 0;
   out_5585198813239150883[3] = 0;
   out_5585198813239150883[4] = 1;
   out_5585198813239150883[5] = 0;
   out_5585198813239150883[6] = 0;
   out_5585198813239150883[7] = 0;
   out_5585198813239150883[8] = 0;
   out_5585198813239150883[9] = 0;
   out_5585198813239150883[10] = 0;
   out_5585198813239150883[11] = 0;
   out_5585198813239150883[12] = 0;
   out_5585198813239150883[13] = 1;
   out_5585198813239150883[14] = 0;
   out_5585198813239150883[15] = 0;
}
void h_30(double *state, double *unused, double *out_5292797051004935879) {
   out_5292797051004935879[0] = state[4];
}
void H_30(double *state, double *unused, double *out_5291089161905772529) {
   out_5291089161905772529[0] = 0;
   out_5291089161905772529[1] = 0;
   out_5291089161905772529[2] = 0;
   out_5291089161905772529[3] = 0;
   out_5291089161905772529[4] = 1;
   out_5291089161905772529[5] = 0;
   out_5291089161905772529[6] = 0;
   out_5291089161905772529[7] = 0;
}
void h_26(double *state, double *unused, double *out_8568644863752392468) {
   out_8568644863752392468[0] = state[7];
}
void H_26(double *state, double *unused, double *out_2981373615347763199) {
   out_2981373615347763199[0] = 0;
   out_2981373615347763199[1] = 0;
   out_2981373615347763199[2] = 0;
   out_2981373615347763199[3] = 0;
   out_2981373615347763199[4] = 0;
   out_2981373615347763199[5] = 0;
   out_2981373615347763199[6] = 0;
   out_2981373615347763199[7] = 1;
}
void h_27(double *state, double *unused, double *out_7601815711540433125) {
   out_7601815711540433125[0] = state[3];
}
void H_27(double *state, double *unused, double *out_4822043635332296950) {
   out_4822043635332296950[0] = 0;
   out_4822043635332296950[1] = 0;
   out_4822043635332296950[2] = 0;
   out_4822043635332296950[3] = 1;
   out_4822043635332296950[4] = 0;
   out_4822043635332296950[5] = 0;
   out_4822043635332296950[6] = 0;
   out_4822043635332296950[7] = 0;
}
void h_29(double *state, double *unused, double *out_291123783344090234) {
   out_291123783344090234[0] = state[1];
}
void H_29(double *state, double *unused, double *out_4716530548050236354) {
   out_4716530548050236354[0] = 0;
   out_4716530548050236354[1] = 1;
   out_4716530548050236354[2] = 0;
   out_4716530548050236354[3] = 0;
   out_4716530548050236354[4] = 0;
   out_4716530548050236354[5] = 0;
   out_4716530548050236354[6] = 0;
   out_4716530548050236354[7] = 0;
}
void h_28(double *state, double *unused, double *out_4215635417619420247) {
   out_4215635417619420247[0] = state[5];
   out_4215635417619420247[1] = state[6];
}
void H_28(double *state, double *unused, double *out_5843712782233905867) {
   out_5843712782233905867[0] = 0;
   out_5843712782233905867[1] = 0;
   out_5843712782233905867[2] = 0;
   out_5843712782233905867[3] = 0;
   out_5843712782233905867[4] = 0;
   out_5843712782233905867[5] = 1;
   out_5843712782233905867[6] = 0;
   out_5843712782233905867[7] = 0;
   out_5843712782233905867[8] = 0;
   out_5843712782233905867[9] = 0;
   out_5843712782233905867[10] = 0;
   out_5843712782233905867[11] = 0;
   out_5843712782233905867[12] = 0;
   out_5843712782233905867[13] = 0;
   out_5843712782233905867[14] = 1;
   out_5843712782233905867[15] = 0;
}
}

extern "C"{
#define DIM 8
#define EDIM 8
#define MEDIM 8
typedef void (*Hfun)(double *, double *, double *);

void predict(double *x, double *P, double *Q, double dt);
const static double MAHA_THRESH_25 = 3.841459;
void update_25(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_24 = 5.991465;
void update_24(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_30 = 3.841459;
void update_30(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_26 = 3.841459;
void update_26(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_27 = 3.841459;
void update_27(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_29 = 3.841459;
void update_29(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_28 = 5.991465;
void update_28(double *, double *, double *, double *, double *);
}

#include <eigen3/Eigen/Dense>
#include <iostream>

typedef Eigen::Matrix<double, DIM, DIM, Eigen::RowMajor> DDM;
typedef Eigen::Matrix<double, EDIM, EDIM, Eigen::RowMajor> EEM;
typedef Eigen::Matrix<double, DIM, EDIM, Eigen::RowMajor> DEM;

void predict(double *in_x, double *in_P, double *in_Q, double dt) {
  typedef Eigen::Matrix<double, MEDIM, MEDIM, Eigen::RowMajor> RRM;

  double nx[DIM] = {0};
  double in_F[EDIM*EDIM] = {0};

  // functions from sympy
  f_fun(in_x, dt, nx);
  F_fun(in_x, dt, in_F);


  EEM F(in_F);
  EEM P(in_P);
  EEM Q(in_Q);

  RRM F_main = F.topLeftCorner(MEDIM, MEDIM);
  P.topLeftCorner(MEDIM, MEDIM) = (F_main * P.topLeftCorner(MEDIM, MEDIM)) * F_main.transpose();
  P.topRightCorner(MEDIM, EDIM - MEDIM) = F_main * P.topRightCorner(MEDIM, EDIM - MEDIM);
  P.bottomLeftCorner(EDIM - MEDIM, MEDIM) = P.bottomLeftCorner(EDIM - MEDIM, MEDIM) * F_main.transpose();

  P = P + dt*Q;

  // copy out state
  memcpy(in_x, nx, DIM * sizeof(double));
  memcpy(in_P, P.data(), EDIM * EDIM * sizeof(double));
}

// note: extra_args dim only correct when null space projecting
// otherwise 1
template <int ZDIM, int EADIM, bool MAHA_TEST>
void update(double *in_x, double *in_P, Hfun h_fun, Hfun H_fun, Hfun Hea_fun, double *in_z, double *in_R, double *in_ea, double MAHA_THRESHOLD) {
  typedef Eigen::Matrix<double, ZDIM, ZDIM, Eigen::RowMajor> ZZM;
  typedef Eigen::Matrix<double, ZDIM, DIM, Eigen::RowMajor> ZDM;
  typedef Eigen::Matrix<double, Eigen::Dynamic, EDIM, Eigen::RowMajor> XEM;
  //typedef Eigen::Matrix<double, EDIM, ZDIM, Eigen::RowMajor> EZM;
  typedef Eigen::Matrix<double, Eigen::Dynamic, 1> X1M;
  typedef Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> XXM;

  double in_hx[ZDIM] = {0};
  double in_H[ZDIM * DIM] = {0};
  double in_H_mod[EDIM * DIM] = {0};
  double delta_x[EDIM] = {0};
  double x_new[DIM] = {0};


  // state x, P
  Eigen::Matrix<double, ZDIM, 1> z(in_z);
  EEM P(in_P);
  ZZM pre_R(in_R);

  // functions from sympy
  h_fun(in_x, in_ea, in_hx);
  H_fun(in_x, in_ea, in_H);
  ZDM pre_H(in_H);

  // get y (y = z - hx)
  Eigen::Matrix<double, ZDIM, 1> pre_y(in_hx); pre_y = z - pre_y;
  X1M y; XXM H; XXM R;
  if (Hea_fun){
    typedef Eigen::Matrix<double, ZDIM, EADIM, Eigen::RowMajor> ZAM;
    double in_Hea[ZDIM * EADIM] = {0};
    Hea_fun(in_x, in_ea, in_Hea);
    ZAM Hea(in_Hea);
    XXM A = Hea.transpose().fullPivLu().kernel();


    y = A.transpose() * pre_y;
    H = A.transpose() * pre_H;
    R = A.transpose() * pre_R * A;
  } else {
    y = pre_y;
    H = pre_H;
    R = pre_R;
  }
  // get modified H
  H_mod_fun(in_x, in_H_mod);
  DEM H_mod(in_H_mod);
  XEM H_err = H * H_mod;

  // Do mahalobis distance test
  if (MAHA_TEST){
    XXM a = (H_err * P * H_err.transpose() + R).inverse();
    double maha_dist = y.transpose() * a * y;
    if (maha_dist > MAHA_THRESHOLD){
      R = 1.0e16 * R;
    }
  }

  // Outlier resilient weighting
  double weight = 1;//(1.5)/(1 + y.squaredNorm()/R.sum());

  // kalman gains and I_KH
  XXM S = ((H_err * P) * H_err.transpose()) + R/weight;
  XEM KT = S.fullPivLu().solve(H_err * P.transpose());
  //EZM K = KT.transpose(); TODO: WHY DOES THIS NOT COMPILE?
  //EZM K = S.fullPivLu().solve(H_err * P.transpose()).transpose();
  //std::cout << "Here is the matrix rot:\n" << K << std::endl;
  EEM I_KH = Eigen::Matrix<double, EDIM, EDIM>::Identity() - (KT.transpose() * H_err);

  // update state by injecting dx
  Eigen::Matrix<double, EDIM, 1> dx(delta_x);
  dx  = (KT.transpose() * y);
  memcpy(delta_x, dx.data(), EDIM * sizeof(double));
  err_fun(in_x, delta_x, x_new);
  Eigen::Matrix<double, DIM, 1> x(x_new);

  // update cov
  P = ((I_KH * P) * I_KH.transpose()) + ((KT.transpose() * R) * KT);

  // copy out state
  memcpy(in_x, x.data(), DIM * sizeof(double));
  memcpy(in_P, P.data(), EDIM * EDIM * sizeof(double));
  memcpy(in_z, y.data(), y.rows() * sizeof(double));
}



extern "C"{

      void update_25(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
        update<1,3,0>(in_x, in_P, h_25, H_25, NULL, in_z, in_R, in_ea, MAHA_THRESH_25);
      }
    
      void update_24(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
        update<2,3,0>(in_x, in_P, h_24, H_24, NULL, in_z, in_R, in_ea, MAHA_THRESH_24);
      }
    
      void update_30(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
        update<1,3,0>(in_x, in_P, h_30, H_30, NULL, in_z, in_R, in_ea, MAHA_THRESH_30);
      }
    
      void update_26(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
        update<1,3,0>(in_x, in_P, h_26, H_26, NULL, in_z, in_R, in_ea, MAHA_THRESH_26);
      }
    
      void update_27(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
        update<1,3,0>(in_x, in_P, h_27, H_27, NULL, in_z, in_R, in_ea, MAHA_THRESH_27);
      }
    
      void update_29(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
        update<1,3,0>(in_x, in_P, h_29, H_29, NULL, in_z, in_R, in_ea, MAHA_THRESH_29);
      }
    
      void update_28(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
        update<2,3,0>(in_x, in_P, h_28, H_28, NULL, in_z, in_R, in_ea, MAHA_THRESH_28);
      }
    
}
