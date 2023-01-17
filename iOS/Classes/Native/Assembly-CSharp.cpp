#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Type,GameCanvas.GcScene>
struct Dictionary_2_t44F73C3B443FF04C14ED50D7E056FD5227B0356F;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// GameCanvas.BehaviourBase
struct BehaviourBase_tCE3EEB2BB1EA468AFE888981532CE7F6B8006A0A;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tD9AECC2A5FF80678B3EF0F991A8F7864D4D6217B;
// Game
struct Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE;
// GameCanvas.GameBase
struct GameBase_tEF3F937253FD6A261158B06A5A4A128F22B69C85;
// GameCanvas.GcContext
struct GcContext_t4222571B71D4C9FD7F0382D53CC1BE91CA931FBC;
// GameCanvas.GcProxy
struct GcProxy_t832DFA1A70226659BE781159106088071E92BCBA;
// GameCanvas.GcScene
struct GcScene_t028D709732C753F120B2E96E1721856B14244235;
// GameCanvas.IGameCanvas
struct IGameCanvas_t172184300B440F98A677A2542DE752E7ACA43EFF;
// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_t3A6EA1A3D375C2B41A693078E127AF9C63EF40F4;
// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t7E0423A6726D11C08DB7E8337EB07E5D228A12D5;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInputAccelerationEx_t2AD6D1948812B141E477368373B2D90BC69C2AAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInputAcceleration_t4A0FA4CF6724D6A6AA97DB9627BF8D803BB6309B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInputPointerEx_t77FF40CB496C7D889AF48A8B97C1C8583584A3C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISoundEx_tD25BD54686D9B9B56DECF8BEC2D915B0A0D66F3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISound_t57F3CA00C15A73B3DAD63859FFFFE14289427309_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____9E5F20A47F51ADF106F906D6ECC2C6370190004F35EFE72E1C3E6C027F396C28_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0FF28182F922F2B90592191A348EB65CD1DF4038;
IL2CPP_EXTERN_C String_t* _stringLiteral10291B3A4B1D2933821EE5230552A31F47DBEE6B;
IL2CPP_EXTERN_C String_t* _stringLiteral2EB956CF02CF577C11F0A40987ECCAA2B8B94F82;
IL2CPP_EXTERN_C String_t* _stringLiteral30F23BD68504B0AB04657D56291C7183811E3B04;
IL2CPP_EXTERN_C String_t* _stringLiteral3ACF730896EB2DAB947476330C68B4BD0F8A3085;
IL2CPP_EXTERN_C String_t* _stringLiteral65051126D27B5D8CB41D8CB6C5BBE2DE8590FB32;
IL2CPP_EXTERN_C String_t* _stringLiteral6CE009FFEA10586D0994B390213905FEAF5D6726;
IL2CPP_EXTERN_C String_t* _stringLiteral6D74CC8AAE1D4E05C60C34E310631E0CB00221EB;
IL2CPP_EXTERN_C String_t* _stringLiteral6D87F15080F5FB3F518F379D02F7CD63AC6BD9F6;
IL2CPP_EXTERN_C String_t* _stringLiteral6D9559E1AD3D135410C1123DBAAC9C176290F67A;
IL2CPP_EXTERN_C String_t* _stringLiteral76621E64AB32D71E85DB363EB9042E320A7EADE2;
IL2CPP_EXTERN_C String_t* _stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D;
IL2CPP_EXTERN_C String_t* _stringLiteral8B0CA2889F3EFE0106752A376879448FB4FF0386;
IL2CPP_EXTERN_C String_t* _stringLiteral99B692431AA4CCD576DB1FD8F1AEF713383B5725;
IL2CPP_EXTERN_C String_t* _stringLiteralA80A3267751734098F49D22D93B46DCF112A1BD1;
IL2CPP_EXTERN_C String_t* _stringLiteralAB1C16C2009D328CC2411BAA019F939F08970181;
IL2CPP_EXTERN_C String_t* _stringLiteralACBD5EC7006E057F50C7BBAFDEC5C5436CA1B3E9;
IL2CPP_EXTERN_C String_t* _stringLiteralB471CF7BCBE6DE6BF326B3DE779EF756BC3FC33D;
IL2CPP_EXTERN_C String_t* _stringLiteralB478161F26801FAB994941507C5EDB55D4886BD7;
IL2CPP_EXTERN_C String_t* _stringLiteralBC47915A67A68D7A16FC1B7191ABCD93A3B66F00;
IL2CPP_EXTERN_C String_t* _stringLiteralCF40D0720F39DCC1CD6376AF3194AA6253275592;
IL2CPP_EXTERN_C String_t* _stringLiteralD4F093A84AE3078D3C42B98B0D4626BD342F7BA0;
IL2CPP_EXTERN_C String_t* _stringLiteralDC27A8C6EC24F2B47A3CCCF2BBD734F3B41F3CBD;
IL2CPP_EXTERN_C String_t* _stringLiteralDC62D921453825AF107E7944219DB44075DF8BEE;
IL2CPP_EXTERN_C String_t* _stringLiteralE6C01FCABC4827A17323F22937D2E262FC4EEE3D;
IL2CPP_EXTERN_C String_t* _stringLiteralE75FB1547897C9EE1438C0EDCE38019A90B626FC;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// GameCanvas.GcProxy
struct GcProxy_t832DFA1A70226659BE781159106088071E92BCBA  : public RuntimeObject
{
public:
	// GameCanvas.GcContext GameCanvas.GcProxy::m_Context
	GcContext_t4222571B71D4C9FD7F0382D53CC1BE91CA931FBC * ___m_Context_0;
	// System.Collections.Generic.Dictionary`2<System.Type,GameCanvas.GcScene> GameCanvas.GcProxy::m_SceneDict
	Dictionary_2_t44F73C3B443FF04C14ED50D7E056FD5227B0356F * ___m_SceneDict_1;
	// GameCanvas.GcScene GameCanvas.GcProxy::m_CurrentScene
	GcScene_t028D709732C753F120B2E96E1721856B14244235 * ___m_CurrentScene_2;
	// GameCanvas.GcScene GameCanvas.GcProxy::m_NextScene
	GcScene_t028D709732C753F120B2E96E1721856B14244235 * ___m_NextScene_3;
	// System.Object GameCanvas.GcProxy::m_NextSceneState
	RuntimeObject * ___m_NextSceneState_4;
	// System.Boolean GameCanvas.GcProxy::m_SceneEnterFlag
	bool ___m_SceneEnterFlag_5;
	// System.Boolean GameCanvas.GcProxy::m_SceneLeaveFlag
	bool ___m_SceneLeaveFlag_6;

public:
	inline static int32_t get_offset_of_m_Context_0() { return static_cast<int32_t>(offsetof(GcProxy_t832DFA1A70226659BE781159106088071E92BCBA, ___m_Context_0)); }
	inline GcContext_t4222571B71D4C9FD7F0382D53CC1BE91CA931FBC * get_m_Context_0() const { return ___m_Context_0; }
	inline GcContext_t4222571B71D4C9FD7F0382D53CC1BE91CA931FBC ** get_address_of_m_Context_0() { return &___m_Context_0; }
	inline void set_m_Context_0(GcContext_t4222571B71D4C9FD7F0382D53CC1BE91CA931FBC * value)
	{
		___m_Context_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Context_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_SceneDict_1() { return static_cast<int32_t>(offsetof(GcProxy_t832DFA1A70226659BE781159106088071E92BCBA, ___m_SceneDict_1)); }
	inline Dictionary_2_t44F73C3B443FF04C14ED50D7E056FD5227B0356F * get_m_SceneDict_1() const { return ___m_SceneDict_1; }
	inline Dictionary_2_t44F73C3B443FF04C14ED50D7E056FD5227B0356F ** get_address_of_m_SceneDict_1() { return &___m_SceneDict_1; }
	inline void set_m_SceneDict_1(Dictionary_2_t44F73C3B443FF04C14ED50D7E056FD5227B0356F * value)
	{
		___m_SceneDict_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SceneDict_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentScene_2() { return static_cast<int32_t>(offsetof(GcProxy_t832DFA1A70226659BE781159106088071E92BCBA, ___m_CurrentScene_2)); }
	inline GcScene_t028D709732C753F120B2E96E1721856B14244235 * get_m_CurrentScene_2() const { return ___m_CurrentScene_2; }
	inline GcScene_t028D709732C753F120B2E96E1721856B14244235 ** get_address_of_m_CurrentScene_2() { return &___m_CurrentScene_2; }
	inline void set_m_CurrentScene_2(GcScene_t028D709732C753F120B2E96E1721856B14244235 * value)
	{
		___m_CurrentScene_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentScene_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_NextScene_3() { return static_cast<int32_t>(offsetof(GcProxy_t832DFA1A70226659BE781159106088071E92BCBA, ___m_NextScene_3)); }
	inline GcScene_t028D709732C753F120B2E96E1721856B14244235 * get_m_NextScene_3() const { return ___m_NextScene_3; }
	inline GcScene_t028D709732C753F120B2E96E1721856B14244235 ** get_address_of_m_NextScene_3() { return &___m_NextScene_3; }
	inline void set_m_NextScene_3(GcScene_t028D709732C753F120B2E96E1721856B14244235 * value)
	{
		___m_NextScene_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NextScene_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_NextSceneState_4() { return static_cast<int32_t>(offsetof(GcProxy_t832DFA1A70226659BE781159106088071E92BCBA, ___m_NextSceneState_4)); }
	inline RuntimeObject * get_m_NextSceneState_4() const { return ___m_NextSceneState_4; }
	inline RuntimeObject ** get_address_of_m_NextSceneState_4() { return &___m_NextSceneState_4; }
	inline void set_m_NextSceneState_4(RuntimeObject * value)
	{
		___m_NextSceneState_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NextSceneState_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SceneEnterFlag_5() { return static_cast<int32_t>(offsetof(GcProxy_t832DFA1A70226659BE781159106088071E92BCBA, ___m_SceneEnterFlag_5)); }
	inline bool get_m_SceneEnterFlag_5() const { return ___m_SceneEnterFlag_5; }
	inline bool* get_address_of_m_SceneEnterFlag_5() { return &___m_SceneEnterFlag_5; }
	inline void set_m_SceneEnterFlag_5(bool value)
	{
		___m_SceneEnterFlag_5 = value;
	}

	inline static int32_t get_offset_of_m_SceneLeaveFlag_6() { return static_cast<int32_t>(offsetof(GcProxy_t832DFA1A70226659BE781159106088071E92BCBA, ___m_SceneLeaveFlag_6)); }
	inline bool get_m_SceneLeaveFlag_6() const { return ___m_SceneLeaveFlag_6; }
	inline bool* get_address_of_m_SceneLeaveFlag_6() { return &___m_SceneLeaveFlag_6; }
	inline void set_m_SceneLeaveFlag_6(bool value)
	{
		___m_SceneLeaveFlag_6 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tD9AECC2A5FF80678B3EF0F991A8F7864D4D6217B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// GameCanvas.GcSound
struct GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F 
{
public:
	// System.String GameCanvas.GcSound::m_Path
	String_t* ___m_Path_8;

public:
	inline static int32_t get_offset_of_m_Path_8() { return static_cast<int32_t>(offsetof(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F, ___m_Path_8)); }
	inline String_t* get_m_Path_8() const { return ___m_Path_8; }
	inline String_t** get_address_of_m_Path_8() { return &___m_Path_8; }
	inline void set_m_Path_8(String_t* value)
	{
		___m_Path_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_8), (void*)value);
	}
};

struct GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_StaticFields
{
public:
	// GameCanvas.GcSound GameCanvas.GcSound::Click1
	GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F  ___Click1_1;
	// GameCanvas.GcSound GameCanvas.GcSound::GameBGM
	GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F  ___GameBGM_2;
	// GameCanvas.GcSound GameCanvas.GcSound::Shake
	GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F  ___Shake_3;
	// GameCanvas.GcSound GameCanvas.GcSound::TitleBGM
	GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F  ___TitleBGM_4;
	// GameCanvas.GcSound GameCanvas.GcSound::Whistle
	GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F  ___Whistle_5;
	// GameCanvas.GcSound GameCanvas.GcSound::External
	GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F  ___External_6;
	// GameCanvas.GcSound GameCanvas.GcSound::Null
	GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F  ___Null_7;

public:
	inline static int32_t get_offset_of_Click1_1() { return static_cast<int32_t>(offsetof(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_StaticFields, ___Click1_1)); }
	inline GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F  get_Click1_1() const { return ___Click1_1; }
	inline GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F * get_address_of_Click1_1() { return &___Click1_1; }
	inline void set_Click1_1(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F  value)
	{
		___Click1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Click1_1))->___m_Path_8), (void*)NULL);
	}

	inline static int32_t get_offset_of_GameBGM_2() { return static_cast<int32_t>(offsetof(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_StaticFields, ___GameBGM_2)); }
	inline GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F  get_GameBGM_2() const { return ___GameBGM_2; }
	inline GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F * get_address_of_GameBGM_2() { return &___GameBGM_2; }
	inline void set_GameBGM_2(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F  value)
	{
		___GameBGM_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___GameBGM_2))->___m_Path_8), (void*)NULL);
	}

	inline static int32_t get_offset_of_Shake_3() { return static_cast<int32_t>(offsetof(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_StaticFields, ___Shake_3)); }
	inline GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F  get_Shake_3() const { return ___Shake_3; }
	inline GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F * get_address_of_Shake_3() { return &___Shake_3; }
	inline void set_Shake_3(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F  value)
	{
		___Shake_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Shake_3))->___m_Path_8), (void*)NULL);
	}

	inline static int32_t get_offset_of_TitleBGM_4() { return static_cast<int32_t>(offsetof(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_StaticFields, ___TitleBGM_4)); }
	inline GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F  get_TitleBGM_4() const { return ___TitleBGM_4; }
	inline GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F * get_address_of_TitleBGM_4() { return &___TitleBGM_4; }
	inline void set_TitleBGM_4(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F  value)
	{
		___TitleBGM_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___TitleBGM_4))->___m_Path_8), (void*)NULL);
	}

	inline static int32_t get_offset_of_Whistle_5() { return static_cast<int32_t>(offsetof(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_StaticFields, ___Whistle_5)); }
	inline GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F  get_Whistle_5() const { return ___Whistle_5; }
	inline GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F * get_address_of_Whistle_5() { return &___Whistle_5; }
	inline void set_Whistle_5(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F  value)
	{
		___Whistle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Whistle_5))->___m_Path_8), (void*)NULL);
	}

	inline static int32_t get_offset_of_External_6() { return static_cast<int32_t>(offsetof(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_StaticFields, ___External_6)); }
	inline GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F  get_External_6() const { return ___External_6; }
	inline GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F * get_address_of_External_6() { return &___External_6; }
	inline void set_External_6(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F  value)
	{
		___External_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___External_6))->___m_Path_8), (void*)NULL);
	}

	inline static int32_t get_offset_of_Null_7() { return static_cast<int32_t>(offsetof(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_StaticFields, ___Null_7)); }
	inline GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F  get_Null_7() const { return ___Null_7; }
	inline GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F * get_address_of_Null_7() { return &___Null_7; }
	inline void set_Null_7(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F  value)
	{
		___Null_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Null_7))->___m_Path_8), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of GameCanvas.GcSound
struct GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_marshaled_pinvoke
{
	char* ___m_Path_8;
};
// Native definition for COM marshalling of GameCanvas.GcSound
struct GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_marshaled_com
{
	Il2CppChar* ___m_Path_8;
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_t3A6EA1A3D375C2B41A693078E127AF9C63EF40F4  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Byte[] System.Runtime.CompilerServices.NullableAttribute::NullableFlags
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___NullableFlags_0;

public:
	inline static int32_t get_offset_of_NullableFlags_0() { return static_cast<int32_t>(offsetof(NullableAttribute_t3A6EA1A3D375C2B41A693078E127AF9C63EF40F4, ___NullableFlags_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_NullableFlags_0() const { return ___NullableFlags_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_NullableFlags_0() { return &___NullableFlags_0; }
	inline void set_NullableFlags_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___NullableFlags_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NullableFlags_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t7E0423A6726D11C08DB7E8337EB07E5D228A12D5  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Byte System.Runtime.CompilerServices.NullableContextAttribute::Flag
	uint8_t ___Flag_0;

public:
	inline static int32_t get_offset_of_Flag_0() { return static_cast<int32_t>(offsetof(NullableContextAttribute_t7E0423A6726D11C08DB7E8337EB07E5D228A12D5, ___Flag_0)); }
	inline uint8_t get_Flag_0() const { return ___Flag_0; }
	inline uint8_t* get_address_of_Flag_0() { return &___Flag_0; }
	inline void set_Flag_0(uint8_t value)
	{
		___Flag_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Unity.Mathematics.int2
struct int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 
{
public:
	// System.Int32 Unity.Mathematics.int2::x
	int32_t ___x_0;
	// System.Int32 Unity.Mathematics.int2::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}
};

struct int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_StaticFields
{
public:
	// Unity.Mathematics.int2 Unity.Mathematics.int2::zero
	int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568  ___zero_2;

public:
	inline static int32_t get_offset_of_zero_2() { return static_cast<int32_t>(offsetof(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_StaticFields, ___zero_2)); }
	inline int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568  get_zero_2() const { return ___zero_2; }
	inline int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 * get_address_of_zero_2() { return &___zero_2; }
	inline void set_zero_2(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568  value)
	{
		___zero_2 = value;
	}
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794__padding[12];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::9E5F20A47F51ADF106F906D6ECC2C6370190004F35EFE72E1C3E6C027F396C28
	__StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794  ___9E5F20A47F51ADF106F906D6ECC2C6370190004F35EFE72E1C3E6C027F396C28_0;

public:
	inline static int32_t get_offset_of_U39E5F20A47F51ADF106F906D6ECC2C6370190004F35EFE72E1C3E6C027F396C28_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___9E5F20A47F51ADF106F906D6ECC2C6370190004F35EFE72E1C3E6C027F396C28_0)); }
	inline __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794  get_U39E5F20A47F51ADF106F906D6ECC2C6370190004F35EFE72E1C3E6C027F396C28_0() const { return ___9E5F20A47F51ADF106F906D6ECC2C6370190004F35EFE72E1C3E6C027F396C28_0; }
	inline __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794 * get_address_of_U39E5F20A47F51ADF106F906D6ECC2C6370190004F35EFE72E1C3E6C027F396C28_0() { return &___9E5F20A47F51ADF106F906D6ECC2C6370190004F35EFE72E1C3E6C027F396C28_0; }
	inline void set_U39E5F20A47F51ADF106F906D6ECC2C6370190004F35EFE72E1C3E6C027F396C28_0(__StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794  value)
	{
		___9E5F20A47F51ADF106F906D6ECC2C6370190004F35EFE72E1C3E6C027F396C28_0 = value;
	}
};


// GameCanvas.GcAnchor
struct GcAnchor_t917FF698552D2629BB34F56015B08C167246A978 
{
public:
	// System.Int32 GameCanvas.GcAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GcAnchor_t917FF698552D2629BB34F56015B08C167246A978, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GameCanvas.GcImage
struct GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 
{
public:
	// System.String GameCanvas.GcImage::m_Path
	String_t* ___m_Path_10;
	// Unity.Mathematics.int2 GameCanvas.GcImage::m_Size
	int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568  ___m_Size_11;

public:
	inline static int32_t get_offset_of_m_Path_10() { return static_cast<int32_t>(offsetof(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866, ___m_Path_10)); }
	inline String_t* get_m_Path_10() const { return ___m_Path_10; }
	inline String_t** get_address_of_m_Path_10() { return &___m_Path_10; }
	inline void set_m_Path_10(String_t* value)
	{
		___m_Path_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Size_11() { return static_cast<int32_t>(offsetof(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866, ___m_Size_11)); }
	inline int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568  get_m_Size_11() const { return ___m_Size_11; }
	inline int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 * get_address_of_m_Size_11() { return &___m_Size_11; }
	inline void set_m_Size_11(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568  value)
	{
		___m_Size_11 = value;
	}
};

struct GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields
{
public:
	// GameCanvas.GcImage GameCanvas.GcImage::Array
	GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  ___Array_0;
	// GameCanvas.GcImage GameCanvas.GcImage::Background
	GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  ___Background_1;
	// GameCanvas.GcImage GameCanvas.GcImage::Condiments
	GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  ___Condiments_2;
	// GameCanvas.GcImage GameCanvas.GcImage::Frappucino
	GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  ___Frappucino_3;
	// GameCanvas.GcImage GameCanvas.GcImage::FrappucinoSplashed
	GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  ___FrappucinoSplashed_4;
	// GameCanvas.GcImage GameCanvas.GcImage::Rice
	GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  ___Rice_5;
	// GameCanvas.GcImage GameCanvas.GcImage::RiceSplashed
	GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  ___RiceSplashed_6;
	// GameCanvas.GcImage GameCanvas.GcImage::SelectedIcon
	GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  ___SelectedIcon_7;
	// GameCanvas.GcImage GameCanvas.GcImage::Watermelon
	GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  ___Watermelon_8;
	// GameCanvas.GcImage GameCanvas.GcImage::WatermelonSplashed
	GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  ___WatermelonSplashed_9;

public:
	inline static int32_t get_offset_of_Array_0() { return static_cast<int32_t>(offsetof(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields, ___Array_0)); }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  get_Array_0() const { return ___Array_0; }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 * get_address_of_Array_0() { return &___Array_0; }
	inline void set_Array_0(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  value)
	{
		___Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Array_0))->___m_Path_10), (void*)NULL);
	}

	inline static int32_t get_offset_of_Background_1() { return static_cast<int32_t>(offsetof(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields, ___Background_1)); }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  get_Background_1() const { return ___Background_1; }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 * get_address_of_Background_1() { return &___Background_1; }
	inline void set_Background_1(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  value)
	{
		___Background_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Background_1))->___m_Path_10), (void*)NULL);
	}

	inline static int32_t get_offset_of_Condiments_2() { return static_cast<int32_t>(offsetof(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields, ___Condiments_2)); }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  get_Condiments_2() const { return ___Condiments_2; }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 * get_address_of_Condiments_2() { return &___Condiments_2; }
	inline void set_Condiments_2(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  value)
	{
		___Condiments_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Condiments_2))->___m_Path_10), (void*)NULL);
	}

	inline static int32_t get_offset_of_Frappucino_3() { return static_cast<int32_t>(offsetof(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields, ___Frappucino_3)); }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  get_Frappucino_3() const { return ___Frappucino_3; }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 * get_address_of_Frappucino_3() { return &___Frappucino_3; }
	inline void set_Frappucino_3(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  value)
	{
		___Frappucino_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Frappucino_3))->___m_Path_10), (void*)NULL);
	}

	inline static int32_t get_offset_of_FrappucinoSplashed_4() { return static_cast<int32_t>(offsetof(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields, ___FrappucinoSplashed_4)); }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  get_FrappucinoSplashed_4() const { return ___FrappucinoSplashed_4; }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 * get_address_of_FrappucinoSplashed_4() { return &___FrappucinoSplashed_4; }
	inline void set_FrappucinoSplashed_4(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  value)
	{
		___FrappucinoSplashed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___FrappucinoSplashed_4))->___m_Path_10), (void*)NULL);
	}

	inline static int32_t get_offset_of_Rice_5() { return static_cast<int32_t>(offsetof(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields, ___Rice_5)); }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  get_Rice_5() const { return ___Rice_5; }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 * get_address_of_Rice_5() { return &___Rice_5; }
	inline void set_Rice_5(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  value)
	{
		___Rice_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Rice_5))->___m_Path_10), (void*)NULL);
	}

	inline static int32_t get_offset_of_RiceSplashed_6() { return static_cast<int32_t>(offsetof(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields, ___RiceSplashed_6)); }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  get_RiceSplashed_6() const { return ___RiceSplashed_6; }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 * get_address_of_RiceSplashed_6() { return &___RiceSplashed_6; }
	inline void set_RiceSplashed_6(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  value)
	{
		___RiceSplashed_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___RiceSplashed_6))->___m_Path_10), (void*)NULL);
	}

	inline static int32_t get_offset_of_SelectedIcon_7() { return static_cast<int32_t>(offsetof(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields, ___SelectedIcon_7)); }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  get_SelectedIcon_7() const { return ___SelectedIcon_7; }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 * get_address_of_SelectedIcon_7() { return &___SelectedIcon_7; }
	inline void set_SelectedIcon_7(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  value)
	{
		___SelectedIcon_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___SelectedIcon_7))->___m_Path_10), (void*)NULL);
	}

	inline static int32_t get_offset_of_Watermelon_8() { return static_cast<int32_t>(offsetof(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields, ___Watermelon_8)); }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  get_Watermelon_8() const { return ___Watermelon_8; }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 * get_address_of_Watermelon_8() { return &___Watermelon_8; }
	inline void set_Watermelon_8(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  value)
	{
		___Watermelon_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Watermelon_8))->___m_Path_10), (void*)NULL);
	}

	inline static int32_t get_offset_of_WatermelonSplashed_9() { return static_cast<int32_t>(offsetof(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields, ___WatermelonSplashed_9)); }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  get_WatermelonSplashed_9() const { return ___WatermelonSplashed_9; }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 * get_address_of_WatermelonSplashed_9() { return &___WatermelonSplashed_9; }
	inline void set_WatermelonSplashed_9(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  value)
	{
		___WatermelonSplashed_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___WatermelonSplashed_9))->___m_Path_10), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of GameCanvas.GcImage
struct GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_marshaled_pinvoke
{
	char* ___m_Path_10;
	int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568  ___m_Size_11;
};
// Native definition for COM marshalling of GameCanvas.GcImage
struct GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_marshaled_com
{
	Il2CppChar* ___m_Path_10;
	int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568  ___m_Size_11;
};

// GameCanvas.GcSoundTrack
struct GcSoundTrack_t4CE0A4B72FDAEBF0E627DE7069CC18E430B4F10D 
{
public:
	// System.Byte GameCanvas.GcSoundTrack::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GcSoundTrack_t4CE0A4B72FDAEBF0E627DE7069CC18E430B4F10D, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// GameCanvas.BehaviourBase
struct BehaviourBase_tCE3EEB2BB1EA468AFE888981532CE7F6B8006A0A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Camera GameCanvas.BehaviourBase::m_Camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_Camera_4;
	// System.Action GameCanvas.BehaviourBase::OnFocusOnce
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnFocusOnce_5;
	// System.Boolean GameCanvas.BehaviourBase::m_IsPause
	bool ___m_IsPause_6;
	// GameCanvas.GcProxy GameCanvas.BehaviourBase::m_Proxy
	GcProxy_t832DFA1A70226659BE781159106088071E92BCBA * ___m_Proxy_7;

public:
	inline static int32_t get_offset_of_m_Camera_4() { return static_cast<int32_t>(offsetof(BehaviourBase_tCE3EEB2BB1EA468AFE888981532CE7F6B8006A0A, ___m_Camera_4)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_Camera_4() const { return ___m_Camera_4; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_Camera_4() { return &___m_Camera_4; }
	inline void set_m_Camera_4(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_Camera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnFocusOnce_5() { return static_cast<int32_t>(offsetof(BehaviourBase_tCE3EEB2BB1EA468AFE888981532CE7F6B8006A0A, ___OnFocusOnce_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnFocusOnce_5() const { return ___OnFocusOnce_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnFocusOnce_5() { return &___OnFocusOnce_5; }
	inline void set_OnFocusOnce_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnFocusOnce_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFocusOnce_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsPause_6() { return static_cast<int32_t>(offsetof(BehaviourBase_tCE3EEB2BB1EA468AFE888981532CE7F6B8006A0A, ___m_IsPause_6)); }
	inline bool get_m_IsPause_6() const { return ___m_IsPause_6; }
	inline bool* get_address_of_m_IsPause_6() { return &___m_IsPause_6; }
	inline void set_m_IsPause_6(bool value)
	{
		___m_IsPause_6 = value;
	}

	inline static int32_t get_offset_of_m_Proxy_7() { return static_cast<int32_t>(offsetof(BehaviourBase_tCE3EEB2BB1EA468AFE888981532CE7F6B8006A0A, ___m_Proxy_7)); }
	inline GcProxy_t832DFA1A70226659BE781159106088071E92BCBA * get_m_Proxy_7() const { return ___m_Proxy_7; }
	inline GcProxy_t832DFA1A70226659BE781159106088071E92BCBA ** get_address_of_m_Proxy_7() { return &___m_Proxy_7; }
	inline void set_m_Proxy_7(GcProxy_t832DFA1A70226659BE781159106088071E92BCBA * value)
	{
		___m_Proxy_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Proxy_7), (void*)value);
	}
};


// GameCanvas.GameBase
struct GameBase_tEF3F937253FD6A261158B06A5A4A128F22B69C85  : public BehaviourBase_tCE3EEB2BB1EA468AFE888981532CE7F6B8006A0A
{
public:

public:
};


// Game
struct Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE  : public GameBase_tEF3F937253FD6A261158B06A5A4A128F22B69C85
{
public:
	// System.Int32 Game::sec
	int32_t ___sec_8;
	// System.Int32 Game::countdown
	int32_t ___countdown_9;
	// System.Int32 Game::splashedCount
	int32_t ___splashedCount_10;
	// System.Int32 Game::currentFood
	int32_t ___currentFood_11;
	// System.Int32[] Game::possibleValues
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___possibleValues_12;
	// System.Int32 Game::clearTime
	int32_t ___clearTime_13;
	// System.Int32 Game::status
	int32_t ___status_14;
	// System.Int32 Game::difficulty
	int32_t ___difficulty_15;
	// System.String[] Game::difficulties
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___difficulties_16;
	// System.Int32 Game::missCount
	int32_t ___missCount_17;
	// System.Int32 Game::selectedCondiments
	int32_t ___selectedCondiments_18;
	// System.Int32[] Game::foodsArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___foodsArray_19;
	// System.Int32 Game::progress
	int32_t ___progress_20;
	// System.Int32 Game::splashIntervalCount
	int32_t ___splashIntervalCount_21;
	// System.Boolean Game::isSplashTapInterval
	bool ___isSplashTapInterval_22;
	// System.Boolean Game::isSplashShakeInterval
	bool ___isSplashShakeInterval_23;
	// System.Boolean Game::preFrameTapped
	bool ___preFrameTapped_24;
	// System.Boolean Game::isGameFinished
	bool ___isGameFinished_25;
	// System.Single Game::shakeThreshold
	float ___shakeThreshold_26;
	// System.Single Game::acceleration
	float ___acceleration_27;
	// System.Boolean Game::isDebug
	bool ___isDebug_28;
	// System.Boolean Game::isShakeEnable
	bool ___isShakeEnable_29;

public:
	inline static int32_t get_offset_of_sec_8() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___sec_8)); }
	inline int32_t get_sec_8() const { return ___sec_8; }
	inline int32_t* get_address_of_sec_8() { return &___sec_8; }
	inline void set_sec_8(int32_t value)
	{
		___sec_8 = value;
	}

	inline static int32_t get_offset_of_countdown_9() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___countdown_9)); }
	inline int32_t get_countdown_9() const { return ___countdown_9; }
	inline int32_t* get_address_of_countdown_9() { return &___countdown_9; }
	inline void set_countdown_9(int32_t value)
	{
		___countdown_9 = value;
	}

	inline static int32_t get_offset_of_splashedCount_10() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___splashedCount_10)); }
	inline int32_t get_splashedCount_10() const { return ___splashedCount_10; }
	inline int32_t* get_address_of_splashedCount_10() { return &___splashedCount_10; }
	inline void set_splashedCount_10(int32_t value)
	{
		___splashedCount_10 = value;
	}

	inline static int32_t get_offset_of_currentFood_11() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___currentFood_11)); }
	inline int32_t get_currentFood_11() const { return ___currentFood_11; }
	inline int32_t* get_address_of_currentFood_11() { return &___currentFood_11; }
	inline void set_currentFood_11(int32_t value)
	{
		___currentFood_11 = value;
	}

	inline static int32_t get_offset_of_possibleValues_12() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___possibleValues_12)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_possibleValues_12() const { return ___possibleValues_12; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_possibleValues_12() { return &___possibleValues_12; }
	inline void set_possibleValues_12(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___possibleValues_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___possibleValues_12), (void*)value);
	}

	inline static int32_t get_offset_of_clearTime_13() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___clearTime_13)); }
	inline int32_t get_clearTime_13() const { return ___clearTime_13; }
	inline int32_t* get_address_of_clearTime_13() { return &___clearTime_13; }
	inline void set_clearTime_13(int32_t value)
	{
		___clearTime_13 = value;
	}

	inline static int32_t get_offset_of_status_14() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___status_14)); }
	inline int32_t get_status_14() const { return ___status_14; }
	inline int32_t* get_address_of_status_14() { return &___status_14; }
	inline void set_status_14(int32_t value)
	{
		___status_14 = value;
	}

	inline static int32_t get_offset_of_difficulty_15() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___difficulty_15)); }
	inline int32_t get_difficulty_15() const { return ___difficulty_15; }
	inline int32_t* get_address_of_difficulty_15() { return &___difficulty_15; }
	inline void set_difficulty_15(int32_t value)
	{
		___difficulty_15 = value;
	}

	inline static int32_t get_offset_of_difficulties_16() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___difficulties_16)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_difficulties_16() const { return ___difficulties_16; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_difficulties_16() { return &___difficulties_16; }
	inline void set_difficulties_16(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___difficulties_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___difficulties_16), (void*)value);
	}

	inline static int32_t get_offset_of_missCount_17() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___missCount_17)); }
	inline int32_t get_missCount_17() const { return ___missCount_17; }
	inline int32_t* get_address_of_missCount_17() { return &___missCount_17; }
	inline void set_missCount_17(int32_t value)
	{
		___missCount_17 = value;
	}

	inline static int32_t get_offset_of_selectedCondiments_18() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___selectedCondiments_18)); }
	inline int32_t get_selectedCondiments_18() const { return ___selectedCondiments_18; }
	inline int32_t* get_address_of_selectedCondiments_18() { return &___selectedCondiments_18; }
	inline void set_selectedCondiments_18(int32_t value)
	{
		___selectedCondiments_18 = value;
	}

	inline static int32_t get_offset_of_foodsArray_19() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___foodsArray_19)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_foodsArray_19() const { return ___foodsArray_19; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_foodsArray_19() { return &___foodsArray_19; }
	inline void set_foodsArray_19(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___foodsArray_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foodsArray_19), (void*)value);
	}

	inline static int32_t get_offset_of_progress_20() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___progress_20)); }
	inline int32_t get_progress_20() const { return ___progress_20; }
	inline int32_t* get_address_of_progress_20() { return &___progress_20; }
	inline void set_progress_20(int32_t value)
	{
		___progress_20 = value;
	}

	inline static int32_t get_offset_of_splashIntervalCount_21() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___splashIntervalCount_21)); }
	inline int32_t get_splashIntervalCount_21() const { return ___splashIntervalCount_21; }
	inline int32_t* get_address_of_splashIntervalCount_21() { return &___splashIntervalCount_21; }
	inline void set_splashIntervalCount_21(int32_t value)
	{
		___splashIntervalCount_21 = value;
	}

	inline static int32_t get_offset_of_isSplashTapInterval_22() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___isSplashTapInterval_22)); }
	inline bool get_isSplashTapInterval_22() const { return ___isSplashTapInterval_22; }
	inline bool* get_address_of_isSplashTapInterval_22() { return &___isSplashTapInterval_22; }
	inline void set_isSplashTapInterval_22(bool value)
	{
		___isSplashTapInterval_22 = value;
	}

	inline static int32_t get_offset_of_isSplashShakeInterval_23() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___isSplashShakeInterval_23)); }
	inline bool get_isSplashShakeInterval_23() const { return ___isSplashShakeInterval_23; }
	inline bool* get_address_of_isSplashShakeInterval_23() { return &___isSplashShakeInterval_23; }
	inline void set_isSplashShakeInterval_23(bool value)
	{
		___isSplashShakeInterval_23 = value;
	}

	inline static int32_t get_offset_of_preFrameTapped_24() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___preFrameTapped_24)); }
	inline bool get_preFrameTapped_24() const { return ___preFrameTapped_24; }
	inline bool* get_address_of_preFrameTapped_24() { return &___preFrameTapped_24; }
	inline void set_preFrameTapped_24(bool value)
	{
		___preFrameTapped_24 = value;
	}

	inline static int32_t get_offset_of_isGameFinished_25() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___isGameFinished_25)); }
	inline bool get_isGameFinished_25() const { return ___isGameFinished_25; }
	inline bool* get_address_of_isGameFinished_25() { return &___isGameFinished_25; }
	inline void set_isGameFinished_25(bool value)
	{
		___isGameFinished_25 = value;
	}

	inline static int32_t get_offset_of_shakeThreshold_26() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___shakeThreshold_26)); }
	inline float get_shakeThreshold_26() const { return ___shakeThreshold_26; }
	inline float* get_address_of_shakeThreshold_26() { return &___shakeThreshold_26; }
	inline void set_shakeThreshold_26(float value)
	{
		___shakeThreshold_26 = value;
	}

	inline static int32_t get_offset_of_acceleration_27() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___acceleration_27)); }
	inline float get_acceleration_27() const { return ___acceleration_27; }
	inline float* get_address_of_acceleration_27() { return &___acceleration_27; }
	inline void set_acceleration_27(float value)
	{
		___acceleration_27 = value;
	}

	inline static int32_t get_offset_of_isDebug_28() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___isDebug_28)); }
	inline bool get_isDebug_28() const { return ___isDebug_28; }
	inline bool* get_address_of_isDebug_28() { return &___isDebug_28; }
	inline void set_isDebug_28(bool value)
	{
		___isDebug_28 = value;
	}

	inline static int32_t get_offset_of_isShakeEnable_29() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___isShakeEnable_29)); }
	inline bool get_isShakeEnable_29() const { return ___isShakeEnable_29; }
	inline bool* get_address_of_isShakeEnable_29() { return &___isShakeEnable_29; }
	inline void set_isShakeEnable_29(bool value)
	{
		___isShakeEnable_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};



// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// GameCanvas.IGameCanvas GameCanvas.BehaviourBase::get_gc()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline (BehaviourBase_tCE3EEB2BB1EA468AFE888981532CE7F6B8006A0A * __this, const RuntimeMethod* method);
// System.Boolean Game::IsOnDifficultyToggle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Game_IsOnDifficultyToggle_mFF3AFAC72F4DE2A97AC2E604C12DE7AFFAA2D230 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, float ___y0, const RuntimeMethod* method);
// System.Void Game::ToggleDifficulty(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_ToggleDifficulty_m441DA310478CAD49940DF8FAE40F440E67316596 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, float ___x0, const RuntimeMethod* method);
// System.Boolean Game::IsOnTimeAttack(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Game_IsOnTimeAttack_mD7858CA02F0A22D6F4C78A1FFA694F2E68B2579D (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, float ___y0, const RuntimeMethod* method);
// System.Void Game::StartRandomizedTimeAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_StartRandomizedTimeAttack_mBC4B4D2DE33583723E9ADF50AB822BF92F589281 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method);
// System.Boolean Game::IsOnTimeLimit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Game_IsOnTimeLimit_m58B122DB7FEBF8DC4C6FCDFC3ED5DCD71C27FCB3 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, float ___y0, const RuntimeMethod* method);
// System.Void Game::StartTimeLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_StartTimeLimit_mDFACBBFB142CBCC8DA385A91493048239121425A (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Game::CheckTap(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_CheckTap_m58ED0110B8C786950A319704ADF990CA6006B3C2 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void Game::CheckShake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_CheckShake_m20C5E1AF1C607D9FB6FC339501555B2A67382BBC (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method);
// System.Void Game::BackToTitle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_BackToTitle_m9182AE88378488E8050E5B118D9A2308BA564981 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mCD7505433C26B6FA511AC1EA07E58AEF7ED1C213 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void Game::FoodSplashed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_FoodSplashed_m6A27AC88E3F690B1964CAF0FA5F89E0E01752EDC (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method);
// System.Void Game::DrawBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawBackground_mC389BAABCF1EFF547CCC3EB6A1837CC8828CA26E (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method);
// System.Void Game::DrawFlavorSplash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawFlavorSplash_mDAD7958C5A6BA7DEB007215641EB7F0DD9444724 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method);
// System.Void Game::DrawDifficultyText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawDifficultyText_m2F53B4527DAB6A7FD5E6B61C19019740D106C447 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method);
// System.Void Game::DrawDifficultyIcon(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawDifficultyIcon_m191AF43AD7A736FF384192EA496438C44019E6B6 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, int32_t ___difficulty0, const RuntimeMethod* method);
// System.Void Game::DrawSelectedCondiments(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawSelectedCondiments_mF5EABCCBFCAEA5B9B633143DF808D592A1EF064B (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, int32_t ___selectedCondiments0, const RuntimeMethod* method);
// System.Void Game::DrawProgress(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawProgress_mF24B96DACE3205ACAB61F72ACC629F4AB472BFDC (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, int32_t ___progress0, const RuntimeMethod* method);
// System.Void Game::DrawTimeCountDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawTimeCountDown_m68BFE00F3BB82409F02B748C4E31E36919B17B72 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, int32_t ___countdown0, const RuntimeMethod* method);
// System.Void Game::DrawDifficultyDuringGame(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawDifficultyDuringGame_mE7EBD8C9BB7486D68D514CF4499BAB60A65E1080 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, int32_t ___status0, int32_t ___difficulty1, const RuntimeMethod* method);
// System.Void Game::DrawCondiments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawCondiments_m804BAB4E6EA3E8EAABE199988C350E7D4AEDBC1A (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method);
// System.Void Game::DrawFoods(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawFoods_m86400AEAC9CA2BE719C54CFB737EA4795874C84D (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void Game::DrawAccelerationStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawAccelerationStatus_m4BD2A7379A67B3AFC42933139F8AF13DD16ED2C8 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method);
// System.Void Game::DrawSplashedCountDuringGame(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawSplashedCountDuringGame_m4F1B0EDEC6DA359ED6F58F8C8CAF19383E341E29 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, int32_t ___splashedCount0, const RuntimeMethod* method);
// System.Void Game::DrawFinish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawFinish_m9A50AE98BFE92933E8C68349823751B3CF9DFE0B (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method);
// System.Void Game::DrawDifficulty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawDifficulty_mC2D07DB107E30CCC8A72F61F7E7EFA05D9EBEE4D (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, int32_t ___difficulty0, const RuntimeMethod* method);
// System.Void Game::DrawResultText(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawResultText_m02276001AE057A9482A9F4FEA32E0F47D0015F91 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, int32_t ___difficulty0, int32_t ___missCount1, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// System.Void Game::DrawCenter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawCenter_mD043E4BD4469F35EBD93AB5F95E44DB0FF73E3F3 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, String_t* ___str0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m5D784E6CEEBE99ED8749AA4B9491D926273FD749 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void Game::DrawCenterSecondary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawCenterSecondary_m9164015BE41A89A1E51D61599FBD954FD880EAD4 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Void Game::DrawTapToReturn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawTapToReturn_m6F340BCA590D481FAFE3E18C20CCF3245B00EAF1 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m37345890E8136134556D27E57315B584AC51D53F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void GameCanvas.GameBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBase__ctor_m3700C4F8A5C2EC74EE84D1761A9B81FA2A96C932 (GameBase_tEF3F937253FD6A261158B06A5A4A128F22B69C85 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m90D0B6DEB625101355554D49B2EE2FB67C875860 (EmbeddedAttribute_tD9AECC2A5FF80678B3EF0F991A8F7864D4D6217B * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Game::InitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_InitGame_mFF2A3FFFDCE97D51EECB974B86CD236980264CB1 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputAcceleration_t4A0FA4CF6724D6A6AA97DB9627BF8D803BB6309B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISound_t57F3CA00C15A73B3DAD63859FFFFE14289427309_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// gc.ChangeCanvasSize(720, 1280);
		RuntimeObject* L_0;
		L_0 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)720);
		V_1 = ((int32_t)1280);
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t*, int32_t* >::Invoke(0 /* System.Void GameCanvas.IGraphicsEx::ChangeCanvasSize(System.Int32& modreq(System.Runtime.InteropServices.InAttribute),System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_0, (&V_0), (&V_1));
		// gc.IsAccelerometerEnabled = true;
		RuntimeObject* L_1;
		L_1 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void GameCanvas.IInputAcceleration::set_IsAccelerometerEnabled(System.Boolean) */, IInputAcceleration_t4A0FA4CF6724D6A6AA97DB9627BF8D803BB6309B_il2cpp_TypeInfo_var, L_1, (bool)1);
		// gc.PlaySound(GcSound.TitleBGM, GcSoundTrack.BGM1, true);
		RuntimeObject* L_2;
		L_2 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InterfaceActionInvoker3< GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F *, uint8_t, bool >::Invoke(0 /* System.Void GameCanvas.ISound::PlaySound(GameCanvas.GcSound& modreq(System.Runtime.InteropServices.InAttribute),GameCanvas.GcSoundTrack,System.Boolean) */, ISound_t57F3CA00C15A73B3DAD63859FFFFE14289427309_il2cpp_TypeInfo_var, L_2, (((GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_StaticFields*)il2cpp_codegen_static_fields_for(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_il2cpp_TypeInfo_var))->get_address_of_TitleBGM_4()), 0, (bool)1);
		// }
		return;
	}
}
// System.Void Game::UpdateGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_UpdateGame_m3CC2EA34259A23A86CB5BE763182B17A476412C3 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputPointerEx_t77FF40CB496C7D889AF48A8B97C1C8583584A3C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISoundEx_tD25BD54686D9B9B56DECF8BEC2D915B0A0D66F3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4F093A84AE3078D3C42B98B0D4626BD342F7BA0);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// sec += 1;
		int32_t L_0 = __this->get_sec_8();
		__this->set_sec_8(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// if (status == 0)
		int32_t L_1 = __this->get_status_14();
		if (L_1)
		{
			goto IL_0091;
		}
	}
	{
		// if (!preFrameTapped)
		bool L_2 = __this->get_preFrameTapped_24();
		if (L_2)
		{
			goto IL_02d3;
		}
	}
	{
		// float x = gc.GetPointerX(1);
		RuntimeObject* L_3;
		L_3 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_2 = 1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker1< float, int32_t* >::Invoke(2 /* System.Single GameCanvas.IInputPointerEx::GetPointerX(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IInputPointerEx_t77FF40CB496C7D889AF48A8B97C1C8583584A3C3_il2cpp_TypeInfo_var, L_3, (&V_2));
		V_0 = L_4;
		// float y = gc.GetPointerY(1);
		RuntimeObject* L_5;
		L_5 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_2 = 1;
		NullCheck(L_5);
		float L_6;
		L_6 = InterfaceFuncInvoker1< float, int32_t* >::Invoke(3 /* System.Single GameCanvas.IInputPointerEx::GetPointerY(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IInputPointerEx_t77FF40CB496C7D889AF48A8B97C1C8583584A3C3_il2cpp_TypeInfo_var, L_5, (&V_2));
		V_1 = L_6;
		// if (IsOnDifficultyToggle(y))
		float L_7 = V_1;
		bool L_8;
		L_8 = Game_IsOnDifficultyToggle_mFF3AFAC72F4DE2A97AC2E604C12DE7AFFAA2D230(__this, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0066;
		}
	}
	{
		// ToggleDifficulty(x);
		float L_9 = V_0;
		Game_ToggleDifficulty_m441DA310478CAD49940DF8FAE40F440E67316596(__this, L_9, /*hidden argument*/NULL);
		// gc.PlaySE(GcSound.Click1);
		RuntimeObject* L_10;
		L_10 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		InterfaceActionInvoker1< GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F * >::Invoke(0 /* System.Void GameCanvas.ISoundEx::PlaySE(GameCanvas.GcSound& modreq(System.Runtime.InteropServices.InAttribute)) */, ISoundEx_tD25BD54686D9B9B56DECF8BEC2D915B0A0D66F3F_il2cpp_TypeInfo_var, L_10, (((GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_StaticFields*)il2cpp_codegen_static_fields_for(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_il2cpp_TypeInfo_var))->get_address_of_Click1_1()));
		// }
		goto IL_02d3;
	}

IL_0066:
	{
		// else if (IsOnTimeAttack(y))
		float L_11 = V_1;
		bool L_12;
		L_12 = Game_IsOnTimeAttack_mD7858CA02F0A22D6F4C78A1FFA694F2E68B2579D(__this, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_007a;
		}
	}
	{
		// StartRandomizedTimeAttack();
		Game_StartRandomizedTimeAttack_mBC4B4D2DE33583723E9ADF50AB822BF92F589281(__this, /*hidden argument*/NULL);
		// }
		goto IL_02d3;
	}

IL_007a:
	{
		// else if (IsOnTimeLimit(y))
		float L_13 = V_1;
		bool L_14;
		L_14 = Game_IsOnTimeLimit_m58B122DB7FEBF8DC4C6FCDFC3ED5DCD71C27FCB3(__this, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_02d3;
		}
	}
	{
		// StartTimeLimit();
		Game_StartTimeLimit_mDFACBBFB142CBCC8DA385A91493048239121425A(__this, /*hidden argument*/NULL);
		// }
		goto IL_02d3;
	}

IL_0091:
	{
		// else if (status == 1)
		int32_t L_15 = __this->get_status_14();
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_019b;
		}
	}
	{
		// if (isSplashTapInterval)
		bool L_16 = __this->get_isSplashTapInterval_22();
		if (!L_16)
		{
			goto IL_012b;
		}
	}
	{
		// splashIntervalCount -= 1;
		int32_t L_17 = __this->get_splashIntervalCount_21();
		__this->set_splashIntervalCount_21(((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)));
		// if (splashIntervalCount == 0)
		int32_t L_18 = __this->get_splashIntervalCount_21();
		if (L_18)
		{
			goto IL_012b;
		}
	}
	{
		// splashIntervalCount = 15;
		__this->set_splashIntervalCount_21(((int32_t)15));
		// isSplashTapInterval = false;
		__this->set_isSplashTapInterval_22((bool)0);
		// if (progress < 30)
		int32_t L_19 = __this->get_progress_20();
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)30))))
		{
			goto IL_00e5;
		}
	}
	{
		// progress += 1;
		int32_t L_20 = __this->get_progress_20();
		__this->set_progress_20(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)));
	}

IL_00e5:
	{
		// if (isGameFinished || progress == 30)
		bool L_21 = __this->get_isGameFinished_25();
		if (L_21)
		{
			goto IL_00f7;
		}
	}
	{
		int32_t L_22 = __this->get_progress_20();
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)30)))))
		{
			goto IL_012b;
		}
	}

IL_00f7:
	{
		// isGameFinished = true;
		__this->set_isGameFinished_25((bool)1);
		// clearTime = sec;
		int32_t L_23 = __this->get_sec_8();
		__this->set_clearTime_13(L_23);
		// Debug.Log("clearTime:");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteralD4F093A84AE3078D3C42B98B0D4626BD342F7BA0, /*hidden argument*/NULL);
		// Debug.Log(clearTime);
		int32_t L_24 = __this->get_clearTime_13();
		int32_t L_25 = L_24;
		RuntimeObject * L_26 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_25);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_26, /*hidden argument*/NULL);
		// status = 3;
		__this->set_status_14(3);
	}

IL_012b:
	{
		// if (!preFrameTapped)
		bool L_27 = __this->get_preFrameTapped_24();
		if (L_27)
		{
			goto IL_0157;
		}
	}
	{
		// CheckTap(gc.GetPointerX(1), gc.GetPointerY(1));
		RuntimeObject* L_28;
		L_28 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_2 = 1;
		NullCheck(L_28);
		float L_29;
		L_29 = InterfaceFuncInvoker1< float, int32_t* >::Invoke(2 /* System.Single GameCanvas.IInputPointerEx::GetPointerX(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IInputPointerEx_t77FF40CB496C7D889AF48A8B97C1C8583584A3C3_il2cpp_TypeInfo_var, L_28, (&V_2));
		RuntimeObject* L_30;
		L_30 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_3 = 1;
		NullCheck(L_30);
		float L_31;
		L_31 = InterfaceFuncInvoker1< float, int32_t* >::Invoke(3 /* System.Single GameCanvas.IInputPointerEx::GetPointerY(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IInputPointerEx_t77FF40CB496C7D889AF48A8B97C1C8583584A3C3_il2cpp_TypeInfo_var, L_30, (&V_3));
		Game_CheckTap_m58ED0110B8C786950A319704ADF990CA6006B3C2(__this, L_29, L_31, /*hidden argument*/NULL);
	}

IL_0157:
	{
		// if (acceleration < 2.0f)
		float L_32 = __this->get_acceleration_27();
		if ((!(((float)L_32) < ((float)(2.0f)))))
		{
			goto IL_016c;
		}
	}
	{
		// CheckShake();
		Game_CheckShake_m20C5E1AF1C607D9FB6FC339501555B2A67382BBC(__this, /*hidden argument*/NULL);
		// }
		goto IL_0177;
	}

IL_016c:
	{
		// acceleration = 0.0f;
		__this->set_acceleration_27((0.0f));
	}

IL_0177:
	{
		// if (gc.GetPointerDuration(0) >= 2)
		RuntimeObject* L_33;
		L_33 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_2 = 0;
		NullCheck(L_33);
		float L_34;
		L_34 = InterfaceFuncInvoker1< float, int32_t* >::Invoke(0 /* System.Single GameCanvas.IInputPointerEx::GetPointerDuration(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IInputPointerEx_t77FF40CB496C7D889AF48A8B97C1C8583584A3C3_il2cpp_TypeInfo_var, L_33, (&V_2));
		if ((!(((float)L_34) >= ((float)(2.0f)))))
		{
			goto IL_02d3;
		}
	}
	{
		// BackToTitle();
		Game_BackToTitle_m9182AE88378488E8050E5B118D9A2308BA564981(__this, /*hidden argument*/NULL);
		// }
		goto IL_02d3;
	}

IL_019b:
	{
		// else if (status == 2)
		int32_t L_35 = __this->get_status_14();
		if ((!(((uint32_t)L_35) == ((uint32_t)2))))
		{
			goto IL_0288;
		}
	}
	{
		// countdown -= 1;
		int32_t L_36 = __this->get_countdown_9();
		__this->set_countdown_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)1)));
		// if (countdown == 0)
		int32_t L_37 = __this->get_countdown_9();
		if (L_37)
		{
			goto IL_01d2;
		}
	}
	{
		// isGameFinished = true;
		__this->set_isGameFinished_25((bool)1);
		// sec = 0;
		__this->set_sec_8(0);
		// status = 4;
		__this->set_status_14(4);
	}

IL_01d2:
	{
		// if (isSplashTapInterval)
		bool L_38 = __this->get_isSplashTapInterval_22();
		if (!L_38)
		{
			goto IL_021e;
		}
	}
	{
		// splashIntervalCount -= 1;
		int32_t L_39 = __this->get_splashIntervalCount_21();
		__this->set_splashIntervalCount_21(((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1)));
		// if (splashIntervalCount == 0)
		int32_t L_40 = __this->get_splashIntervalCount_21();
		if (L_40)
		{
			goto IL_021e;
		}
	}
	{
		// splashIntervalCount = 15;
		__this->set_splashIntervalCount_21(((int32_t)15));
		// isSplashTapInterval = false;
		__this->set_isSplashTapInterval_22((bool)0);
		// int randomIndex = UnityEngine.Random.Range(0, possibleValues.Length);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_41 = __this->get_possibleValues_12();
		NullCheck(L_41);
		int32_t L_42;
		L_42 = Random_Range_mCD7505433C26B6FA511AC1EA07E58AEF7ED1C213(0, ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length))), /*hidden argument*/NULL);
		V_4 = L_42;
		// currentFood = possibleValues[randomIndex];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_43 = __this->get_possibleValues_12();
		int32_t L_44 = V_4;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		int32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		__this->set_currentFood_11(L_46);
	}

IL_021e:
	{
		// if (!preFrameTapped)
		bool L_47 = __this->get_preFrameTapped_24();
		if (L_47)
		{
			goto IL_024a;
		}
	}
	{
		// CheckTap(gc.GetPointerX(1), gc.GetPointerY(1));
		RuntimeObject* L_48;
		L_48 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_2 = 1;
		NullCheck(L_48);
		float L_49;
		L_49 = InterfaceFuncInvoker1< float, int32_t* >::Invoke(2 /* System.Single GameCanvas.IInputPointerEx::GetPointerX(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IInputPointerEx_t77FF40CB496C7D889AF48A8B97C1C8583584A3C3_il2cpp_TypeInfo_var, L_48, (&V_2));
		RuntimeObject* L_50;
		L_50 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_3 = 1;
		NullCheck(L_50);
		float L_51;
		L_51 = InterfaceFuncInvoker1< float, int32_t* >::Invoke(3 /* System.Single GameCanvas.IInputPointerEx::GetPointerY(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IInputPointerEx_t77FF40CB496C7D889AF48A8B97C1C8583584A3C3_il2cpp_TypeInfo_var, L_50, (&V_3));
		Game_CheckTap_m58ED0110B8C786950A319704ADF990CA6006B3C2(__this, L_49, L_51, /*hidden argument*/NULL);
	}

IL_024a:
	{
		// if (acceleration < 2.0f)
		float L_52 = __this->get_acceleration_27();
		if ((!(((float)L_52) < ((float)(2.0f)))))
		{
			goto IL_025f;
		}
	}
	{
		// CheckShake();
		Game_CheckShake_m20C5E1AF1C607D9FB6FC339501555B2A67382BBC(__this, /*hidden argument*/NULL);
		// }
		goto IL_026a;
	}

IL_025f:
	{
		// acceleration = 0.0f;
		__this->set_acceleration_27((0.0f));
	}

IL_026a:
	{
		// if (gc.GetPointerDuration(0) >= 2)
		RuntimeObject* L_53;
		L_53 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_2 = 0;
		NullCheck(L_53);
		float L_54;
		L_54 = InterfaceFuncInvoker1< float, int32_t* >::Invoke(0 /* System.Single GameCanvas.IInputPointerEx::GetPointerDuration(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IInputPointerEx_t77FF40CB496C7D889AF48A8B97C1C8583584A3C3_il2cpp_TypeInfo_var, L_53, (&V_2));
		if ((!(((float)L_54) >= ((float)(2.0f)))))
		{
			goto IL_02d3;
		}
	}
	{
		// BackToTitle();
		Game_BackToTitle_m9182AE88378488E8050E5B118D9A2308BA564981(__this, /*hidden argument*/NULL);
		// }
		goto IL_02d3;
	}

IL_0288:
	{
		// else if (status == 3 && sec > clearTime + 180 || status == 4 && sec > 180)
		int32_t L_55 = __this->get_status_14();
		if ((!(((uint32_t)L_55) == ((uint32_t)3))))
		{
			goto IL_02a5;
		}
	}
	{
		int32_t L_56 = __this->get_sec_8();
		int32_t L_57 = __this->get_clearTime_13();
		if ((((int32_t)L_56) > ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)((int32_t)180))))))
		{
			goto IL_02bb;
		}
	}

IL_02a5:
	{
		int32_t L_58 = __this->get_status_14();
		if ((!(((uint32_t)L_58) == ((uint32_t)4))))
		{
			goto IL_02d3;
		}
	}
	{
		int32_t L_59 = __this->get_sec_8();
		if ((((int32_t)L_59) <= ((int32_t)((int32_t)180))))
		{
			goto IL_02d3;
		}
	}

IL_02bb:
	{
		// if (gc.GetPointerFrameCount(0) == 1)
		RuntimeObject* L_60;
		L_60 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_2 = 0;
		NullCheck(L_60);
		int32_t L_61;
		L_61 = InterfaceFuncInvoker1< int32_t, int32_t* >::Invoke(1 /* System.Int32 GameCanvas.IInputPointerEx::GetPointerFrameCount(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IInputPointerEx_t77FF40CB496C7D889AF48A8B97C1C8583584A3C3_il2cpp_TypeInfo_var, L_60, (&V_2));
		if ((!(((uint32_t)L_61) == ((uint32_t)1))))
		{
			goto IL_02d3;
		}
	}
	{
		// BackToTitle();
		Game_BackToTitle_m9182AE88378488E8050E5B118D9A2308BA564981(__this, /*hidden argument*/NULL);
	}

IL_02d3:
	{
		// if (gc.GetPointerFrameCount(0) >= 1)
		RuntimeObject* L_62;
		L_62 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_2 = 0;
		NullCheck(L_62);
		int32_t L_63;
		L_63 = InterfaceFuncInvoker1< int32_t, int32_t* >::Invoke(1 /* System.Int32 GameCanvas.IInputPointerEx::GetPointerFrameCount(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IInputPointerEx_t77FF40CB496C7D889AF48A8B97C1C8583584A3C3_il2cpp_TypeInfo_var, L_62, (&V_2));
		if ((((int32_t)L_63) < ((int32_t)1)))
		{
			goto IL_02ed;
		}
	}
	{
		// preFrameTapped = true;
		__this->set_preFrameTapped_24((bool)1);
		// }
		return;
	}

IL_02ed:
	{
		// preFrameTapped = false;
		__this->set_preFrameTapped_24((bool)0);
		// }
		return;
	}
}
// System.Boolean Game::IsOnDifficultyToggle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Game_IsOnDifficultyToggle_mFF3AFAC72F4DE2A97AC2E604C12DE7AFFAA2D230 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, float ___y0, const RuntimeMethod* method)
{
	{
		// return 890 < y && y < 950;
		float L_0 = ___y0;
		if ((!(((float)(890.0f)) < ((float)L_0))))
		{
			goto IL_0011;
		}
	}
	{
		float L_1 = ___y0;
		return (bool)((((float)L_1) < ((float)(950.0f)))? 1 : 0);
	}

IL_0011:
	{
		return (bool)0;
	}
}
// System.Void Game::ToggleDifficulty(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_ToggleDifficulty_m441DA310478CAD49940DF8FAE40F440E67316596 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, float ___x0, const RuntimeMethod* method)
{
	{
		// if (100 < x && x < 630)
		float L_0 = ___x0;
		if ((!(((float)(100.0f)) < ((float)L_0))))
		{
			goto IL_001e;
		}
	}
	{
		float L_1 = ___x0;
		if ((!(((float)L_1) < ((float)(630.0f)))))
		{
			goto IL_001e;
		}
	}
	{
		// difficulty = 1 - difficulty;
		int32_t L_2 = __this->get_difficulty_15();
		__this->set_difficulty_15(((int32_t)il2cpp_codegen_subtract((int32_t)1, (int32_t)L_2)));
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Boolean Game::IsOnTimeAttack(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Game_IsOnTimeAttack_mD7858CA02F0A22D6F4C78A1FFA694F2E68B2579D (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, float ___y0, const RuntimeMethod* method)
{
	{
		// return 1050 < y && y < 1100;
		float L_0 = ___y0;
		if ((!(((float)(1050.0f)) < ((float)L_0))))
		{
			goto IL_0011;
		}
	}
	{
		float L_1 = ___y0;
		return (bool)((((float)L_1) < ((float)(1100.0f)))? 1 : 0);
	}

IL_0011:
	{
		return (bool)0;
	}
}
// System.Void Game::StartRandomizedTimeAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_StartRandomizedTimeAttack_mBC4B4D2DE33583723E9ADF50AB822BF92F589281 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISound_t57F3CA00C15A73B3DAD63859FFFFE14289427309_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < foodsArray.Length; i++)
		V_0 = 0;
		goto IL_0027;
	}

IL_0004:
	{
		// int randomIndex = UnityEngine.Random.Range(0, possibleValues.Length);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_possibleValues_12();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Random_Range_mCD7505433C26B6FA511AC1EA07E58AEF7ED1C213(0, ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), /*hidden argument*/NULL);
		V_1 = L_1;
		// foodsArray[i] = possibleValues[randomIndex];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = __this->get_foodsArray_19();
		int32_t L_3 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = __this->get_possibleValues_12();
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)L_7);
		// for (int i = 0; i < foodsArray.Length; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0027:
	{
		// for (int i = 0; i < foodsArray.Length; i++)
		int32_t L_9 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = __this->get_foodsArray_19();
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// sec = 0;
		__this->set_sec_8(0);
		// gc.StopSound(GcSoundTrack.BGM1);
		RuntimeObject* L_11;
		L_11 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		InterfaceActionInvoker1< uint8_t >::Invoke(1 /* System.Void GameCanvas.ISound::StopSound(GameCanvas.GcSoundTrack) */, ISound_t57F3CA00C15A73B3DAD63859FFFFE14289427309_il2cpp_TypeInfo_var, L_11, 0);
		// gc.PlaySound(GcSound.GameBGM, GcSoundTrack.BGM2, true);
		RuntimeObject* L_12;
		L_12 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		InterfaceActionInvoker3< GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F *, uint8_t, bool >::Invoke(0 /* System.Void GameCanvas.ISound::PlaySound(GameCanvas.GcSound& modreq(System.Runtime.InteropServices.InAttribute),GameCanvas.GcSoundTrack,System.Boolean) */, ISound_t57F3CA00C15A73B3DAD63859FFFFE14289427309_il2cpp_TypeInfo_var, L_12, (((GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_StaticFields*)il2cpp_codegen_static_fields_for(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_il2cpp_TypeInfo_var))->get_address_of_GameBGM_2()), 1, (bool)1);
		// status = 1;
		__this->set_status_14(1);
		// }
		return;
	}
}
// System.Boolean Game::IsOnTimeLimit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Game_IsOnTimeLimit_m58B122DB7FEBF8DC4C6FCDFC3ED5DCD71C27FCB3 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, float ___y0, const RuntimeMethod* method)
{
	{
		// return 1150 < y && y < 1200;
		float L_0 = ___y0;
		if ((!(((float)(1150.0f)) < ((float)L_0))))
		{
			goto IL_0011;
		}
	}
	{
		float L_1 = ___y0;
		return (bool)((((float)L_1) < ((float)(1200.0f)))? 1 : 0);
	}

IL_0011:
	{
		return (bool)0;
	}
}
// System.Void Game::StartTimeLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_StartTimeLimit_mDFACBBFB142CBCC8DA385A91493048239121425A (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISound_t57F3CA00C15A73B3DAD63859FFFFE14289427309_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// countdown = 30 * 60;
		__this->set_countdown_9(((int32_t)1800));
		// splashedCount = 0;
		__this->set_splashedCount_10(0);
		// int randomIndex = UnityEngine.Random.Range(0, possibleValues.Length);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_possibleValues_12();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Random_Range_mCD7505433C26B6FA511AC1EA07E58AEF7ED1C213(0, ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), /*hidden argument*/NULL);
		V_0 = L_1;
		// currentFood = possibleValues[randomIndex];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = __this->get_possibleValues_12();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		__this->set_currentFood_11(L_5);
		// gc.StopSound(GcSoundTrack.BGM1);
		RuntimeObject* L_6;
		L_6 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< uint8_t >::Invoke(1 /* System.Void GameCanvas.ISound::StopSound(GameCanvas.GcSoundTrack) */, ISound_t57F3CA00C15A73B3DAD63859FFFFE14289427309_il2cpp_TypeInfo_var, L_6, 0);
		// gc.PlaySound(GcSound.GameBGM, GcSoundTrack.BGM2, true);
		RuntimeObject* L_7;
		L_7 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		InterfaceActionInvoker3< GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F *, uint8_t, bool >::Invoke(0 /* System.Void GameCanvas.ISound::PlaySound(GameCanvas.GcSound& modreq(System.Runtime.InteropServices.InAttribute),GameCanvas.GcSoundTrack,System.Boolean) */, ISound_t57F3CA00C15A73B3DAD63859FFFFE14289427309_il2cpp_TypeInfo_var, L_7, (((GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_StaticFields*)il2cpp_codegen_static_fields_for(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_il2cpp_TypeInfo_var))->get_address_of_GameBGM_2()), 1, (bool)1);
		// status = 2;
		__this->set_status_14(2);
		// }
		return;
	}
}
// System.Void Game::CheckTap(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_CheckTap_m58ED0110B8C786950A319704ADF990CA6006B3C2 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		// if (1000 < y && y < 1188)
		float L_0 = ___y1;
		if ((!(((float)(1000.0f)) < ((float)L_0))))
		{
			goto IL_0059;
		}
	}
	{
		float L_1 = ___y1;
		if ((!(((float)L_1) < ((float)(1188.0f)))))
		{
			goto IL_0059;
		}
	}
	{
		// if (57 < x && x < 207)
		float L_2 = ___x0;
		if ((!(((float)(57.0f)) < ((float)L_2))))
		{
			goto IL_0029;
		}
	}
	{
		float L_3 = ___x0;
		if ((!(((float)L_3) < ((float)(207.0f)))))
		{
			goto IL_0029;
		}
	}
	{
		// selectedCondiments = 2;
		__this->set_selectedCondiments_18(2);
		// }
		goto IL_0059;
	}

IL_0029:
	{
		// else if (331 < x && x < 447)
		float L_4 = ___x0;
		if ((!(((float)(331.0f)) < ((float)L_4))))
		{
			goto IL_0042;
		}
	}
	{
		float L_5 = ___x0;
		if ((!(((float)L_5) < ((float)(447.0f)))))
		{
			goto IL_0042;
		}
	}
	{
		// selectedCondiments = 3;
		__this->set_selectedCondiments_18(3);
		// }
		goto IL_0059;
	}

IL_0042:
	{
		// else if (566 < x && x < 663)
		float L_6 = ___x0;
		if ((!(((float)(566.0f)) < ((float)L_6))))
		{
			goto IL_0059;
		}
	}
	{
		float L_7 = ___x0;
		if ((!(((float)L_7) < ((float)(663.0f)))))
		{
			goto IL_0059;
		}
	}
	{
		// selectedCondiments = 5;
		__this->set_selectedCondiments_18(5);
	}

IL_0059:
	{
		// if (250 < y && y < 886)
		float L_8 = ___y1;
		if ((!(((float)(250.0f)) < ((float)L_8))))
		{
			goto IL_0089;
		}
	}
	{
		float L_9 = ___y1;
		if ((!(((float)L_9) < ((float)(886.0f)))))
		{
			goto IL_0089;
		}
	}
	{
		// if (!isSplashTapInterval)
		bool L_10 = __this->get_isSplashTapInterval_22();
		if (L_10)
		{
			goto IL_0089;
		}
	}
	{
		// if (progress < 30)
		int32_t L_11 = __this->get_progress_20();
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)30))))
		{
			goto IL_0089;
		}
	}
	{
		// if (!isShakeEnable)
		bool L_12 = __this->get_isShakeEnable_29();
		if (L_12)
		{
			goto IL_0089;
		}
	}
	{
		// FoodSplashed();
		Game_FoodSplashed_m6A27AC88E3F690B1964CAF0FA5F89E0E01752EDC(__this, /*hidden argument*/NULL);
	}

IL_0089:
	{
		// }
		return;
	}
}
// System.Void Game::CheckShake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_CheckShake_m20C5E1AF1C607D9FB6FC339501555B2A67382BBC (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputAccelerationEx_t2AD6D1948812B141E477368373B2D90BC69C2AAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float x = gc.AccelerationLastX;
		RuntimeObject* L_0;
		L_0 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single GameCanvas.IInputAccelerationEx::get_AccelerationLastX() */, IInputAccelerationEx_t2AD6D1948812B141E477368373B2D90BC69C2AAA_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		// float y = gc.AccelerationLastY;
		RuntimeObject* L_2;
		L_2 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		float L_3;
		L_3 = InterfaceFuncInvoker0< float >::Invoke(1 /* System.Single GameCanvas.IInputAccelerationEx::get_AccelerationLastY() */, IInputAccelerationEx_t2AD6D1948812B141E477368373B2D90BC69C2AAA_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
		// float z = gc.AccelerationLastZ;
		RuntimeObject* L_4;
		L_4 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		float L_5;
		L_5 = InterfaceFuncInvoker0< float >::Invoke(2 /* System.Single GameCanvas.IInputAccelerationEx::get_AccelerationLastZ() */, IInputAccelerationEx_t2AD6D1948812B141E477368373B2D90BC69C2AAA_il2cpp_TypeInfo_var, L_4);
		V_2 = L_5;
		// acceleration = Mathf.Sqrt(x * x + y * y + z * z);
		float L_6 = V_0;
		float L_7 = V_0;
		float L_8 = V_1;
		float L_9 = V_1;
		float L_10 = V_2;
		float L_11 = V_2;
		float L_12;
		L_12 = sqrtf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), (float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)))), (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)))));
		__this->set_acceleration_27(L_12);
		// if (acceleration > shakeThreshold)
		float L_13 = __this->get_acceleration_27();
		float L_14 = __this->get_shakeThreshold_26();
		if ((!(((float)L_13) > ((float)L_14))))
		{
			goto IL_0068;
		}
	}
	{
		// if (!isSplashShakeInterval)
		bool L_15 = __this->get_isSplashShakeInterval_23();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		// if (progress < 30)
		int32_t L_16 = __this->get_progress_20();
		if ((((int32_t)L_16) >= ((int32_t)((int32_t)30))))
		{
			goto IL_006f;
		}
	}
	{
		// FoodSplashed();
		Game_FoodSplashed_m6A27AC88E3F690B1964CAF0FA5F89E0E01752EDC(__this, /*hidden argument*/NULL);
		// isSplashShakeInterval = true;
		__this->set_isSplashShakeInterval_23((bool)1);
		// }
		return;
	}

IL_0068:
	{
		// isSplashShakeInterval = false;
		__this->set_isSplashShakeInterval_23((bool)0);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void Game::FoodSplashed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_FoodSplashed_m6A27AC88E3F690B1964CAF0FA5F89E0E01752EDC (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISoundEx_tD25BD54686D9B9B56DECF8BEC2D915B0A0D66F3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gc.PlaySE(GcSound.Shake);
		RuntimeObject* L_0;
		L_0 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		InterfaceActionInvoker1< GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F * >::Invoke(0 /* System.Void GameCanvas.ISoundEx::PlaySE(GameCanvas.GcSound& modreq(System.Runtime.InteropServices.InAttribute)) */, ISoundEx_tD25BD54686D9B9B56DECF8BEC2D915B0A0D66F3F_il2cpp_TypeInfo_var, L_0, (((GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_StaticFields*)il2cpp_codegen_static_fields_for(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_il2cpp_TypeInfo_var))->get_address_of_Shake_3()));
		// if (status == 1)
		int32_t L_1 = __this->get_status_14();
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0087;
		}
	}
	{
		// if (foodsArray[progress] == selectedCondiments)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = __this->get_foodsArray_19();
		int32_t L_3 = __this->get_progress_20();
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = __this->get_selectedCondiments_18();
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0053;
		}
	}
	{
		// isSplashTapInterval = true;
		__this->set_isSplashTapInterval_22((bool)1);
		// foodsArray[progress] = foodsArray[progress] * 31;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = __this->get_foodsArray_19();
		int32_t L_8 = __this->get_progress_20();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = __this->get_foodsArray_19();
		int32_t L_10 = __this->get_progress_20();
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)((int32_t)31))));
		// }
		return;
	}

IL_0053:
	{
		// if (difficulty == 1)
		int32_t L_13 = __this->get_difficulty_15();
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_0078;
		}
	}
	{
		// splashIntervalCount = 1;
		__this->set_splashIntervalCount_21(1);
		// isSplashTapInterval = true;
		__this->set_isSplashTapInterval_22((bool)1);
		// isSplashShakeInterval = true;
		__this->set_isSplashShakeInterval_23((bool)1);
		// isGameFinished = true;
		__this->set_isGameFinished_25((bool)1);
	}

IL_0078:
	{
		// missCount += 1;
		int32_t L_14 = __this->get_missCount_17();
		__this->set_missCount_17(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)));
		// }
		return;
	}

IL_0087:
	{
		// else if (status == 2)
		int32_t L_15 = __this->get_status_14();
		if ((!(((uint32_t)L_15) == ((uint32_t)2))))
		{
			goto IL_0104;
		}
	}
	{
		// if (currentFood == selectedCondiments)
		int32_t L_16 = __this->get_currentFood_11();
		int32_t L_17 = __this->get_selectedCondiments_18();
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_00c3;
		}
	}
	{
		// isSplashTapInterval = true;
		__this->set_isSplashTapInterval_22((bool)1);
		// currentFood = currentFood * 31;
		int32_t L_18 = __this->get_currentFood_11();
		__this->set_currentFood_11(((int32_t)il2cpp_codegen_multiply((int32_t)L_18, (int32_t)((int32_t)31))));
		// splashedCount += 1;
		int32_t L_19 = __this->get_splashedCount_10();
		__this->set_splashedCount_10(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)));
		// }
		return;
	}

IL_00c3:
	{
		// if (difficulty == 1)
		int32_t L_20 = __this->get_difficulty_15();
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			goto IL_00f6;
		}
	}
	{
		// splashIntervalCount = 1;
		__this->set_splashIntervalCount_21(1);
		// isSplashTapInterval = true;
		__this->set_isSplashTapInterval_22((bool)1);
		// isSplashShakeInterval = true;
		__this->set_isSplashShakeInterval_23((bool)1);
		// isGameFinished = true;
		__this->set_isGameFinished_25((bool)1);
		// sec = 0;
		__this->set_sec_8(0);
		// status = 4;
		__this->set_status_14(4);
	}

IL_00f6:
	{
		// missCount += 1;
		int32_t L_21 = __this->get_missCount_17();
		__this->set_missCount_17(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)));
	}

IL_0104:
	{
		// }
		return;
	}
}
// System.Void Game::BackToTitle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_BackToTitle_m9182AE88378488E8050E5B118D9A2308BA564981 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISound_t57F3CA00C15A73B3DAD63859FFFFE14289427309_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sec = 0;
		__this->set_sec_8(0);
		// clearTime = 0;
		__this->set_clearTime_13(0);
		// difficulty = 0;
		__this->set_difficulty_15(0);
		// missCount = 0;
		__this->set_missCount_17(0);
		// selectedCondiments = 2;
		__this->set_selectedCondiments_18(2);
		// foodsArray = new int[30];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		__this->set_foodsArray_19(L_0);
		// progress = 0;
		__this->set_progress_20(0);
		// splashIntervalCount = 15;
		__this->set_splashIntervalCount_21(((int32_t)15));
		// isSplashTapInterval = false;
		__this->set_isSplashTapInterval_22((bool)0);
		// isSplashShakeInterval = false;
		__this->set_isSplashShakeInterval_23((bool)0);
		// isGameFinished = false;
		__this->set_isGameFinished_25((bool)0);
		// preFrameTapped = false;
		__this->set_preFrameTapped_24((bool)0);
		// gc.StopSound(GcSoundTrack.BGM2);
		RuntimeObject* L_1;
		L_1 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< uint8_t >::Invoke(1 /* System.Void GameCanvas.ISound::StopSound(GameCanvas.GcSoundTrack) */, ISound_t57F3CA00C15A73B3DAD63859FFFFE14289427309_il2cpp_TypeInfo_var, L_1, 1);
		// gc.PlaySound(GcSound.TitleBGM, GcSoundTrack.BGM1, true);
		RuntimeObject* L_2;
		L_2 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InterfaceActionInvoker3< GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F *, uint8_t, bool >::Invoke(0 /* System.Void GameCanvas.ISound::PlaySound(GameCanvas.GcSound& modreq(System.Runtime.InteropServices.InAttribute),GameCanvas.GcSoundTrack,System.Boolean) */, ISound_t57F3CA00C15A73B3DAD63859FFFFE14289427309_il2cpp_TypeInfo_var, L_2, (((GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_StaticFields*)il2cpp_codegen_static_fields_for(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_il2cpp_TypeInfo_var))->get_address_of_TitleBGM_4()), 0, (bool)1);
		// status = 0;
		__this->set_status_14(0);
		// }
		return;
	}
}
// System.Void Game::DrawGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawGame_mB9E4FFB9F2AD666C0AF2A1B2FC79CD825270C692 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISoundEx_tD25BD54686D9B9B56DECF8BEC2D915B0A0D66F3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10291B3A4B1D2933821EE5230552A31F47DBEE6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC27A8C6EC24F2B47A3CCCF2BBD734F3B41F3CBD);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (status == 0)
		int32_t L_0 = __this->get_status_14();
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		// DrawBackground();
		Game_DrawBackground_mC389BAABCF1EFF547CCC3EB6A1837CC8828CA26E(__this, /*hidden argument*/NULL);
		// DrawFlavorSplash();
		Game_DrawFlavorSplash_mDAD7958C5A6BA7DEB007215641EB7F0DD9444724(__this, /*hidden argument*/NULL);
		// DrawDifficultyText();
		Game_DrawDifficultyText_m2F53B4527DAB6A7FD5E6B61C19019740D106C447(__this, /*hidden argument*/NULL);
		// DrawDifficultyIcon(difficulty);
		int32_t L_1 = __this->get_difficulty_15();
		Game_DrawDifficultyIcon_m191AF43AD7A736FF384192EA496438C44019E6B6(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0027:
	{
		// else if (status == 1)
		int32_t L_2 = __this->get_status_14();
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_00a1;
		}
	}
	{
		// DrawBackground();
		Game_DrawBackground_mC389BAABCF1EFF547CCC3EB6A1837CC8828CA26E(__this, /*hidden argument*/NULL);
		// DrawSelectedCondiments(selectedCondiments);
		int32_t L_3 = __this->get_selectedCondiments_18();
		Game_DrawSelectedCondiments_mF5EABCCBFCAEA5B9B633143DF808D592A1EF064B(__this, L_3, /*hidden argument*/NULL);
		// DrawProgress(progress);
		int32_t L_4 = __this->get_progress_20();
		Game_DrawProgress_mF24B96DACE3205ACAB61F72ACC629F4AB472BFDC(__this, L_4, /*hidden argument*/NULL);
		// DrawTimeCountDown(sec);
		int32_t L_5 = __this->get_sec_8();
		Game_DrawTimeCountDown_m68BFE00F3BB82409F02B748C4E31E36919B17B72(__this, L_5, /*hidden argument*/NULL);
		// DrawDifficultyDuringGame(status, difficulty);
		int32_t L_6 = __this->get_status_14();
		int32_t L_7 = __this->get_difficulty_15();
		Game_DrawDifficultyDuringGame_mE7EBD8C9BB7486D68D514CF4499BAB60A65E1080(__this, L_6, L_7, /*hidden argument*/NULL);
		// DrawCondiments();
		Game_DrawCondiments_m804BAB4E6EA3E8EAABE199988C350E7D4AEDBC1A(__this, /*hidden argument*/NULL);
		// if (progress < 30)
		int32_t L_8 = __this->get_progress_20();
		if ((((int32_t)L_8) >= ((int32_t)((int32_t)30))))
		{
			goto IL_008f;
		}
	}
	{
		// DrawFoods(foodsArray[progress]);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = __this->get_foodsArray_19();
		int32_t L_10 = __this->get_progress_20();
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Game_DrawFoods_m86400AEAC9CA2BE719C54CFB737EA4795874C84D(__this, L_12, /*hidden argument*/NULL);
	}

IL_008f:
	{
		// if (isDebug)
		bool L_13 = __this->get_isDebug_28();
		if (!L_13)
		{
			goto IL_026c;
		}
	}
	{
		// DrawAccelerationStatus();
		Game_DrawAccelerationStatus_m4BD2A7379A67B3AFC42933139F8AF13DD16ED2C8(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00a1:
	{
		// else if (status == 2)
		int32_t L_14 = __this->get_status_14();
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_010a;
		}
	}
	{
		// DrawBackground();
		Game_DrawBackground_mC389BAABCF1EFF547CCC3EB6A1837CC8828CA26E(__this, /*hidden argument*/NULL);
		// DrawSelectedCondiments(selectedCondiments);
		int32_t L_15 = __this->get_selectedCondiments_18();
		Game_DrawSelectedCondiments_mF5EABCCBFCAEA5B9B633143DF808D592A1EF064B(__this, L_15, /*hidden argument*/NULL);
		// DrawSplashedCountDuringGame(splashedCount);
		int32_t L_16 = __this->get_splashedCount_10();
		Game_DrawSplashedCountDuringGame_m4F1B0EDEC6DA359ED6F58F8C8CAF19383E341E29(__this, L_16, /*hidden argument*/NULL);
		// DrawTimeCountDown(countdown);
		int32_t L_17 = __this->get_countdown_9();
		Game_DrawTimeCountDown_m68BFE00F3BB82409F02B748C4E31E36919B17B72(__this, L_17, /*hidden argument*/NULL);
		// DrawDifficultyDuringGame(status, difficulty);
		int32_t L_18 = __this->get_status_14();
		int32_t L_19 = __this->get_difficulty_15();
		Game_DrawDifficultyDuringGame_mE7EBD8C9BB7486D68D514CF4499BAB60A65E1080(__this, L_18, L_19, /*hidden argument*/NULL);
		// DrawCondiments();
		Game_DrawCondiments_m804BAB4E6EA3E8EAABE199988C350E7D4AEDBC1A(__this, /*hidden argument*/NULL);
		// DrawFoods(currentFood);
		int32_t L_20 = __this->get_currentFood_11();
		Game_DrawFoods_m86400AEAC9CA2BE719C54CFB737EA4795874C84D(__this, L_20, /*hidden argument*/NULL);
		// if (isDebug)
		bool L_21 = __this->get_isDebug_28();
		if (!L_21)
		{
			goto IL_026c;
		}
	}
	{
		// DrawAccelerationStatus();
		Game_DrawAccelerationStatus_m4BD2A7379A67B3AFC42933139F8AF13DD16ED2C8(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_010a:
	{
		// else if (status == 3)
		int32_t L_22 = __this->get_status_14();
		if ((!(((uint32_t)L_22) == ((uint32_t)3))))
		{
			goto IL_01dc;
		}
	}
	{
		// if (sec < clearTime + 60)
		int32_t L_23 = __this->get_sec_8();
		int32_t L_24 = __this->get_clearTime_13();
		if ((((int32_t)L_23) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)((int32_t)60))))))
		{
			goto IL_013e;
		}
	}
	{
		// DrawFinish();
		Game_DrawFinish_m9A50AE98BFE92933E8C68349823751B3CF9DFE0B(__this, /*hidden argument*/NULL);
		// gc.PlaySE(GcSound.Whistle);
		RuntimeObject* L_25;
		L_25 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		InterfaceActionInvoker1< GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F * >::Invoke(0 /* System.Void GameCanvas.ISoundEx::PlaySE(GameCanvas.GcSound& modreq(System.Runtime.InteropServices.InAttribute)) */, ISoundEx_tD25BD54686D9B9B56DECF8BEC2D915B0A0D66F3F_il2cpp_TypeInfo_var, L_25, (((GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_StaticFields*)il2cpp_codegen_static_fields_for(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_il2cpp_TypeInfo_var))->get_address_of_Whistle_5()));
		// }
		return;
	}

IL_013e:
	{
		// DrawBackground();
		Game_DrawBackground_mC389BAABCF1EFF547CCC3EB6A1837CC8828CA26E(__this, /*hidden argument*/NULL);
		// DrawDifficulty(difficulty);
		int32_t L_26 = __this->get_difficulty_15();
		Game_DrawDifficulty_mC2D07DB107E30CCC8A72F61F7E7EFA05D9EBEE4D(__this, L_26, /*hidden argument*/NULL);
		// DrawResultText(difficulty, missCount);
		int32_t L_27 = __this->get_difficulty_15();
		int32_t L_28 = __this->get_missCount_17();
		Game_DrawResultText_m02276001AE057A9482A9F4FEA32E0F47D0015F91(__this, L_27, L_28, /*hidden argument*/NULL);
		// if (sec > clearTime + 120)
		int32_t L_29 = __this->get_sec_8();
		int32_t L_30 = __this->get_clearTime_13();
		if ((((int32_t)L_29) <= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)((int32_t)120))))))
		{
			goto IL_01be;
		}
	}
	{
		// DrawCenter(((float)clearTime / 60).ToString("0.00"));
		int32_t L_31 = __this->get_clearTime_13();
		V_0 = ((float)((float)((float)((float)L_31))/(float)(60.0f)));
		String_t* L_32;
		L_32 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&V_0), _stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D, /*hidden argument*/NULL);
		Game_DrawCenter_mD043E4BD4469F35EBD93AB5F95E44DB0FF73E3F3(__this, L_32, /*hidden argument*/NULL);
		// DrawCenterSecondary("MISS:" + missCount.ToString() + "   SPLASHED:" + progress.ToString());
		int32_t* L_33 = __this->get_address_of_missCount_17();
		String_t* L_34;
		L_34 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_33, /*hidden argument*/NULL);
		int32_t* L_35 = __this->get_address_of_progress_20();
		String_t* L_36;
		L_36 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_35, /*hidden argument*/NULL);
		String_t* L_37;
		L_37 = String_Concat_m5D784E6CEEBE99ED8749AA4B9491D926273FD749(_stringLiteral10291B3A4B1D2933821EE5230552A31F47DBEE6B, L_34, _stringLiteralDC27A8C6EC24F2B47A3CCCF2BBD734F3B41F3CBD, L_36, /*hidden argument*/NULL);
		Game_DrawCenterSecondary_m9164015BE41A89A1E51D61599FBD954FD880EAD4(__this, L_37, /*hidden argument*/NULL);
	}

IL_01be:
	{
		// if (sec > clearTime + 180)
		int32_t L_38 = __this->get_sec_8();
		int32_t L_39 = __this->get_clearTime_13();
		if ((((int32_t)L_38) <= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)((int32_t)180))))))
		{
			goto IL_026c;
		}
	}
	{
		// DrawTapToReturn();
		Game_DrawTapToReturn_m6F340BCA590D481FAFE3E18C20CCF3245B00EAF1(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_01dc:
	{
		// else if (status == 4)
		int32_t L_40 = __this->get_status_14();
		if ((!(((uint32_t)L_40) == ((uint32_t)4))))
		{
			goto IL_026c;
		}
	}
	{
		// if (sec < 60)
		int32_t L_41 = __this->get_sec_8();
		if ((((int32_t)L_41) >= ((int32_t)((int32_t)60))))
		{
			goto IL_0209;
		}
	}
	{
		// DrawFinish();
		Game_DrawFinish_m9A50AE98BFE92933E8C68349823751B3CF9DFE0B(__this, /*hidden argument*/NULL);
		// gc.PlaySE(GcSound.Whistle);
		RuntimeObject* L_42;
		L_42 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		InterfaceActionInvoker1< GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F * >::Invoke(0 /* System.Void GameCanvas.ISoundEx::PlaySE(GameCanvas.GcSound& modreq(System.Runtime.InteropServices.InAttribute)) */, ISoundEx_tD25BD54686D9B9B56DECF8BEC2D915B0A0D66F3F_il2cpp_TypeInfo_var, L_42, (((GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_StaticFields*)il2cpp_codegen_static_fields_for(GcSound_tDD29E42AF7B27D1E9B99407833AB5F0EC625400F_il2cpp_TypeInfo_var))->get_address_of_Whistle_5()));
		// }
		return;
	}

IL_0209:
	{
		// DrawBackground();
		Game_DrawBackground_mC389BAABCF1EFF547CCC3EB6A1837CC8828CA26E(__this, /*hidden argument*/NULL);
		// DrawDifficulty(difficulty);
		int32_t L_43 = __this->get_difficulty_15();
		Game_DrawDifficulty_mC2D07DB107E30CCC8A72F61F7E7EFA05D9EBEE4D(__this, L_43, /*hidden argument*/NULL);
		// DrawResultText(difficulty, missCount);
		int32_t L_44 = __this->get_difficulty_15();
		int32_t L_45 = __this->get_missCount_17();
		Game_DrawResultText_m02276001AE057A9482A9F4FEA32E0F47D0015F91(__this, L_44, L_45, /*hidden argument*/NULL);
		// if (sec > 120)
		int32_t L_46 = __this->get_sec_8();
		if ((((int32_t)L_46) <= ((int32_t)((int32_t)120))))
		{
			goto IL_0259;
		}
	}
	{
		// DrawCenter(splashedCount.ToString());
		int32_t* L_47 = __this->get_address_of_splashedCount_10();
		String_t* L_48;
		L_48 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_47, /*hidden argument*/NULL);
		Game_DrawCenter_mD043E4BD4469F35EBD93AB5F95E44DB0FF73E3F3(__this, L_48, /*hidden argument*/NULL);
		// DrawCenterSecondary(missCount.ToString());
		int32_t* L_49 = __this->get_address_of_missCount_17();
		String_t* L_50;
		L_50 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_49, /*hidden argument*/NULL);
		Game_DrawCenterSecondary_m9164015BE41A89A1E51D61599FBD954FD880EAD4(__this, L_50, /*hidden argument*/NULL);
	}

IL_0259:
	{
		// if (sec > 180)
		int32_t L_51 = __this->get_sec_8();
		if ((((int32_t)L_51) <= ((int32_t)((int32_t)180))))
		{
			goto IL_026c;
		}
	}
	{
		// DrawTapToReturn();
		Game_DrawTapToReturn_m6F340BCA590D481FAFE3E18C20CCF3245B00EAF1(__this, /*hidden argument*/NULL);
	}

IL_026c:
	{
		// }
		return;
	}
}
// System.Void Game::DrawFlavorSplash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawFlavorSplash_mDAD7958C5A6BA7DEB007215641EB7F0DD9444724 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D74CC8AAE1D4E05C60C34E310631E0CB00221EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB478161F26801FAB994941507C5EDB55D4886BD7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		// gc.SetFontSize(120);
		RuntimeObject* L_0;
		L_0 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)120);
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t* >::Invoke(5 /* System.Void GameCanvas.IGraphicsEx::SetFontSize(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_0, (&V_0));
		// gc.SetColor(0, 0, 0);
		RuntimeObject* L_1;
		L_1 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_1 = (uint8_t)0;
		V_2 = (uint8_t)0;
		V_3 = (uint8_t)0;
		NullCheck(L_1);
		InterfaceActionInvoker4< uint8_t*, uint8_t*, uint8_t*, uint8_t >::Invoke(4 /* System.Void GameCanvas.IGraphicsEx::SetColor(System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_1, (&V_1), (&V_2), (&V_3), (uint8_t)((int32_t)255));
		// gc.SetStringAnchor(GcAnchor.UpperCenter);
		RuntimeObject* L_2;
		L_2 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_4 = 1;
		NullCheck(L_2);
		InterfaceActionInvoker1< int32_t* >::Invoke(6 /* System.Void GameCanvas.IGraphicsEx::SetStringAnchor(GameCanvas.GcAnchor& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_2, (&V_4));
		// gc.DrawString("FLAVOR", 360, 280);
		RuntimeObject* L_3;
		L_3 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_5 = _stringLiteral6D74CC8AAE1D4E05C60C34E310631E0CB00221EB;
		V_6 = (360.0f);
		V_7 = (280.0f);
		NullCheck(L_3);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_3, (&V_5), (&V_6), (&V_7), (0.0f));
		// gc.DrawString("SPLASH", 360, 390);
		RuntimeObject* L_4;
		L_4 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_5 = _stringLiteralB478161F26801FAB994941507C5EDB55D4886BD7;
		V_6 = (360.0f);
		V_7 = (390.0f);
		NullCheck(L_4);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_4, (&V_5), (&V_6), (&V_7), (0.0f));
		// }
		return;
	}
}
// System.Void Game::DrawDifficultyText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawDifficultyText_m2F53B4527DAB6A7FD5E6B61C19019740D106C447 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FF28182F922F2B90592191A348EB65CD1DF4038);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30F23BD68504B0AB04657D56291C7183811E3B04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D9559E1AD3D135410C1123DBAAC9C176290F67A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	String_t* V_4 = NULL;
	{
		// gc.SetFontSize(60);
		RuntimeObject* L_0;
		L_0 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)60);
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t* >::Invoke(5 /* System.Void GameCanvas.IGraphicsEx::SetFontSize(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_0, (&V_0));
		// gc.SetColor(256, 256, 256);
		RuntimeObject* L_1;
		L_1 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_1 = (256.0f);
		V_2 = (256.0f);
		V_3 = (256.0f);
		NullCheck(L_1);
		InterfaceActionInvoker4< float*, float*, float*, float >::Invoke(3 /* System.Void GameCanvas.IGraphicsEx::SetColor(System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_1, (&V_1), (&V_2), (&V_3), (1.0f));
		// gc.DrawString("NORMAL   HARDCORE", 360, 900);
		RuntimeObject* L_2;
		L_2 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_4 = _stringLiteral0FF28182F922F2B90592191A348EB65CD1DF4038;
		V_1 = (360.0f);
		V_2 = (900.0f);
		NullCheck(L_2);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_2, (&V_4), (&V_1), (&V_2), (0.0f));
		// gc.DrawString("TIME ATTACK", 360, 1050);
		RuntimeObject* L_3;
		L_3 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_4 = _stringLiteral6D9559E1AD3D135410C1123DBAAC9C176290F67A;
		V_1 = (360.0f);
		V_2 = (1050.0f);
		NullCheck(L_3);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_3, (&V_4), (&V_1), (&V_2), (0.0f));
		// gc.DrawString("TIME LIMIT", 360, 1150);
		RuntimeObject* L_4;
		L_4 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_4 = _stringLiteral30F23BD68504B0AB04657D56291C7183811E3B04;
		V_1 = (360.0f);
		V_2 = (1150.0f);
		NullCheck(L_4);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_4, (&V_4), (&V_1), (&V_2), (0.0f));
		// }
		return;
	}
}
// System.Void Game::DrawDifficultyIcon(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawDifficultyIcon_m191AF43AD7A736FF384192EA496438C44019E6B6 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, int32_t ___difficulty0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (difficulty == 0)
		int32_t L_0 = ___difficulty0;
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		// gc.DrawImage(GcImage.Array, 163, 820);
		RuntimeObject* L_1;
		L_1 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var);
		V_0 = (163.0f);
		V_1 = (820.0f);
		NullCheck(L_1);
		InterfaceActionInvoker4< GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 *, float*, float*, float >::Invoke(1 /* System.Void GameCanvas.IGraphicsEx::DrawImage(GameCanvas.GcImage& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_1, (((GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields*)il2cpp_codegen_static_fields_for(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var))->get_address_of_Array_0()), (&V_0), (&V_1), (0.0f));
		// }
		return;
	}

IL_0029:
	{
		// else if (difficulty == 1)
		int32_t L_2 = ___difficulty0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0052;
		}
	}
	{
		// gc.DrawImage(GcImage.Array, 467, 820);
		RuntimeObject* L_3;
		L_3 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var);
		V_0 = (467.0f);
		V_1 = (820.0f);
		NullCheck(L_3);
		InterfaceActionInvoker4< GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 *, float*, float*, float >::Invoke(1 /* System.Void GameCanvas.IGraphicsEx::DrawImage(GameCanvas.GcImage& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_3, (((GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields*)il2cpp_codegen_static_fields_for(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var))->get_address_of_Array_0()), (&V_0), (&V_1), (0.0f));
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void Game::DrawSelectedCondiments(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawSelectedCondiments_mF5EABCCBFCAEA5B9B633143DF808D592A1EF064B (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, int32_t ___selectedCondiments0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (selectedCondiments == 2)
		int32_t L_0 = ___selectedCondiments0;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_002a;
		}
	}
	{
		// gc.DrawImage(GcImage.SelectedIcon, 23, 1093);
		RuntimeObject* L_1;
		L_1 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var);
		V_0 = (23.0f);
		V_1 = (1093.0f);
		NullCheck(L_1);
		InterfaceActionInvoker4< GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 *, float*, float*, float >::Invoke(1 /* System.Void GameCanvas.IGraphicsEx::DrawImage(GameCanvas.GcImage& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_1, (((GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields*)il2cpp_codegen_static_fields_for(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var))->get_address_of_SelectedIcon_7()), (&V_0), (&V_1), (0.0f));
		// }
		return;
	}

IL_002a:
	{
		// else if (selectedCondiments == 3)
		int32_t L_2 = ___selectedCondiments0;
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_0054;
		}
	}
	{
		// gc.DrawImage(GcImage.SelectedIcon, 266, 1093);
		RuntimeObject* L_3;
		L_3 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var);
		V_0 = (266.0f);
		V_1 = (1093.0f);
		NullCheck(L_3);
		InterfaceActionInvoker4< GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 *, float*, float*, float >::Invoke(1 /* System.Void GameCanvas.IGraphicsEx::DrawImage(GameCanvas.GcImage& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_3, (((GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields*)il2cpp_codegen_static_fields_for(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var))->get_address_of_SelectedIcon_7()), (&V_0), (&V_1), (0.0f));
		// }
		return;
	}

IL_0054:
	{
		// else if (selectedCondiments == 5)
		int32_t L_4 = ___selectedCondiments0;
		if ((!(((uint32_t)L_4) == ((uint32_t)5))))
		{
			goto IL_007d;
		}
	}
	{
		// gc.DrawImage(GcImage.SelectedIcon, 505, 1093);
		RuntimeObject* L_5;
		L_5 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var);
		V_0 = (505.0f);
		V_1 = (1093.0f);
		NullCheck(L_5);
		InterfaceActionInvoker4< GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 *, float*, float*, float >::Invoke(1 /* System.Void GameCanvas.IGraphicsEx::DrawImage(GameCanvas.GcImage& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_5, (((GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields*)il2cpp_codegen_static_fields_for(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var))->get_address_of_SelectedIcon_7()), (&V_0), (&V_1), (0.0f));
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void Game::DrawProgress(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawProgress_mF24B96DACE3205ACAB61F72ACC629F4AB472BFDC (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, int32_t ___progress0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B692431AA4CCD576DB1FD8F1AEF713383B5725);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6C01FCABC4827A17323F22937D2E262FC4EEE3D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		// gc.SetFontSize(50);
		RuntimeObject* L_0;
		L_0 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)50);
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t* >::Invoke(5 /* System.Void GameCanvas.IGraphicsEx::SetFontSize(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_0, (&V_0));
		// gc.SetColor(0, 0, 0);
		RuntimeObject* L_1;
		L_1 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_1 = (uint8_t)0;
		V_2 = (uint8_t)0;
		V_3 = (uint8_t)0;
		NullCheck(L_1);
		InterfaceActionInvoker4< uint8_t*, uint8_t*, uint8_t*, uint8_t >::Invoke(4 /* System.Void GameCanvas.IGraphicsEx::SetColor(System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_1, (&V_1), (&V_2), (&V_3), (uint8_t)((int32_t)255));
		// gc.SetStringAnchor(GcAnchor.UpperLeft);
		RuntimeObject* L_2;
		L_2 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_4 = 0;
		NullCheck(L_2);
		InterfaceActionInvoker1< int32_t* >::Invoke(6 /* System.Void GameCanvas.IGraphicsEx::SetStringAnchor(GameCanvas.GcAnchor& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_2, (&V_4));
		// gc.DrawString("TASK:" + progress.ToString() + "/30", 20, 20);
		RuntimeObject* L_3;
		L_3 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___progress0), /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(_stringLiteralE6C01FCABC4827A17323F22937D2E262FC4EEE3D, L_4, _stringLiteral99B692431AA4CCD576DB1FD8F1AEF713383B5725, /*hidden argument*/NULL);
		V_5 = L_5;
		V_6 = (20.0f);
		V_7 = (20.0f);
		NullCheck(L_3);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_3, (&V_5), (&V_6), (&V_7), (0.0f));
		// }
		return;
	}
}
// System.Void Game::DrawSplashedCountDuringGame(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawSplashedCountDuringGame_m4F1B0EDEC6DA359ED6F58F8C8CAF19383E341E29 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, int32_t ___splashedCount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3ACF730896EB2DAB947476330C68B4BD0F8A3085);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		// gc.SetFontSize(50);
		RuntimeObject* L_0;
		L_0 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)50);
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t* >::Invoke(5 /* System.Void GameCanvas.IGraphicsEx::SetFontSize(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_0, (&V_0));
		// gc.SetColor(0, 0, 0);
		RuntimeObject* L_1;
		L_1 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_1 = (uint8_t)0;
		V_2 = (uint8_t)0;
		V_3 = (uint8_t)0;
		NullCheck(L_1);
		InterfaceActionInvoker4< uint8_t*, uint8_t*, uint8_t*, uint8_t >::Invoke(4 /* System.Void GameCanvas.IGraphicsEx::SetColor(System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_1, (&V_1), (&V_2), (&V_3), (uint8_t)((int32_t)255));
		// gc.SetStringAnchor(GcAnchor.UpperLeft);
		RuntimeObject* L_2;
		L_2 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_4 = 0;
		NullCheck(L_2);
		InterfaceActionInvoker1< int32_t* >::Invoke(6 /* System.Void GameCanvas.IGraphicsEx::SetStringAnchor(GameCanvas.GcAnchor& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_2, (&V_4));
		// gc.DrawString("SPLASHED:" + splashedCount.ToString(), 20, 20);
		RuntimeObject* L_3;
		L_3 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___splashedCount0), /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral3ACF730896EB2DAB947476330C68B4BD0F8A3085, L_4, /*hidden argument*/NULL);
		V_5 = L_5;
		V_6 = (20.0f);
		V_7 = (20.0f);
		NullCheck(L_3);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_3, (&V_5), (&V_6), (&V_7), (0.0f));
		// }
		return;
	}
}
// System.Void Game::DrawTimeCountDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawTimeCountDown_m68BFE00F3BB82409F02B748C4E31E36919B17B72 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, int32_t ___countdown0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76621E64AB32D71E85DB363EB9042E320A7EADE2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	String_t* V_1 = NULL;
	float V_2 = 0.0f;
	{
		// gc.DrawString("TIME:" + ((float)countdown / 60).ToString("0.00"), 450, 20);
		RuntimeObject* L_0;
		L_0 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___countdown0;
		V_0 = ((float)((float)((float)((float)L_1))/(float)(60.0f)));
		String_t* L_2;
		L_2 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&V_0), _stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral76621E64AB32D71E85DB363EB9042E320A7EADE2, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		V_0 = (450.0f);
		V_2 = (20.0f);
		NullCheck(L_0);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_0, (&V_1), (&V_0), (&V_2), (0.0f));
		// }
		return;
	}
}
// System.Void Game::DrawDifficultyDuringGame(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawDifficultyDuringGame_mE7EBD8C9BB7486D68D514CF4499BAB60A65E1080 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, int32_t ___status0, int32_t ___difficulty1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65051126D27B5D8CB41D8CB6C5BBE2DE8590FB32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B0CA2889F3EFE0106752A376879448FB4FF0386);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA80A3267751734098F49D22D93B46DCF112A1BD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF40D0720F39DCC1CD6376AF3194AA6253275592);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// gc.SetStringAnchor(GcAnchor.UpperCenter);
		RuntimeObject* L_0;
		L_0 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_0 = 1;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t* >::Invoke(6 /* System.Void GameCanvas.IGraphicsEx::SetStringAnchor(GameCanvas.GcAnchor& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_0, (&V_0));
		// if (status == 1)
		int32_t L_1 = ___status0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_007e;
		}
	}
	{
		// gc.SetStringAnchor(GcAnchor.UpperCenter);
		RuntimeObject* L_2;
		L_2 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_0 = 1;
		NullCheck(L_2);
		InterfaceActionInvoker1< int32_t* >::Invoke(6 /* System.Void GameCanvas.IGraphicsEx::SetStringAnchor(GameCanvas.GcAnchor& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_2, (&V_0));
		// if (difficulty == 0)
		int32_t L_3 = ___difficulty1;
		if (L_3)
		{
			goto IL_004e;
		}
	}
	{
		// gc.DrawString("TIME ATTACK  NORMAL", 360, 100);
		RuntimeObject* L_4;
		L_4 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_1 = _stringLiteralA80A3267751734098F49D22D93B46DCF112A1BD1;
		V_2 = (360.0f);
		V_3 = (100.0f);
		NullCheck(L_4);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_4, (&V_1), (&V_2), (&V_3), (0.0f));
		// }
		return;
	}

IL_004e:
	{
		// else if (difficulty == 1)
		int32_t L_5 = ___difficulty1;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_00da;
		}
	}
	{
		// gc.DrawString("TIME ATTACK  HARDCORE", 360, 100);
		RuntimeObject* L_6;
		L_6 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_1 = _stringLiteral65051126D27B5D8CB41D8CB6C5BBE2DE8590FB32;
		V_2 = (360.0f);
		V_3 = (100.0f);
		NullCheck(L_6);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_6, (&V_1), (&V_2), (&V_3), (0.0f));
		// }
		return;
	}

IL_007e:
	{
		// else if (status == 2)
		int32_t L_7 = ___status0;
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_00da;
		}
	}
	{
		// if (difficulty == 0)
		int32_t L_8 = ___difficulty1;
		if (L_8)
		{
			goto IL_00ae;
		}
	}
	{
		// gc.DrawString("TIME LIMIT  NORMAL", 360, 100);
		RuntimeObject* L_9;
		L_9 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_1 = _stringLiteralCF40D0720F39DCC1CD6376AF3194AA6253275592;
		V_2 = (360.0f);
		V_3 = (100.0f);
		NullCheck(L_9);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_9, (&V_1), (&V_2), (&V_3), (0.0f));
		// }
		return;
	}

IL_00ae:
	{
		// else if (difficulty == 1)
		int32_t L_10 = ___difficulty1;
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_00da;
		}
	}
	{
		// gc.DrawString("TIME LIMIT  HARDCORE", 360, 100);
		RuntimeObject* L_11;
		L_11 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_1 = _stringLiteral8B0CA2889F3EFE0106752A376879448FB4FF0386;
		V_2 = (360.0f);
		V_3 = (100.0f);
		NullCheck(L_11);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_11, (&V_1), (&V_2), (&V_3), (0.0f));
	}

IL_00da:
	{
		// }
		return;
	}
}
// System.Void Game::DrawCondiments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawCondiments_m804BAB4E6EA3E8EAABE199988C350E7D4AEDBC1A (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// gc.DrawImage(GcImage.Condiments, 57, 1000);
		RuntimeObject* L_0;
		L_0 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var);
		V_0 = (57.0f);
		V_1 = (1000.0f);
		NullCheck(L_0);
		InterfaceActionInvoker4< GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 *, float*, float*, float >::Invoke(1 /* System.Void GameCanvas.IGraphicsEx::DrawImage(GameCanvas.GcImage& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_0, (((GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields*)il2cpp_codegen_static_fields_for(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var))->get_address_of_Condiments_2()), (&V_0), (&V_1), (0.0f));
		// }
		return;
	}
}
// System.Void Game::DrawFoods(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawFoods_m86400AEAC9CA2BE719C54CFB737EA4795874C84D (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		int32_t L_0 = ___id0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)62))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_1 = ___id0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)2)))
		{
			case 0:
			{
				goto IL_0034;
			}
			case 1:
			{
				goto IL_0080;
			}
			case 2:
			{
				goto IL_0117;
			}
			case 3:
			{
				goto IL_00cc;
			}
		}
	}
	{
		int32_t L_2 = ___id0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)62))))
		{
			goto IL_005a;
		}
	}
	{
		return;
	}

IL_0023:
	{
		int32_t L_3 = ___id0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)93))))
		{
			goto IL_00a6;
		}
	}
	{
		int32_t L_4 = ___id0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)155))))
		{
			goto IL_00f2;
		}
	}
	{
		return;
	}

IL_0034:
	{
		// gc.DrawImage(GcImage.Rice, 50, 267);
		RuntimeObject* L_5;
		L_5 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var);
		V_0 = (50.0f);
		V_1 = (267.0f);
		NullCheck(L_5);
		InterfaceActionInvoker4< GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 *, float*, float*, float >::Invoke(1 /* System.Void GameCanvas.IGraphicsEx::DrawImage(GameCanvas.GcImage& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_5, (((GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields*)il2cpp_codegen_static_fields_for(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var))->get_address_of_Rice_5()), (&V_0), (&V_1), (0.0f));
		// break;
		return;
	}

IL_005a:
	{
		// gc.DrawImage(GcImage.RiceSplashed, 50, 267);
		RuntimeObject* L_6;
		L_6 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var);
		V_0 = (50.0f);
		V_1 = (267.0f);
		NullCheck(L_6);
		InterfaceActionInvoker4< GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 *, float*, float*, float >::Invoke(1 /* System.Void GameCanvas.IGraphicsEx::DrawImage(GameCanvas.GcImage& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_6, (((GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields*)il2cpp_codegen_static_fields_for(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var))->get_address_of_RiceSplashed_6()), (&V_0), (&V_1), (0.0f));
		// break;
		return;
	}

IL_0080:
	{
		// gc.DrawImage(GcImage.Frappucino, 165, 256);
		RuntimeObject* L_7;
		L_7 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var);
		V_0 = (165.0f);
		V_1 = (256.0f);
		NullCheck(L_7);
		InterfaceActionInvoker4< GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 *, float*, float*, float >::Invoke(1 /* System.Void GameCanvas.IGraphicsEx::DrawImage(GameCanvas.GcImage& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_7, (((GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields*)il2cpp_codegen_static_fields_for(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var))->get_address_of_Frappucino_3()), (&V_0), (&V_1), (0.0f));
		// break;
		return;
	}

IL_00a6:
	{
		// gc.DrawImage(GcImage.FrappucinoSplashed, 165, 256);
		RuntimeObject* L_8;
		L_8 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var);
		V_0 = (165.0f);
		V_1 = (256.0f);
		NullCheck(L_8);
		InterfaceActionInvoker4< GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 *, float*, float*, float >::Invoke(1 /* System.Void GameCanvas.IGraphicsEx::DrawImage(GameCanvas.GcImage& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_8, (((GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields*)il2cpp_codegen_static_fields_for(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var))->get_address_of_FrappucinoSplashed_4()), (&V_0), (&V_1), (0.0f));
		// break;
		return;
	}

IL_00cc:
	{
		// gc.DrawImage(GcImage.Watermelon, 59, 424);
		RuntimeObject* L_9;
		L_9 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var);
		V_0 = (59.0f);
		V_1 = (424.0f);
		NullCheck(L_9);
		InterfaceActionInvoker4< GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 *, float*, float*, float >::Invoke(1 /* System.Void GameCanvas.IGraphicsEx::DrawImage(GameCanvas.GcImage& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_9, (((GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields*)il2cpp_codegen_static_fields_for(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var))->get_address_of_Watermelon_8()), (&V_0), (&V_1), (0.0f));
		// break;
		return;
	}

IL_00f2:
	{
		// gc.DrawImage(GcImage.WatermelonSplashed, 59, 424);
		RuntimeObject* L_10;
		L_10 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var);
		V_0 = (59.0f);
		V_1 = (424.0f);
		NullCheck(L_10);
		InterfaceActionInvoker4< GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 *, float*, float*, float >::Invoke(1 /* System.Void GameCanvas.IGraphicsEx::DrawImage(GameCanvas.GcImage& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_10, (((GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields*)il2cpp_codegen_static_fields_for(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var))->get_address_of_WatermelonSplashed_9()), (&V_0), (&V_1), (0.0f));
	}

IL_0117:
	{
		// }
		return;
	}
}
// System.Void Game::DrawAccelerationStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawAccelerationStatus_m4BD2A7379A67B3AFC42933139F8AF13DD16ED2C8 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputAccelerationEx_t2AD6D1948812B141E477368373B2D90BC69C2AAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB471CF7BCBE6DE6BF326B3DE779EF756BC3FC33D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC47915A67A68D7A16FC1B7191ABCD93A3B66F00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC62D921453825AF107E7944219DB44075DF8BEE);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	String_t* V_1 = NULL;
	float V_2 = 0.0f;
	{
		// gc.DrawString("AcceX:" + gc.AccelerationLastX, 0, 100);
		RuntimeObject* L_0;
		L_0 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1;
		L_1 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		float L_2;
		L_2 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single GameCanvas.IInputAccelerationEx::get_AccelerationLastX() */, IInputAccelerationEx_t2AD6D1948812B141E477368373B2D90BC69C2AAA_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralDC62D921453825AF107E7944219DB44075DF8BEE, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		V_0 = (0.0f);
		V_2 = (100.0f);
		NullCheck(L_0);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_0, (&V_1), (&V_0), (&V_2), (0.0f));
		// gc.DrawString("AcceY:" + gc.AccelerationLastY, 0, 140);
		RuntimeObject* L_5;
		L_5 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_6;
		L_6 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		float L_7;
		L_7 = InterfaceFuncInvoker0< float >::Invoke(1 /* System.Single GameCanvas.IInputAccelerationEx::get_AccelerationLastY() */, IInputAccelerationEx_t2AD6D1948812B141E477368373B2D90BC69C2AAA_il2cpp_TypeInfo_var, L_6);
		V_0 = L_7;
		String_t* L_8;
		L_8 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralBC47915A67A68D7A16FC1B7191ABCD93A3B66F00, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		V_0 = (0.0f);
		V_2 = (140.0f);
		NullCheck(L_5);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_5, (&V_1), (&V_0), (&V_2), (0.0f));
		// gc.DrawString("AcceZ:" + gc.AccelerationLastZ, 0, 180);
		RuntimeObject* L_10;
		L_10 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_11;
		L_11 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		float L_12;
		L_12 = InterfaceFuncInvoker0< float >::Invoke(2 /* System.Single GameCanvas.IInputAccelerationEx::get_AccelerationLastZ() */, IInputAccelerationEx_t2AD6D1948812B141E477368373B2D90BC69C2AAA_il2cpp_TypeInfo_var, L_11);
		V_0 = L_12;
		String_t* L_13;
		L_13 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralB471CF7BCBE6DE6BF326B3DE779EF756BC3FC33D, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		V_0 = (0.0f);
		V_2 = (180.0f);
		NullCheck(L_10);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_10, (&V_1), (&V_0), (&V_2), (0.0f));
		// }
		return;
	}
}
// System.Void Game::DrawFinish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawFinish_m9A50AE98BFE92933E8C68349823751B3CF9DFE0B (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACBD5EC7006E057F50C7BBAFDEC5C5436CA1B3E9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		// gc.SetFontSize(120);
		RuntimeObject* L_0;
		L_0 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)120);
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t* >::Invoke(5 /* System.Void GameCanvas.IGraphicsEx::SetFontSize(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_0, (&V_0));
		// gc.SetColor(0, 0, 0);
		RuntimeObject* L_1;
		L_1 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_1 = (uint8_t)0;
		V_2 = (uint8_t)0;
		V_3 = (uint8_t)0;
		NullCheck(L_1);
		InterfaceActionInvoker4< uint8_t*, uint8_t*, uint8_t*, uint8_t >::Invoke(4 /* System.Void GameCanvas.IGraphicsEx::SetColor(System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_1, (&V_1), (&V_2), (&V_3), (uint8_t)((int32_t)255));
		// gc.SetStringAnchor(GcAnchor.UpperLeft);
		RuntimeObject* L_2;
		L_2 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_4 = 0;
		NullCheck(L_2);
		InterfaceActionInvoker1< int32_t* >::Invoke(6 /* System.Void GameCanvas.IGraphicsEx::SetStringAnchor(GameCanvas.GcAnchor& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_2, (&V_4));
		// gc.DrawString("FINISH", 185, 280);
		RuntimeObject* L_3;
		L_3 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_5 = _stringLiteralACBD5EC7006E057F50C7BBAFDEC5C5436CA1B3E9;
		V_6 = (185.0f);
		V_7 = (280.0f);
		NullCheck(L_3);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_3, (&V_5), (&V_6), (&V_7), (0.0f));
		// }
		return;
	}
}
// System.Void Game::DrawBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawBackground_mC389BAABCF1EFF547CCC3EB6A1837CC8828CA26E (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// gc.DrawImage(GcImage.Background, 0, 0);
		RuntimeObject* L_0;
		L_0 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var);
		V_0 = (0.0f);
		V_1 = (0.0f);
		NullCheck(L_0);
		InterfaceActionInvoker4< GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 *, float*, float*, float >::Invoke(1 /* System.Void GameCanvas.IGraphicsEx::DrawImage(GameCanvas.GcImage& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_0, (((GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields*)il2cpp_codegen_static_fields_for(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var))->get_address_of_Background_1()), (&V_0), (&V_1), (0.0f));
		// }
		return;
	}
}
// System.Void Game::DrawDifficulty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawDifficulty_mC2D07DB107E30CCC8A72F61F7E7EFA05D9EBEE4D (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, int32_t ___difficulty0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		// gc.SetFontSize(50);
		RuntimeObject* L_0;
		L_0 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)50);
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t* >::Invoke(5 /* System.Void GameCanvas.IGraphicsEx::SetFontSize(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_0, (&V_0));
		// gc.SetColor(0, 0, 0);
		RuntimeObject* L_1;
		L_1 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_1 = (uint8_t)0;
		V_2 = (uint8_t)0;
		V_3 = (uint8_t)0;
		NullCheck(L_1);
		InterfaceActionInvoker4< uint8_t*, uint8_t*, uint8_t*, uint8_t >::Invoke(4 /* System.Void GameCanvas.IGraphicsEx::SetColor(System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_1, (&V_1), (&V_2), (&V_3), (uint8_t)((int32_t)255));
		// gc.SetStringAnchor(GcAnchor.UpperCenter);
		RuntimeObject* L_2;
		L_2 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_4 = 1;
		NullCheck(L_2);
		InterfaceActionInvoker1< int32_t* >::Invoke(6 /* System.Void GameCanvas.IGraphicsEx::SetStringAnchor(GameCanvas.GcAnchor& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_2, (&V_4));
		// gc.DrawString(difficulties[difficulty], 360, 30);
		RuntimeObject* L_3;
		L_3 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = __this->get_difficulties_16();
		int32_t L_5 = ___difficulty0;
		NullCheck(L_4);
		V_5 = (360.0f);
		V_6 = (30.0f);
		NullCheck(L_3);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_3, ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), (&V_5), (&V_6), (0.0f));
		// }
		return;
	}
}
// System.Void Game::DrawResultText(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawResultText_m02276001AE057A9482A9F4FEA32E0F47D0015F91 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, int32_t ___difficulty0, int32_t ___missCount1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EB956CF02CF577C11F0A40987ECCAA2B8B94F82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D87F15080F5FB3F518F379D02F7CD63AC6BD9F6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	String_t* V_4 = NULL;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		// gc.SetFontSize(120);
		RuntimeObject* L_0;
		L_0 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)120);
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t* >::Invoke(5 /* System.Void GameCanvas.IGraphicsEx::SetFontSize(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_0, (&V_0));
		// gc.SetColor(0, 0, 0);
		RuntimeObject* L_1;
		L_1 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_1 = (uint8_t)0;
		V_2 = (uint8_t)0;
		V_3 = (uint8_t)0;
		NullCheck(L_1);
		InterfaceActionInvoker4< uint8_t*, uint8_t*, uint8_t*, uint8_t >::Invoke(4 /* System.Void GameCanvas.IGraphicsEx::SetColor(System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_1, (&V_1), (&V_2), (&V_3), (uint8_t)((int32_t)255));
		// if (difficulty == 1 && missCount > 0)
		int32_t L_2 = ___difficulty0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_3 = ___missCount1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		// gc.DrawString("FAILURE", 360, 100);
		RuntimeObject* L_4;
		L_4 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_4 = _stringLiteral6D87F15080F5FB3F518F379D02F7CD63AC6BD9F6;
		V_5 = (360.0f);
		V_6 = (100.0f);
		NullCheck(L_4);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_4, (&V_4), (&V_5), (&V_6), (0.0f));
		// }
		return;
	}

IL_0060:
	{
		// gc.DrawString("RESULT", 360, 100);
		RuntimeObject* L_5;
		L_5 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_4 = _stringLiteral2EB956CF02CF577C11F0A40987ECCAA2B8B94F82;
		V_5 = (360.0f);
		V_6 = (100.0f);
		NullCheck(L_5);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_5, (&V_4), (&V_5), (&V_6), (0.0f));
		// }
		return;
	}
}
// System.Void Game::DrawCenter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawCenter_mD043E4BD4469F35EBD93AB5F95E44DB0FF73E3F3 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		// gc.SetFontSize(clearTime);
		RuntimeObject* L_0;
		L_0 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		int32_t* L_1 = __this->get_address_of_clearTime_13();
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t* >::Invoke(5 /* System.Void GameCanvas.IGraphicsEx::SetFontSize(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_0, L_1);
		// gc.SetColor(0, 0, 0);
		RuntimeObject* L_2;
		L_2 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_0 = (uint8_t)0;
		V_1 = (uint8_t)0;
		V_2 = (uint8_t)0;
		NullCheck(L_2);
		InterfaceActionInvoker4< uint8_t*, uint8_t*, uint8_t*, uint8_t >::Invoke(4 /* System.Void GameCanvas.IGraphicsEx::SetColor(System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_2, (&V_0), (&V_1), (&V_2), (uint8_t)((int32_t)255));
		// gc.SetStringAnchor(GcAnchor.UpperCenter);
		RuntimeObject* L_3;
		L_3 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_3 = 1;
		NullCheck(L_3);
		InterfaceActionInvoker1< int32_t* >::Invoke(6 /* System.Void GameCanvas.IGraphicsEx::SetStringAnchor(GameCanvas.GcAnchor& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_3, (&V_3));
		// gc.SetFontSize(180);
		RuntimeObject* L_4;
		L_4 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_4 = ((int32_t)180);
		NullCheck(L_4);
		InterfaceActionInvoker1< int32_t* >::Invoke(5 /* System.Void GameCanvas.IGraphicsEx::SetFontSize(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_4, (&V_4));
		// gc.DrawString(str, 360, 400);
		RuntimeObject* L_5;
		L_5 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_5 = (360.0f);
		V_6 = (400.0f);
		NullCheck(L_5);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_5, (&___str0), (&V_5), (&V_6), (0.0f));
		// }
		return;
	}
}
// System.Void Game::DrawCenterSecondary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawCenterSecondary_m9164015BE41A89A1E51D61599FBD954FD880EAD4 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// gc.SetFontSize(60);
		RuntimeObject* L_0;
		L_0 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)60);
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t* >::Invoke(5 /* System.Void GameCanvas.IGraphicsEx::SetFontSize(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_0, (&V_0));
		// gc.DrawString(str, 360, 610);
		RuntimeObject* L_1;
		L_1 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_1 = (360.0f);
		V_2 = (610.0f);
		NullCheck(L_1);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_1, (&___str0), (&V_1), (&V_2), (0.0f));
		// }
		return;
	}
}
// System.Void Game::DrawTapToReturn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawTapToReturn_m6F340BCA590D481FAFE3E18C20CCF3245B00EAF1 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CE009FFEA10586D0994B390213905FEAF5D6726);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	{
		// gc.SetFontSize(40);
		RuntimeObject* L_0;
		L_0 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)40);
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t* >::Invoke(5 /* System.Void GameCanvas.IGraphicsEx::SetFontSize(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_0, (&V_0));
		// gc.SetColor(256, 256, 256);
		RuntimeObject* L_1;
		L_1 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_1 = (256.0f);
		V_2 = (256.0f);
		V_3 = (256.0f);
		NullCheck(L_1);
		InterfaceActionInvoker4< float*, float*, float*, float >::Invoke(3 /* System.Void GameCanvas.IGraphicsEx::SetColor(System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_1, (&V_1), (&V_2), (&V_3), (1.0f));
		// gc.SetStringAnchor(GcAnchor.UpperCenter);
		RuntimeObject* L_2;
		L_2 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_4 = 1;
		NullCheck(L_2);
		InterfaceActionInvoker1< int32_t* >::Invoke(6 /* System.Void GameCanvas.IGraphicsEx::SetStringAnchor(GameCanvas.GcAnchor& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_2, (&V_4));
		// gc.DrawString("TAP TO RETURN TO TITLE SCREEN", 360, 1000);
		RuntimeObject* L_3;
		L_3 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_5 = _stringLiteral6CE009FFEA10586D0994B390213905FEAF5D6726;
		V_1 = (360.0f);
		V_2 = (1000.0f);
		NullCheck(L_3);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_3, (&V_5), (&V_1), (&V_2), (0.0f));
		// }
		return;
	}
}
// System.Void Game::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game__ctor_m3A756F7AD7689FE1BB2C194589022EF7AB69966A (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____9E5F20A47F51ADF106F906D6ECC2C6370190004F35EFE72E1C3E6C027F396C28_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB1C16C2009D328CC2411BAA019F939F08970181);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE75FB1547897C9EE1438C0EDCE38019A90B626FC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int countdown = 30 * 60;
		__this->set_countdown_9(((int32_t)1800));
		// int[] possibleValues = { 2, 3, 5 };
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____9E5F20A47F51ADF106F906D6ECC2C6370190004F35EFE72E1C3E6C027F396C28_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m37345890E8136134556D27E57315B584AC51D53F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		__this->set_possibleValues_12(L_1);
		// string[] difficulties = { "NORMAL", "HARDCORE" };
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralAB1C16C2009D328CC2411BAA019F939F08970181);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralAB1C16C2009D328CC2411BAA019F939F08970181);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralE75FB1547897C9EE1438C0EDCE38019A90B626FC);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralE75FB1547897C9EE1438C0EDCE38019A90B626FC);
		__this->set_difficulties_16(L_5);
		// int selectedCondiments = 2;
		__this->set_selectedCondiments_18(2);
		// int[] foodsArray = new int[30];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		__this->set_foodsArray_19(L_6);
		// int splashIntervalCount = 15;
		__this->set_splashIntervalCount_21(((int32_t)15));
		// float shakeThreshold = 2.0f;
		__this->set_shakeThreshold_26((2.0f));
		// bool isShakeEnable = true;
		__this->set_isShakeEnable_29((bool)1);
		GameBase__ctor_m3700C4F8A5C2EC74EE84D1761A9B81FA2A96C932(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.NullableAttribute::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m68337A4A4913B9D45F4B7249895084D57F47B445 (NullableAttribute_t3A6EA1A3D375C2B41A693078E127AF9C63EF40F4 * __this, uint8_t p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0;
		uint8_t L_2 = p0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		__this->set_NullableFlags_0(L_1);
		return;
	}
}
// System.Void System.Runtime.CompilerServices.NullableAttribute::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_mDD67D1F687CC4C4A36E4E580AAC3AA2EB559CFAC (NullableAttribute_t3A6EA1A3D375C2B41A693078E127AF9C63EF40F4 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = p0;
		__this->set_NullableFlags_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.NullableContextAttribute::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableContextAttribute__ctor_mC9D42ADAC30424D8311831B59B21E77EB522453F (NullableContextAttribute_t7E0423A6726D11C08DB7E8337EB07E5D228A12D5 * __this, uint8_t p0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		uint8_t L_0 = p0;
		__this->set_Flag_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline (BehaviourBase_tCE3EEB2BB1EA468AFE888981532CE7F6B8006A0A * __this, const RuntimeMethod* method)
{
	{
		// get => m_Proxy;
		GcProxy_t832DFA1A70226659BE781159106088071E92BCBA * L_0 = __this->get_m_Proxy_7();
		return L_0;
	}
}
