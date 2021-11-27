#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ACLPlugin.ACLCompressionLevel
enum class EACLCompressionLevel : uint8_t
{
	ACLCL_Lowest                   = 0,
	ACLCL_Low                      = 1,
	ACLCL_Medium                   = 2,
	ACLCL_High                     = 3,
	ACLCL_Highest                  = 4,
	ACLCL_MAX                      = 5
};


// Enum ACLPlugin.ACLVectorFormat
enum class EACLVectorFormat : uint8_t
{
	ACLVF_Vector3                  = 0,
	ACLVF_Vector3_Variable         = 1,
	ACLVF_Vector3_MAX              = 2
};


// Enum ACLPlugin.ACLRotationFormat
enum class EACLRotationFormat : uint8_t
{
	ACLRF_Quat                     = 0,
	ACLRF_QuatDropW                = 1,
	ACLRF_QuatDropW_Variable       = 2,
	ACLRF_MAX                      = 3
};



}

