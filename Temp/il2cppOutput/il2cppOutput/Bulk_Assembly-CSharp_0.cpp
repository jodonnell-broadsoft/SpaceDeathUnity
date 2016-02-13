#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// PlayerController
struct PlayerController_t2866526589;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_PlayerController2866526589.h"
#include "AssemblyU2DCSharp_PlayerController2866526589MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455MethodDeclarations.h"
#include "mscorlib_System_String968488902MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Input1593691127MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component2126946602MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform284553113MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector33525329789MethodDeclarations.h"
#include "mscorlib_System_Single958209021.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Rigidbody1972007546.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m2658519486 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Start()
extern "C"  void PlayerController_Start_m1605657278 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void PlayerController::LateUpdate()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Input_t1593691127_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2375469974;
extern Il2CppCodeGenString* _stringLiteral3381094468;
extern const uint32_t PlayerController_LateUpdate_m3721258837_MetadataUsageId;
extern "C"  void PlayerController_LateUpdate_m3721258837 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_LateUpdate_m3721258837_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		String_t* L_0 = (__this->___playerNumber_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m138640077(NULL /*static, unused*/, _stringLiteral2375469974, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		float L_2 = Input_GetAxis_m2027668530(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Rigidbody_t1972007546 * L_3 = (__this->___ship_4);
		NullCheck(L_3);
		Transform_t284553113 * L_4 = Component_get_transform_m4257140443(L_3, /*hidden argument*/NULL);
		Transform_t284553113 * L_5 = L_4;
		NullCheck(L_5);
		Vector3_t3525329789  L_6 = Transform_get_position_m2211398607(L_5, /*hidden argument*/NULL);
		Rigidbody_t1972007546 * L_7 = (__this->___ship_4);
		NullCheck(L_7);
		Transform_t284553113 * L_8 = Component_get_transform_m4257140443(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t3525329789  L_9 = Transform_get_forward_m877665793(L_8, /*hidden argument*/NULL);
		float L_10 = V_0;
		Vector3_t3525329789  L_11 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		float L_12 = (__this->___speed_2);
		Vector3_t3525329789  L_13 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		Vector3_t3525329789  L_14 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_6, L_13, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_m3111394108(L_5, L_14, /*hidden argument*/NULL);
		String_t* L_15 = (__this->___playerNumber_5);
		String_t* L_16 = String_Concat_m138640077(NULL /*static, unused*/, _stringLiteral3381094468, L_15, /*hidden argument*/NULL);
		float L_17 = Input_GetAxis_m2027668530(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		Rigidbody_t1972007546 * L_18 = (__this->___ship_4);
		NullCheck(L_18);
		Transform_t284553113 * L_19 = Component_get_transform_m4257140443(L_18, /*hidden argument*/NULL);
		float L_20 = V_1;
		float L_21 = (__this->___turningSpeed_3);
		NullCheck(L_19);
		Transform_Rotate_m3498734243(L_19, (0.0f), ((float)((float)L_20*(float)L_21)), (0.0f), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
