#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t3012272455
{
	// System.Single PlayerController::speed
	float ___speed_2;
	// System.Single PlayerController::turningSpeed
	float ___turningSpeed_3;
	// UnityEngine.Rigidbody PlayerController::ship
	Rigidbody_t1972007546 * ___ship_4;
	// System.String PlayerController::playerNumber
	String_t* ___playerNumber_5;
};
