#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// AnimalSpawner
struct AnimalSpawner_tEF5ED679F1D091CE582014EA59256512C665BE99;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DestroyAnimal
struct DestroyAnimal_tA7ACCE6AE542A90DB613C2E0FD53F7590B05F226;
// DestroyFood
struct DestroyFood_t53CAF3BAE2A2351E56C0D36391D5D18764368B24;
// EatFoodCollision
struct EatFoodCollision_tB39B84FCB0501AC35ED6E40F7DB5BE2DA45CE73D;
// EventManager
struct EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// LivesController
struct LivesController_tA050501B7A3222E81DD81BC4C6B1FA851AEB4DA8;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MoveForward
struct MoveForward_tA37E835555223DD134823AE5DD65437A2847E708;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// ScoreController
struct ScoreController_tD0A8C4C0BB3FE285665B33782F252080F6D74805;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// EventManager/AddScoreDelegate
struct AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198;
// EventManager/RemoveLifeDelegat
struct RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C;

IL2CPP_EXTERN_C RuntimeClass* AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6;
IL2CPP_EXTERN_C String_t* _stringLiteral20F67E6056DEDDD44253965E2BD6304E6066EB92;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral27B1240786558BB01BAF8EA86CF65C4996DEF092;
IL2CPP_EXTERN_C String_t* _stringLiteral4C4FB832501C71F77892A72B34DEA9651196DB7C;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD065DB8A8067D7DDCCE87344EBF0170809AA9DB4;
IL2CPP_EXTERN_C String_t* _stringLiteralDE049D7BF5B964940A5CE6A1544D6C65FB286625;
IL2CPP_EXTERN_C String_t* _stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B;
IL2CPP_EXTERN_C String_t* _stringLiteralF984C9674EDCA2C39EFAD66081B054F073C3815B;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LivesController_HandleRemoveLife_m56B3B4867D5E1A7D382DF21622106047FDB4C441_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScoreController_HandleAddScore_m53DBCF02CFC9279BC88B0E45D0560CC5C4A8A7EB_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// EventManager/AddScoreDelegate
struct AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198  : public MulticastDelegate_t
{
};

// EventManager/RemoveLifeDelegat
struct RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AnimalSpawner
struct AnimalSpawner_tEF5ED679F1D091CE582014EA59256512C665BE99  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] AnimalSpawner::AnimalPrefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___AnimalPrefabs_4;
	// System.Single AnimalSpawner::Left
	float ___Left_5;
	// System.Single AnimalSpawner::Right
	float ___Right_6;
	// System.Single AnimalSpawner::startTime
	float ___startTime_7;
	// System.Single AnimalSpawner::spawnIntervalMin
	float ___spawnIntervalMin_8;
	// System.Single AnimalSpawner::spawnIntervalMax
	float ___spawnIntervalMax_9;
};

// DestroyAnimal
struct DestroyAnimal_tA7ACCE6AE542A90DB613C2E0FD53F7590B05F226  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single DestroyAnimal::minZ
	float ___minZ_4;
	// System.Single DestroyAnimal::minX
	float ___minX_5;
	// System.Single DestroyAnimal::maxX
	float ___maxX_6;
};

// DestroyFood
struct DestroyFood_t53CAF3BAE2A2351E56C0D36391D5D18764368B24  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single DestroyFood::maxX
	float ___maxX_4;
	// System.Single DestroyFood::minX
	float ___minX_5;
	// System.Single DestroyFood::maxZ
	float ___maxZ_6;
	// System.Single DestroyFood::minZ
	float ___minZ_7;
};

// EatFoodCollision
struct EatFoodCollision_tB39B84FCB0501AC35ED6E40F7DB5BE2DA45CE73D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 EatFoodCollision::MaxHunger
	int32_t ___MaxHunger_4;
	// System.Single EatFoodCollision::currentHunger
	float ___currentHunger_5;
};

// EventManager
struct EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_StaticFields
{
	// EventManager/AddScoreDelegate EventManager::AddScore
	AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* ___AddScore_4;
	// EventManager/RemoveLifeDelegat EventManager::RemoveLife
	RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* ___RemoveLife_5;
};

// LivesController
struct LivesController_tA050501B7A3222E81DD81BC4C6B1FA851AEB4DA8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ScoreController LivesController::scoreController
	ScoreController_tD0A8C4C0BB3FE285665B33782F252080F6D74805* ___scoreController_4;
	// System.Single LivesController::lives
	float ___lives_5;
};

// MoveForward
struct MoveForward_tA37E835555223DD134823AE5DD65437A2847E708  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single MoveForward::speed
	float ___speed_4;
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] PlayerController::FoodPrefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___FoodPrefabs_4;
	// System.Single PlayerController::ThrowCooldown
	float ___ThrowCooldown_5;
	// System.Single PlayerController::speed
	float ___speed_6;
	// System.Single PlayerController::minX
	float ___minX_7;
	// System.Single PlayerController::maxX
	float ___maxX_8;
	// System.Single PlayerController::minZ
	float ___minZ_9;
	// System.Single PlayerController::maxZ
	float ___maxZ_10;
	// UnityEngine.Animator PlayerController::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_11;
	// System.Single PlayerController::horizontalInput
	float ___horizontalInput_12;
	// System.Single PlayerController::verticalInput
	float ___verticalInput_13;
	// System.DateTime PlayerController::LastThrown
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___LastThrown_14;
	// UnityEngine.Vector3 PlayerController::offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_15;
};

// ScoreController
struct ScoreController_tD0A8C4C0BB3FE285665B33782F252080F6D74805  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ScoreController::Score
	float ___Score_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void AnimalSpawner::SpawnAnimal(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimalSpawner_SpawnAnimal_mD269936F025F8CEEC7D4E209974F09E1CF27C23B (AnimalSpawner_tEF5ED679F1D091CE582014EA59256512C665BE99* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___animal0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single AnimalSpawner::GetRandom(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimalSpawner_GetRandom_m91055BA301463877176729F8231E83F9E91CD987 (AnimalSpawner_tEF5ED679F1D091CE582014EA59256512C665BE99* __this, float ___One0, float ___Two1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void EventManager::TriggerRemoveLife()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_TriggerRemoveLife_mE73C97EA3CD52CD42E1E77EB6423C1219867A1DB (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void EventManager::TriggerAddScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_TriggerAddScore_mE84718F16A56B46D70BE27E09E377631235C8934 (int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Box_m1E4D5FE4B7911725059CE0A2674B88CFAD279365 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) ;
// System.Void EatFoodCollision::DrawColoredTexture(UnityEngine.Rect,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EatFoodCollision_DrawColoredTexture_mE3E08AC40C1BA37738CD3C6EF0FA6608DF8C3BD2 (EatFoodCollision_tB39B84FCB0501AC35ED6E40F7DB5BE2DA45CE73D* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___x0, int32_t ___y1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DrawTexture_m4DC8E4DE66E5B806D6C71E9BFC8B122DB2A51F09 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___image1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void EventManager/AddScoreDelegate::Invoke(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AddScoreDelegate_Invoke_mCD2C0A61267CBD30EC7887F8E0FFF040D798E6C2_inline (AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void EventManager/RemoveLifeDelegat::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RemoveLifeDelegat_Invoke_mC9D8ADB314C07F5C1264B36C9B6F40C382ECC6B7_inline (RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void EventManager/RemoveLifeDelegat::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveLifeDelegat__ctor_m7802CE04740D185A2FE83263BEB2DE45C1C3661C (RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void EventManager::add_RemoveLife(EventManager/RemoveLifeDelegat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_add_RemoveLife_m4EF35C2A999992EF63F3846D3BD638321C923BBB (RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* ___value0, const RuntimeMethod* method) ;
// System.Void EventManager::remove_RemoveLife(EventManager/RemoveLifeDelegat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_remove_RemoveLife_m5D6271699E5C4E6D5E7FA29C8F217CC059252D3A (RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) ;
// System.Void LivesController::DrawColoredTexture(UnityEngine.Rect,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivesController_DrawColoredTexture_m3BEA10154FBF77D01B5F267AB31B8300C9931F19 (LivesController_tA050501B7A3222E81DD81BC4C6B1FA851AEB4DA8* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_mD0363B5F1771A7C7A97ABB0D07863217D229A9C0 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Void PlayerController::SpawnRandomFood()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_SpawnRandomFood_m698395E218C8EC90C8FF85A53CED8658C37375BD (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___value0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0 (const RuntimeMethod* method) ;
// System.Boolean System.DateTime::op_LessThan(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_op_LessThan_mC39C4E1CDE23ED2ABA8D1DC9B4283B1BC1ACDB36 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___t10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___t21, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void EventManager/AddScoreDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddScoreDelegate__ctor_m35C940335AC8B38144E7370A08FD60E6911BCCBF (AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void EventManager::add_AddScore(EventManager/AddScoreDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_add_AddScore_m37A577B46EC73583B7E9E104A3AF43F82FF6D574 (AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* ___value0, const RuntimeMethod* method) ;
// System.Void EventManager::remove_AddScore(EventManager/AddScoreDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_remove_AddScore_mBF2EBF1D004C4E54706AEF73D40BA1E88584EE93 (AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_mF161ED74A26AEC05C8A56F0B95F78482CE7ED5C7 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
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
// System.Void AnimalSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimalSpawner_Start_m34ACAECE756FEBB18E722C51EA09B8AB124CC679 (AnimalSpawner_tEF5ED679F1D091CE582014EA59256512C665BE99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C4FB832501C71F77892A72B34DEA9651196DB7C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InvokeRepeating(nameof(SpawnRandomAnimal), startTime, Random.Range(spawnIntervalMin, spawnIntervalMax));
		float L_0 = __this->___startTime_7;
		float L_1 = __this->___spawnIntervalMin_8;
		float L_2 = __this->___spawnIntervalMax_9;
		float L_3;
		L_3 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_1, L_2, NULL);
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteral4C4FB832501C71F77892A72B34DEA9651196DB7C, L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void AnimalSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimalSpawner_Update_mFD88FC25FD33D5D31CFB20E8AC01C59B678C6130 (AnimalSpawner_tEF5ED679F1D091CE582014EA59256512C665BE99* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AnimalSpawner::SpawnRandomAnimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimalSpawner_SpawnRandomAnimal_mE661556713A3ACC9785FF5DF22BAFD71C16F467F (AnimalSpawner_tEF5ED679F1D091CE582014EA59256512C665BE99* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// int randomAnimalIndex = Random.Range(0, AnimalPrefabs.Length);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___AnimalPrefabs_4;
		int32_t L_1;
		L_1 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)(((RuntimeArray*)L_0)->max_length)), NULL);
		V_0 = L_1;
		// GameObject randomAnimal = AnimalPrefabs[randomAnimalIndex];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___AnimalPrefabs_4;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		// SpawnAnimal(randomAnimal);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_1;
		AnimalSpawner_SpawnAnimal_mD269936F025F8CEEC7D4E209974F09E1CF27C23B(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void AnimalSpawner::SpawnAnimal(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimalSpawner_SpawnAnimal_mD269936F025F8CEEC7D4E209974F09E1CF27C23B (AnimalSpawner_tEF5ED679F1D091CE582014EA59256512C665BE99* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___animal0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float perpendicularAngle = transform.eulerAngles.y + 90f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_0, NULL);
		float L_2 = L_1.___y_3;
		V_0 = ((float)il2cpp_codegen_add(L_2, (90.0f)));
		// float randomOffset = GetRandom(Left, Right);
		float L_3 = __this->___Left_5;
		float L_4 = __this->___Right_6;
		float L_5;
		L_5 = AnimalSpawner_GetRandom_m91055BA301463877176729F8231E83F9E91CD987(__this, L_3, L_4, NULL);
		V_1 = L_5;
		// Vector3 spawnPosition = transform.position +
		//     Quaternion.Euler(0f, perpendicularAngle, 0f) * (Vector3.forward * randomOffset);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), L_8, (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		float L_11 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_10, L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_9, L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_7, L_13, NULL);
		V_2 = L_14;
		// Instantiate(animal, spawnPosition, transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = ___animal0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_15, L_16, L_18, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Single AnimalSpawner::GetRandomVector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimalSpawner_GetRandomVector_m3E84E274F39D1DE471F29996AEC74AA595C4C5FE (AnimalSpawner_tEF5ED679F1D091CE582014EA59256512C665BE99* __this, const RuntimeMethod* method) 
{
	{
		// if (Left < Right)
		float L_0 = __this->___Left_5;
		float L_1 = __this->___Right_6;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_0020;
		}
	}
	{
		// return Random.Range(Left, Right);
		float L_2 = __this->___Left_5;
		float L_3 = __this->___Right_6;
		float L_4;
		L_4 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_2, L_3, NULL);
		return L_4;
	}

IL_0020:
	{
		// return Random.Range(Right, Left);
		float L_5 = __this->___Right_6;
		float L_6 = __this->___Left_5;
		float L_7;
		L_7 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_5, L_6, NULL);
		return L_7;
	}
}
// System.Single AnimalSpawner::GetRandom(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimalSpawner_GetRandom_m91055BA301463877176729F8231E83F9E91CD987 (AnimalSpawner_tEF5ED679F1D091CE582014EA59256512C665BE99* __this, float ___One0, float ___Two1, const RuntimeMethod* method) 
{
	{
		// if (One < Two)
		float L_0 = ___One0;
		float L_1 = ___Two1;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_000c;
		}
	}
	{
		// return Random.Range(One, Two);
		float L_2 = ___One0;
		float L_3 = ___Two1;
		float L_4;
		L_4 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_2, L_3, NULL);
		return L_4;
	}

IL_000c:
	{
		// return Random.Range(Two, One);
		float L_5 = ___Two1;
		float L_6 = ___One0;
		float L_7;
		L_7 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void AnimalSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimalSpawner__ctor_m446AF85AF74257119E4BD71B6A7903260344FA5A (AnimalSpawner_tEF5ED679F1D091CE582014EA59256512C665BE99* __this, const RuntimeMethod* method) 
{
	{
		// private float startTime = 2f;
		__this->___startTime_7 = (2.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void DestroyAnimal::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyAnimal_Update_mDE3E59D6AE83427E96BB6ED5BD78D8366B3BB419 (DestroyAnimal_tA7ACCE6AE542A90DB613C2E0FD53F7590B05F226* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (transform.position.z < -minZ || transform.position.x > maxX ||
		//     transform.position.x < minX)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___z_4;
		float L_3 = __this->___minZ_4;
		if ((((float)L_2) < ((float)((-L_3)))))
		{
			goto IL_0049;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___x_2;
		float L_7 = __this->___maxX_6;
		if ((((float)L_6) > ((float)L_7)))
		{
			goto IL_0049;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___x_2;
		float L_11 = __this->___minX_5;
		if ((!(((float)L_10) < ((float)L_11))))
		{
			goto IL_0054;
		}
	}

IL_0049:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_12, NULL);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void DestroyAnimal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyAnimal__ctor_m3845E25DAF5633091051C7D92F321E191B8CA9B9 (DestroyAnimal_tA7ACCE6AE542A90DB613C2E0FD53F7590B05F226* __this, const RuntimeMethod* method) 
{
	{
		// private float minZ = 2f;
		__this->___minZ_4 = (2.0f);
		// private float minX = -30f;
		__this->___minX_5 = (-30.0f);
		// private float maxX = 30f;
		__this->___maxX_6 = (30.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void DestroyFood::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyFood_Update_mB9718A73357071A6FDCB180A04ECE500C672B8D0 (DestroyFood_t53CAF3BAE2A2351E56C0D36391D5D18764368B24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float currentX = transform.position.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___x_2;
		V_0 = L_2;
		// float currentZ = transform.position.z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___z_4;
		V_1 = L_5;
		// if (currentX > maxX || currentX < minX ||
		//     currentZ > maxZ || currentZ < minZ)
		float L_6 = V_0;
		float L_7 = __this->___maxX_4;
		if ((((float)L_6) > ((float)L_7)))
		{
			goto IL_0046;
		}
	}
	{
		float L_8 = V_0;
		float L_9 = __this->___minX_5;
		if ((((float)L_8) < ((float)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		float L_10 = V_1;
		float L_11 = __this->___maxZ_6;
		if ((((float)L_10) > ((float)L_11)))
		{
			goto IL_0046;
		}
	}
	{
		float L_12 = V_1;
		float L_13 = __this->___minZ_7;
		if ((!(((float)L_12) < ((float)L_13))))
		{
			goto IL_0056;
		}
	}

IL_0046:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_14, NULL);
		// EventManager.TriggerRemoveLife();
		EventManager_TriggerRemoveLife_mE73C97EA3CD52CD42E1E77EB6423C1219867A1DB(NULL);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void DestroyFood::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyFood__ctor_mD4A34BE0808450A9D8FDEEDA6E85EAF9F1AA8C3B (DestroyFood_t53CAF3BAE2A2351E56C0D36391D5D18764368B24* __this, const RuntimeMethod* method) 
{
	{
		// private float maxX = 25;
		__this->___maxX_4 = (25.0f);
		// private float minX = -25;
		__this->___minX_5 = (-25.0f);
		// private float maxZ = 35;
		__this->___maxZ_6 = (35.0f);
		// private float minZ = -25;
		__this->___minZ_7 = (-25.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EatFoodCollision::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EatFoodCollision_OnTriggerEnter_mC5CA1294AF5903FCB569440C9E3432A409B2366C (EatFoodCollision_tB39B84FCB0501AC35ED6E40F7DB5BE2DA45CE73D* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.CompareTag("Food"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B, NULL);
		if (!L_2)
		{
			goto IL_0055;
		}
	}
	{
		// currentHunger += 1;
		float L_3 = __this->___currentHunger_5;
		__this->___currentHunger_5 = ((float)il2cpp_codegen_add(L_3, (1.0f)));
		// Destroy(other.gameObject);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_5, NULL);
		// if (currentHunger >= MaxHunger)
		float L_6 = __this->___currentHunger_5;
		int32_t L_7 = __this->___MaxHunger_4;
		if ((!(((float)L_6) >= ((float)((float)L_7)))))
		{
			goto IL_006c;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_8, NULL);
		// EventManager.TriggerAddScore(MaxHunger);
		int32_t L_9 = __this->___MaxHunger_4;
		EventManager_TriggerAddScore_mE84718F16A56B46D70BE27E09E377631235C8934(L_9, NULL);
		return;
	}

IL_0055:
	{
		// }else if (other.gameObject.CompareTag("Player")) {
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_10 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		bool L_12;
		L_12 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_11, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_12)
		{
			goto IL_006c;
		}
	}
	{
		// EventManager.TriggerRemoveLife();
		EventManager_TriggerRemoveLife_mE73C97EA3CD52CD42E1E77EB6423C1219867A1DB(NULL);
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Void EatFoodCollision::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EatFoodCollision_OnGUI_m0ED16AEF273B29DE6D20625513EC99CB4616EBD1 (EatFoodCollision_tB39B84FCB0501AC35ED6E40F7DB5BE2DA45CE73D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 screenPosition = Camera.main.WorldToScreenPoint(transform.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_0, L_2, NULL);
		V_0 = L_3;
		// Rect hungerBarRect = new Rect(screenPosition.x - 50f, Screen.height - screenPosition.y + 20f, 100f, 10f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		float L_5 = L_4.___x_2;
		int32_t L_6;
		L_6 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8 = L_7.___y_3;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_1), ((float)il2cpp_codegen_subtract(L_5, (50.0f))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)L_6), L_8)), (20.0f))), (100.0f), (10.0f), NULL);
		// float fillAmount = currentHunger / MaxHunger;
		float L_9 = __this->___currentHunger_5;
		int32_t L_10 = __this->___MaxHunger_4;
		V_2 = ((float)(L_9/((float)L_10)));
		// GUI.Box(hungerBarRect, string.Empty);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_11 = V_1;
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_Box_m1E4D5FE4B7911725059CE0A2674B88CFAD279365(L_11, L_12, NULL);
		// Rect hungerFillRect = new Rect(hungerBarRect.x, hungerBarRect.y, hungerBarRect.width * fillAmount, hungerBarRect.height);
		float L_13;
		L_13 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_1), NULL);
		float L_14;
		L_14 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_1), NULL);
		float L_15;
		L_15 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_1), NULL);
		float L_16 = V_2;
		float L_17;
		L_17 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_1), NULL);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_3), L_13, L_14, ((float)il2cpp_codegen_multiply(L_15, L_16)), L_17, NULL);
		// DrawColoredTexture(hungerFillRect, Color.green);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_18 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline(NULL);
		EatFoodCollision_DrawColoredTexture_mE3E08AC40C1BA37738CD3C6EF0FA6608DF8C3BD2(__this, L_18, L_19, NULL);
		// }
		return;
	}
}
// System.Void EatFoodCollision::DrawColoredTexture(UnityEngine.Rect,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EatFoodCollision_DrawColoredTexture_mE3E08AC40C1BA37738CD3C6EF0FA6608DF8C3BD2 (EatFoodCollision_tB39B84FCB0501AC35ED6E40F7DB5BE2DA45CE73D* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	{
		// Texture2D texture = new Texture2D(1, 1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_0, 1, 1, NULL);
		V_0 = L_0;
		// texture.SetPixel(0, 0, color);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___color1;
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_1, 0, 0, L_2, NULL);
		// texture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = V_0;
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_3, NULL);
		// GUI.DrawTexture(rect, texture);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4 = ___rect0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m4DC8E4DE66E5B806D6C71E9BFC8B122DB2A51F09(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void EatFoodCollision::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EatFoodCollision__ctor_mCA974B22D437E18FC801514F4220DAF44FA93A4C (EatFoodCollision_tB39B84FCB0501AC35ED6E40F7DB5BE2DA45CE73D* __this, const RuntimeMethod* method) 
{
	{
		// public int MaxHunger = 1;
		__this->___MaxHunger_4 = 1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EventManager::add_AddScore(EventManager/AddScoreDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_add_AddScore_m37A577B46EC73583B7E9E104A3AF43F82FF6D574 (AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* V_0 = NULL;
	AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* V_1 = NULL;
	AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* V_2 = NULL;
	{
		AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* L_0 = ((EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var))->___AddScore_4;
		V_0 = L_0;
	}

IL_0006:
	{
		AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* L_1 = V_0;
		V_1 = L_1;
		AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* L_2 = V_1;
		AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198*)CastclassSealed((RuntimeObject*)L_4, AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198_il2cpp_TypeInfo_var));
		AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* L_5 = V_2;
		AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* L_6 = V_1;
		AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* L_7;
		L_7 = InterlockedCompareExchangeImpl<AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198*>((&((EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var))->___AddScore_4), L_5, L_6);
		V_0 = L_7;
		AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* L_8 = V_0;
		AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* L_9 = V_1;
		if ((!(((RuntimeObject*)(AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198*)L_8) == ((RuntimeObject*)(AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void EventManager::remove_AddScore(EventManager/AddScoreDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_remove_AddScore_mBF2EBF1D004C4E54706AEF73D40BA1E88584EE93 (AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* V_0 = NULL;
	AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* V_1 = NULL;
	AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* V_2 = NULL;
	{
		AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* L_0 = ((EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var))->___AddScore_4;
		V_0 = L_0;
	}

IL_0006:
	{
		AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* L_1 = V_0;
		V_1 = L_1;
		AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* L_2 = V_1;
		AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198*)CastclassSealed((RuntimeObject*)L_4, AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198_il2cpp_TypeInfo_var));
		AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* L_5 = V_2;
		AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* L_6 = V_1;
		AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* L_7;
		L_7 = InterlockedCompareExchangeImpl<AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198*>((&((EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var))->___AddScore_4), L_5, L_6);
		V_0 = L_7;
		AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* L_8 = V_0;
		AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* L_9 = V_1;
		if ((!(((RuntimeObject*)(AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198*)L_8) == ((RuntimeObject*)(AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void EventManager::TriggerAddScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_TriggerAddScore_mE84718F16A56B46D70BE27E09E377631235C8934 (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* G_B2_0 = NULL;
	AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* G_B1_0 = NULL;
	{
		// AddScore?.Invoke(value);
		AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* L_0 = ((EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var))->___AddScore_4;
		AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		int32_t L_2 = ___value0;
		AddScoreDelegate_Invoke_mCD2C0A61267CBD30EC7887F8E0FFF040D798E6C2_inline(G_B2_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void EventManager::add_RemoveLife(EventManager/RemoveLifeDelegat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_add_RemoveLife_m4EF35C2A999992EF63F3846D3BD638321C923BBB (RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* V_0 = NULL;
	RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* V_1 = NULL;
	RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* V_2 = NULL;
	{
		RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* L_0 = ((EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var))->___RemoveLife_5;
		V_0 = L_0;
	}

IL_0006:
	{
		RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* L_1 = V_0;
		V_1 = L_1;
		RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* L_2 = V_1;
		RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C*)CastclassSealed((RuntimeObject*)L_4, RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C_il2cpp_TypeInfo_var));
		RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* L_5 = V_2;
		RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* L_6 = V_1;
		RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* L_7;
		L_7 = InterlockedCompareExchangeImpl<RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C*>((&((EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var))->___RemoveLife_5), L_5, L_6);
		V_0 = L_7;
		RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* L_8 = V_0;
		RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* L_9 = V_1;
		if ((!(((RuntimeObject*)(RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C*)L_8) == ((RuntimeObject*)(RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void EventManager::remove_RemoveLife(EventManager/RemoveLifeDelegat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_remove_RemoveLife_m5D6271699E5C4E6D5E7FA29C8F217CC059252D3A (RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* V_0 = NULL;
	RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* V_1 = NULL;
	RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* V_2 = NULL;
	{
		RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* L_0 = ((EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var))->___RemoveLife_5;
		V_0 = L_0;
	}

IL_0006:
	{
		RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* L_1 = V_0;
		V_1 = L_1;
		RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* L_2 = V_1;
		RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C*)CastclassSealed((RuntimeObject*)L_4, RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C_il2cpp_TypeInfo_var));
		RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* L_5 = V_2;
		RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* L_6 = V_1;
		RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* L_7;
		L_7 = InterlockedCompareExchangeImpl<RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C*>((&((EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var))->___RemoveLife_5), L_5, L_6);
		V_0 = L_7;
		RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* L_8 = V_0;
		RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* L_9 = V_1;
		if ((!(((RuntimeObject*)(RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C*)L_8) == ((RuntimeObject*)(RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void EventManager::TriggerRemoveLife()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_TriggerRemoveLife_mE73C97EA3CD52CD42E1E77EB6423C1219867A1DB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* G_B2_0 = NULL;
	RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* G_B1_0 = NULL;
	{
		// RemoveLife?.Invoke();
		RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* L_0 = ((EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A_il2cpp_TypeInfo_var))->___RemoveLife_5;
		RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		RemoveLifeDelegat_Invoke_mC9D8ADB314C07F5C1264B36C9B6F40C382ECC6B7_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void EventManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager__ctor_mB2304AB8CE6B4D03CF0C2CE4000EE529C1133D99 (EventManager_t2FAA3AA5EE7E33EE027BB7CA68ABCF128E3C579A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void AddScoreDelegate_Invoke_mCD2C0A61267CBD30EC7887F8E0FFF040D798E6C2_Multicast(AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* __this, int32_t ___value0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* currentDelegate = reinterpret_cast<AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___value0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void AddScoreDelegate_Invoke_mCD2C0A61267CBD30EC7887F8E0FFF040D798E6C2_OpenInst(AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___value0, method);
}
void AddScoreDelegate_Invoke_mCD2C0A61267CBD30EC7887F8E0FFF040D798E6C2_OpenStatic(AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___value0, method);
}
void AddScoreDelegate_Invoke_mCD2C0A61267CBD30EC7887F8E0FFF040D798E6C2_OpenStaticInvoker(AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* __this, int32_t ___value0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___value0);
}
void AddScoreDelegate_Invoke_mCD2C0A61267CBD30EC7887F8E0FFF040D798E6C2_ClosedStaticInvoker(AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* __this, int32_t ___value0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___value0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198 (AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___value0);

}
// System.Void EventManager/AddScoreDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddScoreDelegate__ctor_m35C940335AC8B38144E7370A08FD60E6911BCCBF (AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AddScoreDelegate_Invoke_mCD2C0A61267CBD30EC7887F8E0FFF040D798E6C2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&AddScoreDelegate_Invoke_mCD2C0A61267CBD30EC7887F8E0FFF040D798E6C2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AddScoreDelegate_Invoke_mCD2C0A61267CBD30EC7887F8E0FFF040D798E6C2_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&AddScoreDelegate_Invoke_mCD2C0A61267CBD30EC7887F8E0FFF040D798E6C2_Multicast;
}
// System.Void EventManager/AddScoreDelegate::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddScoreDelegate_Invoke_mCD2C0A61267CBD30EC7887F8E0FFF040D798E6C2 (AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___value0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult EventManager/AddScoreDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AddScoreDelegate_BeginInvoke_m0BC9234529483966878473B18A8A6E2AE0388AC5 (AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* __this, int32_t ___value0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___value0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void EventManager/AddScoreDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddScoreDelegate_EndInvoke_m13A4B046B2A63423D51DDA6DD2E3834AF6539038 (AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void RemoveLifeDelegat_Invoke_mC9D8ADB314C07F5C1264B36C9B6F40C382ECC6B7_Multicast(RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* currentDelegate = reinterpret_cast<RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void RemoveLifeDelegat_Invoke_mC9D8ADB314C07F5C1264B36C9B6F40C382ECC6B7_OpenInst(RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void RemoveLifeDelegat_Invoke_mC9D8ADB314C07F5C1264B36C9B6F40C382ECC6B7_OpenStatic(RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void RemoveLifeDelegat_Invoke_mC9D8ADB314C07F5C1264B36C9B6F40C382ECC6B7_OpenStaticInvoker(RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void RemoveLifeDelegat_Invoke_mC9D8ADB314C07F5C1264B36C9B6F40C382ECC6B7_ClosedStaticInvoker(RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C (RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void EventManager/RemoveLifeDelegat::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveLifeDelegat__ctor_m7802CE04740D185A2FE83263BEB2DE45C1C3661C (RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RemoveLifeDelegat_Invoke_mC9D8ADB314C07F5C1264B36C9B6F40C382ECC6B7_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&RemoveLifeDelegat_Invoke_mC9D8ADB314C07F5C1264B36C9B6F40C382ECC6B7_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RemoveLifeDelegat_Invoke_mC9D8ADB314C07F5C1264B36C9B6F40C382ECC6B7_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&RemoveLifeDelegat_Invoke_mC9D8ADB314C07F5C1264B36C9B6F40C382ECC6B7_Multicast;
}
// System.Void EventManager/RemoveLifeDelegat::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveLifeDelegat_Invoke_mC9D8ADB314C07F5C1264B36C9B6F40C382ECC6B7 (RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult EventManager/RemoveLifeDelegat::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RemoveLifeDelegat_BeginInvoke_mD4EC422708F16A0F5524BDE3C31B480670E75295 (RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void EventManager/RemoveLifeDelegat::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveLifeDelegat_EndInvoke_mEF44D4EC459BE0848BD91097AAF69FD5E297A388 (RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LivesController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivesController_Start_m6F9F0F8A4833798EA2264048D93767A735D69C4A (LivesController_tA050501B7A3222E81DD81BC4C6B1FA851AEB4DA8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD065DB8A8067D7DDCCE87344EBF0170809AA9DB4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Lives:" + lives.ToString());
		float* L_0 = (&__this->___lives_5);
		String_t* L_1;
		L_1 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralD065DB8A8067D7DDCCE87344EBF0170809AA9DB4, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// }
		return;
	}
}
// System.Void LivesController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivesController_OnEnable_m27D32F15BD77A9DD65DB5B7418A22B0AB282D27B (LivesController_tA050501B7A3222E81DD81BC4C6B1FA851AEB4DA8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LivesController_HandleRemoveLife_m56B3B4867D5E1A7D382DF21622106047FDB4C441_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventManager.RemoveLife += HandleRemoveLife;
		RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* L_0 = (RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C*)il2cpp_codegen_object_new(RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C_il2cpp_TypeInfo_var);
		RemoveLifeDelegat__ctor_m7802CE04740D185A2FE83263BEB2DE45C1C3661C(L_0, __this, (intptr_t)((void*)LivesController_HandleRemoveLife_m56B3B4867D5E1A7D382DF21622106047FDB4C441_RuntimeMethod_var), NULL);
		EventManager_add_RemoveLife_m4EF35C2A999992EF63F3846D3BD638321C923BBB(L_0, NULL);
		// }
		return;
	}
}
// System.Void LivesController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivesController_OnDisable_mEB2A98E0AC46A055D8168C8527EF75F0FC3AEC65 (LivesController_tA050501B7A3222E81DD81BC4C6B1FA851AEB4DA8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LivesController_HandleRemoveLife_m56B3B4867D5E1A7D382DF21622106047FDB4C441_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventManager.RemoveLife -= HandleRemoveLife;
		RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* L_0 = (RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C*)il2cpp_codegen_object_new(RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C_il2cpp_TypeInfo_var);
		RemoveLifeDelegat__ctor_m7802CE04740D185A2FE83263BEB2DE45C1C3661C(L_0, __this, (intptr_t)((void*)LivesController_HandleRemoveLife_m56B3B4867D5E1A7D382DF21622106047FDB4C441_RuntimeMethod_var), NULL);
		EventManager_remove_RemoveLife_m5D6271699E5C4E6D5E7FA29C8F217CC059252D3A(L_0, NULL);
		// }
		return;
	}
}
// System.Void LivesController::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivesController_OnGUI_m0A3CC9F8B484710DA62C681266387F0FA2743A28 (LivesController_tA050501B7A3222E81DD81BC4C6B1FA851AEB4DA8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 screenPosition = Camera.main.WorldToScreenPoint(transform.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_0, L_2, NULL);
		V_0 = L_3;
		// Rect hungerBarRect = new Rect(screenPosition.x - 50f, Screen.height - screenPosition.y + 20f, 100f, 10f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		float L_5 = L_4.___x_2;
		int32_t L_6;
		L_6 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8 = L_7.___y_3;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_1), ((float)il2cpp_codegen_subtract(L_5, (50.0f))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)L_6), L_8)), (20.0f))), (100.0f), (10.0f), NULL);
		// float fillAmount = lives / 3;
		float L_9 = __this->___lives_5;
		V_2 = ((float)(L_9/(3.0f)));
		// GUI.Box(hungerBarRect, string.Empty);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10 = V_1;
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_Box_m1E4D5FE4B7911725059CE0A2674B88CFAD279365(L_10, L_11, NULL);
		// Rect hungerFillRect = new Rect(hungerBarRect.x, hungerBarRect.y, hungerBarRect.width * fillAmount, hungerBarRect.height);
		float L_12;
		L_12 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_1), NULL);
		float L_13;
		L_13 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_1), NULL);
		float L_14;
		L_14 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_1), NULL);
		float L_15 = V_2;
		float L_16;
		L_16 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_1), NULL);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_3), L_12, L_13, ((float)il2cpp_codegen_multiply(L_14, L_15)), L_16, NULL);
		// DrawColoredTexture(hungerFillRect, Color.red);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_17 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		LivesController_DrawColoredTexture_m3BEA10154FBF77D01B5F267AB31B8300C9931F19(__this, L_17, L_18, NULL);
		// }
		return;
	}
}
// System.Void LivesController::DrawColoredTexture(UnityEngine.Rect,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivesController_DrawColoredTexture_m3BEA10154FBF77D01B5F267AB31B8300C9931F19 (LivesController_tA050501B7A3222E81DD81BC4C6B1FA851AEB4DA8* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	{
		// Texture2D texture = new Texture2D(1, 1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_0, 1, 1, NULL);
		V_0 = L_0;
		// texture.SetPixel(0, 0, color);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___color1;
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_1, 0, 0, L_2, NULL);
		// texture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = V_0;
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_3, NULL);
		// GUI.DrawTexture(rect, texture);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4 = ___rect0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m4DC8E4DE66E5B806D6C71E9BFC8B122DB2A51F09(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void LivesController::HandleRemoveLife()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivesController_HandleRemoveLife_m56B3B4867D5E1A7D382DF21622106047FDB4C441 (LivesController_tA050501B7A3222E81DD81BC4C6B1FA851AEB4DA8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD065DB8A8067D7DDCCE87344EBF0170809AA9DB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF984C9674EDCA2C39EFAD66081B054F073C3815B);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// lives -= 1;
		float L_0 = __this->___lives_5;
		__this->___lives_5 = ((float)il2cpp_codegen_subtract(L_0, (1.0f)));
		// Debug.Log("Lives:" + lives.ToString());
		float* L_1 = (&__this->___lives_5);
		String_t* L_2;
		L_2 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralD065DB8A8067D7DDCCE87344EBF0170809AA9DB4, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		// if(lives <= 0) {
		float L_4 = __this->___lives_5;
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_0055;
		}
	}
	{
		// Debug.Log("Game Over");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralF984C9674EDCA2C39EFAD66081B054F073C3815B, NULL);
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_5;
		L_5 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_5;
		int32_t L_6;
		L_6 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(L_6, NULL);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void LivesController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivesController__ctor_mEB84403D5FD18DB0345FC0718C064D73E7697987 (LivesController_tA050501B7A3222E81DD81BC4C6B1FA851AEB4DA8* __this, const RuntimeMethod* method) 
{
	{
		// private float lives = 3;
		__this->___lives_5 = (3.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MoveForward::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveForward_Update_mD81312348318C4D966DF1BF5E9EE399A13A2DD12 (MoveForward_tA37E835555223DD134823AE5DD65437A2847E708* __this, const RuntimeMethod* method) 
{
	{
		// transform.Translate(speed * Time.deltaTime * Vector3.forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_1 = __this->___speed_4;
		float L_2;
		L_2 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(((float)il2cpp_codegen_multiply(L_1, L_2)), L_3, NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_0, L_4, NULL);
		// }
		return;
	}
}
// System.Void MoveForward::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveForward__ctor_m81C13FBBF67BA14AF75B1FB3E1CFD1D11775771C (MoveForward_tA37E835555223DD134823AE5DD65437A2847E708* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 20f;
		__this->___speed_4 = (20.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m1D83076E8B136A71051F2F02545EE04947D3A8CF (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_11), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_m1F4051EB5BCBCCE5EEE2E3E49B7E278C3B14EC33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20F67E6056DEDDD44253965E2BD6304E6066EB92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE049D7BF5B964940A5CE6A1544D6C65FB286625);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// if (Input.GetButton("ThrowFood"))
		bool L_0;
		L_0 = Input_GetButton_mD0363B5F1771A7C7A97ABB0D07863217D229A9C0(_stringLiteralDE049D7BF5B964940A5CE6A1544D6C65FB286625, NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// SpawnRandomFood();
		PlayerController_SpawnRandomFood_m698395E218C8EC90C8FF85A53CED8658C37375BD(__this, NULL);
	}

IL_0012:
	{
		// horizontalInput = Input.GetAxis("Horizontal");
		float L_1;
		L_1 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		__this->___horizontalInput_12 = L_1;
		// verticalInput = Input.GetAxis("Vertical");
		float L_2;
		L_2 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		__this->___verticalInput_13 = L_2;
		// float Speed_f = (Mathf.Abs(horizontalInput) + Mathf.Abs(verticalInput)) / 2f;
		float L_3 = __this->___horizontalInput_12;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = __this->___verticalInput_13;
		float L_6;
		L_6 = fabsf(L_5);
		V_0 = ((float)(((float)il2cpp_codegen_add(L_4, L_6))/(2.0f)));
		// animator.SetFloat("Speed_f", Speed_f);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___animator_11;
		float L_8 = V_0;
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_7, _stringLiteral20F67E6056DEDDD44253965E2BD6304E6066EB92, L_8, NULL);
		// float xTranslation = horizontalInput * speed * Time.deltaTime;
		float L_9 = __this->___horizontalInput_12;
		float L_10 = __this->___speed_6;
		float L_11;
		L_11 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_9, L_10)), L_11));
		// float clampedX = Mathf.Clamp(transform.position.x + xTranslation, minX, maxX);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14 = L_13.___x_2;
		float L_15 = V_1;
		float L_16 = __this->___minX_7;
		float L_17 = __this->___maxX_8;
		float L_18;
		L_18 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)il2cpp_codegen_add(L_14, L_15)), L_16, L_17, NULL);
		V_2 = L_18;
		// float zTranslation = verticalInput * speed * Time.deltaTime;
		float L_19 = __this->___verticalInput_13;
		float L_20 = __this->___speed_6;
		float L_21;
		L_21 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_3 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_19, L_20)), L_21));
		// float clampedZ = Mathf.Clamp(transform.position.z + zTranslation, minZ, maxZ);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		float L_24 = L_23.___z_4;
		float L_25 = V_3;
		float L_26 = __this->___minZ_9;
		float L_27 = __this->___maxZ_10;
		float L_28;
		L_28 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)il2cpp_codegen_add(L_24, L_25)), L_26, L_27, NULL);
		V_4 = L_28;
		// transform.position = new Vector3(clampedX, transform.position.y, clampedZ);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_30 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_31, NULL);
		float L_33 = L_32.___y_3;
		float L_34 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_35), L_30, L_33, L_34, /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_29, L_35, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::SpawnRandomFood()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_SpawnRandomFood_m698395E218C8EC90C8FF85A53CED8658C37375BD (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// if (LastThrown.AddSeconds(ThrowCooldown) < System.DateTime.Now)
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_0 = (&__this->___LastThrown_14);
		float L_1 = __this->___ThrowCooldown_5;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81(L_0, ((double)L_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		bool L_4;
		L_4 = DateTime_op_LessThan_mC39C4E1CDE23ED2ABA8D1DC9B4283B1BC1ACDB36(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}
	{
		// int RandomFoodIndex = Random.Range(0, FoodPrefabs.Length);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___FoodPrefabs_4;
		int32_t L_6;
		L_6 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		V_0 = L_6;
		// GameObject RandomFood = FoodPrefabs[RandomFoodIndex];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = __this->___FoodPrefabs_4;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = L_10;
		// Instantiate(RandomFood, transform.position + offset, RandomFood.transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___offset_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_13, L_14, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_11, L_15, L_18, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// LastThrown = System.DateTime.Now;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_20;
		L_20 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		__this->___LastThrown_14 = L_20;
	}

IL_0069:
	{
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mDDAB7C7D82E1A5B3E6C197B1AB9D653DFE554F33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// private float ThrowCooldown = 0.2f;
		__this->___ThrowCooldown_5 = (0.200000003f);
		// private float speed = 15f;
		__this->___speed_6 = (15.0f);
		// private float minX = -20f;
		__this->___minX_7 = (-20.0f);
		// private float maxX = 20f;
		__this->___maxX_8 = (20.0f);
		// private float maxZ = 25f;
		__this->___maxZ_10 = (25.0f);
		// private Vector3 offset = new Vector3(0, 0, 1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___offset_15 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ScoreController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreController_OnEnable_m88C9495B2D90E8BF55C35C6C841FE300689CEA48 (ScoreController_tD0A8C4C0BB3FE285665B33782F252080F6D74805* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreController_HandleAddScore_m53DBCF02CFC9279BC88B0E45D0560CC5C4A8A7EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventManager.AddScore += HandleAddScore;
		AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* L_0 = (AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198*)il2cpp_codegen_object_new(AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198_il2cpp_TypeInfo_var);
		AddScoreDelegate__ctor_m35C940335AC8B38144E7370A08FD60E6911BCCBF(L_0, __this, (intptr_t)((void*)ScoreController_HandleAddScore_m53DBCF02CFC9279BC88B0E45D0560CC5C4A8A7EB_RuntimeMethod_var), NULL);
		EventManager_add_AddScore_m37A577B46EC73583B7E9E104A3AF43F82FF6D574(L_0, NULL);
		// }
		return;
	}
}
// System.Void ScoreController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreController_OnDisable_m49578F78FBFE6F62309AD396D779228DB354E374 (ScoreController_tD0A8C4C0BB3FE285665B33782F252080F6D74805* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreController_HandleAddScore_m53DBCF02CFC9279BC88B0E45D0560CC5C4A8A7EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventManager.AddScore -= HandleAddScore;
		AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* L_0 = (AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198*)il2cpp_codegen_object_new(AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198_il2cpp_TypeInfo_var);
		AddScoreDelegate__ctor_m35C940335AC8B38144E7370A08FD60E6911BCCBF(L_0, __this, (intptr_t)((void*)ScoreController_HandleAddScore_m53DBCF02CFC9279BC88B0E45D0560CC5C4A8A7EB_RuntimeMethod_var), NULL);
		EventManager_remove_AddScore_mBF2EBF1D004C4E54706AEF73D40BA1E88584EE93(L_0, NULL);
		// }
		return;
	}
}
// System.Void ScoreController::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreController_OnGUI_mB1DBD53E06F1FFB0C34CCBE711B15B2F30CA3813 (ScoreController_tD0A8C4C0BB3FE285665B33782F252080F6D74805* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 scorePosition = new Vector2(10f, 10f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), (10.0f), (10.0f), NULL);
		// GUI.Label(new Rect(scorePosition.x, scorePosition.y, 100f, 30f), "Score: " + Score);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = V_0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		float L_3 = L_2.___y_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		memset((&L_4), 0, sizeof(L_4));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_4), L_1, L_3, (100.0f), (30.0f), /*hidden argument*/NULL);
		float* L_5 = (&__this->___Score_4);
		String_t* L_6;
		L_6 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_Label_mF161ED74A26AEC05C8A56F0B95F78482CE7ED5C7(L_4, L_7, NULL);
		// }
		return;
	}
}
// System.Void ScoreController::HandleAddScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreController_HandleAddScore_m53DBCF02CFC9279BC88B0E45D0560CC5C4A8A7EB (ScoreController_tD0A8C4C0BB3FE285665B33782F252080F6D74805* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27B1240786558BB01BAF8EA86CF65C4996DEF092);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Score += value;
		float L_0 = __this->___Score_4;
		int32_t L_1 = ___value0;
		__this->___Score_4 = ((float)il2cpp_codegen_add(L_0, ((float)L_1)));
		// Debug.Log("Score:" + Score.ToString());
		float* L_2 = (&__this->___Score_4);
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral27B1240786558BB01BAF8EA86CF65C4996DEF092, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_4, NULL);
		// }
		return;
	}
}
// System.Void ScoreController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreController__ctor_m161DBF9A2ED8098CD117A438518B3C716F0BC5F7 (ScoreController_tD0A8C4C0BB3FE285665B33782F252080F6D74805* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AddScoreDelegate_Invoke_mCD2C0A61267CBD30EC7887F8E0FFF040D798E6C2_inline (AddScoreDelegate_t81886119BE72686FC191D1AC8253A2557E65D198* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___value0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RemoveLifeDelegat_Invoke_mC9D8ADB314C07F5C1264B36C9B6F40C382ECC6B7_inline (RemoveLifeDelegat_tD3AD3A47D97AFD95A3278AC971E7E58A62E78A3C* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
