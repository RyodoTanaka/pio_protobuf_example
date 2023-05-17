#include <iostream>
#include <sstream>
#include <vector>
#include <unordered_map>

#include <pb_encode.h>
#include <pb_decode.h>
#include <addressbook.pb.hpp>
#include <timestamp.pb.hpp>
#include <duration.pb.hpp>
#include <sample.pb.hpp>
#include <imu.pb.hpp>

int main(void)
{
  _sensor_IMU imu0 = sensor_IMU_init_zero;
  _sensor_IMU imu1 = sensor_IMU_init_zero;

  imu0.acceleration.x = 1;
  imu0.acceleration.y = 2;
  imu0.acceleration.z = 3;

  using namespace std;
  cout << imu0.acceleration.x << ", " << imu0.acceleration.y << ", " << imu0.acceleration.z << endl;
  cout << imu1.acceleration.x << ", " << imu1.acceleration.y << ", " << imu1.acceleration.z << endl;
  
  return 0;
}
