#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorPicker_Material
struct  ColorPicker_Material_t1107773901  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Material ColorPicker_Material::targetSharedMaterial
	Material_t193706927 * ___targetSharedMaterial_2;
	// UnityEngine.Texture2D ColorPicker_Material::colorPickerTexture
	Texture2D_t3542995729 * ___colorPickerTexture_3;
	// System.Int32 ColorPicker_Material::guiTextureX
	int32_t ___guiTextureX_4;
	// System.Int32 ColorPicker_Material::guiTextureY
	int32_t ___guiTextureY_5;
	// System.Int32 ColorPicker_Material::guiTextureWidth
	int32_t ___guiTextureWidth_6;
	// System.Int32 ColorPicker_Material::guiTextureHeight
	int32_t ___guiTextureHeight_7;

public:
	inline static int32_t get_offset_of_targetSharedMaterial_2() { return static_cast<int32_t>(offsetof(ColorPicker_Material_t1107773901, ___targetSharedMaterial_2)); }
	inline Material_t193706927 * get_targetSharedMaterial_2() const { return ___targetSharedMaterial_2; }
	inline Material_t193706927 ** get_address_of_targetSharedMaterial_2() { return &___targetSharedMaterial_2; }
	inline void set_targetSharedMaterial_2(Material_t193706927 * value)
	{
		___targetSharedMaterial_2 = value;
		Il2CppCodeGenWriteBarrier(&___targetSharedMaterial_2, value);
	}

	inline static int32_t get_offset_of_colorPickerTexture_3() { return static_cast<int32_t>(offsetof(ColorPicker_Material_t1107773901, ___colorPickerTexture_3)); }
	inline Texture2D_t3542995729 * get_colorPickerTexture_3() const { return ___colorPickerTexture_3; }
	inline Texture2D_t3542995729 ** get_address_of_colorPickerTexture_3() { return &___colorPickerTexture_3; }
	inline void set_colorPickerTexture_3(Texture2D_t3542995729 * value)
	{
		___colorPickerTexture_3 = value;
		Il2CppCodeGenWriteBarrier(&___colorPickerTexture_3, value);
	}

	inline static int32_t get_offset_of_guiTextureX_4() { return static_cast<int32_t>(offsetof(ColorPicker_Material_t1107773901, ___guiTextureX_4)); }
	inline int32_t get_guiTextureX_4() const { return ___guiTextureX_4; }
	inline int32_t* get_address_of_guiTextureX_4() { return &___guiTextureX_4; }
	inline void set_guiTextureX_4(int32_t value)
	{
		___guiTextureX_4 = value;
	}

	inline static int32_t get_offset_of_guiTextureY_5() { return static_cast<int32_t>(offsetof(ColorPicker_Material_t1107773901, ___guiTextureY_5)); }
	inline int32_t get_guiTextureY_5() const { return ___guiTextureY_5; }
	inline int32_t* get_address_of_guiTextureY_5() { return &___guiTextureY_5; }
	inline void set_guiTextureY_5(int32_t value)
	{
		___guiTextureY_5 = value;
	}

	inline static int32_t get_offset_of_guiTextureWidth_6() { return static_cast<int32_t>(offsetof(ColorPicker_Material_t1107773901, ___guiTextureWidth_6)); }
	inline int32_t get_guiTextureWidth_6() const { return ___guiTextureWidth_6; }
	inline int32_t* get_address_of_guiTextureWidth_6() { return &___guiTextureWidth_6; }
	inline void set_guiTextureWidth_6(int32_t value)
	{
		___guiTextureWidth_6 = value;
	}

	inline static int32_t get_offset_of_guiTextureHeight_7() { return static_cast<int32_t>(offsetof(ColorPicker_Material_t1107773901, ___guiTextureHeight_7)); }
	inline int32_t get_guiTextureHeight_7() const { return ___guiTextureHeight_7; }
	inline int32_t* get_address_of_guiTextureHeight_7() { return &___guiTextureHeight_7; }
	inline void set_guiTextureHeight_7(int32_t value)
	{
		___guiTextureHeight_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
