#include <iostream>
#include <cmath>
double System_Calculate_After_Coordinate_X(double System_Define_X_Coordinate,
 double System_Define_Y_Coordinate,
 double System_Define_Rotation_Angle);
 void System_Define_X_after_rotate(double System_Define_X_Coordinate,
 double System_Define_Y_Coordinate,
 double System_Define_Rotation_Angle);
 double System_Calculate_After_Coordinate_Y(double System_Define_X_Coordinate,
 double System_Define_Y_Coordinate,
 double System_Define_Rotation_Angle);
 void System_Define_Y_after_rotate(double System_Define_X_Coordinate,
 double System_Define_Y_Coordinate,
 double System_Define_Rotation_Angle);
 void LOGO();
 void FOOTER();
int main() {
  /*(x,y),angle,calculation for (x',y')*/
 double System_Define_X_Coordinate;
 double System_Define_Y_Coordinate;
 double System_Define_Rotation_Angle;
 bool System_LOOPING_conditions;
 System_LOOPING_conditions = true;
 char System_DEFINE_ARGUMENT;
 while(System_LOOPING_conditions) {
   LOGO();
   FOOTER();
   std::cout << "x0 coordinate: " << std::endl;
 std::cin >> System_Define_X_Coordinate;
 std::cout << "y0 coordinate: " << std::endl;
 std::cin >> System_Define_Y_Coordinate;
 std::cout << "rotate (degrees): " << std::endl;
 std::cin >> System_Define_Rotation_Angle;
 System_Define_X_after_rotate( System_Define_X_Coordinate,
  System_Define_Y_Coordinate,
  System_Define_Rotation_Angle);
  System_Define_Y_after_rotate( System_Define_X_Coordinate,
  System_Define_Y_Coordinate,
  System_Define_Rotation_Angle);
  std::cout << "Next calculation? (y/n): " << std::endl;
  std::cin >> System_DEFINE_ARGUMENT;
  if (System_DEFINE_ARGUMENT == 'n') {
    break;
  } else {
    
  }
 }
 
  std::cin.get();
  return 0;
}
double System_Calculate_After_Coordinate_X(double System_Define_X_Coordinate,
 double System_Define_Y_Coordinate,
 double System_Define_Rotation_Angle) {
   double define_constant_pi;
   define_constant_pi = atan(1)*(4);
   double Define_Matrix_1_1;
   Define_Matrix_1_1 = cos(System_Define_Rotation_Angle * (define_constant_pi/180) );
   double Define_Matrix_1_2;
   Define_Matrix_1_2 = -sin(System_Define_Rotation_Angle * (define_constant_pi/180));
   double Define_Matrix_2_1;
   Define_Matrix_2_1 = sin(System_Define_Rotation_Angle * (define_constant_pi/180));
   double Define_Matrix_2_2;
   Define_Matrix_2_2 = cos(System_Define_Rotation_Angle * (define_constant_pi/180));
   double define_x0;
   define_x0 = System_Define_X_Coordinate;
   double define_y0;
   define_y0 = System_Define_Y_Coordinate;
   double X_After_Rotate = (Define_Matrix_1_1 * define_x0) + (Define_Matrix_1_2 * define_y0);
   return X_After_Rotate;
 }
void System_Define_X_after_rotate(double System_Define_X_Coordinate,
 double System_Define_Y_Coordinate,
 double System_Define_Rotation_Angle) {
   std::cout << "x' : " << System_Calculate_After_Coordinate_X( System_Define_X_Coordinate,
  System_Define_Y_Coordinate,
  System_Define_Rotation_Angle) << std::endl;
   return;
 }
double System_Calculate_After_Coordinate_Y(double System_Define_X_Coordinate,
 double System_Define_Y_Coordinate,
 double System_Define_Rotation_Angle) {
   double define_constant_pi;
   define_constant_pi = atan(1)*(4);
   double Define_Matrix_1_1;
   Define_Matrix_1_1 = cos(System_Define_Rotation_Angle * (define_constant_pi/180) );
   double Define_Matrix_1_2;
   Define_Matrix_1_2 = -sin(System_Define_Rotation_Angle * (define_constant_pi/180));
   double Define_Matrix_2_1;
   Define_Matrix_2_1 = sin(System_Define_Rotation_Angle * (define_constant_pi/180));
   double Define_Matrix_2_2;
   Define_Matrix_2_2 = cos(System_Define_Rotation_Angle * (define_constant_pi/180));
   double define_x0;
   define_x0 = System_Define_X_Coordinate;
   double define_y0;
   define_y0 = System_Define_Y_Coordinate;
   double Y_After_Rotate = (Define_Matrix_2_1 * define_x0) + (Define_Matrix_2_2 * define_y0);
   return Y_After_Rotate;
 }
 void System_Define_Y_after_rotate(double System_Define_X_Coordinate,
 double System_Define_Y_Coordinate,
 double System_Define_Rotation_Angle) {
   std::cout << "y' : " << System_Calculate_After_Coordinate_Y( System_Define_X_Coordinate,
  System_Define_Y_Coordinate,
  System_Define_Rotation_Angle) << std::endl;
   return;
 }
 void LOGO() {
   std::cout << "========+++ ";
   std::cout << "A F T E R B A S I C";
   std::cout << " +++========" << std::endl;
   return;
 }
 void FOOTER() {
   std::cout << "GEOMETRY TRANSFORMATION (ROTATION) - FREE SOFTWARE ©2021 AfterBasic" << std::endl;
   return;
 }