#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorPanel
struct  ColorPanel_t2515032889  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image ColorPanel::image
	Image_t2042527209 * ___image_2;
	// UnityEngine.Color ColorPanel::col
	Color_t2020392075  ___col_3;

public:
	inline static int32_t get_offset_of_image_2() { return static_cast<int32_t>(offsetof(ColorPanel_t2515032889, ___image_2)); }
	inline Image_t2042527209 * get_image_2() const { return ___image_2; }
	inline Image_t2042527209 ** get_address_of_image_2() { return &___image_2; }
	inline void set_image_2(Image_t2042527209 * value)
	{
		___image_2 = value;
		Il2CppCodeGenWriteBarrier(&___image_2, value);
	}

	inline static int32_t get_offset_of_col_3() { return static_cast<int32_t>(offsetof(ColorPanel_t2515032889, ___col_3)); }
	inline Color_t2020392075  get_col_3() const { return ___col_3; }
	inline Color_t2020392075 * get_address_of_col_3() { return &___col_3; }
	inline void set_col_3(Color_t2020392075  value)
	{
		___col_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
