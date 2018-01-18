#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SmoothCameraOrbit
struct  SmoothCameraOrbit_t604892967  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform SmoothCameraOrbit::target
	Transform_t3275118058 * ___target_2;
	// UnityEngine.Vector3 SmoothCameraOrbit::targetOffset
	Vector3_t2243707580  ___targetOffset_3;
	// System.Single SmoothCameraOrbit::distance
	float ___distance_4;
	// System.Single SmoothCameraOrbit::maxDistance
	float ___maxDistance_5;
	// System.Single SmoothCameraOrbit::minDistance
	float ___minDistance_6;
	// System.Single SmoothCameraOrbit::xSpeed
	float ___xSpeed_7;
	// System.Single SmoothCameraOrbit::ySpeed
	float ___ySpeed_8;
	// System.Int32 SmoothCameraOrbit::yMinLimit
	int32_t ___yMinLimit_9;
	// System.Int32 SmoothCameraOrbit::yMaxLimit
	int32_t ___yMaxLimit_10;
	// System.Int32 SmoothCameraOrbit::zoomRate
	int32_t ___zoomRate_11;
	// System.Single SmoothCameraOrbit::panSpeed
	float ___panSpeed_12;
	// System.Single SmoothCameraOrbit::zoomDampening
	float ___zoomDampening_13;
	// System.Single SmoothCameraOrbit::autoRotate
	float ___autoRotate_14;
	// System.Single SmoothCameraOrbit::xDeg
	float ___xDeg_15;
	// System.Single SmoothCameraOrbit::yDeg
	float ___yDeg_16;
	// System.Single SmoothCameraOrbit::currentDistance
	float ___currentDistance_17;
	// System.Single SmoothCameraOrbit::desiredDistance
	float ___desiredDistance_18;
	// UnityEngine.Quaternion SmoothCameraOrbit::currentRotation
	Quaternion_t4030073918  ___currentRotation_19;
	// UnityEngine.Quaternion SmoothCameraOrbit::desiredRotation
	Quaternion_t4030073918  ___desiredRotation_20;
	// UnityEngine.Quaternion SmoothCameraOrbit::rotation
	Quaternion_t4030073918  ___rotation_21;
	// UnityEngine.Vector3 SmoothCameraOrbit::position
	Vector3_t2243707580  ___position_22;
	// System.Single SmoothCameraOrbit::idleTimer
	float ___idleTimer_23;
	// System.Single SmoothCameraOrbit::idleSmooth
	float ___idleSmooth_24;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(SmoothCameraOrbit_t604892967, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_targetOffset_3() { return static_cast<int32_t>(offsetof(SmoothCameraOrbit_t604892967, ___targetOffset_3)); }
	inline Vector3_t2243707580  get_targetOffset_3() const { return ___targetOffset_3; }
	inline Vector3_t2243707580 * get_address_of_targetOffset_3() { return &___targetOffset_3; }
	inline void set_targetOffset_3(Vector3_t2243707580  value)
	{
		___targetOffset_3 = value;
	}

	inline static int32_t get_offset_of_distance_4() { return static_cast<int32_t>(offsetof(SmoothCameraOrbit_t604892967, ___distance_4)); }
	inline float get_distance_4() const { return ___distance_4; }
	inline float* get_address_of_distance_4() { return &___distance_4; }
	inline void set_distance_4(float value)
	{
		___distance_4 = value;
	}

	inline static int32_t get_offset_of_maxDistance_5() { return static_cast<int32_t>(offsetof(SmoothCameraOrbit_t604892967, ___maxDistance_5)); }
	inline float get_maxDistance_5() const { return ___maxDistance_5; }
	inline float* get_address_of_maxDistance_5() { return &___maxDistance_5; }
	inline void set_maxDistance_5(float value)
	{
		___maxDistance_5 = value;
	}

	inline static int32_t get_offset_of_minDistance_6() { return static_cast<int32_t>(offsetof(SmoothCameraOrbit_t604892967, ___minDistance_6)); }
	inline float get_minDistance_6() const { return ___minDistance_6; }
	inline float* get_address_of_minDistance_6() { return &___minDistance_6; }
	inline void set_minDistance_6(float value)
	{
		___minDistance_6 = value;
	}

	inline static int32_t get_offset_of_xSpeed_7() { return static_cast<int32_t>(offsetof(SmoothCameraOrbit_t604892967, ___xSpeed_7)); }
	inline float get_xSpeed_7() const { return ___xSpeed_7; }
	inline float* get_address_of_xSpeed_7() { return &___xSpeed_7; }
	inline void set_xSpeed_7(float value)
	{
		___xSpeed_7 = value;
	}

	inline static int32_t get_offset_of_ySpeed_8() { return static_cast<int32_t>(offsetof(SmoothCameraOrbit_t604892967, ___ySpeed_8)); }
	inline float get_ySpeed_8() const { return ___ySpeed_8; }
	inline float* get_address_of_ySpeed_8() { return &___ySpeed_8; }
	inline void set_ySpeed_8(float value)
	{
		___ySpeed_8 = value;
	}

	inline static int32_t get_offset_of_yMinLimit_9() { return static_cast<int32_t>(offsetof(SmoothCameraOrbit_t604892967, ___yMinLimit_9)); }
	inline int32_t get_yMinLimit_9() const { return ___yMinLimit_9; }
	inline int32_t* get_address_of_yMinLimit_9() { return &___yMinLimit_9; }
	inline void set_yMinLimit_9(int32_t value)
	{
		___yMinLimit_9 = value;
	}

	inline static int32_t get_offset_of_yMaxLimit_10() { return static_cast<int32_t>(offsetof(SmoothCameraOrbit_t604892967, ___yMaxLimit_10)); }
	inline int32_t get_yMaxLimit_10() const { return ___yMaxLimit_10; }
	inline int32_t* get_address_of_yMaxLimit_10() { return &___yMaxLimit_10; }
	inline void set_yMaxLimit_10(int32_t value)
	{
		___yMaxLimit_10 = value;
	}

	inline static int32_t get_offset_of_zoomRate_11() { return static_cast<int32_t>(offsetof(SmoothCameraOrbit_t604892967, ___zoomRate_11)); }
	inline int32_t get_zoomRate_11() const { return ___zoomRate_11; }
	inline int32_t* get_address_of_zoomRate_11() { return &___zoomRate_11; }
	inline void set_zoomRate_11(int32_t value)
	{
		___zoomRate_11 = value;
	}

	inline static int32_t get_offset_of_panSpeed_12() { return static_cast<int32_t>(offsetof(SmoothCameraOrbit_t604892967, ___panSpeed_12)); }
	inline float get_panSpeed_12() const { return ___panSpeed_12; }
	inline float* get_address_of_panSpeed_12() { return &___panSpeed_12; }
	inline void set_panSpeed_12(float value)
	{
		___panSpeed_12 = value;
	}

	inline static int32_t get_offset_of_zoomDampening_13() { return static_cast<int32_t>(offsetof(SmoothCameraOrbit_t604892967, ___zoomDampening_13)); }
	inline float get_zoomDampening_13() const { return ___zoomDampening_13; }
	inline float* get_address_of_zoomDampening_13() { return &___zoomDampening_13; }
	inline void set_zoomDampening_13(float value)
	{
		___zoomDampening_13 = value;
	}

	inline static int32_t get_offset_of_autoRotate_14() { return static_cast<int32_t>(offsetof(SmoothCameraOrbit_t604892967, ___autoRotate_14)); }
	inline float get_autoRotate_14() const { return ___autoRotate_14; }
	inline float* get_address_of_autoRotate_14() { return &___autoRotate_14; }
	inline void set_autoRotate_14(float value)
	{
		___autoRotate_14 = value;
	}

	inline static int32_t get_offset_of_xDeg_15() { return static_cast<int32_t>(offsetof(SmoothCameraOrbit_t604892967, ___xDeg_15)); }
	inline float get_xDeg_15() const { return ___xDeg_15; }
	inline float* get_address_of_xDeg_15() { return &___xDeg_15; }
	inline void set_xDeg_15(float value)
	{
		___xDeg_15 = value;
	}

	inline static int32_t get_offset_of_yDeg_16() { return static_cast<int32_t>(offsetof(SmoothCameraOrbit_t604892967, ___yDeg_16)); }
	inline float get_yDeg_16() const { return ___yDeg_16; }
	inline float* get_address_of_yDeg_16() { return &___yDeg_16; }
	inline void set_yDeg_16(float value)
	{
		___yDeg_16 = value;
	}

	inline static int32_t get_offset_of_currentDistance_17() { return static_cast<int32_t>(offsetof(SmoothCameraOrbit_t604892967, ___currentDistance_17)); }
	inline float get_currentDistance_17() const { return ___currentDistance_17; }
	inline float* get_address_of_currentDistance_17() { return &___currentDistance_17; }
	inline void set_currentDistance_17(float value)
	{
		___currentDistance_17 = value;
	}

	inline static int32_t get_offset_of_desiredDistance_18() { return static_cast<int32_t>(offsetof(SmoothCameraOrbit_t604892967, ___desiredDistance_18)); }
	inline float get_desiredDistance_18() const { return ___desiredDistance_18; }
	inline float* get_address_of_desiredDistance_18() { return &___desiredDistance_18; }
	inline void set_desiredDistance_18(float value)
	{
		___desiredDistance_18 = value;
	}

	inline static int32_t get_offset_of_currentRotation_19() { return static_cast<int32_t>(offsetof(SmoothCameraOrbit_t604892967, ___currentRotation_19)); }
	inline Quaternion_t4030073918  get_currentRotation_19() const { return ___currentRotation_19; }
	inline Quaternion_t4030073918 * get_address_of_currentRotation_19() { return &___currentRotation_19; }
	inline void set_currentRotation_19(Quaternion_t4030073918  value)
	{
		___currentRotation_19 = value;
	}

	inline static int32_t get_offset_of_desiredRotation_20() { return static_cast<int32_t>(offsetof(SmoothCameraOrbit_t604892967, ___desiredRotation_20)); }
	inline Quaternion_t4030073918  get_desiredRotation_20() const { return ___desiredRotation_20; }
	inline Quaternion_t4030073918 * get_address_of_desiredRotation_20() { return &___desiredRotation_20; }
	inline void set_desiredRotation_20(Quaternion_t4030073918  value)
	{
		___desiredRotation_20 = value;
	}

	inline static int32_t get_offset_of_rotation_21() { return static_cast<int32_t>(offsetof(SmoothCameraOrbit_t604892967, ___rotation_21)); }
	inline Quaternion_t4030073918  get_rotation_21() const { return ___rotation_21; }
	inline Quaternion_t4030073918 * get_address_of_rotation_21() { return &___rotation_21; }
	inline void set_rotation_21(Quaternion_t4030073918  value)
	{
		___rotation_21 = value;
	}

	inline static int32_t get_offset_of_position_22() { return static_cast<int32_t>(offsetof(SmoothCameraOrbit_t604892967, ___position_22)); }
	inline Vector3_t2243707580  get_position_22() const { return ___position_22; }
	inline Vector3_t2243707580 * get_address_of_position_22() { return &___position_22; }
	inline void set_position_22(Vector3_t2243707580  value)
	{
		___position_22 = value;
	}

	inline static int32_t get_offset_of_idleTimer_23() { return static_cast<int32_t>(offsetof(SmoothCameraOrbit_t604892967, ___idleTimer_23)); }
	inline float get_idleTimer_23() const { return ___idleTimer_23; }
	inline float* get_address_of_idleTimer_23() { return &___idleTimer_23; }
	inline void set_idleTimer_23(float value)
	{
		___idleTimer_23 = value;
	}

	inline static int32_t get_offset_of_idleSmooth_24() { return static_cast<int32_t>(offsetof(SmoothCameraOrbit_t604892967, ___idleSmooth_24)); }
	inline float get_idleSmooth_24() const { return ___idleSmooth_24; }
	inline float* get_address_of_idleSmooth_24() { return &___idleSmooth_24; }
	inline void set_idleSmooth_24(float value)
	{
		___idleSmooth_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
