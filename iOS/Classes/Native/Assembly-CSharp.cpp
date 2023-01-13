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

// System.Collections.Generic.Dictionary`2<System.Type,GameCanvas.GcScene>
struct Dictionary_2_t44F73C3B443FF04C14ED50D7E056FD5227B0356F;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
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
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInputAccelerationEx_t2AD6D1948812B141E477368373B2D90BC69C2AAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInputPointerEx_t77FF40CB496C7D889AF48A8B97C1C8583584A3C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2EB956CF02CF577C11F0A40987ECCAA2B8B94F82;
IL2CPP_EXTERN_C String_t* _stringLiteral6CE009FFEA10586D0994B390213905FEAF5D6726;
IL2CPP_EXTERN_C String_t* _stringLiteral6D74CC8AAE1D4E05C60C34E310631E0CB00221EB;
IL2CPP_EXTERN_C String_t* _stringLiteral76621E64AB32D71E85DB363EB9042E320A7EADE2;
IL2CPP_EXTERN_C String_t* _stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D;
IL2CPP_EXTERN_C String_t* _stringLiteral99B692431AA4CCD576DB1FD8F1AEF713383B5725;
IL2CPP_EXTERN_C String_t* _stringLiteralACBD5EC7006E057F50C7BBAFDEC5C5436CA1B3E9;
IL2CPP_EXTERN_C String_t* _stringLiteralB478161F26801FAB994941507C5EDB55D4886BD7;
IL2CPP_EXTERN_C String_t* _stringLiteralD1858C8257F2FEB15E63392CBF97BE3BC2E2D56D;
IL2CPP_EXTERN_C String_t* _stringLiteralD4F093A84AE3078D3C42B98B0D4626BD342F7BA0;
IL2CPP_EXTERN_C String_t* _stringLiteralE6C01FCABC4827A17323F22937D2E262FC4EEE3D;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;

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
	String_t* ___m_Path_8;
	// Unity.Mathematics.int2 GameCanvas.GcImage::m_Size
	int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568  ___m_Size_9;

public:
	inline static int32_t get_offset_of_m_Path_8() { return static_cast<int32_t>(offsetof(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866, ___m_Path_8)); }
	inline String_t* get_m_Path_8() const { return ___m_Path_8; }
	inline String_t** get_address_of_m_Path_8() { return &___m_Path_8; }
	inline void set_m_Path_8(String_t* value)
	{
		___m_Path_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Size_9() { return static_cast<int32_t>(offsetof(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866, ___m_Size_9)); }
	inline int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568  get_m_Size_9() const { return ___m_Size_9; }
	inline int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 * get_address_of_m_Size_9() { return &___m_Size_9; }
	inline void set_m_Size_9(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568  value)
	{
		___m_Size_9 = value;
	}
};

struct GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields
{
public:
	// GameCanvas.GcImage GameCanvas.GcImage::Background
	GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  ___Background_0;
	// GameCanvas.GcImage GameCanvas.GcImage::DP
	GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  ___DP_1;
	// GameCanvas.GcImage GameCanvas.GcImage::Frappucino
	GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  ___Frappucino_2;
	// GameCanvas.GcImage GameCanvas.GcImage::FrappucinoSplashed
	GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  ___FrappucinoSplashed_3;
	// GameCanvas.GcImage GameCanvas.GcImage::Furikake
	GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  ___Furikake_4;
	// GameCanvas.GcImage GameCanvas.GcImage::Rice
	GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  ___Rice_5;
	// GameCanvas.GcImage GameCanvas.GcImage::RiceSplashed
	GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  ___RiceSplashed_6;
	// GameCanvas.GcImage GameCanvas.GcImage::SelectedIcon
	GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  ___SelectedIcon_7;

public:
	inline static int32_t get_offset_of_Background_0() { return static_cast<int32_t>(offsetof(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields, ___Background_0)); }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  get_Background_0() const { return ___Background_0; }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 * get_address_of_Background_0() { return &___Background_0; }
	inline void set_Background_0(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  value)
	{
		___Background_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Background_0))->___m_Path_8), (void*)NULL);
	}

	inline static int32_t get_offset_of_DP_1() { return static_cast<int32_t>(offsetof(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields, ___DP_1)); }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  get_DP_1() const { return ___DP_1; }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 * get_address_of_DP_1() { return &___DP_1; }
	inline void set_DP_1(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  value)
	{
		___DP_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___DP_1))->___m_Path_8), (void*)NULL);
	}

	inline static int32_t get_offset_of_Frappucino_2() { return static_cast<int32_t>(offsetof(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields, ___Frappucino_2)); }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  get_Frappucino_2() const { return ___Frappucino_2; }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 * get_address_of_Frappucino_2() { return &___Frappucino_2; }
	inline void set_Frappucino_2(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  value)
	{
		___Frappucino_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Frappucino_2))->___m_Path_8), (void*)NULL);
	}

	inline static int32_t get_offset_of_FrappucinoSplashed_3() { return static_cast<int32_t>(offsetof(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields, ___FrappucinoSplashed_3)); }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  get_FrappucinoSplashed_3() const { return ___FrappucinoSplashed_3; }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 * get_address_of_FrappucinoSplashed_3() { return &___FrappucinoSplashed_3; }
	inline void set_FrappucinoSplashed_3(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  value)
	{
		___FrappucinoSplashed_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___FrappucinoSplashed_3))->___m_Path_8), (void*)NULL);
	}

	inline static int32_t get_offset_of_Furikake_4() { return static_cast<int32_t>(offsetof(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields, ___Furikake_4)); }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  get_Furikake_4() const { return ___Furikake_4; }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 * get_address_of_Furikake_4() { return &___Furikake_4; }
	inline void set_Furikake_4(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  value)
	{
		___Furikake_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Furikake_4))->___m_Path_8), (void*)NULL);
	}

	inline static int32_t get_offset_of_Rice_5() { return static_cast<int32_t>(offsetof(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields, ___Rice_5)); }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  get_Rice_5() const { return ___Rice_5; }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 * get_address_of_Rice_5() { return &___Rice_5; }
	inline void set_Rice_5(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  value)
	{
		___Rice_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Rice_5))->___m_Path_8), (void*)NULL);
	}

	inline static int32_t get_offset_of_RiceSplashed_6() { return static_cast<int32_t>(offsetof(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields, ___RiceSplashed_6)); }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  get_RiceSplashed_6() const { return ___RiceSplashed_6; }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 * get_address_of_RiceSplashed_6() { return &___RiceSplashed_6; }
	inline void set_RiceSplashed_6(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  value)
	{
		___RiceSplashed_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___RiceSplashed_6))->___m_Path_8), (void*)NULL);
	}

	inline static int32_t get_offset_of_SelectedIcon_7() { return static_cast<int32_t>(offsetof(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields, ___SelectedIcon_7)); }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  get_SelectedIcon_7() const { return ___SelectedIcon_7; }
	inline GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 * get_address_of_SelectedIcon_7() { return &___SelectedIcon_7; }
	inline void set_SelectedIcon_7(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866  value)
	{
		___SelectedIcon_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___SelectedIcon_7))->___m_Path_8), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of GameCanvas.GcImage
struct GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_marshaled_pinvoke
{
	char* ___m_Path_8;
	int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568  ___m_Size_9;
};
// Native definition for COM marshalling of GameCanvas.GcImage
struct GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_marshaled_com
{
	Il2CppChar* ___m_Path_8;
	int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568  ___m_Size_9;
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
	// System.Int32 Game::clearTime
	int32_t ___clearTime_9;
	// System.Int32 Game::status
	int32_t ___status_10;
	// System.Int32 Game::selectedCondiments
	int32_t ___selectedCondiments_11;
	// System.Int32[] Game::foodsArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___foodsArray_12;
	// System.Int32 Game::progress
	int32_t ___progress_13;
	// System.Int32 Game::splashIntervalCount
	int32_t ___splashIntervalCount_14;
	// System.Boolean Game::isSplashInterval
	bool ___isSplashInterval_15;
	// System.Boolean Game::preFrameTapped
	bool ___preFrameTapped_16;
	// System.Single Game::shakeThreshold
	float ___shakeThreshold_17;

public:
	inline static int32_t get_offset_of_sec_8() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___sec_8)); }
	inline int32_t get_sec_8() const { return ___sec_8; }
	inline int32_t* get_address_of_sec_8() { return &___sec_8; }
	inline void set_sec_8(int32_t value)
	{
		___sec_8 = value;
	}

	inline static int32_t get_offset_of_clearTime_9() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___clearTime_9)); }
	inline int32_t get_clearTime_9() const { return ___clearTime_9; }
	inline int32_t* get_address_of_clearTime_9() { return &___clearTime_9; }
	inline void set_clearTime_9(int32_t value)
	{
		___clearTime_9 = value;
	}

	inline static int32_t get_offset_of_status_10() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___status_10)); }
	inline int32_t get_status_10() const { return ___status_10; }
	inline int32_t* get_address_of_status_10() { return &___status_10; }
	inline void set_status_10(int32_t value)
	{
		___status_10 = value;
	}

	inline static int32_t get_offset_of_selectedCondiments_11() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___selectedCondiments_11)); }
	inline int32_t get_selectedCondiments_11() const { return ___selectedCondiments_11; }
	inline int32_t* get_address_of_selectedCondiments_11() { return &___selectedCondiments_11; }
	inline void set_selectedCondiments_11(int32_t value)
	{
		___selectedCondiments_11 = value;
	}

	inline static int32_t get_offset_of_foodsArray_12() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___foodsArray_12)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_foodsArray_12() const { return ___foodsArray_12; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_foodsArray_12() { return &___foodsArray_12; }
	inline void set_foodsArray_12(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___foodsArray_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foodsArray_12), (void*)value);
	}

	inline static int32_t get_offset_of_progress_13() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___progress_13)); }
	inline int32_t get_progress_13() const { return ___progress_13; }
	inline int32_t* get_address_of_progress_13() { return &___progress_13; }
	inline void set_progress_13(int32_t value)
	{
		___progress_13 = value;
	}

	inline static int32_t get_offset_of_splashIntervalCount_14() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___splashIntervalCount_14)); }
	inline int32_t get_splashIntervalCount_14() const { return ___splashIntervalCount_14; }
	inline int32_t* get_address_of_splashIntervalCount_14() { return &___splashIntervalCount_14; }
	inline void set_splashIntervalCount_14(int32_t value)
	{
		___splashIntervalCount_14 = value;
	}

	inline static int32_t get_offset_of_isSplashInterval_15() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___isSplashInterval_15)); }
	inline bool get_isSplashInterval_15() const { return ___isSplashInterval_15; }
	inline bool* get_address_of_isSplashInterval_15() { return &___isSplashInterval_15; }
	inline void set_isSplashInterval_15(bool value)
	{
		___isSplashInterval_15 = value;
	}

	inline static int32_t get_offset_of_preFrameTapped_16() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___preFrameTapped_16)); }
	inline bool get_preFrameTapped_16() const { return ___preFrameTapped_16; }
	inline bool* get_address_of_preFrameTapped_16() { return &___preFrameTapped_16; }
	inline void set_preFrameTapped_16(bool value)
	{
		___preFrameTapped_16 = value;
	}

	inline static int32_t get_offset_of_shakeThreshold_17() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___shakeThreshold_17)); }
	inline float get_shakeThreshold_17() const { return ___shakeThreshold_17; }
	inline float* get_address_of_shakeThreshold_17() { return &___shakeThreshold_17; }
	inline void set_shakeThreshold_17(float value)
	{
		___shakeThreshold_17 = value;
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
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mCD7505433C26B6FA511AC1EA07E58AEF7ED1C213 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Game::checkTap(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_checkTap_m8F56B9E90204B383C9B30CCEAA3D98896B44FAA6 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void Game::checkShake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_checkShake_m35C6F46408B4056A8364834D104D6C7BC0285410 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method);
// System.Void Game::FoodSplashed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_FoodSplashed_m6A27AC88E3F690B1964CAF0FA5F89E0E01752EDC (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void Game::DrawFoods(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_DrawFoods_m86400AEAC9CA2BE719C54CFB737EA4795874C84D (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, int32_t ___id0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var);
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputPointerEx_t77FF40CB496C7D889AF48A8B97C1C8583584A3C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4F093A84AE3078D3C42B98B0D4626BD342F7BA0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// sec += 1;
		int32_t L_0 = __this->get_sec_8();
		__this->set_sec_8(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// if (status == 0)
		int32_t L_1 = __this->get_status_10();
		if (L_1)
		{
			goto IL_0060;
		}
	}
	{
		// if (gc.GetPointerFrameCount(0) == 1)
		RuntimeObject* L_2;
		L_2 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_0 = 0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int32_t* >::Invoke(0 /* System.Int32 GameCanvas.IInputPointerEx::GetPointerFrameCount(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IInputPointerEx_t77FF40CB496C7D889AF48A8B97C1C8583584A3C3_il2cpp_TypeInfo_var, L_2, (&V_0));
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0194;
		}
	}
	{
		// for (int i = 0; i < foodsArray.Length; i++)
		V_1 = 0;
		goto IL_0042;
	}

IL_002f:
	{
		// foodsArray[i] = UnityEngine.Random.Range(2, 4);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = __this->get_foodsArray_12();
		int32_t L_5 = V_1;
		int32_t L_6;
		L_6 = Random_Range_mCD7505433C26B6FA511AC1EA07E58AEF7ED1C213(2, 4, /*hidden argument*/NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (int32_t)L_6);
		// for (int i = 0; i < foodsArray.Length; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0042:
	{
		// for (int i = 0; i < foodsArray.Length; i++)
		int32_t L_8 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = __this->get_foodsArray_12();
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		// sec = 0;
		__this->set_sec_8(0);
		// status = 1;
		__this->set_status_10(1);
		// }
		goto IL_0194;
	}

IL_0060:
	{
		// else if (status == 1)
		int32_t L_10 = __this->get_status_10();
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_011f;
		}
	}
	{
		// if (isSplashInterval)
		bool L_11 = __this->get_isSplashInterval_15();
		if (!L_11)
		{
			goto IL_00e8;
		}
	}
	{
		// splashIntervalCount -= 1;
		int32_t L_12 = __this->get_splashIntervalCount_14();
		__this->set_splashIntervalCount_14(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)));
		// if (splashIntervalCount == 0)
		int32_t L_13 = __this->get_splashIntervalCount_14();
		if (L_13)
		{
			goto IL_00e8;
		}
	}
	{
		// splashIntervalCount = 15;
		__this->set_splashIntervalCount_14(((int32_t)15));
		// isSplashInterval = false;
		__this->set_isSplashInterval_15((bool)0);
		// if (progress < 30)
		int32_t L_14 = __this->get_progress_13();
		if ((((int32_t)L_14) >= ((int32_t)((int32_t)30))))
		{
			goto IL_00b1;
		}
	}
	{
		// progress += 1;
		int32_t L_15 = __this->get_progress_13();
		__this->set_progress_13(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)));
	}

IL_00b1:
	{
		// if (progress == 30)
		int32_t L_16 = __this->get_progress_13();
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)30)))))
		{
			goto IL_00e8;
		}
	}
	{
		// clearTime = sec;
		int32_t L_17 = __this->get_sec_8();
		__this->set_clearTime_9(L_17);
		// Debug.Log("clearTime:");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteralD4F093A84AE3078D3C42B98B0D4626BD342F7BA0, /*hidden argument*/NULL);
		// Debug.Log(clearTime);
		int32_t L_18 = __this->get_clearTime_9();
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_19);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_20, /*hidden argument*/NULL);
		// status = 2;
		__this->set_status_10(2);
	}

IL_00e8:
	{
		// if (!preFrameTapped)
		bool L_21 = __this->get_preFrameTapped_16();
		if (L_21)
		{
			goto IL_0194;
		}
	}
	{
		// checkTap(gc.GetPointerX(1), gc.GetPointerY(1));
		RuntimeObject* L_22;
		L_22 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_0 = 1;
		NullCheck(L_22);
		float L_23;
		L_23 = InterfaceFuncInvoker1< float, int32_t* >::Invoke(1 /* System.Single GameCanvas.IInputPointerEx::GetPointerX(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IInputPointerEx_t77FF40CB496C7D889AF48A8B97C1C8583584A3C3_il2cpp_TypeInfo_var, L_22, (&V_0));
		RuntimeObject* L_24;
		L_24 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_2 = 1;
		NullCheck(L_24);
		float L_25;
		L_25 = InterfaceFuncInvoker1< float, int32_t* >::Invoke(2 /* System.Single GameCanvas.IInputPointerEx::GetPointerY(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IInputPointerEx_t77FF40CB496C7D889AF48A8B97C1C8583584A3C3_il2cpp_TypeInfo_var, L_24, (&V_2));
		Game_checkTap_m8F56B9E90204B383C9B30CCEAA3D98896B44FAA6(__this, L_23, L_25, /*hidden argument*/NULL);
		// checkShake();
		Game_checkShake_m35C6F46408B4056A8364834D104D6C7BC0285410(__this, /*hidden argument*/NULL);
		// }
		goto IL_0194;
	}

IL_011f:
	{
		// else if (status == 2)
		int32_t L_26 = __this->get_status_10();
		if ((!(((uint32_t)L_26) == ((uint32_t)2))))
		{
			goto IL_0194;
		}
	}
	{
		// if (sec > clearTime + 180)
		int32_t L_27 = __this->get_sec_8();
		int32_t L_28 = __this->get_clearTime_9();
		if ((((int32_t)L_27) <= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)((int32_t)180))))))
		{
			goto IL_0194;
		}
	}
	{
		// if (gc.GetPointerFrameCount(0) == 1)
		RuntimeObject* L_29;
		L_29 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_0 = 0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = InterfaceFuncInvoker1< int32_t, int32_t* >::Invoke(0 /* System.Int32 GameCanvas.IInputPointerEx::GetPointerFrameCount(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IInputPointerEx_t77FF40CB496C7D889AF48A8B97C1C8583584A3C3_il2cpp_TypeInfo_var, L_29, (&V_0));
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_0194;
		}
	}
	{
		// sec = 0;
		__this->set_sec_8(0);
		// clearTime = 0;
		__this->set_clearTime_9(0);
		// selectedCondiments = 2;
		__this->set_selectedCondiments_11(2);
		// foodsArray = new int[30];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_31 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		__this->set_foodsArray_12(L_31);
		// progress = 0;
		__this->set_progress_13(0);
		// splashIntervalCount = 15;
		__this->set_splashIntervalCount_14(((int32_t)15));
		// isSplashInterval = false;
		__this->set_isSplashInterval_15((bool)0);
		// preFrameTapped = false;
		__this->set_preFrameTapped_16((bool)0);
		// status = 0;
		__this->set_status_10(0);
	}

IL_0194:
	{
		// if (gc.GetPointerFrameCount(0) >= 1)
		RuntimeObject* L_32;
		L_32 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_0 = 0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, int32_t* >::Invoke(0 /* System.Int32 GameCanvas.IInputPointerEx::GetPointerFrameCount(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IInputPointerEx_t77FF40CB496C7D889AF48A8B97C1C8583584A3C3_il2cpp_TypeInfo_var, L_32, (&V_0));
		if ((((int32_t)L_33) < ((int32_t)1)))
		{
			goto IL_01ae;
		}
	}
	{
		// preFrameTapped = true;
		__this->set_preFrameTapped_16((bool)1);
		// }
		return;
	}

IL_01ae:
	{
		// preFrameTapped = false;
		__this->set_preFrameTapped_16((bool)0);
		// }
		return;
	}
}
// System.Void Game::checkTap(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_checkTap_m8F56B9E90204B383C9B30CCEAA3D98896B44FAA6 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		// if (120 < x && x < 260 && 1000 < y && y < 1188)
		float L_0 = ___x0;
		if ((!(((float)(120.0f)) < ((float)L_0))))
		{
			goto IL_0028;
		}
	}
	{
		float L_1 = ___x0;
		if ((!(((float)L_1) < ((float)(260.0f)))))
		{
			goto IL_0028;
		}
	}
	{
		float L_2 = ___y1;
		if ((!(((float)(1000.0f)) < ((float)L_2))))
		{
			goto IL_0028;
		}
	}
	{
		float L_3 = ___y1;
		if ((!(((float)L_3) < ((float)(1188.0f)))))
		{
			goto IL_0028;
		}
	}
	{
		// selectedCondiments = 2;
		__this->set_selectedCondiments_11(2);
		// }
		return;
	}

IL_0028:
	{
		// else if (510 < x && x < 610 && 1000 < y && y < 1188)
		float L_4 = ___x0;
		if ((!(((float)(510.0f)) < ((float)L_4))))
		{
			goto IL_0050;
		}
	}
	{
		float L_5 = ___x0;
		if ((!(((float)L_5) < ((float)(610.0f)))))
		{
			goto IL_0050;
		}
	}
	{
		float L_6 = ___y1;
		if ((!(((float)(1000.0f)) < ((float)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		float L_7 = ___y1;
		if ((!(((float)L_7) < ((float)(1188.0f)))))
		{
			goto IL_0050;
		}
	}
	{
		// selectedCondiments = 3;
		__this->set_selectedCondiments_11(3);
		// }
		return;
	}

IL_0050:
	{
		// else if (250 < y && y < 886)
		float L_8 = ___y1;
		if ((!(((float)(250.0f)) < ((float)L_8))))
		{
			goto IL_0078;
		}
	}
	{
		float L_9 = ___y1;
		if ((!(((float)L_9) < ((float)(886.0f)))))
		{
			goto IL_0078;
		}
	}
	{
		// if (!isSplashInterval)
		bool L_10 = __this->get_isSplashInterval_15();
		if (L_10)
		{
			goto IL_0078;
		}
	}
	{
		// if (progress < 30)
		int32_t L_11 = __this->get_progress_13();
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)30))))
		{
			goto IL_0078;
		}
	}
	{
		// FoodSplashed();
		Game_FoodSplashed_m6A27AC88E3F690B1964CAF0FA5F89E0E01752EDC(__this, /*hidden argument*/NULL);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Game::checkShake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_checkShake_m35C6F46408B4056A8364834D104D6C7BC0285410 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputAccelerationEx_t2AD6D1948812B141E477368373B2D90BC69C2AAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float x = gc.AccelerationLastX;
		RuntimeObject* L_0;
		L_0 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single GameCanvas.IInputAccelerationEx::get_AccelerationLastX() */, IInputAccelerationEx_t2AD6D1948812B141E477368373B2D90BC69C2AAA_il2cpp_TypeInfo_var, L_0);
		// float y = gc.AccelerationLastY;
		RuntimeObject* L_2;
		L_2 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		float L_3;
		L_3 = InterfaceFuncInvoker0< float >::Invoke(1 /* System.Single GameCanvas.IInputAccelerationEx::get_AccelerationLastY() */, IInputAccelerationEx_t2AD6D1948812B141E477368373B2D90BC69C2AAA_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		// float z = gc.AccelerationLastZ;
		RuntimeObject* L_4;
		L_4 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		float L_5;
		L_5 = InterfaceFuncInvoker0< float >::Invoke(2 /* System.Single GameCanvas.IInputAccelerationEx::get_AccelerationLastZ() */, IInputAccelerationEx_t2AD6D1948812B141E477368373B2D90BC69C2AAA_il2cpp_TypeInfo_var, L_4);
		V_1 = L_5;
		// float acceleration = Mathf.Sqrt(x * x + y * y + z * z);
		float L_6 = L_1;
		float L_7 = V_0;
		float L_8 = V_0;
		float L_9 = V_1;
		float L_10 = V_1;
		float L_11;
		L_11 = sqrtf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_6)), (float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_10)))));
		// if (acceleration > shakeThreshold)
		float L_12 = __this->get_shakeThreshold_17();
		if ((!(((float)L_11) > ((float)L_12))))
		{
			goto IL_0052;
		}
	}
	{
		// if (!isSplashInterval)
		bool L_13 = __this->get_isSplashInterval_15();
		if (L_13)
		{
			goto IL_0052;
		}
	}
	{
		// if (progress < 30)
		int32_t L_14 = __this->get_progress_13();
		if ((((int32_t)L_14) >= ((int32_t)((int32_t)30))))
		{
			goto IL_0052;
		}
	}
	{
		// FoodSplashed();
		Game_FoodSplashed_m6A27AC88E3F690B1964CAF0FA5F89E0E01752EDC(__this, /*hidden argument*/NULL);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void Game::FoodSplashed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_FoodSplashed_m6A27AC88E3F690B1964CAF0FA5F89E0E01752EDC (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method)
{
	{
		// if (foodsArray[progress] == selectedCondiments)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_foodsArray_12();
		int32_t L_1 = __this->get_progress_13();
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = __this->get_selectedCondiments_11();
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0039;
		}
	}
	{
		// isSplashInterval = true;
		__this->set_isSplashInterval_15((bool)1);
		// foodsArray[progress] = foodsArray[progress] * 31;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = __this->get_foodsArray_12();
		int32_t L_6 = __this->get_progress_13();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = __this->get_foodsArray_12();
		int32_t L_8 = __this->get_progress_13();
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)((int32_t)31))));
	}

IL_0039:
	{
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EB956CF02CF577C11F0A40987ECCAA2B8B94F82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CE009FFEA10586D0994B390213905FEAF5D6726);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D74CC8AAE1D4E05C60C34E310631E0CB00221EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76621E64AB32D71E85DB363EB9042E320A7EADE2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B692431AA4CCD576DB1FD8F1AEF713383B5725);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACBD5EC7006E057F50C7BBAFDEC5C5436CA1B3E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB478161F26801FAB994941507C5EDB55D4886BD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1858C8257F2FEB15E63392CBF97BE3BC2E2D56D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6C01FCABC4827A17323F22937D2E262FC4EEE3D);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	float V_8 = 0.0f;
	{
		// if (status == 0)
		int32_t L_0 = __this->get_status_10();
		if (L_0)
		{
			goto IL_0133;
		}
	}
	{
		// gc.DrawImage(GcImage.Background, 0, 0);
		RuntimeObject* L_1;
		L_1 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var);
		V_0 = (0.0f);
		V_1 = (0.0f);
		NullCheck(L_1);
		InterfaceActionInvoker4< GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 *, float*, float*, float >::Invoke(1 /* System.Void GameCanvas.IGraphicsEx::DrawImage(GameCanvas.GcImage& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_1, (((GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields*)il2cpp_codegen_static_fields_for(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var))->get_address_of_Background_0()), (&V_0), (&V_1), (0.0f));
		// gc.SetFontSize(120);
		RuntimeObject* L_2;
		L_2 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_2 = ((int32_t)120);
		NullCheck(L_2);
		InterfaceActionInvoker1< int32_t* >::Invoke(5 /* System.Void GameCanvas.IGraphicsEx::SetFontSize(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_2, (&V_2));
		// gc.SetColor(0, 0, 0);
		RuntimeObject* L_3;
		L_3 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_3 = (uint8_t)0;
		V_4 = (uint8_t)0;
		V_5 = (uint8_t)0;
		NullCheck(L_3);
		InterfaceActionInvoker4< uint8_t*, uint8_t*, uint8_t*, uint8_t >::Invoke(4 /* System.Void GameCanvas.IGraphicsEx::SetColor(System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_3, (&V_3), (&V_4), (&V_5), (uint8_t)((int32_t)255));
		// gc.SetStringAnchor(GcAnchor.UpperCenter);
		RuntimeObject* L_4;
		L_4 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_6 = 1;
		NullCheck(L_4);
		InterfaceActionInvoker1< int32_t* >::Invoke(6 /* System.Void GameCanvas.IGraphicsEx::SetStringAnchor(GameCanvas.GcAnchor& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_4, (&V_6));
		// gc.DrawString("FLAVOR", 360, 280);
		RuntimeObject* L_5;
		L_5 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_7 = _stringLiteral6D74CC8AAE1D4E05C60C34E310631E0CB00221EB;
		V_0 = (360.0f);
		V_1 = (280.0f);
		NullCheck(L_5);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_5, (&V_7), (&V_0), (&V_1), (0.0f));
		// gc.DrawString("SPLASH", 360, 390);
		RuntimeObject* L_6;
		L_6 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_7 = _stringLiteralB478161F26801FAB994941507C5EDB55D4886BD7;
		V_0 = (360.0f);
		V_1 = (390.0f);
		NullCheck(L_6);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_6, (&V_7), (&V_0), (&V_1), (0.0f));
		// gc.SetFontSize(60);
		RuntimeObject* L_7;
		L_7 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_2 = ((int32_t)60);
		NullCheck(L_7);
		InterfaceActionInvoker1< int32_t* >::Invoke(5 /* System.Void GameCanvas.IGraphicsEx::SetFontSize(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_7, (&V_2));
		// gc.SetColor(256, 256, 256);
		RuntimeObject* L_8;
		L_8 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_0 = (256.0f);
		V_1 = (256.0f);
		V_8 = (256.0f);
		NullCheck(L_8);
		InterfaceActionInvoker4< float*, float*, float*, float >::Invoke(3 /* System.Void GameCanvas.IGraphicsEx::SetColor(System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_8, (&V_0), (&V_1), (&V_8), (1.0f));
		// gc.SetStringAnchor(GcAnchor.UpperCenter);
		RuntimeObject* L_9;
		L_9 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_6 = 1;
		NullCheck(L_9);
		InterfaceActionInvoker1< int32_t* >::Invoke(6 /* System.Void GameCanvas.IGraphicsEx::SetStringAnchor(GameCanvas.GcAnchor& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_9, (&V_6));
		// gc.DrawString("TAP TO START", 360, 1000);
		RuntimeObject* L_10;
		L_10 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_7 = _stringLiteralD1858C8257F2FEB15E63392CBF97BE3BC2E2D56D;
		V_0 = (360.0f);
		V_1 = (1000.0f);
		NullCheck(L_10);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_10, (&V_7), (&V_0), (&V_1), (0.0f));
		// }
		return;
	}

IL_0133:
	{
		// else if (status == 1)
		int32_t L_11 = __this->get_status_10();
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_02fc;
		}
	}
	{
		// gc.DrawImage(GcImage.Background, 0, 0);
		RuntimeObject* L_12;
		L_12 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var);
		V_0 = (0.0f);
		V_1 = (0.0f);
		NullCheck(L_12);
		InterfaceActionInvoker4< GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 *, float*, float*, float >::Invoke(1 /* System.Void GameCanvas.IGraphicsEx::DrawImage(GameCanvas.GcImage& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_12, (((GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields*)il2cpp_codegen_static_fields_for(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var))->get_address_of_Background_0()), (&V_0), (&V_1), (0.0f));
		// if (selectedCondiments == 2)
		int32_t L_13 = __this->get_selectedCondiments_11();
		if ((!(((uint32_t)L_13) == ((uint32_t)2))))
		{
			goto IL_0194;
		}
	}
	{
		// gc.DrawImage(GcImage.SelectedIcon, 85, 1090);
		RuntimeObject* L_14;
		L_14 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var);
		V_0 = (85.0f);
		V_1 = (1090.0f);
		NullCheck(L_14);
		InterfaceActionInvoker4< GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 *, float*, float*, float >::Invoke(1 /* System.Void GameCanvas.IGraphicsEx::DrawImage(GameCanvas.GcImage& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_14, (((GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields*)il2cpp_codegen_static_fields_for(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var))->get_address_of_SelectedIcon_7()), (&V_0), (&V_1), (0.0f));
		// }
		goto IL_01c2;
	}

IL_0194:
	{
		// else if (selectedCondiments == 3)
		int32_t L_15 = __this->get_selectedCondiments_11();
		if ((!(((uint32_t)L_15) == ((uint32_t)3))))
		{
			goto IL_01c2;
		}
	}
	{
		// gc.DrawImage(GcImage.SelectedIcon, 447, 1090);
		RuntimeObject* L_16;
		L_16 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var);
		V_0 = (447.0f);
		V_1 = (1090.0f);
		NullCheck(L_16);
		InterfaceActionInvoker4< GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 *, float*, float*, float >::Invoke(1 /* System.Void GameCanvas.IGraphicsEx::DrawImage(GameCanvas.GcImage& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_16, (((GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields*)il2cpp_codegen_static_fields_for(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var))->get_address_of_SelectedIcon_7()), (&V_0), (&V_1), (0.0f));
	}

IL_01c2:
	{
		// gc.SetFontSize(50);
		RuntimeObject* L_17;
		L_17 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_2 = ((int32_t)50);
		NullCheck(L_17);
		InterfaceActionInvoker1< int32_t* >::Invoke(5 /* System.Void GameCanvas.IGraphicsEx::SetFontSize(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_17, (&V_2));
		// gc.SetColor(0, 0, 0);
		RuntimeObject* L_18;
		L_18 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_3 = (uint8_t)0;
		V_4 = (uint8_t)0;
		V_5 = (uint8_t)0;
		NullCheck(L_18);
		InterfaceActionInvoker4< uint8_t*, uint8_t*, uint8_t*, uint8_t >::Invoke(4 /* System.Void GameCanvas.IGraphicsEx::SetColor(System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_18, (&V_3), (&V_4), (&V_5), (uint8_t)((int32_t)255));
		// gc.SetStringAnchor(GcAnchor.UpperLeft);
		RuntimeObject* L_19;
		L_19 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_6 = 0;
		NullCheck(L_19);
		InterfaceActionInvoker1< int32_t* >::Invoke(6 /* System.Void GameCanvas.IGraphicsEx::SetStringAnchor(GameCanvas.GcAnchor& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_19, (&V_6));
		// gc.DrawString("TASK:" + (progress).ToString() + "/30", 20, 20);
		RuntimeObject* L_20;
		L_20 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		int32_t* L_21 = __this->get_address_of_progress_13();
		String_t* L_22;
		L_22 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_21, /*hidden argument*/NULL);
		String_t* L_23;
		L_23 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(_stringLiteralE6C01FCABC4827A17323F22937D2E262FC4EEE3D, L_22, _stringLiteral99B692431AA4CCD576DB1FD8F1AEF713383B5725, /*hidden argument*/NULL);
		V_7 = L_23;
		V_0 = (20.0f);
		V_1 = (20.0f);
		NullCheck(L_20);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_20, (&V_7), (&V_0), (&V_1), (0.0f));
		// gc.SetStringAnchor(GcAnchor.UpperLeft);
		RuntimeObject* L_24;
		L_24 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_6 = 0;
		NullCheck(L_24);
		InterfaceActionInvoker1< int32_t* >::Invoke(6 /* System.Void GameCanvas.IGraphicsEx::SetStringAnchor(GameCanvas.GcAnchor& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_24, (&V_6));
		// gc.DrawString("TIME:" + ((float)sec / 60).ToString(), 500, 20);
		RuntimeObject* L_25;
		L_25 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		int32_t L_26 = __this->get_sec_8();
		V_0 = ((float)((float)((float)((float)L_26))/(float)(60.0f)));
		String_t* L_27;
		L_27 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		String_t* L_28;
		L_28 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral76621E64AB32D71E85DB363EB9042E320A7EADE2, L_27, /*hidden argument*/NULL);
		V_7 = L_28;
		V_0 = (500.0f);
		V_1 = (20.0f);
		NullCheck(L_25);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_25, (&V_7), (&V_0), (&V_1), (0.0f));
		// gc.DrawImage(GcImage.Furikake, 120, 1000);
		RuntimeObject* L_29;
		L_29 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var);
		V_0 = (120.0f);
		V_1 = (1000.0f);
		NullCheck(L_29);
		InterfaceActionInvoker4< GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 *, float*, float*, float >::Invoke(1 /* System.Void GameCanvas.IGraphicsEx::DrawImage(GameCanvas.GcImage& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_29, (((GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields*)il2cpp_codegen_static_fields_for(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var))->get_address_of_Furikake_4()), (&V_0), (&V_1), (0.0f));
		// gc.DrawImage(GcImage.DP, 509, 1000);
		RuntimeObject* L_30;
		L_30 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_0 = (509.0f);
		V_1 = (1000.0f);
		NullCheck(L_30);
		InterfaceActionInvoker4< GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 *, float*, float*, float >::Invoke(1 /* System.Void GameCanvas.IGraphicsEx::DrawImage(GameCanvas.GcImage& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_30, (((GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields*)il2cpp_codegen_static_fields_for(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var))->get_address_of_DP_1()), (&V_0), (&V_1), (0.0f));
		// if (progress < 30)
		int32_t L_31 = __this->get_progress_13();
		if ((((int32_t)L_31) >= ((int32_t)((int32_t)30))))
		{
			goto IL_0523;
		}
	}
	{
		// DrawFoods(foodsArray[progress]);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_32 = __this->get_foodsArray_12();
		int32_t L_33 = __this->get_progress_13();
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		Game_DrawFoods_m86400AEAC9CA2BE719C54CFB737EA4795874C84D(__this, L_35, /*hidden argument*/NULL);
		// }
		return;
	}

IL_02fc:
	{
		// else if (status == 2)
		int32_t L_36 = __this->get_status_10();
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_0523;
		}
	}
	{
		// if (sec < clearTime + 60)
		int32_t L_37 = __this->get_sec_8();
		int32_t L_38 = __this->get_clearTime_9();
		if ((((int32_t)L_37) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)((int32_t)60))))))
		{
			goto IL_0381;
		}
	}
	{
		// gc.SetFontSize(120);
		RuntimeObject* L_39;
		L_39 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_2 = ((int32_t)120);
		NullCheck(L_39);
		InterfaceActionInvoker1< int32_t* >::Invoke(5 /* System.Void GameCanvas.IGraphicsEx::SetFontSize(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_39, (&V_2));
		// gc.SetColor(0, 0, 0);
		RuntimeObject* L_40;
		L_40 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_3 = (uint8_t)0;
		V_4 = (uint8_t)0;
		V_5 = (uint8_t)0;
		NullCheck(L_40);
		InterfaceActionInvoker4< uint8_t*, uint8_t*, uint8_t*, uint8_t >::Invoke(4 /* System.Void GameCanvas.IGraphicsEx::SetColor(System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_40, (&V_3), (&V_4), (&V_5), (uint8_t)((int32_t)255));
		// gc.SetStringAnchor(GcAnchor.UpperLeft);
		RuntimeObject* L_41;
		L_41 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_6 = 0;
		NullCheck(L_41);
		InterfaceActionInvoker1< int32_t* >::Invoke(6 /* System.Void GameCanvas.IGraphicsEx::SetStringAnchor(GameCanvas.GcAnchor& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_41, (&V_6));
		// gc.DrawString("FINISH", 185, 280);
		RuntimeObject* L_42;
		L_42 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_7 = _stringLiteralACBD5EC7006E057F50C7BBAFDEC5C5436CA1B3E9;
		V_0 = (185.0f);
		V_1 = (280.0f);
		NullCheck(L_42);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_42, (&V_7), (&V_0), (&V_1), (0.0f));
		// }
		return;
	}

IL_0381:
	{
		// gc.DrawImage(GcImage.Background, 0, 0);
		RuntimeObject* L_43;
		L_43 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var);
		V_0 = (0.0f);
		V_1 = (0.0f);
		NullCheck(L_43);
		InterfaceActionInvoker4< GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 *, float*, float*, float >::Invoke(1 /* System.Void GameCanvas.IGraphicsEx::DrawImage(GameCanvas.GcImage& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_43, (((GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields*)il2cpp_codegen_static_fields_for(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var))->get_address_of_Background_0()), (&V_0), (&V_1), (0.0f));
		// gc.SetFontSize(120);
		RuntimeObject* L_44;
		L_44 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_2 = ((int32_t)120);
		NullCheck(L_44);
		InterfaceActionInvoker1< int32_t* >::Invoke(5 /* System.Void GameCanvas.IGraphicsEx::SetFontSize(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_44, (&V_2));
		// gc.SetColor(0, 0, 0);
		RuntimeObject* L_45;
		L_45 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_3 = (uint8_t)0;
		V_4 = (uint8_t)0;
		V_5 = (uint8_t)0;
		NullCheck(L_45);
		InterfaceActionInvoker4< uint8_t*, uint8_t*, uint8_t*, uint8_t >::Invoke(4 /* System.Void GameCanvas.IGraphicsEx::SetColor(System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_45, (&V_3), (&V_4), (&V_5), (uint8_t)((int32_t)255));
		// gc.SetStringAnchor(GcAnchor.UpperLeft);
		RuntimeObject* L_46;
		L_46 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_6 = 0;
		NullCheck(L_46);
		InterfaceActionInvoker1< int32_t* >::Invoke(6 /* System.Void GameCanvas.IGraphicsEx::SetStringAnchor(GameCanvas.GcAnchor& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_46, (&V_6));
		// gc.DrawString("RESULT", 185, 100);
		RuntimeObject* L_47;
		L_47 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_7 = _stringLiteral2EB956CF02CF577C11F0A40987ECCAA2B8B94F82;
		V_0 = (185.0f);
		V_1 = (100.0f);
		NullCheck(L_47);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_47, (&V_7), (&V_0), (&V_1), (0.0f));
		// if (sec > clearTime + 120)
		int32_t L_48 = __this->get_sec_8();
		int32_t L_49 = __this->get_clearTime_9();
		if ((((int32_t)L_48) <= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)((int32_t)120))))))
		{
			goto IL_049d;
		}
	}
	{
		// gc.SetFontSize(180);
		RuntimeObject* L_50;
		L_50 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_2 = ((int32_t)180);
		NullCheck(L_50);
		InterfaceActionInvoker1< int32_t* >::Invoke(5 /* System.Void GameCanvas.IGraphicsEx::SetFontSize(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_50, (&V_2));
		// gc.SetColor(0, 0, 0);
		RuntimeObject* L_51;
		L_51 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_3 = (uint8_t)0;
		V_4 = (uint8_t)0;
		V_5 = (uint8_t)0;
		NullCheck(L_51);
		InterfaceActionInvoker4< uint8_t*, uint8_t*, uint8_t*, uint8_t >::Invoke(4 /* System.Void GameCanvas.IGraphicsEx::SetColor(System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte& modreq(System.Runtime.InteropServices.InAttribute),System.Byte) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_51, (&V_3), (&V_4), (&V_5), (uint8_t)((int32_t)255));
		// gc.SetStringAnchor(GcAnchor.UpperLeft);
		RuntimeObject* L_52;
		L_52 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_6 = 0;
		NullCheck(L_52);
		InterfaceActionInvoker1< int32_t* >::Invoke(6 /* System.Void GameCanvas.IGraphicsEx::SetStringAnchor(GameCanvas.GcAnchor& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_52, (&V_6));
		// gc.DrawString(((float)clearTime / 60).ToString("0.00"), 155, 400);
		RuntimeObject* L_53;
		L_53 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		int32_t L_54 = __this->get_clearTime_9();
		V_0 = ((float)((float)((float)((float)L_54))/(float)(60.0f)));
		String_t* L_55;
		L_55 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&V_0), _stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D, /*hidden argument*/NULL);
		V_7 = L_55;
		V_0 = (155.0f);
		V_1 = (400.0f);
		NullCheck(L_53);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_53, (&V_7), (&V_0), (&V_1), (0.0f));
	}

IL_049d:
	{
		// if (sec > clearTime + 180)
		int32_t L_56 = __this->get_sec_8();
		int32_t L_57 = __this->get_clearTime_9();
		if ((((int32_t)L_56) <= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)((int32_t)180))))))
		{
			goto IL_0523;
		}
	}
	{
		// gc.SetFontSize(40);
		RuntimeObject* L_58;
		L_58 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_2 = ((int32_t)40);
		NullCheck(L_58);
		InterfaceActionInvoker1< int32_t* >::Invoke(5 /* System.Void GameCanvas.IGraphicsEx::SetFontSize(System.Int32& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_58, (&V_2));
		// gc.SetColor(256, 256, 256);
		RuntimeObject* L_59;
		L_59 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_0 = (256.0f);
		V_1 = (256.0f);
		V_8 = (256.0f);
		NullCheck(L_59);
		InterfaceActionInvoker4< float*, float*, float*, float >::Invoke(3 /* System.Void GameCanvas.IGraphicsEx::SetColor(System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_59, (&V_0), (&V_1), (&V_8), (1.0f));
		// gc.SetStringAnchor(GcAnchor.UpperCenter);
		RuntimeObject* L_60;
		L_60 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_6 = 1;
		NullCheck(L_60);
		InterfaceActionInvoker1< int32_t* >::Invoke(6 /* System.Void GameCanvas.IGraphicsEx::SetStringAnchor(GameCanvas.GcAnchor& modreq(System.Runtime.InteropServices.InAttribute)) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_60, (&V_6));
		// gc.DrawString("TAP TO RETURN TO TITLE SCREEN", 360, 1000);
		RuntimeObject* L_61;
		L_61 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		V_7 = _stringLiteral6CE009FFEA10586D0994B390213905FEAF5D6726;
		V_0 = (360.0f);
		V_1 = (1000.0f);
		NullCheck(L_61);
		InterfaceActionInvoker4< String_t**, float*, float*, float >::Invoke(2 /* System.Void GameCanvas.IGraphicsEx::DrawString(System.String& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_61, (&V_7), (&V_0), (&V_1), (0.0f));
	}

IL_0523:
	{
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
		if ((((int32_t)L_0) > ((int32_t)3)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___id0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = ___id0;
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0064;
		}
	}
	{
		return;
	}

IL_000d:
	{
		int32_t L_3 = ___id0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)62))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_4 = ___id0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)93))))
		{
			goto IL_008a;
		}
	}
	{
		return;
	}

IL_0018:
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

IL_003e:
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

IL_0064:
	{
		// gc.DrawImage(GcImage.Frappucino, 165, 256);
		RuntimeObject* L_7;
		L_7 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var);
		V_0 = (165.0f);
		V_1 = (256.0f);
		NullCheck(L_7);
		InterfaceActionInvoker4< GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 *, float*, float*, float >::Invoke(1 /* System.Void GameCanvas.IGraphicsEx::DrawImage(GameCanvas.GcImage& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_7, (((GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields*)il2cpp_codegen_static_fields_for(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var))->get_address_of_Frappucino_2()), (&V_0), (&V_1), (0.0f));
		// break;
		return;
	}

IL_008a:
	{
		// gc.DrawImage(GcImage.FrappucinoSplashed, 165, 256);
		RuntimeObject* L_8;
		L_8 = BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var);
		V_0 = (165.0f);
		V_1 = (256.0f);
		NullCheck(L_8);
		InterfaceActionInvoker4< GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866 *, float*, float*, float >::Invoke(1 /* System.Void GameCanvas.IGraphicsEx::DrawImage(GameCanvas.GcImage& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single& modreq(System.Runtime.InteropServices.InAttribute),System.Single) */, IGraphicsEx_t113E3F83C1D7F5AAF1258D39B80177E54F727116_il2cpp_TypeInfo_var, L_8, (((GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_StaticFields*)il2cpp_codegen_static_fields_for(GcImage_t8B7ADE72B20507E0971203D9A2E89E5E537BB866_il2cpp_TypeInfo_var))->get_address_of_FrappucinoSplashed_3()), (&V_0), (&V_1), (0.0f));
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
		s_Il2CppMethodInitialized = true;
	}
	{
		// int selectedCondiments = 2;
		__this->set_selectedCondiments_11(2);
		// int[] foodsArray = new int[30];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		__this->set_foodsArray_12(L_0);
		// int splashIntervalCount = 15;
		__this->set_splashIntervalCount_14(((int32_t)15));
		// float shakeThreshold = 2.0f;
		__this->set_shakeThreshold_17((2.0f));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BehaviourBase_get_gc_m107F5C296EA19D7DD7B33B0335E6F44A954A47F9_inline (BehaviourBase_tCE3EEB2BB1EA468AFE888981532CE7F6B8006A0A * __this, const RuntimeMethod* method)
{
	{
		// get => m_Proxy;
		GcProxy_t832DFA1A70226659BE781159106088071E92BCBA * L_0 = __this->get_m_Proxy_7();
		return L_0;
	}
}
