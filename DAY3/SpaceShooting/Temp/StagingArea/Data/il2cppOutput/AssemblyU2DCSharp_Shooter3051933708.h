#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Shooter
struct  Shooter_t3051933708  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Shooter::bulletPrefab
	GameObject_t1756533147 * ___bulletPrefab_2;
	// System.Single Shooter::bulletSpeed
	float ___bulletSpeed_3;

public:
	inline static int32_t get_offset_of_bulletPrefab_2() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___bulletPrefab_2)); }
	inline GameObject_t1756533147 * get_bulletPrefab_2() const { return ___bulletPrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_bulletPrefab_2() { return &___bulletPrefab_2; }
	inline void set_bulletPrefab_2(GameObject_t1756533147 * value)
	{
		___bulletPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___bulletPrefab_2, value);
	}

	inline static int32_t get_offset_of_bulletSpeed_3() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___bulletSpeed_3)); }
	inline float get_bulletSpeed_3() const { return ___bulletSpeed_3; }
	inline float* get_address_of_bulletSpeed_3() { return &___bulletSpeed_3; }
	inline void set_bulletSpeed_3(float value)
	{
		___bulletSpeed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
