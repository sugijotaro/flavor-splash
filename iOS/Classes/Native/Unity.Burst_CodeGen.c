#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Int64 Unity.Burst.BurstRuntime::GetHashCode64()
// 0x00000002 System.Int64 Unity.Burst.BurstRuntime::HashStringWithFNV1A64(System.String)
extern void BurstRuntime_HashStringWithFNV1A64_m6A350E37BAACA803D4C8AAB954705C1E3D538A1F (void);
// 0x00000003 System.Void Unity.Burst.BurstRuntime/HashCode64`1::.cctor()
// 0x00000004 System.Void Unity.Burst.FunctionPointer`1::.ctor(System.IntPtr)
// 0x00000005 T Unity.Burst.FunctionPointer`1::get_Invoke()
// 0x00000006 System.Void Unity.Burst.SharedStatic`1::.ctor(System.Void*)
// 0x00000007 T& Unity.Burst.SharedStatic`1::get_Data()
// 0x00000008 Unity.Burst.SharedStatic`1<T> Unity.Burst.SharedStatic`1::GetOrCreate(System.UInt32)
// 0x00000009 System.Void* Unity.Burst.SharedStatic::GetOrCreateSharedStaticInternal(System.Int64,System.Int64,System.UInt32,System.UInt32)
extern void SharedStatic_GetOrCreateSharedStaticInternal_mA21BF7D865C6412774612604082461651F484D54 (void);
// 0x0000000A System.Void Unity.Burst.SharedStatic::.cctor()
extern void SharedStatic__cctor_m66B604B5844B15DCC0433C4748C464A8AC094FD0 (void);
// 0x0000000B System.Void Unity.Burst.CompilerServices.AssumeRangeAttribute::.ctor(System.Int64,System.Int64)
extern void AssumeRangeAttribute__ctor_m1FE1F4857280AE42B275E543E1424E5B44C455CC (void);
static Il2CppMethodPointer s_methodPointers[11] = 
{
	NULL,
	BurstRuntime_HashStringWithFNV1A64_m6A350E37BAACA803D4C8AAB954705C1E3D538A1F,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	SharedStatic_GetOrCreateSharedStaticInternal_mA21BF7D865C6412774612604082461651F484D54,
	SharedStatic__cctor_m66B604B5844B15DCC0433C4748C464A8AC094FD0,
	AssumeRangeAttribute__ctor_m1FE1F4857280AE42B275E543E1424E5B44C455CC,
};
static const int32_t s_InvokerIndices[11] = 
{
	-1,
	3412,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	2514,
	3694,
	1008,
};
static const Il2CppTokenRangePair s_rgctxIndices[5] = 
{
	{ 0x02000003, { 1, 2 } },
	{ 0x02000004, { 3, 1 } },
	{ 0x02000005, { 4, 4 } },
	{ 0x06000001, { 0, 1 } },
	{ 0x06000008, { 8, 1 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[9] = 
{
	{ (Il2CppRGCTXDataType)2, 1179 },
	{ (Il2CppRGCTXDataType)1, 472 },
	{ (Il2CppRGCTXDataType)2, 1180 },
	{ (Il2CppRGCTXDataType)3, 13768 },
	{ (Il2CppRGCTXDataType)3, 13995 },
	{ (Il2CppRGCTXDataType)3, 14164 },
	{ (Il2CppRGCTXDataType)2, 2237 },
	{ (Il2CppRGCTXDataType)3, 10407 },
	{ (Il2CppRGCTXDataType)3, 13309 },
};
extern const CustomAttributesCacheGenerator g_Unity_Burst_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Burst_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Burst_CodeGenModule = 
{
	"Unity.Burst.dll",
	11,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	5,
	s_rgctxIndices,
	9,
	s_rgctxValues,
	NULL,
	g_Unity_Burst_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
