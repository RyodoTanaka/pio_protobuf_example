/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.4.7 at Tue May 16 20:21:31 2023. */

#include "imu.pb.hpp"
#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

PB_BIND(sensor_Vector3d, sensor_Vector3d, AUTO)


PB_BIND(sensor_IMU, sensor_IMU, AUTO)



#ifndef PB_CONVERT_DOUBLE_FLOAT
/* On some platforms (such as AVR), double is really float.
 * To be able to encode/decode double on these platforms, you need.
 * to define PB_CONVERT_DOUBLE_FLOAT in pb.h or compiler command line.
 */
PB_STATIC_ASSERT(sizeof(double) == 8, DOUBLE_MUST_BE_8_BYTES)
#endif

