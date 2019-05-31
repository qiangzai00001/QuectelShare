/* ov7251_lib.h
 *
 * DESCRIPTION: ov7251 sensor library
 * Auto-Generated by Sensor Driver Generator tool
 *
 * Copyright (c) 2015, 2017 Qualcomm Technologies, Inc.
 * All Rights Reserved.
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 */

#ifndef __OV751_LIB_H__
#define __OV7251_LIB_H__

#include "sensor_lib.h"

#define SENSOR_MODEL_NO_OV7251 "ov7251"
#define OV7251_LOAD_CHROMATIX(n) \
  "libchromatix_"SENSOR_MODEL_NO_OV7251"_"#n".so"


static struct msm_camera_i2c_reg_array ov7251_init_demo_settings[] = {
   {0x0103, 0x01},
};

static struct msm_camera_i2c_reg_array ov7251_640x480_30fps[] = {
    {0x3005, 0x02},
    {0x3012, 0xc0},
    {0x3013, 0xd2},
    {0x3014, 0x04},
    {0x3016, 0xf0},
    {0x3017, 0xf0},
    {0x3018, 0xf0},
    {0x301a, 0xf0},
    {0x301b, 0xf0},
    {0x301c, 0xf0},
    {0x3023, 0x05},
    {0x3037, 0xf0},
    {0x3098, 0x04},
    {0x3099, 0x28},
    {0x309a, 0x05},
    {0x309b, 0x04},
    {0x30b0, 0x0a},
    {0x30b1, 0x01},
    {0x30b3, 0x64},
    {0x30b4, 0x03},
    {0x30b5, 0x05},
    {0x3106, 0xda},
    {0x3500, 0x00},
    {0x3501, 0x1f},
    {0x3502, 0x80},
    {0x3503, 0x07},
    {0x3509, 0x10},
    {0x350b, 0x10},
    {0x3600, 0x1c},
    {0x3602, 0x62},
    {0x3620, 0xb7},
    {0x3622, 0x04},
    {0x3626, 0x21},
    {0x3627, 0x30},
    {0x3630, 0x44},
    {0x3631, 0x35},
    {0x3634, 0x60},
    {0x3636, 0x00},
    {0x3662, 0x01},
    {0x3663, 0x70},
    {0x3664, 0x50},
    {0x3666, 0x0a},
    {0x3669, 0x1a},
    {0x366a, 0x00},
    {0x366b, 0x50},
    {0x3673, 0x01},
    {0x3674, 0xff},
    {0x3675, 0x03},
    {0x3705, 0xc1},
    {0x3709, 0x40},
    {0x373c, 0x08},
    {0x3742, 0x00},
    {0x3757, 0xb3},
    {0x3788, 0x00},
    {0x37a8, 0x01},
    {0x37a9, 0xc0},
    {0x3800, 0x00},
    {0x3801, 0x04},
    {0x3802, 0x00},
    {0x3803, 0x04},
    {0x3804, 0x02},
    {0x3805, 0x8b},
    {0x3806, 0x01},
    {0x3807, 0xeb},
    {0x3808, 0x02},
    {0x3809, 0x80},
    {0x380a, 0x01},
    {0x380b, 0xe0},
    {0x380c, 0x03},
    {0x380d, 0xa0},
    {0x380e, 0x06},
    {0x380f, 0xbc},
    {0x3810, 0x00},
    {0x3811, 0x04},
    {0x3812, 0x00},
    {0x3813, 0x05},
    {0x3814, 0x11},
    {0x3815, 0x11},
    {0x3820, 0x40},
    {0x3821, 0x00},
    {0x382f, 0x0e},
    {0x3832, 0x00},
    {0x3833, 0x05},
    {0x3834, 0x00},
    {0x3835, 0x0c},
    {0x3837, 0x00},
    {0x3b80, 0x00},
    {0x3b81, 0xa5},
    {0x3b82, 0x10},
    {0x3b83, 0x00},
    {0x3b84, 0x08},
    {0x3b85, 0x00},
    {0x3b86, 0x01},
    {0x3b87, 0x00},
    {0x3b88, 0x00},
    {0x3b89, 0x00},
    {0x3b8a, 0x00},
    {0x3b8b, 0x05},
    {0x3b8c, 0x00},
    {0x3b8d, 0x00},
    {0x3b8e, 0x00},
    {0x3b8f, 0x1a},
    {0x3b94, 0x05},
    {0x3b95, 0xf2},
    {0x3b96, 0x40},
    {0x3c00, 0x89},
    {0x3c01, 0x63},
    {0x3c02, 0x01},
    {0x3c03, 0x00},
    {0x3c04, 0x00},
    {0x3c05, 0x03},
    {0x3c06, 0x00},
    {0x3c07, 0x06},
    {0x3c0c, 0x01},
    {0x3c0d, 0xd0},
    {0x3c0e, 0x02},
    {0x3c0f, 0x0a},
    {0x4001, 0x42},
    {0x4004, 0x04},
    {0x4005, 0x00},
    {0x404e, 0x01},
    {0x4300, 0xff},
    {0x4301, 0x00},
    {0x4315, 0x00},
    {0x4501, 0x48},
    {0x4600, 0x00},
    {0x4601, 0x4e},
    {0x4801, 0x0f},
    {0x4806, 0x0f},
    {0x4819, 0xaa},
    {0x4823, 0x3e},
    {0x4837, 0x19},
    {0x4a0d, 0x00},
    {0x4a47, 0x7f},
    {0x4a49, 0xf0},
    {0x4a4b, 0x30},
    {0x5000, 0x85},
    {0x5001, 0x80},
};
#endif