#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Func`2<Player.IEntityInputSource,System.Boolean>
struct Func_2_tEC94E0CBEB1C3AD43F0B83396A7E5611DD4E284E;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Collections.Generic.IEnumerable`1<Player.IEntityInputSource>
struct IEnumerable_1_t189975736A2D03FA224D3C925D33404CE5DA8FAF;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<Player.IEntityInputSource>
struct List_1_tB6557FC48639FBF6663985332C61BEA4462662AF;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Player.IEntityInputSource[]
struct IEntityInputSourceU5BU5D_tDAA41F8C779B97D9527319358E683A971FA4D12A;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// Player.PlayerAnimation.AnimatorController
struct AnimatorController_t8F0B99B15C213FCE1D8E20A9E0DAC8FC9DAC341B;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// ExternalDevicesInputReader
struct ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42;
// Core.GameLevelInitializer
struct GameLevelInitializer_tADAC36DAA6B74BEC97ACC2E6E686767809C8794A;
// Player.GameUIInputView
struct GameUIInputView_t1CF24B7F5E511DCE60D7618DD9B940323C3EBEBE;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// Player.IEntityInputSource
struct IEntityInputSource_tB0F39AFA80DE9225B2DE16A86C039D4275774505;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Joystick
struct Joystick_t6225AC7FD164AD3414FB157CD5769DB31F9AE955;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Player.PlayerBrain
struct PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093;
// Player.PlayerEntity
struct PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// Player.PlayerAnimation.UnityAnimatorController
struct UnityAnimatorController_t4F4A1D6DD57D0578534FB4DFE610462C77ACA885;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// Player.PlayerBrain/<>c
struct U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41;

IL2CPP_EXTERN_C RuntimeClass* ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tEC94E0CBEB1C3AD43F0B83396A7E5611DD4E284E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEntityInputSource_tB0F39AFA80DE9225B2DE16A86C039D4275774505_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB6557FC48639FBF6663985332C61BEA4462662AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral5B155B21E40C2DC3913150B158FC8C685B50C8D1;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisIEntityInputSource_tB0F39AFA80DE9225B2DE16A86C039D4275774505_m7F9DB31BD3C9514B65E53714DF2B0EC9098BDAA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m247935A00C1581B5CB450977DCBC0FE2453A2D32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCD3768D4325C7FF3A7190819AB33FE5B69860BA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m43B4E9DF0CFD71BE527AD32890C0FF32EE678571_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameUIInputView_U3CAwakeU3Eb__13_0_m3BD740AF4F28F7CEE08E8BE059C5059F3D1693A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameUIInputView_U3CAwakeU3Eb__13_1_mB0834B6D643E55BCA31C6AE5B2B3DCFC98CB790C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m71088F5A19F0C01868AAEBD1E279E193D9CD358C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m64D0D45D72A0BCF25AA99951CA6939ECA2BE398A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5750CD7F9B353C3A48B6BBACB2F20F5573D6478A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CIsFlipU3Eb__6_0_m19D005358117E12C1AB4282996581B2C2EC022EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CIsJumpU3Eb__5_0_m42CFF1D61C0F9F478EF8386A25D87C034CB3A7C7_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

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

// System.Collections.Generic.List`1<Player.IEntityInputSource>
struct List_1_tB6557FC48639FBF6663985332C61BEA4462662AF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IEntityInputSourceU5BU5D_tDAA41F8C779B97D9527319358E683A971FA4D12A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// ExternalDevicesInputReader
struct ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42  : public RuntimeObject
{
	// System.Boolean ExternalDevicesInputReader::<Jump>k__BackingField
	bool ___U3CJumpU3Ek__BackingField_0;
	// System.Boolean ExternalDevicesInputReader::<Flip>k__BackingField
	bool ___U3CFlipU3Ek__BackingField_1;
};

// Player.PlayerBrain
struct PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093  : public RuntimeObject
{
	// Player.PlayerEntity Player.PlayerBrain::_playerEntity
	PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* ____playerEntity_0;
	// System.Collections.Generic.List`1<Player.IEntityInputSource> Player.PlayerBrain::_inputSources
	List_1_tB6557FC48639FBF6663985332C61BEA4462662AF* ____inputSources_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// Player.PlayerBrain/<>c
struct U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41  : public RuntimeObject
{
};

// System.Collections.Generic.List`1/Enumerator<Player.IEntityInputSource>
struct Enumerator_t614FCEF2F56CB2626B956B40A11A0B4ECC8F4934 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB6557FC48639FBF6663985332C61BEA4462662AF* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
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

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.Func`2<Player.IEntityInputSource,System.Boolean>
struct Func_2_tEC94E0CBEB1C3AD43F0B83396A7E5611DD4E284E  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Player.PlayerAnimation.AnimatorController
struct AnimatorController_t8F0B99B15C213FCE1D8E20A9E0DAC8FC9DAC341B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Player.PlayerAnimation.AnimationType Player.PlayerAnimation.AnimatorController::_currentAnimationType
	int32_t ____currentAnimationType_4;
};

// Core.GameLevelInitializer
struct GameLevelInitializer_tADAC36DAA6B74BEC97ACC2E6E686767809C8794A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Player.PlayerEntity Core.GameLevelInitializer::_playerEntity
	PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* ____playerEntity_4;
	// Player.GameUIInputView Core.GameLevelInitializer::_gameUIInputView
	GameUIInputView_t1CF24B7F5E511DCE60D7618DD9B940323C3EBEBE* ____gameUIInputView_5;
	// ExternalDevicesInputReader Core.GameLevelInitializer::_externalDevicesInput
	ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* ____externalDevicesInput_6;
	// Player.PlayerBrain Core.GameLevelInitializer::_playerBrain
	PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* ____playerBrain_7;
};

// Player.GameUIInputView
struct GameUIInputView_t1CF24B7F5E511DCE60D7618DD9B940323C3EBEBE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Joystick Player.GameUIInputView::_joystick
	Joystick_t6225AC7FD164AD3414FB157CD5769DB31F9AE955* ____joystick_4;
	// UnityEngine.UI.Button Player.GameUIInputView::_jumpButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____jumpButton_5;
	// UnityEngine.UI.Button Player.GameUIInputView::_flipButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____flipButton_6;
	// System.Boolean Player.GameUIInputView::<Jump>k__BackingField
	bool ___U3CJumpU3Ek__BackingField_7;
	// System.Boolean Player.GameUIInputView::<Flip>k__BackingField
	bool ___U3CFlipU3Ek__BackingField_8;
};

// Joystick
struct Joystick_t6225AC7FD164AD3414FB157CD5769DB31F9AE955  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Joystick::handleRange
	float ___handleRange_4;
	// System.Single Joystick::deadZone
	float ___deadZone_5;
	// AxisOptions Joystick::axisOptions
	int32_t ___axisOptions_6;
	// System.Boolean Joystick::snapX
	bool ___snapX_7;
	// System.Boolean Joystick::snapY
	bool ___snapY_8;
	// UnityEngine.RectTransform Joystick::background
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___background_9;
	// UnityEngine.RectTransform Joystick::handle
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___handle_10;
	// UnityEngine.RectTransform Joystick::baseRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___baseRect_11;
	// UnityEngine.Canvas Joystick::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_12;
	// UnityEngine.Camera Joystick::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_13;
	// UnityEngine.Vector2 Joystick::input
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___input_14;
};

// Player.PlayerEntity
struct PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Player.PlayerAnimation.AnimatorController Player.PlayerEntity::_animator
	AnimatorController_t8F0B99B15C213FCE1D8E20A9E0DAC8FC9DAC341B* ____animator_4;
	// System.Single Player.PlayerEntity::_horizontalSpeed
	float ____horizontalSpeed_5;
	// System.Boolean Player.PlayerEntity::_faceRight
	bool ____faceRight_6;
	// System.Single Player.PlayerEntity::_jumpForce
	float ____jumpForce_7;
	// UnityEngine.Rigidbody2D Player.PlayerEntity::_rigidbody2D
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ____rigidbody2D_8;
	// System.Boolean Player.PlayerEntity::_isJumping
	bool ____isJumping_9;
	// System.Boolean Player.PlayerEntity::_hasJump
	bool ____hasJump_10;
	// System.Boolean Player.PlayerEntity::_isFalling
	bool ____isFalling_11;
	// UnityEngine.Vector2 Player.PlayerEntity::_movement
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____movement_12;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// Player.PlayerAnimation.UnityAnimatorController
struct UnityAnimatorController_t4F4A1D6DD57D0578534FB4DFE610462C77ACA885  : public AnimatorController_t8F0B99B15C213FCE1D8E20A9E0DAC8FC9DAC341B
{
	// UnityEngine.Animator Player.PlayerAnimation.UnityAnimatorController::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<Player.IEntityInputSource>
struct List_1_tB6557FC48639FBF6663985332C61BEA4462662AF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IEntityInputSourceU5BU5D_tDAA41F8C779B97D9527319358E683A971FA4D12A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Player.IEntityInputSource>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// ExternalDevicesInputReader

// ExternalDevicesInputReader

// Player.PlayerBrain

// Player.PlayerBrain

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.Events.UnityEventBase

// UnityEngine.Events.UnityEventBase

// Player.PlayerBrain/<>c
struct U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_StaticFields
{
	// Player.PlayerBrain/<>c Player.PlayerBrain/<>c::<>9
	U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41* ___U3CU3E9_0;
	// System.Func`2<Player.IEntityInputSource,System.Boolean> Player.PlayerBrain/<>c::<>9__5_0
	Func_2_tEC94E0CBEB1C3AD43F0B83396A7E5611DD4E284E* ___U3CU3E9__5_0_1;
	// System.Func`2<Player.IEntityInputSource,System.Boolean> Player.PlayerBrain/<>c::<>9__6_0
	Func_2_tEC94E0CBEB1C3AD43F0B83396A7E5611DD4E284E* ___U3CU3E9__6_0_2;
};

// Player.PlayerBrain/<>c

// System.Collections.Generic.List`1/Enumerator<Player.IEntityInputSource>

// System.Collections.Generic.List`1/Enumerator<Player.IEntityInputSource>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// System.Void

// System.Void

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.Component

// UnityEngine.Component

// System.Func`2<Player.IEntityInputSource,System.Boolean>

// System.Func`2<Player.IEntityInputSource,System.Boolean>

// UnityEngine.Rigidbody2D

// UnityEngine.Rigidbody2D

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Player.PlayerAnimation.AnimatorController

// Player.PlayerAnimation.AnimatorController

// Core.GameLevelInitializer

// Core.GameLevelInitializer

// Player.GameUIInputView

// Player.GameUIInputView

// Joystick

// Joystick

// Player.PlayerEntity

// Player.PlayerEntity

// Player.PlayerAnimation.UnityAnimatorController

// Player.PlayerAnimation.UnityAnimatorController

// UnityEngine.UI.Button

// UnityEngine.UI.Button
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_mF6C6AC8DF8971883615734832D09C9210B956F0F_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___0_buttonName, const RuntimeMethod* method) ;
// System.Void ExternalDevicesInputReader::set_Jump(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExternalDevicesInputReader_set_Jump_m1D6CF10F4DBA5C21E181DF8AAB141670F8705207_inline (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void ExternalDevicesInputReader::set_Flip(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExternalDevicesInputReader_set_Flip_m0BE901E0A636AF8CEEF28EB3327AE22EEA8FBC4B_inline (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_m23B2FBFE52DFF5E60F0DDAF88FC954EE3AF0A92B (Joystick_t6225AC7FD164AD3414FB157CD5769DB31F9AE955* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// System.Void Player.GameUIInputView::set_Jump(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameUIInputView_set_Jump_mC3EABA24A4E03FBA88B909813609F11205D7C4B8_inline (GameUIInputView_t1CF24B7F5E511DCE60D7618DD9B940323C3EBEBE* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Player.GameUIInputView::set_Flip(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameUIInputView_set_Flip_m6734E222F4076F336684F269D7F6CCE5B5FB8B8D_inline (GameUIInputView_t1CF24B7F5E511DCE60D7618DD9B940323C3EBEBE* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Single Player.PlayerBrain::GetHorizontalDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerBrain_GetHorizontalDirection_m4AEA3EA91CF370C2B88425FEC6E36AB34478734E (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* __this, const RuntimeMethod* method) ;
// System.Void Player.PlayerEntity::MoveHorizontally(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_MoveHorizontally_m66C3E3D8D99018E8499D2BEAAFD645CBAB15BFE6 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, float ___0_direction, const RuntimeMethod* method) ;
// System.Boolean Player.PlayerBrain::IsJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerBrain_IsJump_m7E1AAF5A49A7321868080795428319EB97918761 (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* __this, const RuntimeMethod* method) ;
// System.Void Player.PlayerEntity::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_Jump_m236605D656E45AB5A00031DE07E77B85774519C1 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Player.IEntityInputSource>::GetEnumerator()
inline Enumerator_t614FCEF2F56CB2626B956B40A11A0B4ECC8F4934 List_1_GetEnumerator_m64D0D45D72A0BCF25AA99951CA6939ECA2BE398A (List_1_tB6557FC48639FBF6663985332C61BEA4462662AF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t614FCEF2F56CB2626B956B40A11A0B4ECC8F4934 (*) (List_1_tB6557FC48639FBF6663985332C61BEA4462662AF*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Player.IEntityInputSource>::Dispose()
inline void Enumerator_Dispose_m247935A00C1581B5CB450977DCBC0FE2453A2D32 (Enumerator_t614FCEF2F56CB2626B956B40A11A0B4ECC8F4934* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t614FCEF2F56CB2626B956B40A11A0B4ECC8F4934*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Player.IEntityInputSource>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m43B4E9DF0CFD71BE527AD32890C0FF32EE678571_inline (Enumerator_t614FCEF2F56CB2626B956B40A11A0B4ECC8F4934* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t614FCEF2F56CB2626B956B40A11A0B4ECC8F4934*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Player.IEntityInputSource>::MoveNext()
inline bool Enumerator_MoveNext_mCD3768D4325C7FF3A7190819AB33FE5B69860BA9 (Enumerator_t614FCEF2F56CB2626B956B40A11A0B4ECC8F4934* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t614FCEF2F56CB2626B956B40A11A0B4ECC8F4934*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Func`2<Player.IEntityInputSource,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mE390B571F55EA7A37FC7FCCED8F20BC17ED015C6 (Func_2_tEC94E0CBEB1C3AD43F0B83396A7E5611DD4E284E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tEC94E0CBEB1C3AD43F0B83396A7E5611DD4E284E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Boolean System.Linq.Enumerable::Any<Player.IEntityInputSource>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline bool Enumerable_Any_TisIEntityInputSource_tB0F39AFA80DE9225B2DE16A86C039D4275774505_m7F9DB31BD3C9514B65E53714DF2B0EC9098BDAA5 (RuntimeObject* ___0_source, Func_2_tEC94E0CBEB1C3AD43F0B83396A7E5611DD4E284E* ___1_predicate, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_tEC94E0CBEB1C3AD43F0B83396A7E5611DD4E284E*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_mF6C6AC8DF8971883615734832D09C9210B956F0F_gshared)(___0_source, ___1_predicate, method);
}
// System.Void Player.PlayerBrain/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDB495E4EF44CB795B0B7FAC5AB4B8FC3577A43F4 (U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Player.PlayerEntity::ResetJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_ResetJump_m31C0D9C534E0072F2C05E4DFA861C8DE526C0B77 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) ;
// System.Void Player.PlayerEntity::ResetFall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_ResetFall_mF285CDEB2B3727A3EC3CFEF087AAB3B10831BBB0 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) ;
// System.Void Player.PlayerEntity::UpdateFall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_UpdateFall_m42E19200B92AA326E1B91B7DD34340AED0DA0791 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) ;
// System.Void Player.PlayerEntity::UpdateAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_UpdateAnimation_m546043BF03BE27A74615C1235CC008D39B77DEB2 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) ;
// System.Void Player.PlayerEntity::SetDirection(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_SetDirection_mCFE5F2CF5E6C3D312639C9691C1BB19167D2535B (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, float ___0_direction, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void Player.PlayerEntity::Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_Flip_m8777B003E934D7342916CEE4FD1F619E44EDF3B0 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___0_xAngle, float ___1_yAngle, float ___2_zAngle, const RuntimeMethod* method) ;
// System.Void Player.PlayerAnimation.AnimatorController::PlayAnimation(Player.PlayerAnimation.AnimationType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController_PlayAnimation_mD6263213D892378F286D6C5A1EBD0357F49FE9A2 (AnimatorController_t8F0B99B15C213FCE1D8E20A9E0DAC8FC9DAC341B* __this, int32_t ___0_animationType, bool ___1_active, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void Player.PlayerAnimation.AnimatorController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController__ctor_mE0542DD29E3ECE9707952529EB20AB511A825A37 (AnimatorController_t8F0B99B15C213FCE1D8E20A9E0DAC8FC9DAC341B* __this, const RuntimeMethod* method) ;
// System.Void ExternalDevicesInputReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalDevicesInputReader__ctor_m8B0F20B139F68E615DE6688190B597BE736B2013 (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Player.IEntityInputSource>::.ctor()
inline void List_1__ctor_m5750CD7F9B353C3A48B6BBACB2F20F5573D6478A (List_1_tB6557FC48639FBF6663985332C61BEA4462662AF* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB6557FC48639FBF6663985332C61BEA4462662AF*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Player.IEntityInputSource>::Add(T)
inline void List_1_Add_m71088F5A19F0C01868AAEBD1E279E193D9CD358C_inline (List_1_tB6557FC48639FBF6663985332C61BEA4462662AF* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB6557FC48639FBF6663985332C61BEA4462662AF*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void Player.PlayerBrain::.ctor(Player.PlayerEntity,System.Collections.Generic.List`1<Player.IEntityInputSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBrain__ctor_m6FBE525B7B3556883ABB65098F0DA9FDA3526AE5 (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* __this, PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* ___0_playerEntity, List_1_tB6557FC48639FBF6663985332C61BEA4462662AF* ___1_inputSources, const RuntimeMethod* method) ;
// System.Void ExternalDevicesInputReader::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalDevicesInputReader_OnUpdate_m99FD182BD7D8A94A889B8A29C981ED7556D63757 (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, const RuntimeMethod* method) ;
// System.Void Player.PlayerBrain::OnFixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBrain_OnFixedUpdate_m8D2DD5E895FC850437E9C85A92D1BC3E12D8DCBA (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* __this, const RuntimeMethod* method) ;
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
// System.Single ExternalDevicesInputReader::get_HorizontalDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ExternalDevicesInputReader_get_HorizontalDirection_mC67E077DA787B6937C25B0C751E69B3DF815A244 (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float HorizontalDirection => Input.GetAxisRaw("Horizontal");
		float L_0;
		L_0 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		return L_0;
	}
}
// System.Boolean ExternalDevicesInputReader::get_Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExternalDevicesInputReader_get_Jump_m00B2232EE7ACE4FE171963F46F0A3960DC09D25D (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, const RuntimeMethod* method) 
{
	{
		// public bool Jump { get; private set; }
		bool L_0 = __this->___U3CJumpU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void ExternalDevicesInputReader::set_Jump(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalDevicesInputReader_set_Jump_m1D6CF10F4DBA5C21E181DF8AAB141670F8705207 (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Jump { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CJumpU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean ExternalDevicesInputReader::get_Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExternalDevicesInputReader_get_Flip_m18A437565FA1B55A887B15BEE9FA1EBFB6D5990F (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, const RuntimeMethod* method) 
{
	{
		// public bool Flip { get; private set; }
		bool L_0 = __this->___U3CFlipU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void ExternalDevicesInputReader::set_Flip(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalDevicesInputReader_set_Flip_m0BE901E0A636AF8CEEF28EB3327AE22EEA8FBC4B (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Flip { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CFlipU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void ExternalDevicesInputReader::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalDevicesInputReader_OnUpdate_m99FD182BD7D8A94A889B8A29C981ED7556D63757 (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetButtonDown("Jump"))
		bool L_0;
		L_0 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Jump = true;
		ExternalDevicesInputReader_set_Jump_m1D6CF10F4DBA5C21E181DF8AAB141670F8705207_inline(__this, (bool)1, NULL);
	}

IL_0013:
	{
		// if (Input.GetButtonDown("Fire1"))
		bool L_1;
		L_1 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// Flip = true;
		ExternalDevicesInputReader_set_Flip_m0BE901E0A636AF8CEEF28EB3327AE22EEA8FBC4B_inline(__this, (bool)1, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void ExternalDevicesInputReader::ResetOneTimeAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalDevicesInputReader_ResetOneTimeAction_mE88A00BB1D2C200FCE657AE0E080DEF60ABE03C0 (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, const RuntimeMethod* method) 
{
	{
		// Jump = false;
		ExternalDevicesInputReader_set_Jump_m1D6CF10F4DBA5C21E181DF8AAB141670F8705207_inline(__this, (bool)0, NULL);
		// Flip = false;
		ExternalDevicesInputReader_set_Flip_m0BE901E0A636AF8CEEF28EB3327AE22EEA8FBC4B_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ExternalDevicesInputReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalDevicesInputReader__ctor_m8B0F20B139F68E615DE6688190B597BE736B2013 (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Single Player.GameUIInputView::get_HorizontalDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameUIInputView_get_HorizontalDirection_mEB5F903CDB8472AB294B4B38D5172AAB0DBF1904 (GameUIInputView_t1CF24B7F5E511DCE60D7618DD9B940323C3EBEBE* __this, const RuntimeMethod* method) 
{
	{
		// public float HorizontalDirection => _joystick.Horizontal;
		Joystick_t6225AC7FD164AD3414FB157CD5769DB31F9AE955* L_0 = __this->____joystick_4;
		NullCheck(L_0);
		float L_1;
		L_1 = Joystick_get_Horizontal_m23B2FBFE52DFF5E60F0DDAF88FC954EE3AF0A92B(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Player.GameUIInputView::get_Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameUIInputView_get_Jump_m17CAF6A789A654D8ADD9E56C7752A633C84D2E9A (GameUIInputView_t1CF24B7F5E511DCE60D7618DD9B940323C3EBEBE* __this, const RuntimeMethod* method) 
{
	{
		// public bool Jump { get; private set; }
		bool L_0 = __this->___U3CJumpU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Player.GameUIInputView::set_Jump(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUIInputView_set_Jump_mC3EABA24A4E03FBA88B909813609F11205D7C4B8 (GameUIInputView_t1CF24B7F5E511DCE60D7618DD9B940323C3EBEBE* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Jump { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CJumpU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Boolean Player.GameUIInputView::get_Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameUIInputView_get_Flip_mD183600FF49951B2669E501D8EEC0D239C6B910F (GameUIInputView_t1CF24B7F5E511DCE60D7618DD9B940323C3EBEBE* __this, const RuntimeMethod* method) 
{
	{
		// public bool Flip { get; private set; }
		bool L_0 = __this->___U3CFlipU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Player.GameUIInputView::set_Flip(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUIInputView_set_Flip_m6734E222F4076F336684F269D7F6CCE5B5FB8B8D (GameUIInputView_t1CF24B7F5E511DCE60D7618DD9B940323C3EBEBE* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Flip { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CFlipU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void Player.GameUIInputView::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUIInputView_Awake_mA64533AC1EF744AABB5E3C6945D744E72496C2E1 (GameUIInputView_t1CF24B7F5E511DCE60D7618DD9B940323C3EBEBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameUIInputView_U3CAwakeU3Eb__13_0_m3BD740AF4F28F7CEE08E8BE059C5059F3D1693A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameUIInputView_U3CAwakeU3Eb__13_1_mB0834B6D643E55BCA31C6AE5B2B3DCFC98CB790C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _jumpButton.onClick.AddListener(() => Jump = true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____jumpButton_5;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)GameUIInputView_U3CAwakeU3Eb__13_0_m3BD740AF4F28F7CEE08E8BE059C5059F3D1693A8_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// _flipButton.onClick.AddListener(() => Flip = true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->____flipButton_6;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)GameUIInputView_U3CAwakeU3Eb__13_1_mB0834B6D643E55BCA31C6AE5B2B3DCFC98CB790C_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Player.GameUIInputView::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUIInputView_OnDestroy_m8AA2701F435BD577F378CD0A73FB697B903D07ED (GameUIInputView_t1CF24B7F5E511DCE60D7618DD9B940323C3EBEBE* __this, const RuntimeMethod* method) 
{
	{
		// _jumpButton.onClick.RemoveAllListeners();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____jumpButton_5;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		NullCheck(L_1);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_1, NULL);
		// _flipButton.onClick.RemoveAllListeners();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->____flipButton_6;
		NullCheck(L_2);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_3;
		L_3 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_2, NULL);
		NullCheck(L_3);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_3, NULL);
		// }
		return;
	}
}
// System.Void Player.GameUIInputView::ResetOneTimeAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUIInputView_ResetOneTimeAction_m18F4C883105E3B3243B5D9D4E2715FCC27B00171 (GameUIInputView_t1CF24B7F5E511DCE60D7618DD9B940323C3EBEBE* __this, const RuntimeMethod* method) 
{
	{
		// Jump = false;
		GameUIInputView_set_Jump_mC3EABA24A4E03FBA88B909813609F11205D7C4B8_inline(__this, (bool)0, NULL);
		// Flip = false;
		GameUIInputView_set_Flip_m6734E222F4076F336684F269D7F6CCE5B5FB8B8D_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Player.GameUIInputView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUIInputView__ctor_m331AB7DB15C30D64DB9683AE5A341D89071C7F79 (GameUIInputView_t1CF24B7F5E511DCE60D7618DD9B940323C3EBEBE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Player.GameUIInputView::<Awake>b__13_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUIInputView_U3CAwakeU3Eb__13_0_m3BD740AF4F28F7CEE08E8BE059C5059F3D1693A8 (GameUIInputView_t1CF24B7F5E511DCE60D7618DD9B940323C3EBEBE* __this, const RuntimeMethod* method) 
{
	{
		// _jumpButton.onClick.AddListener(() => Jump = true);
		GameUIInputView_set_Jump_mC3EABA24A4E03FBA88B909813609F11205D7C4B8_inline(__this, (bool)1, NULL);
		return;
	}
}
// System.Void Player.GameUIInputView::<Awake>b__13_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUIInputView_U3CAwakeU3Eb__13_1_mB0834B6D643E55BCA31C6AE5B2B3DCFC98CB790C (GameUIInputView_t1CF24B7F5E511DCE60D7618DD9B940323C3EBEBE* __this, const RuntimeMethod* method) 
{
	{
		// _flipButton.onClick.AddListener(() => Flip = true);
		GameUIInputView_set_Flip_m6734E222F4076F336684F269D7F6CCE5B5FB8B8D_inline(__this, (bool)1, NULL);
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
// System.Void Player.PlayerBrain::.ctor(Player.PlayerEntity,System.Collections.Generic.List`1<Player.IEntityInputSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBrain__ctor_m6FBE525B7B3556883ABB65098F0DA9FDA3526AE5 (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* __this, PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* ___0_playerEntity, List_1_tB6557FC48639FBF6663985332C61BEA4462662AF* ___1_inputSources, const RuntimeMethod* method) 
{
	{
		// public PlayerBrain(PlayerEntity playerEntity, List<IEntityInputSource> inputSources)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _playerEntity = playerEntity;
		PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* L_0 = ___0_playerEntity;
		__this->____playerEntity_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____playerEntity_0), (void*)L_0);
		// _inputSources = inputSources;
		List_1_tB6557FC48639FBF6663985332C61BEA4462662AF* L_1 = ___1_inputSources;
		__this->____inputSources_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____inputSources_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void Player.PlayerBrain::OnFixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBrain_OnFixedUpdate_m8D2DD5E895FC850437E9C85A92D1BC3E12D8DCBA (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m247935A00C1581B5CB450977DCBC0FE2453A2D32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCD3768D4325C7FF3A7190819AB33FE5B69860BA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m43B4E9DF0CFD71BE527AD32890C0FF32EE678571_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEntityInputSource_tB0F39AFA80DE9225B2DE16A86C039D4275774505_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m64D0D45D72A0BCF25AA99951CA6939ECA2BE398A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t614FCEF2F56CB2626B956B40A11A0B4ECC8F4934 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _playerEntity.MoveHorizontally(GetHorizontalDirection());
		PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* L_0 = __this->____playerEntity_0;
		float L_1;
		L_1 = PlayerBrain_GetHorizontalDirection_m4AEA3EA91CF370C2B88425FEC6E36AB34478734E(__this, NULL);
		NullCheck(L_0);
		PlayerEntity_MoveHorizontally_m66C3E3D8D99018E8499D2BEAAFD645CBAB15BFE6(L_0, L_1, NULL);
		// if (IsJump()) _playerEntity.Jump();
		bool L_2;
		L_2 = PlayerBrain_IsJump_m7E1AAF5A49A7321868080795428319EB97918761(__this, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// if (IsJump()) _playerEntity.Jump();
		PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* L_3 = __this->____playerEntity_0;
		NullCheck(L_3);
		PlayerEntity_Jump_m236605D656E45AB5A00031DE07E77B85774519C1(L_3, NULL);
	}

IL_0024:
	{
		// foreach (var entityInputSource in _inputSources)
		List_1_tB6557FC48639FBF6663985332C61BEA4462662AF* L_4 = __this->____inputSources_1;
		NullCheck(L_4);
		Enumerator_t614FCEF2F56CB2626B956B40A11A0B4ECC8F4934 L_5;
		L_5 = List_1_GetEnumerator_m64D0D45D72A0BCF25AA99951CA6939ECA2BE398A(L_4, List_1_GetEnumerator_m64D0D45D72A0BCF25AA99951CA6939ECA2BE398A_RuntimeMethod_var);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0049:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m247935A00C1581B5CB450977DCBC0FE2453A2D32((&V_0), Enumerator_Dispose_m247935A00C1581B5CB450977DCBC0FE2453A2D32_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003e_1;
			}

IL_0032_1:
			{
				// foreach (var entityInputSource in _inputSources)
				RuntimeObject* L_6;
				L_6 = Enumerator_get_Current_m43B4E9DF0CFD71BE527AD32890C0FF32EE678571_inline((&V_0), Enumerator_get_Current_m43B4E9DF0CFD71BE527AD32890C0FF32EE678571_RuntimeMethod_var);
				// entityInputSource.ResetOneTimeAction();
				NullCheck(L_6);
				InterfaceActionInvoker0::Invoke(3 /* System.Void Player.IEntityInputSource::ResetOneTimeAction() */, IEntityInputSource_tB0F39AFA80DE9225B2DE16A86C039D4275774505_il2cpp_TypeInfo_var, L_6);
			}

IL_003e_1:
			{
				// foreach (var entityInputSource in _inputSources)
				bool L_7;
				L_7 = Enumerator_MoveNext_mCD3768D4325C7FF3A7190819AB33FE5B69860BA9((&V_0), Enumerator_MoveNext_mCD3768D4325C7FF3A7190819AB33FE5B69860BA9_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0032_1;
				}
			}
			{
				goto IL_0057;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Single Player.PlayerBrain::GetHorizontalDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerBrain_GetHorizontalDirection_m4AEA3EA91CF370C2B88425FEC6E36AB34478734E (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m247935A00C1581B5CB450977DCBC0FE2453A2D32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCD3768D4325C7FF3A7190819AB33FE5B69860BA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m43B4E9DF0CFD71BE527AD32890C0FF32EE678571_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEntityInputSource_tB0F39AFA80DE9225B2DE16A86C039D4275774505_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m64D0D45D72A0BCF25AA99951CA6939ECA2BE398A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t614FCEF2F56CB2626B956B40A11A0B4ECC8F4934 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	float V_2 = 0.0f;
	{
		// foreach (var entityInputSource in _inputSources)
		List_1_tB6557FC48639FBF6663985332C61BEA4462662AF* L_0 = __this->____inputSources_1;
		NullCheck(L_0);
		Enumerator_t614FCEF2F56CB2626B956B40A11A0B4ECC8F4934 L_1;
		L_1 = List_1_GetEnumerator_m64D0D45D72A0BCF25AA99951CA6939ECA2BE398A(L_0, List_1_GetEnumerator_m64D0D45D72A0BCF25AA99951CA6939ECA2BE398A_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0037:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m247935A00C1581B5CB450977DCBC0FE2453A2D32((&V_0), Enumerator_Dispose_m247935A00C1581B5CB450977DCBC0FE2453A2D32_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002c_1;
			}

IL_000e_1:
			{
				// foreach (var entityInputSource in _inputSources)
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_m43B4E9DF0CFD71BE527AD32890C0FF32EE678571_inline((&V_0), Enumerator_get_Current_m43B4E9DF0CFD71BE527AD32890C0FF32EE678571_RuntimeMethod_var);
				V_1 = L_2;
				// if (entityInputSource.HorizontalDirection == 0) continue;
				RuntimeObject* L_3 = V_1;
				NullCheck(L_3);
				float L_4;
				L_4 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single Player.IEntityInputSource::get_HorizontalDirection() */, IEntityInputSource_tB0F39AFA80DE9225B2DE16A86C039D4275774505_il2cpp_TypeInfo_var, L_3);
				if ((((float)L_4) == ((float)(0.0f))))
				{
					goto IL_002c_1;
				}
			}
			{
				// return entityInputSource.HorizontalDirection;
				RuntimeObject* L_5 = V_1;
				NullCheck(L_5);
				float L_6;
				L_6 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single Player.IEntityInputSource::get_HorizontalDirection() */, IEntityInputSource_tB0F39AFA80DE9225B2DE16A86C039D4275774505_il2cpp_TypeInfo_var, L_5);
				V_2 = L_6;
				goto IL_004b;
			}

IL_002c_1:
			{
				// foreach (var entityInputSource in _inputSources)
				bool L_7;
				L_7 = Enumerator_MoveNext_mCD3768D4325C7FF3A7190819AB33FE5B69860BA9((&V_0), Enumerator_MoveNext_mCD3768D4325C7FF3A7190819AB33FE5B69860BA9_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0045;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0045:
	{
		// return 0;
		return (0.0f);
	}

IL_004b:
	{
		// }
		float L_8 = V_2;
		return L_8;
	}
}
// System.Boolean Player.PlayerBrain::IsJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerBrain_IsJump_m7E1AAF5A49A7321868080795428319EB97918761 (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisIEntityInputSource_tB0F39AFA80DE9225B2DE16A86C039D4275774505_m7F9DB31BD3C9514B65E53714DF2B0EC9098BDAA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tEC94E0CBEB1C3AD43F0B83396A7E5611DD4E284E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CIsJumpU3Eb__5_0_m42CFF1D61C0F9F478EF8386A25D87C034CB3A7C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tEC94E0CBEB1C3AD43F0B83396A7E5611DD4E284E* G_B2_0 = NULL;
	List_1_tB6557FC48639FBF6663985332C61BEA4462662AF* G_B2_1 = NULL;
	Func_2_tEC94E0CBEB1C3AD43F0B83396A7E5611DD4E284E* G_B1_0 = NULL;
	List_1_tB6557FC48639FBF6663985332C61BEA4462662AF* G_B1_1 = NULL;
	{
		// private bool IsJump() => _inputSources.Any(source => source.Jump);
		List_1_tB6557FC48639FBF6663985332C61BEA4462662AF* L_0 = __this->____inputSources_1;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var);
		Func_2_tEC94E0CBEB1C3AD43F0B83396A7E5611DD4E284E* L_1 = ((U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1;
		Func_2_tEC94E0CBEB1C3AD43F0B83396A7E5611DD4E284E* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var);
		U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41* L_3 = ((U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tEC94E0CBEB1C3AD43F0B83396A7E5611DD4E284E* L_4 = (Func_2_tEC94E0CBEB1C3AD43F0B83396A7E5611DD4E284E*)il2cpp_codegen_object_new(Func_2_tEC94E0CBEB1C3AD43F0B83396A7E5611DD4E284E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_mE390B571F55EA7A37FC7FCCED8F20BC17ED015C6(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CIsJumpU3Eb__5_0_m42CFF1D61C0F9F478EF8386A25D87C034CB3A7C7_RuntimeMethod_var), NULL);
		Func_2_tEC94E0CBEB1C3AD43F0B83396A7E5611DD4E284E* L_5 = L_4;
		((U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		bool L_6;
		L_6 = Enumerable_Any_TisIEntityInputSource_tB0F39AFA80DE9225B2DE16A86C039D4275774505_m7F9DB31BD3C9514B65E53714DF2B0EC9098BDAA5(G_B2_1, G_B2_0, Enumerable_Any_TisIEntityInputSource_tB0F39AFA80DE9225B2DE16A86C039D4275774505_m7F9DB31BD3C9514B65E53714DF2B0EC9098BDAA5_RuntimeMethod_var);
		return L_6;
	}
}
// System.Boolean Player.PlayerBrain::IsFlip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerBrain_IsFlip_m8DE226648E4CE38A8662FB8A45D0D42F80315A63 (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisIEntityInputSource_tB0F39AFA80DE9225B2DE16A86C039D4275774505_m7F9DB31BD3C9514B65E53714DF2B0EC9098BDAA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tEC94E0CBEB1C3AD43F0B83396A7E5611DD4E284E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CIsFlipU3Eb__6_0_m19D005358117E12C1AB4282996581B2C2EC022EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tEC94E0CBEB1C3AD43F0B83396A7E5611DD4E284E* G_B2_0 = NULL;
	List_1_tB6557FC48639FBF6663985332C61BEA4462662AF* G_B2_1 = NULL;
	Func_2_tEC94E0CBEB1C3AD43F0B83396A7E5611DD4E284E* G_B1_0 = NULL;
	List_1_tB6557FC48639FBF6663985332C61BEA4462662AF* G_B1_1 = NULL;
	{
		// private bool IsFlip() => _inputSources.Any(source => source.Flip);
		List_1_tB6557FC48639FBF6663985332C61BEA4462662AF* L_0 = __this->____inputSources_1;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var);
		Func_2_tEC94E0CBEB1C3AD43F0B83396A7E5611DD4E284E* L_1 = ((U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_2;
		Func_2_tEC94E0CBEB1C3AD43F0B83396A7E5611DD4E284E* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var);
		U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41* L_3 = ((U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tEC94E0CBEB1C3AD43F0B83396A7E5611DD4E284E* L_4 = (Func_2_tEC94E0CBEB1C3AD43F0B83396A7E5611DD4E284E*)il2cpp_codegen_object_new(Func_2_tEC94E0CBEB1C3AD43F0B83396A7E5611DD4E284E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_mE390B571F55EA7A37FC7FCCED8F20BC17ED015C6(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CIsFlipU3Eb__6_0_m19D005358117E12C1AB4282996581B2C2EC022EF_RuntimeMethod_var), NULL);
		Func_2_tEC94E0CBEB1C3AD43F0B83396A7E5611DD4E284E* L_5 = L_4;
		((U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_2), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		bool L_6;
		L_6 = Enumerable_Any_TisIEntityInputSource_tB0F39AFA80DE9225B2DE16A86C039D4275774505_m7F9DB31BD3C9514B65E53714DF2B0EC9098BDAA5(G_B2_1, G_B2_0, Enumerable_Any_TisIEntityInputSource_tB0F39AFA80DE9225B2DE16A86C039D4275774505_m7F9DB31BD3C9514B65E53714DF2B0EC9098BDAA5_RuntimeMethod_var);
		return L_6;
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
// System.Void Player.PlayerBrain/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA319249AB7EB1433A029B68914D67E90C04B275F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41* L_0 = (U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41*)il2cpp_codegen_object_new(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mDB495E4EF44CB795B0B7FAC5AB4B8FC3577A43F4(L_0, NULL);
		((U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Player.PlayerBrain/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDB495E4EF44CB795B0B7FAC5AB4B8FC3577A43F4 (U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Player.PlayerBrain/<>c::<IsJump>b__5_0(Player.IEntityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CIsJumpU3Eb__5_0_m42CFF1D61C0F9F478EF8386A25D87C034CB3A7C7 (U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEntityInputSource_tB0F39AFA80DE9225B2DE16A86C039D4275774505_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool IsJump() => _inputSources.Any(source => source.Jump);
		RuntimeObject* L_0 = ___0_source;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Player.IEntityInputSource::get_Jump() */, IEntityInputSource_tB0F39AFA80DE9225B2DE16A86C039D4275774505_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Player.PlayerBrain/<>c::<IsFlip>b__6_0(Player.IEntityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CIsFlipU3Eb__6_0_m19D005358117E12C1AB4282996581B2C2EC022EF (U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEntityInputSource_tB0F39AFA80DE9225B2DE16A86C039D4275774505_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool IsFlip() => _inputSources.Any(source => source.Flip);
		RuntimeObject* L_0 = ___0_source;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Player.IEntityInputSource::get_Flip() */, IEntityInputSource_tB0F39AFA80DE9225B2DE16A86C039D4275774505_il2cpp_TypeInfo_var, L_0);
		return L_1;
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
// System.Void Player.PlayerEntity::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_Start_m94F3EB1E511F23A966EBAF5CD595EC6A7540A56D (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _rigidbody2D = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->____rigidbody2D_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rigidbody2D_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void Player.PlayerEntity::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_Update_m3C948F06F728444F4BBCF9453CA8A8EDF0DF39D0 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) 
{
	{
		// if (_isJumping) ResetJump();
		bool L_0 = __this->____isJumping_9;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (_isJumping) ResetJump();
		PlayerEntity_ResetJump_m31C0D9C534E0072F2C05E4DFA861C8DE526C0B77(__this, NULL);
	}

IL_000e:
	{
		// if (_isFalling) ResetFall();
		bool L_1 = __this->____isFalling_11;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// if (_isFalling) ResetFall();
		PlayerEntity_ResetFall_mF285CDEB2B3727A3EC3CFEF087AAB3B10831BBB0(__this, NULL);
	}

IL_001c:
	{
		// UpdateFall();
		PlayerEntity_UpdateFall_m42E19200B92AA326E1B91B7DD34340AED0DA0791(__this, NULL);
		// UpdateAnimation();
		PlayerEntity_UpdateAnimation_m546043BF03BE27A74615C1235CC008D39B77DEB2(__this, NULL);
		// }
		return;
	}
}
// System.Void Player.PlayerEntity::MoveHorizontally(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_MoveHorizontally_m66C3E3D8D99018E8499D2BEAAFD645CBAB15BFE6 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, float ___0_direction, const RuntimeMethod* method) 
{
	{
		// _movement.x = direction;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->____movement_12);
		float L_1 = ___0_direction;
		L_0->___x_0 = L_1;
		// SetDirection(direction);
		float L_2 = ___0_direction;
		PlayerEntity_SetDirection_mCFE5F2CF5E6C3D312639C9691C1BB19167D2535B(__this, L_2, NULL);
		// _rigidbody2D.velocity = new Vector2(direction * _horizontalSpeed, _rigidbody2D.velocity.y);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->____rigidbody2D_8;
		float L_4 = ___0_direction;
		float L_5 = __this->____horizontalSpeed_5;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_6 = __this->____rigidbody2D_8;
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_6, NULL);
		float L_8 = L_7.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), ((float)il2cpp_codegen_multiply(L_4, L_5)), L_8, /*hidden argument*/NULL);
		NullCheck(L_3);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_3, L_9, NULL);
		// }
		return;
	}
}
// System.Void Player.PlayerEntity::SetDirection(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_SetDirection_mCFE5F2CF5E6C3D312639C9691C1BB19167D2535B (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, float ___0_direction, const RuntimeMethod* method) 
{
	{
		// if ((_faceRight && direction < 0) || (!_faceRight && direction > 0))
		bool L_0 = __this->____faceRight_6;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		float L_1 = ___0_direction;
		if ((((float)L_1) < ((float)(0.0f))))
		{
			goto IL_0020;
		}
	}

IL_0010:
	{
		bool L_2 = __this->____faceRight_6;
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		float L_3 = ___0_direction;
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_0026;
		}
	}

IL_0020:
	{
		// Flip();
		PlayerEntity_Flip_m8777B003E934D7342916CEE4FD1F619E44EDF3B0(__this, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void Player.PlayerEntity::Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_Flip_m8777B003E934D7342916CEE4FD1F619E44EDF3B0 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(0, 180, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_0, (0.0f), (180.0f), (0.0f), NULL);
		// _faceRight = !_faceRight;
		bool L_1 = __this->____faceRight_6;
		__this->____faceRight_6 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void Player.PlayerEntity::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_Jump_m236605D656E45AB5A00031DE07E77B85774519C1 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) 
{
	{
		// if (!_isJumping && _hasJump)
		bool L_0 = __this->____isJumping_9;
		if (L_0)
		{
			goto IL_003d;
		}
	}
	{
		bool L_1 = __this->____hasJump_10;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		// _isJumping = true;
		__this->____isJumping_9 = (bool)1;
		// _rigidbody2D.velocity = new Vector2(_rigidbody2D.velocity.x, _jumpForce);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2 = __this->____rigidbody2D_8;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->____rigidbody2D_8;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_3, NULL);
		float L_5 = L_4.___x_0;
		float L_6 = __this->____jumpForce_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_2, L_7, NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void Player.PlayerEntity::ResetJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_ResetJump_m31C0D9C534E0072F2C05E4DFA861C8DE526C0B77 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) 
{
	{
		// if (_rigidbody2D.velocity.y == 0)
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->____rigidbody2D_8;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_0, NULL);
		float L_2 = L_1.___y_1;
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_001e;
		}
	}
	{
		// _isJumping = false;
		__this->____isJumping_9 = (bool)0;
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Player.PlayerEntity::UpdateFall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_UpdateFall_m42E19200B92AA326E1B91B7DD34340AED0DA0791 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) 
{
	{
		// if (_rigidbody2D.velocity.y < 0)
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->____rigidbody2D_8;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_0, NULL);
		float L_2 = L_1.___y_1;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_0026;
		}
	}
	{
		// _isFalling = true;
		__this->____isFalling_11 = (bool)1;
		// _hasJump = false;
		__this->____hasJump_10 = (bool)0;
		// return;
		return;
	}

IL_0026:
	{
		// _hasJump = true;
		__this->____hasJump_10 = (bool)1;
		// }
		return;
	}
}
// System.Void Player.PlayerEntity::ResetFall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_ResetFall_mF285CDEB2B3727A3EC3CFEF087AAB3B10831BBB0 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) 
{
	{
		// if (_rigidbody2D.velocity.y >= 0)
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->____rigidbody2D_8;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_0, NULL);
		float L_2 = L_1.___y_1;
		if ((!(((float)L_2) >= ((float)(0.0f)))))
		{
			goto IL_001e;
		}
	}
	{
		// _isFalling = false;
		__this->____isFalling_11 = (bool)0;
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Player.PlayerEntity::UpdateAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_UpdateAnimation_m546043BF03BE27A74615C1235CC008D39B77DEB2 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) 
{
	{
		// _animator.PlayAnimation(AnimationType.Idle, true);
		AnimatorController_t8F0B99B15C213FCE1D8E20A9E0DAC8FC9DAC341B* L_0 = __this->____animator_4;
		NullCheck(L_0);
		AnimatorController_PlayAnimation_mD6263213D892378F286D6C5A1EBD0357F49FE9A2(L_0, 0, (bool)1, NULL);
		// _animator.PlayAnimation(AnimationType.Run, _movement.magnitude > 0);
		AnimatorController_t8F0B99B15C213FCE1D8E20A9E0DAC8FC9DAC341B* L_1 = __this->____animator_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->____movement_12);
		float L_3;
		L_3 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_2, NULL);
		NullCheck(L_1);
		AnimatorController_PlayAnimation_mD6263213D892378F286D6C5A1EBD0357F49FE9A2(L_1, 1, (bool)((((float)L_3) > ((float)(0.0f)))? 1 : 0), NULL);
		// _animator.PlayAnimation(AnimationType.Jump, _isJumping);
		AnimatorController_t8F0B99B15C213FCE1D8E20A9E0DAC8FC9DAC341B* L_4 = __this->____animator_4;
		bool L_5 = __this->____isJumping_9;
		NullCheck(L_4);
		AnimatorController_PlayAnimation_mD6263213D892378F286D6C5A1EBD0357F49FE9A2(L_4, 2, L_5, NULL);
		// _animator.PlayAnimation(AnimationType.Fall, _isFalling);
		AnimatorController_t8F0B99B15C213FCE1D8E20A9E0DAC8FC9DAC341B* L_6 = __this->____animator_4;
		bool L_7 = __this->____isFalling_11;
		NullCheck(L_6);
		AnimatorController_PlayAnimation_mD6263213D892378F286D6C5A1EBD0357F49FE9A2(L_6, 3, L_7, NULL);
		// }
		return;
	}
}
// System.Void Player.PlayerEntity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity__ctor_mA312E845416AC154A7F7F6C88596B187846A84E5 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) 
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
// System.Void Player.PlayerAnimation.AnimatorController::PlayAnimation(Player.PlayerAnimation.AnimationType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController_PlayAnimation_mD6263213D892378F286D6C5A1EBD0357F49FE9A2 (AnimatorController_t8F0B99B15C213FCE1D8E20A9E0DAC8FC9DAC341B* __this, int32_t ___0_animationType, bool ___1_active, const RuntimeMethod* method) 
{
	{
		// if (!active)
		bool L_0 = ___1_active;
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		// if (_currentAnimationType == AnimationType.Idle || _currentAnimationType != animationType)
		int32_t L_1 = __this->____currentAnimationType_4;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = __this->____currentAnimationType_4;
		int32_t L_3 = ___0_animationType;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0015;
		}
	}

IL_0014:
	{
		// return;
		return;
	}

IL_0015:
	{
		// _currentAnimationType = AnimationType.Idle;
		__this->____currentAnimationType_4 = 0;
		// PlayAnimation(_currentAnimationType);
		int32_t L_4 = __this->____currentAnimationType_4;
		VirtualActionInvoker1< int32_t >::Invoke(4 /* System.Void Player.PlayerAnimation.AnimatorController::PlayAnimation(Player.PlayerAnimation.AnimationType) */, __this, L_4);
		// return;
		return;
	}

IL_0029:
	{
		// if (_currentAnimationType >= animationType)
		int32_t L_5 = __this->____currentAnimationType_4;
		int32_t L_6 = ___0_animationType;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0033;
		}
	}
	{
		// return;
		return;
	}

IL_0033:
	{
		// _currentAnimationType = animationType;
		int32_t L_7 = ___0_animationType;
		__this->____currentAnimationType_4 = L_7;
		// PlayAnimation(_currentAnimationType);
		int32_t L_8 = __this->____currentAnimationType_4;
		VirtualActionInvoker1< int32_t >::Invoke(4 /* System.Void Player.PlayerAnimation.AnimatorController::PlayAnimation(Player.PlayerAnimation.AnimationType) */, __this, L_8);
		// }
		return;
	}
}
// System.Void Player.PlayerAnimation.AnimatorController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController__ctor_mE0542DD29E3ECE9707952529EB20AB511A825A37 (AnimatorController_t8F0B99B15C213FCE1D8E20A9E0DAC8FC9DAC341B* __this, const RuntimeMethod* method) 
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
// System.Void Player.PlayerAnimation.UnityAnimatorController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAnimatorController_Start_m5FDDE0B0D5CDC09125D63AEB581241CCED2A3FDA (UnityAnimatorController_t4F4A1D6DD57D0578534FB4DFE610462C77ACA885* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void Start() => _animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->____animator_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____animator_5), (void*)L_0);
		return;
	}
}
// System.Void Player.PlayerAnimation.UnityAnimatorController::PlayAnimation(Player.PlayerAnimation.AnimationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAnimatorController_PlayAnimation_mE08F99E1ACD70C9C65FB416B564EE9C2024039A9 (UnityAnimatorController_t4F4A1D6DD57D0578534FB4DFE610462C77ACA885* __this, int32_t ___0_animationType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B155B21E40C2DC3913150B158FC8C685B50C8D1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator.SetInteger(nameof(AnimationType), (int)animationType);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____animator_5;
		int32_t L_1 = ___0_animationType;
		NullCheck(L_0);
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_0, _stringLiteral5B155B21E40C2DC3913150B158FC8C685B50C8D1, L_1, NULL);
		// }
		return;
	}
}
// System.Void Player.PlayerAnimation.UnityAnimatorController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAnimatorController__ctor_m261545681005F8BAFED5A681308A2671B76FEEC5 (UnityAnimatorController_t4F4A1D6DD57D0578534FB4DFE610462C77ACA885* __this, const RuntimeMethod* method) 
{
	{
		AnimatorController__ctor_mE0542DD29E3ECE9707952529EB20AB511A825A37(__this, NULL);
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
// System.Void Core.GameLevelInitializer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameLevelInitializer_Awake_mD050D5A9233BA09EFDAA5C7D73019F42D1279C8F (GameLevelInitializer_tADAC36DAA6B74BEC97ACC2E6E686767809C8794A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m71088F5A19F0C01868AAEBD1E279E193D9CD358C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5750CD7F9B353C3A48B6BBACB2F20F5573D6478A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB6557FC48639FBF6663985332C61BEA4462662AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _externalDevicesInput = new ExternalDevicesInputReader();
		ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* L_0 = (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42*)il2cpp_codegen_object_new(ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ExternalDevicesInputReader__ctor_m8B0F20B139F68E615DE6688190B597BE736B2013(L_0, NULL);
		__this->____externalDevicesInput_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____externalDevicesInput_6), (void*)L_0);
		// _playerBrain = new PlayerBrain(_playerEntity, new List<IEntityInputSource>
		// {
		//     _gameUIInputView,
		//     _externalDevicesInput
		// 
		// 
		// });
		PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* L_1 = __this->____playerEntity_4;
		List_1_tB6557FC48639FBF6663985332C61BEA4462662AF* L_2 = (List_1_tB6557FC48639FBF6663985332C61BEA4462662AF*)il2cpp_codegen_object_new(List_1_tB6557FC48639FBF6663985332C61BEA4462662AF_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m5750CD7F9B353C3A48B6BBACB2F20F5573D6478A(L_2, List_1__ctor_m5750CD7F9B353C3A48B6BBACB2F20F5573D6478A_RuntimeMethod_var);
		List_1_tB6557FC48639FBF6663985332C61BEA4462662AF* L_3 = L_2;
		GameUIInputView_t1CF24B7F5E511DCE60D7618DD9B940323C3EBEBE* L_4 = __this->____gameUIInputView_5;
		NullCheck(L_3);
		List_1_Add_m71088F5A19F0C01868AAEBD1E279E193D9CD358C_inline(L_3, L_4, List_1_Add_m71088F5A19F0C01868AAEBD1E279E193D9CD358C_RuntimeMethod_var);
		List_1_tB6557FC48639FBF6663985332C61BEA4462662AF* L_5 = L_3;
		ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* L_6 = __this->____externalDevicesInput_6;
		NullCheck(L_5);
		List_1_Add_m71088F5A19F0C01868AAEBD1E279E193D9CD358C_inline(L_5, L_6, List_1_Add_m71088F5A19F0C01868AAEBD1E279E193D9CD358C_RuntimeMethod_var);
		PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* L_7 = (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093*)il2cpp_codegen_object_new(PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		PlayerBrain__ctor_m6FBE525B7B3556883ABB65098F0DA9FDA3526AE5(L_7, L_1, L_5, NULL);
		__this->____playerBrain_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____playerBrain_7), (void*)L_7);
		// }
		return;
	}
}
// System.Void Core.GameLevelInitializer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameLevelInitializer_Update_m1FD0D96ABB76A7E319CA2626C61767B184F0BE78 (GameLevelInitializer_tADAC36DAA6B74BEC97ACC2E6E686767809C8794A* __this, const RuntimeMethod* method) 
{
	{
		// _externalDevicesInput.OnUpdate();
		ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* L_0 = __this->____externalDevicesInput_6;
		NullCheck(L_0);
		ExternalDevicesInputReader_OnUpdate_m99FD182BD7D8A94A889B8A29C981ED7556D63757(L_0, NULL);
		// }
		return;
	}
}
// System.Void Core.GameLevelInitializer::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameLevelInitializer_FixedUpdate_m8EA56B485C80C0DF7A1FE1CCA136302066891B48 (GameLevelInitializer_tADAC36DAA6B74BEC97ACC2E6E686767809C8794A* __this, const RuntimeMethod* method) 
{
	{
		// _playerBrain.OnFixedUpdate();
		PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* L_0 = __this->____playerBrain_7;
		NullCheck(L_0);
		PlayerBrain_OnFixedUpdate_m8D2DD5E895FC850437E9C85A92D1BC3E12D8DCBA(L_0, NULL);
		// }
		return;
	}
}
// System.Void Core.GameLevelInitializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameLevelInitializer__ctor_mF9C7AF46C8FEEF8C46D957C6977F5F61EDF2C352 (GameLevelInitializer_tADAC36DAA6B74BEC97ACC2E6E686767809C8794A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExternalDevicesInputReader_set_Jump_m1D6CF10F4DBA5C21E181DF8AAB141670F8705207_inline (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Jump { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CJumpU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExternalDevicesInputReader_set_Flip_m0BE901E0A636AF8CEEF28EB3327AE22EEA8FBC4B_inline (ExternalDevicesInputReader_tB856F3DD76164641C3D200D39148252C50321B42* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Flip { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CFlipU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameUIInputView_set_Jump_mC3EABA24A4E03FBA88B909813609F11205D7C4B8_inline (GameUIInputView_t1CF24B7F5E511DCE60D7618DD9B940323C3EBEBE* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Jump { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CJumpU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameUIInputView_set_Flip_m6734E222F4076F336684F269D7F6CCE5B5FB8B8D_inline (GameUIInputView_t1CF24B7F5E511DCE60D7618DD9B940323C3EBEBE* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Flip { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CFlipU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
