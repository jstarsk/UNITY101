#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// PlanetControl
struct PlanetControl_t3225957135;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MouseOrbitImproved
struct  MouseOrbitImproved_t475395003  : public MonoBehaviour_t1158329972
{
public:
	// PlanetControl MouseOrbitImproved::planet
	PlanetControl_t3225957135 * ___planet_2;
	// UnityEngine.Transform MouseOrbitImproved::target
	Transform_t3275118058 * ___target_3;
	// System.Single MouseOrbitImproved::distance
	float ___distance_4;
	// System.Single MouseOrbitImproved::xSpeed
	float ___xSpeed_5;
	// System.Single MouseOrbitImproved::ySpeed
	float ___ySpeed_6;
	// System.Single MouseOrbitImproved::lastDist
	float ___lastDist_7;
	// System.Int32 MouseOrbitImproved::yMinLimit
	int32_t ___yMinLimit_8;
	// System.Int32 MouseOrbitImproved::yMaxLimit
	int32_t ___yMaxLimit_9;
	// System.Single MouseOrbitImproved::x
	float ___x_10;
	// System.Single MouseOrbitImproved::y
	float ___y_11;
	// System.Single MouseOrbitImproved::X
	float ___X_12;
	// System.Single MouseOrbitImproved::Y
	float ___Y_13;
	// UnityEngine.Camera MouseOrbitImproved::cam
	Camera_t189460977 * ___cam_14;

public:
	inline static int32_t get_offset_of_planet_2() { return static_cast<int32_t>(offsetof(MouseOrbitImproved_t475395003, ___planet_2)); }
	inline PlanetControl_t3225957135 * get_planet_2() const { return ___planet_2; }
	inline PlanetControl_t3225957135 ** get_address_of_planet_2() { return &___planet_2; }
	inline void set_planet_2(PlanetControl_t3225957135 * value)
	{
		___planet_2 = value;
		Il2CppCodeGenWriteBarrier(&___planet_2, value);
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(MouseOrbitImproved_t475395003, ___target_3)); }
	inline Transform_t3275118058 * get_target_3() const { return ___target_3; }
	inline Transform_t3275118058 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(Transform_t3275118058 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier(&___target_3, value);
	}

	inline static int32_t get_offset_of_distance_4() { return static_cast<int32_t>(offsetof(MouseOrbitImproved_t475395003, ___distance_4)); }
	inline float get_distance_4() const { return ___distance_4; }
	inline float* get_address_of_distance_4() { return &___distance_4; }
	inline void set_distance_4(float value)
	{
		___distance_4 = value;
	}

	inline static int32_t get_offset_of_xSpeed_5() { return static_cast<int32_t>(offsetof(MouseOrbitImproved_t475395003, ___xSpeed_5)); }
	inline float get_xSpeed_5() const { return ___xSpeed_5; }
	inline float* get_address_of_xSpeed_5() { return &___xSpeed_5; }
	inline void set_xSpeed_5(float value)
	{
		___xSpeed_5 = value;
	}

	inline static int32_t get_offset_of_ySpeed_6() { return static_cast<int32_t>(offsetof(MouseOrbitImproved_t475395003, ___ySpeed_6)); }
	inline float get_ySpeed_6() const { return ___ySpeed_6; }
	inline float* get_address_of_ySpeed_6() { return &___ySpeed_6; }
	inline void set_ySpeed_6(float value)
	{
		___ySpeed_6 = value;
	}

	inline static int32_t get_offset_of_lastDist_7() { return static_cast<int32_t>(offsetof(MouseOrbitImproved_t475395003, ___lastDist_7)); }
	inline float get_lastDist_7() const { return ___lastDist_7; }
	inline float* get_address_of_lastDist_7() { return &___lastDist_7; }
	inline void set_lastDist_7(float value)
	{
		___lastDist_7 = value;
	}

	inline static int32_t get_offset_of_yMinLimit_8() { return static_cast<int32_t>(offsetof(MouseOrbitImproved_t475395003, ___yMinLimit_8)); }
	inline int32_t get_yMinLimit_8() const { return ___yMinLimit_8; }
	inline int32_t* get_address_of_yMinLimit_8() { return &___yMinLimit_8; }
	inline void set_yMinLimit_8(int32_t value)
	{
		___yMinLimit_8 = value;
	}

	inline static int32_t get_offset_of_yMaxLimit_9() { return static_cast<int32_t>(offsetof(MouseOrbitImproved_t475395003, ___yMaxLimit_9)); }
	inline int32_t get_yMaxLimit_9() const { return ___yMaxLimit_9; }
	inline int32_t* get_address_of_yMaxLimit_9() { return &___yMaxLimit_9; }
	inline void set_yMaxLimit_9(int32_t value)
	{
		___yMaxLimit_9 = value;
	}

	inline static int32_t get_offset_of_x_10() { return static_cast<int32_t>(offsetof(MouseOrbitImproved_t475395003, ___x_10)); }
	inline float get_x_10() const { return ___x_10; }
	inline float* get_address_of_x_10() { return &___x_10; }
	inline void set_x_10(float value)
	{
		___x_10 = value;
	}

	inline static int32_t get_offset_of_y_11() { return static_cast<int32_t>(offsetof(MouseOrbitImproved_t475395003, ___y_11)); }
	inline float get_y_11() const { return ___y_11; }
	inline float* get_address_of_y_11() { return &___y_11; }
	inline void set_y_11(float value)
	{
		___y_11 = value;
	}

	inline static int32_t get_offset_of_X_12() { return static_cast<int32_t>(offsetof(MouseOrbitImproved_t475395003, ___X_12)); }
	inline float get_X_12() const { return ___X_12; }
	inline float* get_address_of_X_12() { return &___X_12; }
	inline void set_X_12(float value)
	{
		___X_12 = value;
	}

	inline static int32_t get_offset_of_Y_13() { return static_cast<int32_t>(offsetof(MouseOrbitImproved_t475395003, ___Y_13)); }
	inline float get_Y_13() const { return ___Y_13; }
	inline float* get_address_of_Y_13() { return &___Y_13; }
	inline void set_Y_13(float value)
	{
		___Y_13 = value;
	}

	inline static int32_t get_offset_of_cam_14() { return static_cast<int32_t>(offsetof(MouseOrbitImproved_t475395003, ___cam_14)); }
	inline Camera_t189460977 * get_cam_14() const { return ___cam_14; }
	inline Camera_t189460977 ** get_address_of_cam_14() { return &___cam_14; }
	inline void set_cam_14(Camera_t189460977 * value)
	{
		___cam_14 = value;
		Il2CppCodeGenWriteBarrier(&___cam_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
