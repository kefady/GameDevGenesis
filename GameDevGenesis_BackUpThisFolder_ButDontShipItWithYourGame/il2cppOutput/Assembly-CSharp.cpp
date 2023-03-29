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

// System.Func`2<InputReader.IEntityInputSource,System.Boolean>
struct Func_2_t8A7FDBBF0DF9128ED612BE2884B6FB536C1D46E2;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Collections.Generic.IEnumerable`1<InputReader.IEntityInputSource>
struct IEnumerable_1_t135A8553D9B7A842F0EAD0F52803D3C363885289;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<System.IDisposable>
struct List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05;
// System.Collections.Generic.List`1<InputReader.IEntityInputSource>
struct List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IDisposable[]
struct IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE;
// InputReader.IEntityInputSource[]
struct IEntityInputSourceU5BU5D_tD263A48B5617300954E990BE124E1D91FFC276EB;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// Core.Animation.AnimatorController
struct AnimatorController_tA6B0441AB255A23C190754F0988BC60EC8D6EB6F;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// InputReader.ExternalDevicesInputReader
struct ExternalDevicesInputReader_t7A5FA96C19A956DAA2EB6948F201F1CAB0D3C189;
// Core.GameLevelInitializer
struct GameLevelInitializer_tADAC36DAA6B74BEC97ACC2E6E686767809C8794A;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// InputReader.GameUIInputView
struct GameUIInputView_tA29AB2FF9BDACA145CD7E1B95E05507ED401F233;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// Core.Movement.Data.HorizontalMovementData
struct HorizontalMovementData_t1E808A175F84676BA8936A6B733C41C9B6480F86;
// Core.Movement.Controller.HorizontalMover
struct HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// InputReader.IEntityInputSource
struct IEntityInputSource_t4378C41DD82394E65AEC0E2A4B4C9D2FE36DCA63;
// Core.Services.Updater.IProjectUpdater
struct IProjectUpdater_tA3E1075699990B2710C003DAF5A372B8BF5ACAD2;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Joystick
struct Joystick_t6225AC7FD164AD3414FB157CD5769DB31F9AE955;
// Core.Movement.Data.JumpData
struct JumpData_tC2119A0CBD84F68709D556AAC474A3B3792BFA37;
// Core.Movement.Controller.Jumper
struct Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Player.PlayerBrain
struct PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093;
// Player.PlayerEntity
struct PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442;
// Player.PlayerSystem
struct PlayerSystem_t3CAC4507763EB2DC77E54ABFAF5FA5AFD8C3F664;
// Core.Services.Updater.ProjectUpdater
struct ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275;
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
// Core.Animation.UnityAnimatorController
struct UnityAnimatorController_t0B3B8C58C489DA19538AB944DC26E76FADBE0FC7;
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

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExternalDevicesInputReader_t7A5FA96C19A956DAA2EB6948F201F1CAB0D3C189_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t8A7FDBBF0DF9128ED612BE2884B6FB536C1D46E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEntityInputSource_t4378C41DD82394E65AEC0E2A4B4C9D2FE36DCA63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProjectUpdater_tA3E1075699990B2710C003DAF5A372B8BF5ACAD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerSystem_t3CAC4507763EB2DC77E54ABFAF5FA5AFD8C3F664_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral5B155B21E40C2DC3913150B158FC8C685B50C8D1;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisIEntityInputSource_t4378C41DD82394E65AEC0E2A4B4C9D2FE36DCA63_m62039D9BC6B669CE8F62017CBC2E1AC3A9CA8327_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m46E201ADBB9FFC2822AF4F5B468D9BBF486984F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m50B55D363025F70B102664C9A9B9AB092C7D385B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0D8F6A0608B074FBA1F71F8995BC3070775EC224_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m20E6D92CF08DAD013CC467F343D0A075EC9AF121_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m57DB9D7263FBD8C40DF805F4F4B4CD0C73CA8E9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCB59A20446FC08B1311F96CDBC6C2ABAE0600B19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExternalDevicesInputReader_OnUpdate_m2F93FEED877F3AFA2AC4A7868DF6DC5051ED981F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_m77B0DEB88CE34C8F371ECC768829219F57CA50D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameUIInputView_U3CAwakeU3Eb__13_0_mCF6DBE0444E79251EA02710337A8C67A85D9B81E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameUIInputView_U3CAwakeU3Eb__13_1_mE6CCF66CD078DCD4F5598ED80CDA53F55DB6CE2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3E57006B1E4E3BF3DC969B90445C1E58B246619D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC0DBFAB7023A7FA0D6EFB3263C036305E5D817D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m19CE80DD8D90240511C56BFA762C5A6F3A0E756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mF880C94E895B0EB2E47D22DA350EF630143827B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8A57ADE3B85347E913E76E6BAA1F69F6451E2A99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB4C51AD04BB1308274A370FED1FA4A1651C5766F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerBrain_OnFixedUpdate_m8D2DD5E895FC850437E9C85A92D1BC3E12D8DCBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CIsFlipU3Eb__7_0_mC7405C4E40DF2CECC89E779361AA4A82077A137C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CIsJumpU3Eb__6_0_m1102586D8B52B332AC6BCFEB26C1B52E63AEF8CA_RuntimeMethod_var;
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

// System.Collections.Generic.List`1<System.IDisposable>
struct List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<InputReader.IEntityInputSource>
struct List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IEntityInputSourceU5BU5D_tD263A48B5617300954E990BE124E1D91FFC276EB* ____items_1;
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

// InputReader.ExternalDevicesInputReader
struct ExternalDevicesInputReader_t7A5FA96C19A956DAA2EB6948F201F1CAB0D3C189  : public RuntimeObject
{
	// System.Boolean InputReader.ExternalDevicesInputReader::<Jump>k__BackingField
	bool ___U3CJumpU3Ek__BackingField_0;
	// System.Boolean InputReader.ExternalDevicesInputReader::<Flip>k__BackingField
	bool ___U3CFlipU3Ek__BackingField_1;
};

// Core.Movement.Data.HorizontalMovementData
struct HorizontalMovementData_t1E808A175F84676BA8936A6B733C41C9B6480F86  : public RuntimeObject
{
	// System.Single Core.Movement.Data.HorizontalMovementData::<HorizontalSpeed>k__BackingField
	float ___U3CHorizontalSpeedU3Ek__BackingField_0;
	// System.Single Core.Movement.Data.HorizontalMovementData::<RunSpeed>k__BackingField
	float ___U3CRunSpeedU3Ek__BackingField_1;
	// System.Boolean Core.Movement.Data.HorizontalMovementData::<FaceRight>k__BackingField
	bool ___U3CFaceRightU3Ek__BackingField_2;
};

// Core.Movement.Data.JumpData
struct JumpData_tC2119A0CBD84F68709D556AAC474A3B3792BFA37  : public RuntimeObject
{
	// System.Single Core.Movement.Data.JumpData::<JumpForce>k__BackingField
	float ___U3CJumpForceU3Ek__BackingField_0;
};

// Core.Movement.Controller.Jumper
struct Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2  : public RuntimeObject
{
	// Core.Movement.Data.JumpData Core.Movement.Controller.Jumper::_jumpData
	JumpData_tC2119A0CBD84F68709D556AAC474A3B3792BFA37* ____jumpData_0;
	// UnityEngine.Rigidbody2D Core.Movement.Controller.Jumper::_rigidbody
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ____rigidbody_1;
	// System.Boolean Core.Movement.Controller.Jumper::<IsJumping>k__BackingField
	bool ___U3CIsJumpingU3Ek__BackingField_2;
	// System.Boolean Core.Movement.Controller.Jumper::<IsFalling>k__BackingField
	bool ___U3CIsFallingU3Ek__BackingField_3;
};

// Player.PlayerBrain
struct PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093  : public RuntimeObject
{
	// Player.PlayerEntity Player.PlayerBrain::_playerEntity
	PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* ____playerEntity_0;
	// System.Collections.Generic.List`1<InputReader.IEntityInputSource> Player.PlayerBrain::_inputSources
	List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9* ____inputSources_1;
};

// Player.PlayerSystem
struct PlayerSystem_t3CAC4507763EB2DC77E54ABFAF5FA5AFD8C3F664  : public RuntimeObject
{
	// Player.PlayerEntity Player.PlayerSystem::_playerEntity
	PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* ____playerEntity_0;
	// Player.PlayerBrain Player.PlayerSystem::_playerBrain
	PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* ____playerBrain_1;
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

// System.Collections.Generic.List`1/Enumerator<System.IDisposable>
struct Enumerator_t5B4557CF8F113261AC8BF5AEF969FC63B7DC6526 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<InputReader.IEntityInputSource>
struct Enumerator_tAD5B81A878AEA50EEA0BAC78FBF2E28BCDEF57B8 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9* ____list_0;
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

// Core.Movement.Controller.HorizontalMover
struct HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E  : public RuntimeObject
{
	// UnityEngine.Rigidbody2D Core.Movement.Controller.HorizontalMover::_rigidbody
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ____rigidbody_0;
	// UnityEngine.Transform Core.Movement.Controller.HorizontalMover::_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____transform_1;
	// Core.Movement.Data.HorizontalMovementData Core.Movement.Controller.HorizontalMover::_horizontalMovementData
	HorizontalMovementData_t1E808A175F84676BA8936A6B733C41C9B6480F86* ____horizontalMovementData_2;
	// UnityEngine.Vector2 Core.Movement.Controller.HorizontalMover::_movement
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____movement_3;
	// System.Boolean Core.Movement.Controller.HorizontalMover::_faceRight
	bool ____faceRight_4;
	// System.Boolean Core.Movement.Controller.HorizontalMover::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_5;
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

// System.Func`2<InputReader.IEntityInputSource,System.Boolean>
struct Func_2_t8A7FDBBF0DF9128ED612BE2884B6FB536C1D46E2  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
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

// Core.Animation.AnimatorController
struct AnimatorController_tA6B0441AB255A23C190754F0988BC60EC8D6EB6F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Core.Animation.AnimationType Core.Animation.AnimatorController::_currentAnimationType
	int32_t ____currentAnimationType_4;
};

// Core.GameLevelInitializer
struct GameLevelInitializer_tADAC36DAA6B74BEC97ACC2E6E686767809C8794A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Player.PlayerEntity Core.GameLevelInitializer::_playerEntity
	PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* ____playerEntity_4;
	// InputReader.GameUIInputView Core.GameLevelInitializer::_gameUIInputView
	GameUIInputView_tA29AB2FF9BDACA145CD7E1B95E05507ED401F233* ____gameUIInputView_5;
	// InputReader.ExternalDevicesInputReader Core.GameLevelInitializer::_externalDevicesInput
	ExternalDevicesInputReader_t7A5FA96C19A956DAA2EB6948F201F1CAB0D3C189* ____externalDevicesInput_6;
	// Player.PlayerSystem Core.GameLevelInitializer::_playerSystem
	PlayerSystem_t3CAC4507763EB2DC77E54ABFAF5FA5AFD8C3F664* ____playerSystem_7;
	// Core.Services.Updater.ProjectUpdater Core.GameLevelInitializer::_projectUpdater
	ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275* ____projectUpdater_8;
	// System.Collections.Generic.List`1<System.IDisposable> Core.GameLevelInitializer::_disposables
	List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05* ____disposables_9;
};

// InputReader.GameUIInputView
struct GameUIInputView_tA29AB2FF9BDACA145CD7E1B95E05507ED401F233  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Joystick InputReader.GameUIInputView::_joystick
	Joystick_t6225AC7FD164AD3414FB157CD5769DB31F9AE955* ____joystick_4;
	// UnityEngine.UI.Button InputReader.GameUIInputView::_jumpButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____jumpButton_5;
	// UnityEngine.UI.Button InputReader.GameUIInputView::_flipButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____flipButton_6;
	// System.Boolean InputReader.GameUIInputView::<Jump>k__BackingField
	bool ___U3CJumpU3Ek__BackingField_7;
	// System.Boolean InputReader.GameUIInputView::<Flip>k__BackingField
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
	// Core.Animation.AnimatorController Player.PlayerEntity::_animator
	AnimatorController_tA6B0441AB255A23C190754F0988BC60EC8D6EB6F* ____animator_4;
	// Core.Movement.Data.HorizontalMovementData Player.PlayerEntity::_horizontalMovementData
	HorizontalMovementData_t1E808A175F84676BA8936A6B733C41C9B6480F86* ____horizontalMovementData_5;
	// Core.Movement.Data.JumpData Player.PlayerEntity::_jumpData
	JumpData_tC2119A0CBD84F68709D556AAC474A3B3792BFA37* ____jumpData_6;
	// UnityEngine.Rigidbody2D Player.PlayerEntity::_rigidbody2D
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ____rigidbody2D_7;
	// Core.Movement.Controller.HorizontalMover Player.PlayerEntity::_horizontalMover
	HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* ____horizontalMover_8;
	// Core.Movement.Controller.Jumper Player.PlayerEntity::_jumper
	Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* ____jumper_9;
};

// Core.Services.Updater.ProjectUpdater
struct ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action Core.Services.Updater.ProjectUpdater::UpdateCalled
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___UpdateCalled_5;
	// System.Action Core.Services.Updater.ProjectUpdater::FixedUpdateCalled
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___FixedUpdateCalled_6;
	// System.Action Core.Services.Updater.ProjectUpdater::LateUpdateCalled
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___LateUpdateCalled_7;
	// System.Boolean Core.Services.Updater.ProjectUpdater::_isPaused
	bool ____isPaused_8;
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

// Core.Animation.UnityAnimatorController
struct UnityAnimatorController_t0B3B8C58C489DA19538AB944DC26E76FADBE0FC7  : public AnimatorController_tA6B0441AB255A23C190754F0988BC60EC8D6EB6F
{
	// UnityEngine.Animator Core.Animation.UnityAnimatorController::_animator
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

// System.Collections.Generic.List`1<System.IDisposable>
struct List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.IDisposable>

// System.Collections.Generic.List`1<InputReader.IEntityInputSource>
struct List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IEntityInputSourceU5BU5D_tD263A48B5617300954E990BE124E1D91FFC276EB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<InputReader.IEntityInputSource>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// InputReader.ExternalDevicesInputReader

// InputReader.ExternalDevicesInputReader

// Core.Movement.Data.HorizontalMovementData

// Core.Movement.Data.HorizontalMovementData

// Core.Movement.Data.JumpData

// Core.Movement.Data.JumpData

// Core.Movement.Controller.Jumper

// Core.Movement.Controller.Jumper

// Player.PlayerBrain

// Player.PlayerBrain

// Player.PlayerSystem

// Player.PlayerSystem

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
	// System.Func`2<InputReader.IEntityInputSource,System.Boolean> Player.PlayerBrain/<>c::<>9__6_0
	Func_2_t8A7FDBBF0DF9128ED612BE2884B6FB536C1D46E2* ___U3CU3E9__6_0_1;
	// System.Func`2<InputReader.IEntityInputSource,System.Boolean> Player.PlayerBrain/<>c::<>9__7_0
	Func_2_t8A7FDBBF0DF9128ED612BE2884B6FB536C1D46E2* ___U3CU3E9__7_0_2;
};

// Player.PlayerBrain/<>c

// System.Collections.Generic.List`1/Enumerator<System.IDisposable>

// System.Collections.Generic.List`1/Enumerator<System.IDisposable>

// System.Collections.Generic.List`1/Enumerator<InputReader.IEntityInputSource>

// System.Collections.Generic.List`1/Enumerator<InputReader.IEntityInputSource>

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

// System.Delegate

// System.Delegate

// Core.Movement.Controller.HorizontalMover

// Core.Movement.Controller.HorizontalMover

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.Func`2<InputReader.IEntityInputSource,System.Boolean>

// System.Func`2<InputReader.IEntityInputSource,System.Boolean>

// System.Action

// System.Action

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

// Core.Animation.AnimatorController

// Core.Animation.AnimatorController

// Core.GameLevelInitializer

// Core.GameLevelInitializer

// InputReader.GameUIInputView

// InputReader.GameUIInputView

// Joystick

// Joystick

// Player.PlayerEntity

// Player.PlayerEntity

// Core.Services.Updater.ProjectUpdater
struct ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_StaticFields
{
	// Core.Services.Updater.IProjectUpdater Core.Services.Updater.ProjectUpdater::Instance
	RuntimeObject* ___Instance_4;
};

// Core.Services.Updater.ProjectUpdater

// Core.Animation.UnityAnimatorController

// Core.Animation.UnityAnimatorController

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
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Single Player.PlayerBrain::GetHorizontalDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerBrain_GetHorizontalDirection_m4AEA3EA91CF370C2B88425FEC6E36AB34478734E (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* __this, const RuntimeMethod* method) ;
// System.Void Player.PlayerEntity::MoveHorizontally(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_MoveHorizontally_m66C3E3D8D99018E8499D2BEAAFD645CBAB15BFE6 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, float ___0_direction, const RuntimeMethod* method) ;
// System.Boolean Player.PlayerBrain::IsJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerBrain_IsJump_m7E1AAF5A49A7321868080795428319EB97918761 (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* __this, const RuntimeMethod* method) ;
// System.Void Player.PlayerEntity::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_Jump_m236605D656E45AB5A00031DE07E77B85774519C1 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) ;
// System.Boolean Player.PlayerBrain::IsFlip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerBrain_IsFlip_m8DE226648E4CE38A8662FB8A45D0D42F80315A63 (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* __this, const RuntimeMethod* method) ;
// System.Void Player.PlayerEntity::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_Run_m1BA1948DF039E07FBAEF827F83501B4F53AFB7AA (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<InputReader.IEntityInputSource>::GetEnumerator()
inline Enumerator_tAD5B81A878AEA50EEA0BAC78FBF2E28BCDEF57B8 List_1_GetEnumerator_m19CE80DD8D90240511C56BFA762C5A6F3A0E756E (List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tAD5B81A878AEA50EEA0BAC78FBF2E28BCDEF57B8 (*) (List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<InputReader.IEntityInputSource>::Dispose()
inline void Enumerator_Dispose_m50B55D363025F70B102664C9A9B9AB092C7D385B (Enumerator_tAD5B81A878AEA50EEA0BAC78FBF2E28BCDEF57B8* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAD5B81A878AEA50EEA0BAC78FBF2E28BCDEF57B8*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<InputReader.IEntityInputSource>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mCB59A20446FC08B1311F96CDBC6C2ABAE0600B19_inline (Enumerator_tAD5B81A878AEA50EEA0BAC78FBF2E28BCDEF57B8* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tAD5B81A878AEA50EEA0BAC78FBF2E28BCDEF57B8*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<InputReader.IEntityInputSource>::MoveNext()
inline bool Enumerator_MoveNext_m0D8F6A0608B074FBA1F71F8995BC3070775EC224 (Enumerator_tAD5B81A878AEA50EEA0BAC78FBF2E28BCDEF57B8* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAD5B81A878AEA50EEA0BAC78FBF2E28BCDEF57B8*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Func`2<InputReader.IEntityInputSource,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m637A52C3B19A8D0A2C697D46B0268C78A7030029 (Func_2_t8A7FDBBF0DF9128ED612BE2884B6FB536C1D46E2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t8A7FDBBF0DF9128ED612BE2884B6FB536C1D46E2*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Boolean System.Linq.Enumerable::Any<InputReader.IEntityInputSource>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline bool Enumerable_Any_TisIEntityInputSource_t4378C41DD82394E65AEC0E2A4B4C9D2FE36DCA63_m62039D9BC6B669CE8F62017CBC2E1AC3A9CA8327 (RuntimeObject* ___0_source, Func_2_t8A7FDBBF0DF9128ED612BE2884B6FB536C1D46E2* ___1_predicate, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_t8A7FDBBF0DF9128ED612BE2884B6FB536C1D46E2*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_mF6C6AC8DF8971883615734832D09C9210B956F0F_gshared)(___0_source, ___1_predicate, method);
}
// System.Void Player.PlayerBrain/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDB495E4EF44CB795B0B7FAC5AB4B8FC3577A43F4 (U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Core.Movement.Controller.HorizontalMover::.ctor(UnityEngine.Rigidbody2D,Core.Movement.Data.HorizontalMovementData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalMover__ctor_m548D62B9DD8CBCA8FDF0550356F2950E5847C17D (HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* __this, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___0_rigidbody2D, HorizontalMovementData_t1E808A175F84676BA8936A6B733C41C9B6480F86* ___1_horizontalMovementData, const RuntimeMethod* method) ;
// System.Void Core.Movement.Controller.Jumper::.ctor(UnityEngine.Rigidbody2D,Core.Movement.Data.JumpData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jumper__ctor_m50A8AA8A0238C6DC7641C79B340AE18B7626FC3C (Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* __this, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___0_rigidbody2D, JumpData_tC2119A0CBD84F68709D556AAC474A3B3792BFA37* ___1_jumpData, const RuntimeMethod* method) ;
// System.Boolean Core.Movement.Controller.Jumper::get_IsJumping()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Jumper_get_IsJumping_m1BA2F6DA115F5A897CDCE7EC507ACEE325A0CB45_inline (Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* __this, const RuntimeMethod* method) ;
// System.Void Player.PlayerEntity::ResetJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_ResetJump_m31C0D9C534E0072F2C05E4DFA861C8DE526C0B77 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) ;
// System.Boolean Core.Movement.Controller.Jumper::get_IsFalling()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Jumper_get_IsFalling_mA854112E191870536C674FBA236A68EBE045E408_inline (Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* __this, const RuntimeMethod* method) ;
// System.Void Player.PlayerEntity::ResetFall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_ResetFall_mF285CDEB2B3727A3EC3CFEF087AAB3B10831BBB0 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) ;
// System.Void Player.PlayerEntity::UpdateFall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_UpdateFall_m42E19200B92AA326E1B91B7DD34340AED0DA0791 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) ;
// System.Void Player.PlayerEntity::UpdateAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_UpdateAnimation_m546043BF03BE27A74615C1235CC008D39B77DEB2 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) ;
// System.Void Core.Movement.Controller.HorizontalMover::MoveHorizontally(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalMover_MoveHorizontally_m79E4AAA0CF3D9830C7087A564026219368C738D7 (HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* __this, float ___0_direction, const RuntimeMethod* method) ;
// System.Void Core.Movement.Controller.HorizontalMover::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalMover_Run_mFCF3711DCC5740CAD0E9D11D61AEE085898B5BF5 (HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* __this, const RuntimeMethod* method) ;
// System.Boolean Core.Movement.Controller.HorizontalMover::get_IsRunning()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HorizontalMover_get_IsRunning_m9D42FE0BBDC2641B16DCA6F3A416D1FD44BDCA17_inline (HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* __this, const RuntimeMethod* method) ;
// System.Void Core.Movement.Controller.Jumper::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jumper_Jump_mBC5D77A18609B9FB033977AC67E5C7E1F2B28E45 (Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* __this, const RuntimeMethod* method) ;
// System.Void Core.Movement.Controller.Jumper::UpdateFall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jumper_UpdateFall_mF4B3648D4E62D0933426EABF23A1E0B1AD6FBFD1 (Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* __this, const RuntimeMethod* method) ;
// System.Void Core.Movement.Controller.Jumper::ResetJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jumper_ResetJump_mEDCB2D428C13E12E1788AD5D96C1F3AE849B0744 (Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* __this, const RuntimeMethod* method) ;
// System.Void Core.Movement.Controller.Jumper::ResetFall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jumper_ResetFall_m7B581CE2BBBDA0E9D2AAF8B8AF80D610E6D6DCCE (Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* __this, const RuntimeMethod* method) ;
// System.Void Core.Animation.AnimatorController::PlayAnimation(Core.Animation.AnimationType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController_PlayAnimation_mC5644D1CAFB8663740DB68C5B8E8CB2694687B78 (AnimatorController_tA6B0441AB255A23C190754F0988BC60EC8D6EB6F* __this, int32_t ___0_animationType, bool ___1_active, const RuntimeMethod* method) ;
// System.Boolean Core.Movement.Controller.HorizontalMover::get_IsMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HorizontalMover_get_IsMoving_m75A735A253E6E1755AD8F7DFC37588FD23645BB9 (HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Player.PlayerBrain::.ctor(Player.PlayerEntity,System.Collections.Generic.List`1<InputReader.IEntityInputSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBrain__ctor_m6BFAEB9375F1316C006F356430EAF59F70850E46 (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* __this, PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* ___0_playerEntity, List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9* ___1_inputSources, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// System.Void InputReader.ExternalDevicesInputReader::set_Jump(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExternalDevicesInputReader_set_Jump_mAF8EB5562D595F9399649C149979EC53E37D9B6A_inline (ExternalDevicesInputReader_t7A5FA96C19A956DAA2EB6948F201F1CAB0D3C189* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void InputReader.ExternalDevicesInputReader::set_Flip(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExternalDevicesInputReader_set_Flip_m8B31E4EC552EC5DD277600C359B151141C9DC0B5_inline (ExternalDevicesInputReader_t7A5FA96C19A956DAA2EB6948F201F1CAB0D3C189* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___0_buttonName, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
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
// System.Void InputReader.GameUIInputView::set_Jump(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameUIInputView_set_Jump_mB862C5C8FA87A49E50FD9AA81C69D09FF6BAB2DC_inline (GameUIInputView_tA29AB2FF9BDACA145CD7E1B95E05507ED401F233* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void InputReader.GameUIInputView::set_Flip(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameUIInputView_set_Flip_mC6D3E7C9334B6481C0CEA3A28B2AB2025C361F81_inline (GameUIInputView_tA29AB2FF9BDACA145CD7E1B95E05507ED401F233* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.IDisposable>::.ctor()
inline void List_1__ctor_mB4C51AD04BB1308274A370FED1FA4A1651C5766F (List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Core.Services.Updater.ProjectUpdater>()
inline ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275* GameObject_AddComponent_TisProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_m77B0DEB88CE34C8F371ECC768829219F57CA50D7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void InputReader.ExternalDevicesInputReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalDevicesInputReader__ctor_mB1E7D92264C7FA1DBD8583DC9C980BE5FE23313A (ExternalDevicesInputReader_t7A5FA96C19A956DAA2EB6948F201F1CAB0D3C189* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.IDisposable>::Add(T)
inline void List_1_Add_m3E57006B1E4E3BF3DC969B90445C1E58B246619D_inline (List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<InputReader.IEntityInputSource>::.ctor()
inline void List_1__ctor_m8A57ADE3B85347E913E76E6BAA1F69F6451E2A99 (List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<InputReader.IEntityInputSource>::Add(T)
inline void List_1_Add_mC0DBFAB7023A7FA0D6EFB3263C036305E5D817D9_inline (List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void Player.PlayerSystem::.ctor(Player.PlayerEntity,System.Collections.Generic.List`1<InputReader.IEntityInputSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSystem__ctor_mA6FFD37282362968A991D0F3EE1FD2E90EC1E4C4 (PlayerSystem_t3CAC4507763EB2DC77E54ABFAF5FA5AFD8C3F664* __this, PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* ___0_playerEntity, List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9* ___1_inputSources, const RuntimeMethod* method) ;
// System.Boolean Core.Services.Updater.ProjectUpdater::get_IsPaused()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ProjectUpdater_get_IsPaused_mABADC416852600EDAC128EB34B7442F277760A32_inline (ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275* __this, const RuntimeMethod* method) ;
// System.Void Core.Services.Updater.ProjectUpdater::set_IsPaused(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectUpdater_set_IsPaused_mDE783562D3D155565F1E039640DF581C75CCDCBB (ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.IDisposable>::GetEnumerator()
inline Enumerator_t5B4557CF8F113261AC8BF5AEF969FC63B7DC6526 List_1_GetEnumerator_mF880C94E895B0EB2E47D22DA350EF630143827B9 (List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5B4557CF8F113261AC8BF5AEF969FC63B7DC6526 (*) (List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.IDisposable>::Dispose()
inline void Enumerator_Dispose_m46E201ADBB9FFC2822AF4F5B468D9BBF486984F1 (Enumerator_t5B4557CF8F113261AC8BF5AEF969FC63B7DC6526* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5B4557CF8F113261AC8BF5AEF969FC63B7DC6526*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.IDisposable>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m57DB9D7263FBD8C40DF805F4F4B4CD0C73CA8E9C_inline (Enumerator_t5B4557CF8F113261AC8BF5AEF969FC63B7DC6526* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t5B4557CF8F113261AC8BF5AEF969FC63B7DC6526*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.IDisposable>::MoveNext()
inline bool Enumerator_MoveNext_m20E6D92CF08DAD013CC467F343D0A075EC9AF121 (Enumerator_t5B4557CF8F113261AC8BF5AEF969FC63B7DC6526* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5B4557CF8F113261AC8BF5AEF969FC63B7DC6526*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean Core.Movement.Data.HorizontalMovementData::get_FaceRight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HorizontalMovementData_get_FaceRight_mA687E61C31EAE566D99ED24E6D94A74929B9DBCC_inline (HorizontalMovementData_t1E808A175F84676BA8936A6B733C41C9B6480F86* __this, const RuntimeMethod* method) ;
// System.Void Core.Movement.Controller.HorizontalMover::SetDirection(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalMover_SetDirection_mCC3422357AF3ED88726292CC691D9ECBC2DBD5FA (HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* __this, float ___0_direction, const RuntimeMethod* method) ;
// System.Single Core.Movement.Data.HorizontalMovementData::get_HorizontalSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HorizontalMovementData_get_HorizontalSpeed_m40D3E4E8C1B831AB9493B4523644D6B5AA935B42_inline (HorizontalMovementData_t1E808A175F84676BA8936A6B733C41C9B6480F86* __this, const RuntimeMethod* method) ;
// System.Single Core.Movement.Data.HorizontalMovementData::get_RunSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HorizontalMovementData_get_RunSpeed_m50E7616016C37E97D75A000CF903E81AE44E3B48_inline (HorizontalMovementData_t1E808A175F84676BA8936A6B733C41C9B6480F86* __this, const RuntimeMethod* method) ;
// System.Void Core.Movement.Controller.HorizontalMover::Move(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalMover_Move_m81C6A36F033A0C33728550B3EF2BB72B6A7E0842 (HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* __this, float ___0_direction, float ___1_speed, const RuntimeMethod* method) ;
// System.Void Core.Movement.Controller.HorizontalMover::set_IsRunning(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HorizontalMover_set_IsRunning_m883907D3913CBAF8D5A97EE56FE823A07A76607D_inline (HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void Core.Movement.Controller.HorizontalMover::FlipHorizontally()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalMover_FlipHorizontally_m25DEF877AFD8315CC75BA8E2AA73390C0129A93A (HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___0_xAngle, float ___1_yAngle, float ___2_zAngle, const RuntimeMethod* method) ;
// System.Void Core.Movement.Controller.Jumper::set_IsJumping(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Jumper_set_IsJumping_m2C5712326D8CEEA180E79EBD748AE0B63F8E3219_inline (Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Single Core.Movement.Data.JumpData::get_JumpForce()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float JumpData_get_JumpForce_m62AEA00BBA6BE8B93C2291784C37278D9554D111_inline (JumpData_tC2119A0CBD84F68709D556AAC474A3B3792BFA37* __this, const RuntimeMethod* method) ;
// System.Void Core.Movement.Controller.Jumper::set_IsFalling(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Jumper_set_IsFalling_mB621C8AAC1B6571CADE81CC30AB8DA25E274117F_inline (Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void Core.Animation.AnimatorController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController__ctor_m01D4C93D46DCFC08B245CE088C0B8D81E4994AAC (AnimatorController_tA6B0441AB255A23C190754F0988BC60EC8D6EB6F* __this, const RuntimeMethod* method) ;
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
// System.Void Player.PlayerBrain::.ctor(Player.PlayerEntity,System.Collections.Generic.List`1<InputReader.IEntityInputSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBrain__ctor_m6BFAEB9375F1316C006F356430EAF59F70850E46 (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* __this, PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* ___0_playerEntity, List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9* ___1_inputSources, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProjectUpdater_tA3E1075699990B2710C003DAF5A372B8BF5ACAD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerBrain_OnFixedUpdate_m8D2DD5E895FC850437E9C85A92D1BC3E12D8DCBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PlayerBrain(PlayerEntity playerEntity, List<IEntityInputSource> inputSources)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _playerEntity = playerEntity;
		PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* L_0 = ___0_playerEntity;
		__this->____playerEntity_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____playerEntity_0), (void*)L_0);
		// _inputSources = inputSources;
		List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9* L_1 = ___1_inputSources;
		__this->____inputSources_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____inputSources_1), (void*)L_1);
		// ProjectUpdater.Instance.FixedUpdateCalled += OnFixedUpdate;
		RuntimeObject* L_2 = ((ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_StaticFields*)il2cpp_codegen_static_fields_for(ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_il2cpp_TypeInfo_var))->___Instance_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)PlayerBrain_OnFixedUpdate_m8D2DD5E895FC850437E9C85A92D1BC3E12D8DCBA_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(2 /* System.Void Core.Services.Updater.IProjectUpdater::add_FixedUpdateCalled(System.Action) */, IProjectUpdater_tA3E1075699990B2710C003DAF5A372B8BF5ACAD2_il2cpp_TypeInfo_var, L_2, L_3);
		// }
		return;
	}
}
// System.Void Player.PlayerBrain::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBrain_Dispose_m97CD8087D3A5A86FAC54AFDDEE62F36A600203A0 (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProjectUpdater_tA3E1075699990B2710C003DAF5A372B8BF5ACAD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerBrain_OnFixedUpdate_m8D2DD5E895FC850437E9C85A92D1BC3E12D8DCBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Dispose() => ProjectUpdater.Instance.FixedUpdateCalled -= OnFixedUpdate;
		RuntimeObject* L_0 = ((ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_StaticFields*)il2cpp_codegen_static_fields_for(ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_il2cpp_TypeInfo_var))->___Instance_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)PlayerBrain_OnFixedUpdate_m8D2DD5E895FC850437E9C85A92D1BC3E12D8DCBA_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(3 /* System.Void Core.Services.Updater.IProjectUpdater::remove_FixedUpdateCalled(System.Action) */, IProjectUpdater_tA3E1075699990B2710C003DAF5A372B8BF5ACAD2_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void Player.PlayerBrain::OnFixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBrain_OnFixedUpdate_m8D2DD5E895FC850437E9C85A92D1BC3E12D8DCBA (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m50B55D363025F70B102664C9A9B9AB092C7D385B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0D8F6A0608B074FBA1F71F8995BC3070775EC224_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCB59A20446FC08B1311F96CDBC6C2ABAE0600B19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEntityInputSource_t4378C41DD82394E65AEC0E2A4B4C9D2FE36DCA63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m19CE80DD8D90240511C56BFA762C5A6F3A0E756E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tAD5B81A878AEA50EEA0BAC78FBF2E28BCDEF57B8 V_0;
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
		// if (IsFlip()) _playerEntity.Run();
		bool L_4;
		L_4 = PlayerBrain_IsFlip_m8DE226648E4CE38A8662FB8A45D0D42F80315A63(__this, NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		// if (IsFlip()) _playerEntity.Run();
		PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* L_5 = __this->____playerEntity_0;
		NullCheck(L_5);
		PlayerEntity_Run_m1BA1948DF039E07FBAEF827F83501B4F53AFB7AA(L_5, NULL);
	}

IL_0037:
	{
		// foreach (var entityInputSource in _inputSources)
		List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9* L_6 = __this->____inputSources_1;
		NullCheck(L_6);
		Enumerator_tAD5B81A878AEA50EEA0BAC78FBF2E28BCDEF57B8 L_7;
		L_7 = List_1_GetEnumerator_m19CE80DD8D90240511C56BFA762C5A6F3A0E756E(L_6, List_1_GetEnumerator_m19CE80DD8D90240511C56BFA762C5A6F3A0E756E_RuntimeMethod_var);
		V_0 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m50B55D363025F70B102664C9A9B9AB092C7D385B((&V_0), Enumerator_Dispose_m50B55D363025F70B102664C9A9B9AB092C7D385B_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0051_1;
			}

IL_0045_1:
			{
				// foreach (var entityInputSource in _inputSources)
				RuntimeObject* L_8;
				L_8 = Enumerator_get_Current_mCB59A20446FC08B1311F96CDBC6C2ABAE0600B19_inline((&V_0), Enumerator_get_Current_mCB59A20446FC08B1311F96CDBC6C2ABAE0600B19_RuntimeMethod_var);
				// entityInputSource.ResetOneTimeAction();
				NullCheck(L_8);
				InterfaceActionInvoker0::Invoke(3 /* System.Void InputReader.IEntityInputSource::ResetOneTimeAction() */, IEntityInputSource_t4378C41DD82394E65AEC0E2A4B4C9D2FE36DCA63_il2cpp_TypeInfo_var, L_8);
			}

IL_0051_1:
			{
				// foreach (var entityInputSource in _inputSources)
				bool L_9;
				L_9 = Enumerator_MoveNext_m0D8F6A0608B074FBA1F71F8995BC3070775EC224((&V_0), Enumerator_MoveNext_m0D8F6A0608B074FBA1F71F8995BC3070775EC224_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0045_1;
				}
			}
			{
				goto IL_006a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006a:
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m50B55D363025F70B102664C9A9B9AB092C7D385B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0D8F6A0608B074FBA1F71F8995BC3070775EC224_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCB59A20446FC08B1311F96CDBC6C2ABAE0600B19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEntityInputSource_t4378C41DD82394E65AEC0E2A4B4C9D2FE36DCA63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m19CE80DD8D90240511C56BFA762C5A6F3A0E756E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tAD5B81A878AEA50EEA0BAC78FBF2E28BCDEF57B8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	float V_2 = 0.0f;
	{
		// foreach (var entityInputSource in _inputSources)
		List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9* L_0 = __this->____inputSources_1;
		NullCheck(L_0);
		Enumerator_tAD5B81A878AEA50EEA0BAC78FBF2E28BCDEF57B8 L_1;
		L_1 = List_1_GetEnumerator_m19CE80DD8D90240511C56BFA762C5A6F3A0E756E(L_0, List_1_GetEnumerator_m19CE80DD8D90240511C56BFA762C5A6F3A0E756E_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0037:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m50B55D363025F70B102664C9A9B9AB092C7D385B((&V_0), Enumerator_Dispose_m50B55D363025F70B102664C9A9B9AB092C7D385B_RuntimeMethod_var);
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
				L_2 = Enumerator_get_Current_mCB59A20446FC08B1311F96CDBC6C2ABAE0600B19_inline((&V_0), Enumerator_get_Current_mCB59A20446FC08B1311F96CDBC6C2ABAE0600B19_RuntimeMethod_var);
				V_1 = L_2;
				// if (entityInputSource.HorizontalDirection == 0) continue;
				RuntimeObject* L_3 = V_1;
				NullCheck(L_3);
				float L_4;
				L_4 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single InputReader.IEntityInputSource::get_HorizontalDirection() */, IEntityInputSource_t4378C41DD82394E65AEC0E2A4B4C9D2FE36DCA63_il2cpp_TypeInfo_var, L_3);
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
				L_6 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single InputReader.IEntityInputSource::get_HorizontalDirection() */, IEntityInputSource_t4378C41DD82394E65AEC0E2A4B4C9D2FE36DCA63_il2cpp_TypeInfo_var, L_5);
				V_2 = L_6;
				goto IL_004b;
			}

IL_002c_1:
			{
				// foreach (var entityInputSource in _inputSources)
				bool L_7;
				L_7 = Enumerator_MoveNext_m0D8F6A0608B074FBA1F71F8995BC3070775EC224((&V_0), Enumerator_MoveNext_m0D8F6A0608B074FBA1F71F8995BC3070775EC224_RuntimeMethod_var);
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisIEntityInputSource_t4378C41DD82394E65AEC0E2A4B4C9D2FE36DCA63_m62039D9BC6B669CE8F62017CBC2E1AC3A9CA8327_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t8A7FDBBF0DF9128ED612BE2884B6FB536C1D46E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CIsJumpU3Eb__6_0_m1102586D8B52B332AC6BCFEB26C1B52E63AEF8CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t8A7FDBBF0DF9128ED612BE2884B6FB536C1D46E2* G_B2_0 = NULL;
	List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9* G_B2_1 = NULL;
	Func_2_t8A7FDBBF0DF9128ED612BE2884B6FB536C1D46E2* G_B1_0 = NULL;
	List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9* G_B1_1 = NULL;
	{
		// private bool IsJump() => _inputSources.Any(source => source.Jump);
		List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9* L_0 = __this->____inputSources_1;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var);
		Func_2_t8A7FDBBF0DF9128ED612BE2884B6FB536C1D46E2* L_1 = ((U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1;
		Func_2_t8A7FDBBF0DF9128ED612BE2884B6FB536C1D46E2* L_2 = L_1;
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
		Func_2_t8A7FDBBF0DF9128ED612BE2884B6FB536C1D46E2* L_4 = (Func_2_t8A7FDBBF0DF9128ED612BE2884B6FB536C1D46E2*)il2cpp_codegen_object_new(Func_2_t8A7FDBBF0DF9128ED612BE2884B6FB536C1D46E2_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_m637A52C3B19A8D0A2C697D46B0268C78A7030029(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CIsJumpU3Eb__6_0_m1102586D8B52B332AC6BCFEB26C1B52E63AEF8CA_RuntimeMethod_var), NULL);
		Func_2_t8A7FDBBF0DF9128ED612BE2884B6FB536C1D46E2* L_5 = L_4;
		((U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		bool L_6;
		L_6 = Enumerable_Any_TisIEntityInputSource_t4378C41DD82394E65AEC0E2A4B4C9D2FE36DCA63_m62039D9BC6B669CE8F62017CBC2E1AC3A9CA8327(G_B2_1, G_B2_0, Enumerable_Any_TisIEntityInputSource_t4378C41DD82394E65AEC0E2A4B4C9D2FE36DCA63_m62039D9BC6B669CE8F62017CBC2E1AC3A9CA8327_RuntimeMethod_var);
		return L_6;
	}
}
// System.Boolean Player.PlayerBrain::IsFlip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerBrain_IsFlip_m8DE226648E4CE38A8662FB8A45D0D42F80315A63 (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisIEntityInputSource_t4378C41DD82394E65AEC0E2A4B4C9D2FE36DCA63_m62039D9BC6B669CE8F62017CBC2E1AC3A9CA8327_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t8A7FDBBF0DF9128ED612BE2884B6FB536C1D46E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CIsFlipU3Eb__7_0_mC7405C4E40DF2CECC89E779361AA4A82077A137C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t8A7FDBBF0DF9128ED612BE2884B6FB536C1D46E2* G_B2_0 = NULL;
	List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9* G_B2_1 = NULL;
	Func_2_t8A7FDBBF0DF9128ED612BE2884B6FB536C1D46E2* G_B1_0 = NULL;
	List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9* G_B1_1 = NULL;
	{
		// private bool IsFlip() => _inputSources.Any(source => source.Flip);
		List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9* L_0 = __this->____inputSources_1;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var);
		Func_2_t8A7FDBBF0DF9128ED612BE2884B6FB536C1D46E2* L_1 = ((U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_2;
		Func_2_t8A7FDBBF0DF9128ED612BE2884B6FB536C1D46E2* L_2 = L_1;
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
		Func_2_t8A7FDBBF0DF9128ED612BE2884B6FB536C1D46E2* L_4 = (Func_2_t8A7FDBBF0DF9128ED612BE2884B6FB536C1D46E2*)il2cpp_codegen_object_new(Func_2_t8A7FDBBF0DF9128ED612BE2884B6FB536C1D46E2_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_m637A52C3B19A8D0A2C697D46B0268C78A7030029(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CIsFlipU3Eb__7_0_mC7405C4E40DF2CECC89E779361AA4A82077A137C_RuntimeMethod_var), NULL);
		Func_2_t8A7FDBBF0DF9128ED612BE2884B6FB536C1D46E2* L_5 = L_4;
		((U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_2), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		bool L_6;
		L_6 = Enumerable_Any_TisIEntityInputSource_t4378C41DD82394E65AEC0E2A4B4C9D2FE36DCA63_m62039D9BC6B669CE8F62017CBC2E1AC3A9CA8327(G_B2_1, G_B2_0, Enumerable_Any_TisIEntityInputSource_t4378C41DD82394E65AEC0E2A4B4C9D2FE36DCA63_m62039D9BC6B669CE8F62017CBC2E1AC3A9CA8327_RuntimeMethod_var);
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
// System.Boolean Player.PlayerBrain/<>c::<IsJump>b__6_0(InputReader.IEntityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CIsJumpU3Eb__6_0_m1102586D8B52B332AC6BCFEB26C1B52E63AEF8CA (U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEntityInputSource_t4378C41DD82394E65AEC0E2A4B4C9D2FE36DCA63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool IsJump() => _inputSources.Any(source => source.Jump);
		RuntimeObject* L_0 = ___0_source;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean InputReader.IEntityInputSource::get_Jump() */, IEntityInputSource_t4378C41DD82394E65AEC0E2A4B4C9D2FE36DCA63_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Player.PlayerBrain/<>c::<IsFlip>b__7_0(InputReader.IEntityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CIsFlipU3Eb__7_0_mC7405C4E40DF2CECC89E779361AA4A82077A137C (U3CU3Ec_tD7DDC2F65FB5DC2370F00596ECD1557FD9322E41* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEntityInputSource_t4378C41DD82394E65AEC0E2A4B4C9D2FE36DCA63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool IsFlip() => _inputSources.Any(source => source.Flip);
		RuntimeObject* L_0 = ___0_source;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean InputReader.IEntityInputSource::get_Flip() */, IEntityInputSource_t4378C41DD82394E65AEC0E2A4B4C9D2FE36DCA63_il2cpp_TypeInfo_var, L_0);
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _rigidbody2D = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->____rigidbody2D_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rigidbody2D_7), (void*)L_0);
		// _horizontalMover = new HorizontalMover(_rigidbody2D, _horizontalMovementData);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1 = __this->____rigidbody2D_7;
		HorizontalMovementData_t1E808A175F84676BA8936A6B733C41C9B6480F86* L_2 = __this->____horizontalMovementData_5;
		HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* L_3 = (HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E*)il2cpp_codegen_object_new(HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HorizontalMover__ctor_m548D62B9DD8CBCA8FDF0550356F2950E5847C17D(L_3, L_1, L_2, NULL);
		__this->____horizontalMover_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____horizontalMover_8), (void*)L_3);
		// _jumper = new Jumper(_rigidbody2D, _jumpData);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4 = __this->____rigidbody2D_7;
		JumpData_tC2119A0CBD84F68709D556AAC474A3B3792BFA37* L_5 = __this->____jumpData_6;
		Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* L_6 = (Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2*)il2cpp_codegen_object_new(Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Jumper__ctor_m50A8AA8A0238C6DC7641C79B340AE18B7626FC3C(L_6, L_4, L_5, NULL);
		__this->____jumper_9 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jumper_9), (void*)L_6);
		// }
		return;
	}
}
// System.Void Player.PlayerEntity::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_Update_m3C948F06F728444F4BBCF9453CA8A8EDF0DF39D0 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) 
{
	{
		// if (_jumper.IsJumping) ResetJump();
		Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* L_0 = __this->____jumper_9;
		NullCheck(L_0);
		bool L_1;
		L_1 = Jumper_get_IsJumping_m1BA2F6DA115F5A897CDCE7EC507ACEE325A0CB45_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if (_jumper.IsJumping) ResetJump();
		PlayerEntity_ResetJump_m31C0D9C534E0072F2C05E4DFA861C8DE526C0B77(__this, NULL);
	}

IL_0013:
	{
		// if (_jumper.IsFalling) ResetFall();
		Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* L_2 = __this->____jumper_9;
		NullCheck(L_2);
		bool L_3;
		L_3 = Jumper_get_IsFalling_mA854112E191870536C674FBA236A68EBE045E408_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// if (_jumper.IsFalling) ResetFall();
		PlayerEntity_ResetFall_mF285CDEB2B3727A3EC3CFEF087AAB3B10831BBB0(__this, NULL);
	}

IL_0026:
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
		// public void MoveHorizontally(float direction) => _horizontalMover.MoveHorizontally(direction);
		HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* L_0 = __this->____horizontalMover_8;
		float L_1 = ___0_direction;
		NullCheck(L_0);
		HorizontalMover_MoveHorizontally_m79E4AAA0CF3D9830C7087A564026219368C738D7(L_0, L_1, NULL);
		return;
	}
}
// System.Void Player.PlayerEntity::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_Run_m1BA1948DF039E07FBAEF827F83501B4F53AFB7AA (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) 
{
	{
		// public void Run() => _horizontalMover.Run();
		HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* L_0 = __this->____horizontalMover_8;
		NullCheck(L_0);
		HorizontalMover_Run_mFCF3711DCC5740CAD0E9D11D61AEE085898B5BF5(L_0, NULL);
		return;
	}
}
// System.Void Player.PlayerEntity::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_Jump_m236605D656E45AB5A00031DE07E77B85774519C1 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) 
{
	{
		// if (_horizontalMover.IsRunning) Run();
		HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* L_0 = __this->____horizontalMover_8;
		NullCheck(L_0);
		bool L_1;
		L_1 = HorizontalMover_get_IsRunning_m9D42FE0BBDC2641B16DCA6F3A416D1FD44BDCA17_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if (_horizontalMover.IsRunning) Run();
		PlayerEntity_Run_m1BA1948DF039E07FBAEF827F83501B4F53AFB7AA(__this, NULL);
	}

IL_0013:
	{
		// _jumper.Jump();
		Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* L_2 = __this->____jumper_9;
		NullCheck(L_2);
		Jumper_Jump_mBC5D77A18609B9FB033977AC67E5C7E1F2B28E45(L_2, NULL);
		// }
		return;
	}
}
// System.Void Player.PlayerEntity::UpdateFall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_UpdateFall_m42E19200B92AA326E1B91B7DD34340AED0DA0791 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) 
{
	{
		// private void UpdateFall() => _jumper.UpdateFall();
		Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* L_0 = __this->____jumper_9;
		NullCheck(L_0);
		Jumper_UpdateFall_mF4B3648D4E62D0933426EABF23A1E0B1AD6FBFD1(L_0, NULL);
		return;
	}
}
// System.Void Player.PlayerEntity::ResetJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_ResetJump_m31C0D9C534E0072F2C05E4DFA861C8DE526C0B77 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) 
{
	{
		// private void ResetJump() => _jumper.ResetJump();
		Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* L_0 = __this->____jumper_9;
		NullCheck(L_0);
		Jumper_ResetJump_mEDCB2D428C13E12E1788AD5D96C1F3AE849B0744(L_0, NULL);
		return;
	}
}
// System.Void Player.PlayerEntity::ResetFall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_ResetFall_mF285CDEB2B3727A3EC3CFEF087AAB3B10831BBB0 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) 
{
	{
		// private void ResetFall() => _jumper.ResetFall();
		Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* L_0 = __this->____jumper_9;
		NullCheck(L_0);
		Jumper_ResetFall_m7B581CE2BBBDA0E9D2AAF8B8AF80D610E6D6DCCE(L_0, NULL);
		return;
	}
}
// System.Void Player.PlayerEntity::UpdateAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEntity_UpdateAnimation_m546043BF03BE27A74615C1235CC008D39B77DEB2 (PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* __this, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	AnimatorController_tA6B0441AB255A23C190754F0988BC60EC8D6EB6F* G_B2_1 = NULL;
	int32_t G_B1_0 = 0;
	AnimatorController_tA6B0441AB255A23C190754F0988BC60EC8D6EB6F* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	AnimatorController_tA6B0441AB255A23C190754F0988BC60EC8D6EB6F* G_B3_2 = NULL;
	{
		// _animator.PlayAnimation(AnimationType.Idle, true);
		AnimatorController_tA6B0441AB255A23C190754F0988BC60EC8D6EB6F* L_0 = __this->____animator_4;
		NullCheck(L_0);
		AnimatorController_PlayAnimation_mC5644D1CAFB8663740DB68C5B8E8CB2694687B78(L_0, 0, (bool)1, NULL);
		// _animator.PlayAnimation(AnimationType.Move, _horizontalMover.IsMoving);
		AnimatorController_tA6B0441AB255A23C190754F0988BC60EC8D6EB6F* L_1 = __this->____animator_4;
		HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* L_2 = __this->____horizontalMover_8;
		NullCheck(L_2);
		bool L_3;
		L_3 = HorizontalMover_get_IsMoving_m75A735A253E6E1755AD8F7DFC37588FD23645BB9(L_2, NULL);
		NullCheck(L_1);
		AnimatorController_PlayAnimation_mC5644D1CAFB8663740DB68C5B8E8CB2694687B78(L_1, 1, L_3, NULL);
		// _animator.PlayAnimation(AnimationType.Run, _horizontalMover.IsRunning && _horizontalMover.IsMoving);
		AnimatorController_tA6B0441AB255A23C190754F0988BC60EC8D6EB6F* L_4 = __this->____animator_4;
		HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* L_5 = __this->____horizontalMover_8;
		NullCheck(L_5);
		bool L_6;
		L_6 = HorizontalMover_get_IsRunning_m9D42FE0BBDC2641B16DCA6F3A416D1FD44BDCA17_inline(L_5, NULL);
		G_B1_0 = 2;
		G_B1_1 = L_4;
		if (!L_6)
		{
			G_B2_0 = 2;
			G_B2_1 = L_4;
			goto IL_0045;
		}
	}
	{
		HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* L_7 = __this->____horizontalMover_8;
		NullCheck(L_7);
		bool L_8;
		L_8 = HorizontalMover_get_IsMoving_m75A735A253E6E1755AD8F7DFC37588FD23645BB9(L_7, NULL);
		G_B3_0 = ((int32_t)(L_8));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0046;
	}

IL_0045:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0046:
	{
		NullCheck(G_B3_2);
		AnimatorController_PlayAnimation_mC5644D1CAFB8663740DB68C5B8E8CB2694687B78(G_B3_2, G_B3_1, (bool)G_B3_0, NULL);
		// _animator.PlayAnimation(AnimationType.Jump, _jumper.IsJumping);
		AnimatorController_tA6B0441AB255A23C190754F0988BC60EC8D6EB6F* L_9 = __this->____animator_4;
		Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* L_10 = __this->____jumper_9;
		NullCheck(L_10);
		bool L_11;
		L_11 = Jumper_get_IsJumping_m1BA2F6DA115F5A897CDCE7EC507ACEE325A0CB45_inline(L_10, NULL);
		NullCheck(L_9);
		AnimatorController_PlayAnimation_mC5644D1CAFB8663740DB68C5B8E8CB2694687B78(L_9, 3, L_11, NULL);
		// _animator.PlayAnimation(AnimationType.Fall, _jumper.IsFalling);
		AnimatorController_tA6B0441AB255A23C190754F0988BC60EC8D6EB6F* L_12 = __this->____animator_4;
		Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* L_13 = __this->____jumper_9;
		NullCheck(L_13);
		bool L_14;
		L_14 = Jumper_get_IsFalling_mA854112E191870536C674FBA236A68EBE045E408_inline(L_13, NULL);
		NullCheck(L_12);
		AnimatorController_PlayAnimation_mC5644D1CAFB8663740DB68C5B8E8CB2694687B78(L_12, 4, L_14, NULL);
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
// System.Void Player.PlayerSystem::.ctor(Player.PlayerEntity,System.Collections.Generic.List`1<InputReader.IEntityInputSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSystem__ctor_mA6FFD37282362968A991D0F3EE1FD2E90EC1E4C4 (PlayerSystem_t3CAC4507763EB2DC77E54ABFAF5FA5AFD8C3F664* __this, PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* ___0_playerEntity, List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9* ___1_inputSources, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PlayerSystem(PlayerEntity playerEntity, List<IEntityInputSource> inputSources)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _playerEntity = playerEntity;
		PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* L_0 = ___0_playerEntity;
		__this->____playerEntity_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____playerEntity_0), (void*)L_0);
		// _playerBrain = new PlayerBrain(_playerEntity, inputSources);
		PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* L_1 = __this->____playerEntity_0;
		List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9* L_2 = ___1_inputSources;
		PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093* L_3 = (PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093*)il2cpp_codegen_object_new(PlayerBrain_t89E8EC9F94D33101C50D675353DA8FBE89819093_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		PlayerBrain__ctor_m6BFAEB9375F1316C006F356430EAF59F70850E46(L_3, L_1, L_2, NULL);
		__this->____playerBrain_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____playerBrain_1), (void*)L_3);
		// }
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
// System.Single InputReader.ExternalDevicesInputReader::get_HorizontalDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ExternalDevicesInputReader_get_HorizontalDirection_m44CF452942AA3E9B156174214F65B2546DD8FE5F (ExternalDevicesInputReader_t7A5FA96C19A956DAA2EB6948F201F1CAB0D3C189* __this, const RuntimeMethod* method) 
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
// System.Boolean InputReader.ExternalDevicesInputReader::get_Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExternalDevicesInputReader_get_Jump_m692916AFC0F74F392798593785A34C07A5C4D331 (ExternalDevicesInputReader_t7A5FA96C19A956DAA2EB6948F201F1CAB0D3C189* __this, const RuntimeMethod* method) 
{
	{
		// public bool Jump { get; private set; }
		bool L_0 = __this->___U3CJumpU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void InputReader.ExternalDevicesInputReader::set_Jump(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalDevicesInputReader_set_Jump_mAF8EB5562D595F9399649C149979EC53E37D9B6A (ExternalDevicesInputReader_t7A5FA96C19A956DAA2EB6948F201F1CAB0D3C189* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Jump { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CJumpU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean InputReader.ExternalDevicesInputReader::get_Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExternalDevicesInputReader_get_Flip_m582A3BBF376F9374091735A698BFA963B6F11C90 (ExternalDevicesInputReader_t7A5FA96C19A956DAA2EB6948F201F1CAB0D3C189* __this, const RuntimeMethod* method) 
{
	{
		// public bool Flip { get; private set; }
		bool L_0 = __this->___U3CFlipU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void InputReader.ExternalDevicesInputReader::set_Flip(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalDevicesInputReader_set_Flip_m8B31E4EC552EC5DD277600C359B151141C9DC0B5 (ExternalDevicesInputReader_t7A5FA96C19A956DAA2EB6948F201F1CAB0D3C189* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Flip { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CFlipU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void InputReader.ExternalDevicesInputReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalDevicesInputReader__ctor_mB1E7D92264C7FA1DBD8583DC9C980BE5FE23313A (ExternalDevicesInputReader_t7A5FA96C19A956DAA2EB6948F201F1CAB0D3C189* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalDevicesInputReader_OnUpdate_m2F93FEED877F3AFA2AC4A7868DF6DC5051ED981F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProjectUpdater_tA3E1075699990B2710C003DAF5A372B8BF5ACAD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ExternalDevicesInputReader()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// ProjectUpdater.Instance.UpdateCalled += OnUpdate;
		RuntimeObject* L_0 = ((ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_StaticFields*)il2cpp_codegen_static_fields_for(ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_il2cpp_TypeInfo_var))->___Instance_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)ExternalDevicesInputReader_OnUpdate_m2F93FEED877F3AFA2AC4A7868DF6DC5051ED981F_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Void Core.Services.Updater.IProjectUpdater::add_UpdateCalled(System.Action) */, IProjectUpdater_tA3E1075699990B2710C003DAF5A372B8BF5ACAD2_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void InputReader.ExternalDevicesInputReader::ResetOneTimeAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalDevicesInputReader_ResetOneTimeAction_m3A801A187E6193B07DE51E8039474EF49D114FED (ExternalDevicesInputReader_t7A5FA96C19A956DAA2EB6948F201F1CAB0D3C189* __this, const RuntimeMethod* method) 
{
	{
		// Jump = false;
		ExternalDevicesInputReader_set_Jump_mAF8EB5562D595F9399649C149979EC53E37D9B6A_inline(__this, (bool)0, NULL);
		// Flip = false;
		ExternalDevicesInputReader_set_Flip_m8B31E4EC552EC5DD277600C359B151141C9DC0B5_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void InputReader.ExternalDevicesInputReader::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalDevicesInputReader_OnUpdate_m2F93FEED877F3AFA2AC4A7868DF6DC5051ED981F (ExternalDevicesInputReader_t7A5FA96C19A956DAA2EB6948F201F1CAB0D3C189* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetButtonDown("Jump")) Jump = true;
		bool L_0;
		L_0 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (Input.GetButtonDown("Jump")) Jump = true;
		ExternalDevicesInputReader_set_Jump_mAF8EB5562D595F9399649C149979EC53E37D9B6A_inline(__this, (bool)1, NULL);
	}

IL_0013:
	{
		// if (Input.GetKeyDown(KeyCode.LeftControl)) Flip = true;
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)306), NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.LeftControl)) Flip = true;
		ExternalDevicesInputReader_set_Flip_m8B31E4EC552EC5DD277600C359B151141C9DC0B5_inline(__this, (bool)1, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void InputReader.ExternalDevicesInputReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalDevicesInputReader_Dispose_m5E470CC5A37ABC5DE126A75F5655F488EF830D1D (ExternalDevicesInputReader_t7A5FA96C19A956DAA2EB6948F201F1CAB0D3C189* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalDevicesInputReader_OnUpdate_m2F93FEED877F3AFA2AC4A7868DF6DC5051ED981F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProjectUpdater_tA3E1075699990B2710C003DAF5A372B8BF5ACAD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Dispose() => ProjectUpdater.Instance.UpdateCalled -= OnUpdate;
		RuntimeObject* L_0 = ((ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_StaticFields*)il2cpp_codegen_static_fields_for(ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_il2cpp_TypeInfo_var))->___Instance_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)ExternalDevicesInputReader_OnUpdate_m2F93FEED877F3AFA2AC4A7868DF6DC5051ED981F_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1 /* System.Void Core.Services.Updater.IProjectUpdater::remove_UpdateCalled(System.Action) */, IProjectUpdater_tA3E1075699990B2710C003DAF5A372B8BF5ACAD2_il2cpp_TypeInfo_var, L_0, L_1);
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
// System.Single InputReader.GameUIInputView::get_HorizontalDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameUIInputView_get_HorizontalDirection_mE1A49203CC2CF54876010D5A9665811771BD8FAC (GameUIInputView_tA29AB2FF9BDACA145CD7E1B95E05507ED401F233* __this, const RuntimeMethod* method) 
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
// System.Boolean InputReader.GameUIInputView::get_Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameUIInputView_get_Jump_mF685A1775D7181DFC1843B4391E8D461BA1FC442 (GameUIInputView_tA29AB2FF9BDACA145CD7E1B95E05507ED401F233* __this, const RuntimeMethod* method) 
{
	{
		// public bool Jump { get; private set; }
		bool L_0 = __this->___U3CJumpU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void InputReader.GameUIInputView::set_Jump(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUIInputView_set_Jump_mB862C5C8FA87A49E50FD9AA81C69D09FF6BAB2DC (GameUIInputView_tA29AB2FF9BDACA145CD7E1B95E05507ED401F233* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Jump { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CJumpU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Boolean InputReader.GameUIInputView::get_Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameUIInputView_get_Flip_mC471A8D710670A961E27B5B6BAD7038180618214 (GameUIInputView_tA29AB2FF9BDACA145CD7E1B95E05507ED401F233* __this, const RuntimeMethod* method) 
{
	{
		// public bool Flip { get; private set; }
		bool L_0 = __this->___U3CFlipU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void InputReader.GameUIInputView::set_Flip(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUIInputView_set_Flip_mC6D3E7C9334B6481C0CEA3A28B2AB2025C361F81 (GameUIInputView_tA29AB2FF9BDACA145CD7E1B95E05507ED401F233* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Flip { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CFlipU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void InputReader.GameUIInputView::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUIInputView_Awake_m9E166CBEE8A5169EBD3A309E845B47A1F719B4CB (GameUIInputView_tA29AB2FF9BDACA145CD7E1B95E05507ED401F233* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameUIInputView_U3CAwakeU3Eb__13_0_mCF6DBE0444E79251EA02710337A8C67A85D9B81E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameUIInputView_U3CAwakeU3Eb__13_1_mE6CCF66CD078DCD4F5598ED80CDA53F55DB6CE2E_RuntimeMethod_var);
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
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)GameUIInputView_U3CAwakeU3Eb__13_0_mCF6DBE0444E79251EA02710337A8C67A85D9B81E_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// _flipButton.onClick.AddListener(() => Flip = true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->____flipButton_6;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)GameUIInputView_U3CAwakeU3Eb__13_1_mE6CCF66CD078DCD4F5598ED80CDA53F55DB6CE2E_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void InputReader.GameUIInputView::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUIInputView_OnDestroy_mC734E1EF36F7D6CA8B2956C607A6ECCE59D9A4D3 (GameUIInputView_tA29AB2FF9BDACA145CD7E1B95E05507ED401F233* __this, const RuntimeMethod* method) 
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
// System.Void InputReader.GameUIInputView::ResetOneTimeAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUIInputView_ResetOneTimeAction_m250BE8BA89842DF90EFF8D39FA0E7E92EA2106A5 (GameUIInputView_tA29AB2FF9BDACA145CD7E1B95E05507ED401F233* __this, const RuntimeMethod* method) 
{
	{
		// Jump = false;
		GameUIInputView_set_Jump_mB862C5C8FA87A49E50FD9AA81C69D09FF6BAB2DC_inline(__this, (bool)0, NULL);
		// Flip = false;
		GameUIInputView_set_Flip_mC6D3E7C9334B6481C0CEA3A28B2AB2025C361F81_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void InputReader.GameUIInputView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUIInputView__ctor_mC7563EDE8E584A989F1A09949B2605964C8FEF9A (GameUIInputView_tA29AB2FF9BDACA145CD7E1B95E05507ED401F233* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void InputReader.GameUIInputView::<Awake>b__13_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUIInputView_U3CAwakeU3Eb__13_0_mCF6DBE0444E79251EA02710337A8C67A85D9B81E (GameUIInputView_tA29AB2FF9BDACA145CD7E1B95E05507ED401F233* __this, const RuntimeMethod* method) 
{
	{
		// _jumpButton.onClick.AddListener(() => Jump = true);
		GameUIInputView_set_Jump_mB862C5C8FA87A49E50FD9AA81C69D09FF6BAB2DC_inline(__this, (bool)1, NULL);
		return;
	}
}
// System.Void InputReader.GameUIInputView::<Awake>b__13_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUIInputView_U3CAwakeU3Eb__13_1_mE6CCF66CD078DCD4F5598ED80CDA53F55DB6CE2E (GameUIInputView_tA29AB2FF9BDACA145CD7E1B95E05507ED401F233* __this, const RuntimeMethod* method) 
{
	{
		// _flipButton.onClick.AddListener(() => Flip = true);
		GameUIInputView_set_Flip_mC6D3E7C9334B6481C0CEA3A28B2AB2025C361F81_inline(__this, (bool)1, NULL);
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalDevicesInputReader_t7A5FA96C19A956DAA2EB6948F201F1CAB0D3C189_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_m77B0DEB88CE34C8F371ECC768829219F57CA50D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3E57006B1E4E3BF3DC969B90445C1E58B246619D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC0DBFAB7023A7FA0D6EFB3263C036305E5D817D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8A57ADE3B85347E913E76E6BAA1F69F6451E2A99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB4C51AD04BB1308274A370FED1FA4A1651C5766F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerSystem_t3CAC4507763EB2DC77E54ABFAF5FA5AFD8C3F664_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _disposables = new List<IDisposable>();
		List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05* L_0 = (List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05*)il2cpp_codegen_object_new(List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mB4C51AD04BB1308274A370FED1FA4A1651C5766F(L_0, List_1__ctor_mB4C51AD04BB1308274A370FED1FA4A1651C5766F_RuntimeMethod_var);
		__this->____disposables_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____disposables_9), (void*)L_0);
		// if (ProjectUpdater.Instance == null) _projectUpdater = new GameObject().AddComponent<ProjectUpdater>();
		RuntimeObject* L_1 = ((ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_StaticFields*)il2cpp_codegen_static_fields_for(ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_il2cpp_TypeInfo_var))->___Instance_4;
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		// if (ProjectUpdater.Instance == null) _projectUpdater = new GameObject().AddComponent<ProjectUpdater>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_2, NULL);
		NullCheck(L_2);
		ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275* L_3;
		L_3 = GameObject_AddComponent_TisProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_m77B0DEB88CE34C8F371ECC768829219F57CA50D7(L_2, GameObject_AddComponent_TisProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_m77B0DEB88CE34C8F371ECC768829219F57CA50D7_RuntimeMethod_var);
		__this->____projectUpdater_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____projectUpdater_8), (void*)L_3);
		goto IL_0034;
	}

IL_0024:
	{
		// else _projectUpdater = ProjectUpdater.Instance as ProjectUpdater;
		RuntimeObject* L_4 = ((ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_StaticFields*)il2cpp_codegen_static_fields_for(ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_il2cpp_TypeInfo_var))->___Instance_4;
		__this->____projectUpdater_8 = ((ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275*)IsInstClass((RuntimeObject*)L_4, ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____projectUpdater_8), (void*)((ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275*)IsInstClass((RuntimeObject*)L_4, ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_il2cpp_TypeInfo_var)));
	}

IL_0034:
	{
		// _externalDevicesInput = new ExternalDevicesInputReader();
		ExternalDevicesInputReader_t7A5FA96C19A956DAA2EB6948F201F1CAB0D3C189* L_5 = (ExternalDevicesInputReader_t7A5FA96C19A956DAA2EB6948F201F1CAB0D3C189*)il2cpp_codegen_object_new(ExternalDevicesInputReader_t7A5FA96C19A956DAA2EB6948F201F1CAB0D3C189_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ExternalDevicesInputReader__ctor_mB1E7D92264C7FA1DBD8583DC9C980BE5FE23313A(L_5, NULL);
		__this->____externalDevicesInput_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____externalDevicesInput_6), (void*)L_5);
		// _disposables.Add(_externalDevicesInput);
		List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05* L_6 = __this->____disposables_9;
		ExternalDevicesInputReader_t7A5FA96C19A956DAA2EB6948F201F1CAB0D3C189* L_7 = __this->____externalDevicesInput_6;
		NullCheck(L_6);
		List_1_Add_m3E57006B1E4E3BF3DC969B90445C1E58B246619D_inline(L_6, L_7, List_1_Add_m3E57006B1E4E3BF3DC969B90445C1E58B246619D_RuntimeMethod_var);
		// _playerSystem = new PlayerSystem(_playerEntity, new List<IEntityInputSource>
		// {
		//     _gameUIInputView,
		//     _externalDevicesInput
		// });
		PlayerEntity_tEFC46E9DA47806BD1002983A14705F4EB7699442* L_8 = __this->____playerEntity_4;
		List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9* L_9 = (List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9*)il2cpp_codegen_object_new(List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		List_1__ctor_m8A57ADE3B85347E913E76E6BAA1F69F6451E2A99(L_9, List_1__ctor_m8A57ADE3B85347E913E76E6BAA1F69F6451E2A99_RuntimeMethod_var);
		List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9* L_10 = L_9;
		GameUIInputView_tA29AB2FF9BDACA145CD7E1B95E05507ED401F233* L_11 = __this->____gameUIInputView_5;
		NullCheck(L_10);
		List_1_Add_mC0DBFAB7023A7FA0D6EFB3263C036305E5D817D9_inline(L_10, L_11, List_1_Add_mC0DBFAB7023A7FA0D6EFB3263C036305E5D817D9_RuntimeMethod_var);
		List_1_t2BF79C7ACDAAB06DB2CC83BDCFCD4142A65965B9* L_12 = L_10;
		ExternalDevicesInputReader_t7A5FA96C19A956DAA2EB6948F201F1CAB0D3C189* L_13 = __this->____externalDevicesInput_6;
		NullCheck(L_12);
		List_1_Add_mC0DBFAB7023A7FA0D6EFB3263C036305E5D817D9_inline(L_12, L_13, List_1_Add_mC0DBFAB7023A7FA0D6EFB3263C036305E5D817D9_RuntimeMethod_var);
		PlayerSystem_t3CAC4507763EB2DC77E54ABFAF5FA5AFD8C3F664* L_14 = (PlayerSystem_t3CAC4507763EB2DC77E54ABFAF5FA5AFD8C3F664*)il2cpp_codegen_object_new(PlayerSystem_t3CAC4507763EB2DC77E54ABFAF5FA5AFD8C3F664_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		PlayerSystem__ctor_mA6FFD37282362968A991D0F3EE1FD2E90EC1E4C4(L_14, L_8, L_12, NULL);
		__this->____playerSystem_7 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____playerSystem_7), (void*)L_14);
		// }
		return;
	}
}
// System.Void Core.GameLevelInitializer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameLevelInitializer_Update_m1FD0D96ABB76A7E319CA2626C61767B184F0BE78 (GameLevelInitializer_tADAC36DAA6B74BEC97ACC2E6E686767809C8794A* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(KeyCode.Escape)) _projectUpdater.IsPaused = !_projectUpdater.IsPaused;
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.Escape)) _projectUpdater.IsPaused = !_projectUpdater.IsPaused;
		ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275* L_1 = __this->____projectUpdater_8;
		ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275* L_2 = __this->____projectUpdater_8;
		NullCheck(L_2);
		bool L_3;
		L_3 = ProjectUpdater_get_IsPaused_mABADC416852600EDAC128EB34B7442F277760A32_inline(L_2, NULL);
		NullCheck(L_1);
		ProjectUpdater_set_IsPaused_mDE783562D3D155565F1E039640DF581C75CCDCBB(L_1, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Core.GameLevelInitializer::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameLevelInitializer_OnDestroy_m6D61A7973F5909BC1DB4B8696AD52731B2C9C0DF (GameLevelInitializer_tADAC36DAA6B74BEC97ACC2E6E686767809C8794A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m46E201ADBB9FFC2822AF4F5B468D9BBF486984F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m20E6D92CF08DAD013CC467F343D0A075EC9AF121_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m57DB9D7263FBD8C40DF805F4F4B4CD0C73CA8E9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF880C94E895B0EB2E47D22DA350EF630143827B9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5B4557CF8F113261AC8BF5AEF969FC63B7DC6526 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var disposable in _disposables)
		List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05* L_0 = __this->____disposables_9;
		NullCheck(L_0);
		Enumerator_t5B4557CF8F113261AC8BF5AEF969FC63B7DC6526 L_1;
		L_1 = List_1_GetEnumerator_mF880C94E895B0EB2E47D22DA350EF630143827B9(L_0, List_1_GetEnumerator_mF880C94E895B0EB2E47D22DA350EF630143827B9_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m46E201ADBB9FFC2822AF4F5B468D9BBF486984F1((&V_0), Enumerator_Dispose_m46E201ADBB9FFC2822AF4F5B468D9BBF486984F1_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (var disposable in _disposables)
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_m57DB9D7263FBD8C40DF805F4F4B4CD0C73CA8E9C_inline((&V_0), Enumerator_get_Current_m57DB9D7263FBD8C40DF805F4F4B4CD0C73CA8E9C_RuntimeMethod_var);
				// disposable.Dispose();
				NullCheck(L_2);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
			}

IL_001a_1:
			{
				// foreach (var disposable in _disposables)
				bool L_3;
				L_3 = Enumerator_MoveNext_m20E6D92CF08DAD013CC467F343D0A075EC9AF121((&V_0), Enumerator_MoveNext_m20E6D92CF08DAD013CC467F343D0A075EC9AF121_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Core.Services.Updater.ProjectUpdater::add_UpdateCalled(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectUpdater_add_UpdateCalled_m187A2CE972F49E775D15833C1B3ADFFC8CDBBE15 (ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___UpdateCalled_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___UpdateCalled_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Core.Services.Updater.ProjectUpdater::remove_UpdateCalled(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectUpdater_remove_UpdateCalled_m3E66316B11A2DC20E42D86D8A695A69EE658FF07 (ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___UpdateCalled_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___UpdateCalled_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Core.Services.Updater.ProjectUpdater::add_FixedUpdateCalled(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectUpdater_add_FixedUpdateCalled_m95630CBABCE0D2281A1ACC68E085D3A8369C0747 (ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___FixedUpdateCalled_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___FixedUpdateCalled_6);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Core.Services.Updater.ProjectUpdater::remove_FixedUpdateCalled(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectUpdater_remove_FixedUpdateCalled_mF253A404394371C293C49E3E29993686F629D356 (ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___FixedUpdateCalled_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___FixedUpdateCalled_6);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Core.Services.Updater.ProjectUpdater::add_LateUpdateCalled(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectUpdater_add_LateUpdateCalled_m674F5B0799FB70D7CCD8C47811DF61CB02164FBC (ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___LateUpdateCalled_7;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___LateUpdateCalled_7);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Core.Services.Updater.ProjectUpdater::remove_LateUpdateCalled(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectUpdater_remove_LateUpdateCalled_m1FBA90F3C4D8F8DC48C4C21EB449C0BBE63ADB9E (ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___LateUpdateCalled_7;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___LateUpdateCalled_7);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean Core.Services.Updater.ProjectUpdater::get_IsPaused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProjectUpdater_get_IsPaused_mABADC416852600EDAC128EB34B7442F277760A32 (ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275* __this, const RuntimeMethod* method) 
{
	{
		// get => _isPaused;
		bool L_0 = __this->____isPaused_8;
		return L_0;
	}
}
// System.Void Core.Services.Updater.ProjectUpdater::set_IsPaused(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectUpdater_set_IsPaused_mDE783562D3D155565F1E039640DF581C75CCDCBB (ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275* __this, bool ___0_value, const RuntimeMethod* method) 
{
	int32_t G_B5_0 = 0;
	{
		// if (_isPaused == value) return;
		bool L_0 = __this->____isPaused_8;
		bool L_1 = ___0_value;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// if (_isPaused == value) return;
		return;
	}

IL_000a:
	{
		// Time.timeScale = value ? 0 : 1;
		bool L_2 = ___0_value;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		G_B5_0 = 1;
		goto IL_0011;
	}

IL_0010:
	{
		G_B5_0 = 0;
	}

IL_0011:
	{
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331(((float)G_B5_0), NULL);
		// _isPaused = value;
		bool L_3 = ___0_value;
		__this->____isPaused_8 = L_3;
		// }
		return;
	}
}
// System.Void Core.Services.Updater.ProjectUpdater::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectUpdater_Awake_m7DBDFA6AA849BCF1C37852E8056207EEC129E551 (ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		RuntimeObject* L_0 = ((ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_StaticFields*)il2cpp_codegen_static_fields_for(ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_il2cpp_TypeInfo_var))->___Instance_4;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Instance = this;
		((ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_StaticFields*)il2cpp_codegen_static_fields_for(ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_StaticFields*)il2cpp_codegen_static_fields_for(ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		return;
	}

IL_000e:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_1, NULL);
		// }
		return;
	}
}
// System.Void Core.Services.Updater.ProjectUpdater::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectUpdater_Update_m1CF6CCDCA416365B0FF67AD05593697444E2DAC3 (ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	{
		// if (IsPaused) return;
		bool L_0;
		L_0 = ProjectUpdater_get_IsPaused_mABADC416852600EDAC128EB34B7442F277760A32_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (IsPaused) return;
		return;
	}

IL_0009:
	{
		// UpdateCalled?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___UpdateCalled_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = L_1;
		G_B3_0 = L_2;
		if (L_2)
		{
			G_B4_0 = L_2;
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		NullCheck(G_B4_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B4_0, NULL);
		// }
		return;
	}
}
// System.Void Core.Services.Updater.ProjectUpdater::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectUpdater_FixedUpdate_m6626698D345D120E9B34FA076326C2FF5EBEDAE0 (ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	{
		// if (IsPaused) return;
		bool L_0;
		L_0 = ProjectUpdater_get_IsPaused_mABADC416852600EDAC128EB34B7442F277760A32_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (IsPaused) return;
		return;
	}

IL_0009:
	{
		// FixedUpdateCalled?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___FixedUpdateCalled_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = L_1;
		G_B3_0 = L_2;
		if (L_2)
		{
			G_B4_0 = L_2;
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		NullCheck(G_B4_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B4_0, NULL);
		// }
		return;
	}
}
// System.Void Core.Services.Updater.ProjectUpdater::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectUpdater_LateUpdate_mAA2A71A5CE6A37DEFB2F4092EBA0C2420409F03A (ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	{
		// if (IsPaused) return;
		bool L_0;
		L_0 = ProjectUpdater_get_IsPaused_mABADC416852600EDAC128EB34B7442F277760A32_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (IsPaused) return;
		return;
	}

IL_0009:
	{
		// LateUpdateCalled?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___LateUpdateCalled_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = L_1;
		G_B3_0 = L_2;
		if (L_2)
		{
			G_B4_0 = L_2;
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		NullCheck(G_B4_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B4_0, NULL);
		// }
		return;
	}
}
// System.Void Core.Services.Updater.ProjectUpdater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectUpdater__ctor_m744B36F8624F934D105053621CBADE6F20F55CC6 (ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275* __this, const RuntimeMethod* method) 
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
// System.Single Core.Movement.Data.HorizontalMovementData::get_HorizontalSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HorizontalMovementData_get_HorizontalSpeed_m40D3E4E8C1B831AB9493B4523644D6B5AA935B42 (HorizontalMovementData_t1E808A175F84676BA8936A6B733C41C9B6480F86* __this, const RuntimeMethod* method) 
{
	{
		// [field: SerializeField] public float HorizontalSpeed { get; private set; }
		float L_0 = __this->___U3CHorizontalSpeedU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Core.Movement.Data.HorizontalMovementData::set_HorizontalSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalMovementData_set_HorizontalSpeed_mA62DBC2B82E3E1FC99DEB181DAD2C906D3C04B37 (HorizontalMovementData_t1E808A175F84676BA8936A6B733C41C9B6480F86* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// [field: SerializeField] public float HorizontalSpeed { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CHorizontalSpeedU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Single Core.Movement.Data.HorizontalMovementData::get_RunSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HorizontalMovementData_get_RunSpeed_m50E7616016C37E97D75A000CF903E81AE44E3B48 (HorizontalMovementData_t1E808A175F84676BA8936A6B733C41C9B6480F86* __this, const RuntimeMethod* method) 
{
	{
		// [field: SerializeField] public float RunSpeed { get; private set; }
		float L_0 = __this->___U3CRunSpeedU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Core.Movement.Data.HorizontalMovementData::set_RunSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalMovementData_set_RunSpeed_m85DDA1FEDC04AFE2D7D0CA14AB670453DB686382 (HorizontalMovementData_t1E808A175F84676BA8936A6B733C41C9B6480F86* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// [field: SerializeField] public float RunSpeed { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CRunSpeedU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Boolean Core.Movement.Data.HorizontalMovementData::get_FaceRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HorizontalMovementData_get_FaceRight_mA687E61C31EAE566D99ED24E6D94A74929B9DBCC (HorizontalMovementData_t1E808A175F84676BA8936A6B733C41C9B6480F86* __this, const RuntimeMethod* method) 
{
	{
		// [field: SerializeField] public bool FaceRight { get; private set; }
		bool L_0 = __this->___U3CFaceRightU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Core.Movement.Data.HorizontalMovementData::set_FaceRight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalMovementData_set_FaceRight_m13CF2BB6B75628567AC1AF150A2C15823CB3DDAD (HorizontalMovementData_t1E808A175F84676BA8936A6B733C41C9B6480F86* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// [field: SerializeField] public bool FaceRight { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CFaceRightU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void Core.Movement.Data.HorizontalMovementData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalMovementData__ctor_mCFEFBCB9559CA52699DE043877BFE2EF3DD9385D (HorizontalMovementData_t1E808A175F84676BA8936A6B733C41C9B6480F86* __this, const RuntimeMethod* method) 
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
// System.Single Core.Movement.Data.JumpData::get_JumpForce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JumpData_get_JumpForce_m62AEA00BBA6BE8B93C2291784C37278D9554D111 (JumpData_tC2119A0CBD84F68709D556AAC474A3B3792BFA37* __this, const RuntimeMethod* method) 
{
	{
		// [field: SerializeField] public float JumpForce { get; private set; }
		float L_0 = __this->___U3CJumpForceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Core.Movement.Data.JumpData::set_JumpForce(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JumpData_set_JumpForce_m401AC14A6615A85DBD736EAA64B323B508FB32FE (JumpData_tC2119A0CBD84F68709D556AAC474A3B3792BFA37* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// [field: SerializeField] public float JumpForce { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CJumpForceU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void Core.Movement.Data.JumpData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JumpData__ctor_m0D8175E73F20538A5D2F27D6F1C6347DD1101B0A (JumpData_tC2119A0CBD84F68709D556AAC474A3B3792BFA37* __this, const RuntimeMethod* method) 
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
// System.Boolean Core.Movement.Controller.HorizontalMover::get_IsMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HorizontalMover_get_IsMoving_m75A735A253E6E1755AD8F7DFC37588FD23645BB9 (HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsMoving => _movement.magnitude > 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->____movement_3);
		float L_1;
		L_1 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_0, NULL);
		return (bool)((((float)L_1) > ((float)(0.0f)))? 1 : 0);
	}
}
// System.Boolean Core.Movement.Controller.HorizontalMover::get_IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HorizontalMover_get_IsRunning_m9D42FE0BBDC2641B16DCA6F3A416D1FD44BDCA17 (HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsRunning { get; private set; }
		bool L_0 = __this->___U3CIsRunningU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Core.Movement.Controller.HorizontalMover::set_IsRunning(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalMover_set_IsRunning_m883907D3913CBAF8D5A97EE56FE823A07A76607D (HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsRunning { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsRunningU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void Core.Movement.Controller.HorizontalMover::.ctor(UnityEngine.Rigidbody2D,Core.Movement.Data.HorizontalMovementData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalMover__ctor_m548D62B9DD8CBCA8FDF0550356F2950E5847C17D (HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* __this, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___0_rigidbody2D, HorizontalMovementData_t1E808A175F84676BA8936A6B733C41C9B6480F86* ___1_horizontalMovementData, const RuntimeMethod* method) 
{
	{
		// public HorizontalMover(Rigidbody2D rigidbody2D, HorizontalMovementData horizontalMovementData)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _rigidbody = rigidbody2D;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = ___0_rigidbody2D;
		__this->____rigidbody_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rigidbody_0), (void*)L_0);
		// _transform = rigidbody2D.transform;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1 = ___0_rigidbody2D;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		__this->____transform_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____transform_1), (void*)L_2);
		// _horizontalMovementData = horizontalMovementData;
		HorizontalMovementData_t1E808A175F84676BA8936A6B733C41C9B6480F86* L_3 = ___1_horizontalMovementData;
		__this->____horizontalMovementData_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____horizontalMovementData_2), (void*)L_3);
		// _faceRight = horizontalMovementData.FaceRight;
		HorizontalMovementData_t1E808A175F84676BA8936A6B733C41C9B6480F86* L_4 = ___1_horizontalMovementData;
		NullCheck(L_4);
		bool L_5;
		L_5 = HorizontalMovementData_get_FaceRight_mA687E61C31EAE566D99ED24E6D94A74929B9DBCC_inline(L_4, NULL);
		__this->____faceRight_4 = L_5;
		// }
		return;
	}
}
// System.Void Core.Movement.Controller.HorizontalMover::MoveHorizontally(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalMover_MoveHorizontally_m79E4AAA0CF3D9830C7087A564026219368C738D7 (HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* __this, float ___0_direction, const RuntimeMethod* method) 
{
	float G_B2_0 = 0.0f;
	HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* G_B2_1 = NULL;
	float G_B1_0 = 0.0f;
	HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* G_B3_2 = NULL;
	{
		// _movement.x = direction;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->____movement_3);
		float L_1 = ___0_direction;
		L_0->___x_0 = L_1;
		// SetDirection(direction);
		float L_2 = ___0_direction;
		HorizontalMover_SetDirection_mCC3422357AF3ED88726292CC691D9ECBC2DBD5FA(__this, L_2, NULL);
		// Move(direction, IsRunning ? _horizontalMovementData.HorizontalSpeed * _horizontalMovementData.RunSpeed : _horizontalMovementData.HorizontalSpeed);
		float L_3 = ___0_direction;
		bool L_4;
		L_4 = HorizontalMover_get_IsRunning_m9D42FE0BBDC2641B16DCA6F3A416D1FD44BDCA17_inline(__this, NULL);
		G_B1_0 = L_3;
		G_B1_1 = __this;
		if (L_4)
		{
			G_B2_0 = L_3;
			G_B2_1 = __this;
			goto IL_002a;
		}
	}
	{
		HorizontalMovementData_t1E808A175F84676BA8936A6B733C41C9B6480F86* L_5 = __this->____horizontalMovementData_2;
		NullCheck(L_5);
		float L_6;
		L_6 = HorizontalMovementData_get_HorizontalSpeed_m40D3E4E8C1B831AB9493B4523644D6B5AA935B42_inline(L_5, NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0041;
	}

IL_002a:
	{
		HorizontalMovementData_t1E808A175F84676BA8936A6B733C41C9B6480F86* L_7 = __this->____horizontalMovementData_2;
		NullCheck(L_7);
		float L_8;
		L_8 = HorizontalMovementData_get_HorizontalSpeed_m40D3E4E8C1B831AB9493B4523644D6B5AA935B42_inline(L_7, NULL);
		HorizontalMovementData_t1E808A175F84676BA8936A6B733C41C9B6480F86* L_9 = __this->____horizontalMovementData_2;
		NullCheck(L_9);
		float L_10;
		L_10 = HorizontalMovementData_get_RunSpeed_m50E7616016C37E97D75A000CF903E81AE44E3B48_inline(L_9, NULL);
		G_B3_0 = ((float)il2cpp_codegen_multiply(L_8, L_10));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0041:
	{
		NullCheck(G_B3_2);
		HorizontalMover_Move_m81C6A36F033A0C33728550B3EF2BB72B6A7E0842(G_B3_2, G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void Core.Movement.Controller.HorizontalMover::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalMover_Run_mFCF3711DCC5740CAD0E9D11D61AEE085898B5BF5 (HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* __this, const RuntimeMethod* method) 
{
	{
		// IsRunning = !IsRunning;
		bool L_0;
		L_0 = HorizontalMover_get_IsRunning_m9D42FE0BBDC2641B16DCA6F3A416D1FD44BDCA17_inline(__this, NULL);
		HorizontalMover_set_IsRunning_m883907D3913CBAF8D5A97EE56FE823A07A76607D_inline(__this, (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void Core.Movement.Controller.HorizontalMover::Move(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalMover_Move_m81C6A36F033A0C33728550B3EF2BB72B6A7E0842 (HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* __this, float ___0_direction, float ___1_speed, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var velocity = _rigidbody.velocity;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->____rigidbody_0;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_0, NULL);
		V_0 = L_1;
		// velocity = new Vector2(direction * speed, velocity.y);
		float L_2 = ___0_direction;
		float L_3 = ___1_speed;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		float L_5 = L_4.___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)il2cpp_codegen_multiply(L_2, L_3)), L_5, NULL);
		// _rigidbody.velocity = velocity;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_6 = __this->____rigidbody_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		NullCheck(L_6);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void Core.Movement.Controller.HorizontalMover::SetDirection(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalMover_SetDirection_mCC3422357AF3ED88726292CC691D9ECBC2DBD5FA (HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* __this, float ___0_direction, const RuntimeMethod* method) 
{
	{
		// if ((_faceRight && direction < 0) || (!_faceRight && direction > 0))
		bool L_0 = __this->____faceRight_4;
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
		bool L_2 = __this->____faceRight_4;
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
		// FlipHorizontally();
		HorizontalMover_FlipHorizontally_m25DEF877AFD8315CC75BA8E2AA73390C0129A93A(__this, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void Core.Movement.Controller.HorizontalMover::FlipHorizontally()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalMover_FlipHorizontally_m25DEF877AFD8315CC75BA8E2AA73390C0129A93A (HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* __this, const RuntimeMethod* method) 
{
	{
		// _transform.Rotate(0, 180, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____transform_1;
		NullCheck(L_0);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_0, (0.0f), (180.0f), (0.0f), NULL);
		// _faceRight = !_faceRight;
		bool L_1 = __this->____faceRight_4;
		__this->____faceRight_4 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		// }
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
// System.Boolean Core.Movement.Controller.Jumper::get_IsJumping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Jumper_get_IsJumping_m1BA2F6DA115F5A897CDCE7EC507ACEE325A0CB45 (Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsJumping { get; private set; }
		bool L_0 = __this->___U3CIsJumpingU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Core.Movement.Controller.Jumper::set_IsJumping(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jumper_set_IsJumping_m2C5712326D8CEEA180E79EBD748AE0B63F8E3219 (Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsJumping { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsJumpingU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Boolean Core.Movement.Controller.Jumper::get_IsFalling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Jumper_get_IsFalling_mA854112E191870536C674FBA236A68EBE045E408 (Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsFalling { get; private set; }
		bool L_0 = __this->___U3CIsFallingU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Core.Movement.Controller.Jumper::set_IsFalling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jumper_set_IsFalling_mB621C8AAC1B6571CADE81CC30AB8DA25E274117F (Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsFalling { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsFallingU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void Core.Movement.Controller.Jumper::.ctor(UnityEngine.Rigidbody2D,Core.Movement.Data.JumpData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jumper__ctor_m50A8AA8A0238C6DC7641C79B340AE18B7626FC3C (Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* __this, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___0_rigidbody2D, JumpData_tC2119A0CBD84F68709D556AAC474A3B3792BFA37* ___1_jumpData, const RuntimeMethod* method) 
{
	{
		// public Jumper(Rigidbody2D rigidbody2D, JumpData jumpData)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _rigidbody = rigidbody2D;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = ___0_rigidbody2D;
		__this->____rigidbody_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rigidbody_1), (void*)L_0);
		// _jumpData = jumpData;
		JumpData_tC2119A0CBD84F68709D556AAC474A3B3792BFA37* L_1 = ___1_jumpData;
		__this->____jumpData_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jumpData_0), (void*)L_1);
		// }
		return;
	}
}
// System.Void Core.Movement.Controller.Jumper::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jumper_Jump_mBC5D77A18609B9FB033977AC67E5C7E1F2B28E45 (Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* __this, const RuntimeMethod* method) 
{
	{
		// if (!IsJumping && !IsFalling)
		bool L_0;
		L_0 = Jumper_get_IsJumping_m1BA2F6DA115F5A897CDCE7EC507ACEE325A0CB45_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0042;
		}
	}
	{
		bool L_1;
		L_1 = Jumper_get_IsFalling_mA854112E191870536C674FBA236A68EBE045E408_inline(__this, NULL);
		if (L_1)
		{
			goto IL_0042;
		}
	}
	{
		// IsJumping = true;
		Jumper_set_IsJumping_m2C5712326D8CEEA180E79EBD748AE0B63F8E3219_inline(__this, (bool)1, NULL);
		// _rigidbody.velocity = new Vector2(_rigidbody.velocity.x, _jumpData.JumpForce);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2 = __this->____rigidbody_1;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->____rigidbody_1;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_3, NULL);
		float L_5 = L_4.___x_0;
		JumpData_tC2119A0CBD84F68709D556AAC474A3B3792BFA37* L_6 = __this->____jumpData_0;
		NullCheck(L_6);
		float L_7;
		L_7 = JumpData_get_JumpForce_m62AEA00BBA6BE8B93C2291784C37278D9554D111_inline(L_6, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), L_5, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_2, L_8, NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void Core.Movement.Controller.Jumper::UpdateFall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jumper_UpdateFall_mF4B3648D4E62D0933426EABF23A1E0B1AD6FBFD1 (Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* __this, const RuntimeMethod* method) 
{
	{
		// if (_rigidbody.velocity.y < 0)
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->____rigidbody_1;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_0, NULL);
		float L_2 = L_1.___y_1;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_001e;
		}
	}
	{
		// IsFalling = true;
		Jumper_set_IsFalling_mB621C8AAC1B6571CADE81CC30AB8DA25E274117F_inline(__this, (bool)1, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Core.Movement.Controller.Jumper::ResetJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jumper_ResetJump_mEDCB2D428C13E12E1788AD5D96C1F3AE849B0744 (Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* __this, const RuntimeMethod* method) 
{
	{
		// if (_rigidbody.velocity.y == 0)
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->____rigidbody_1;
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
		// IsJumping = false;
		Jumper_set_IsJumping_m2C5712326D8CEEA180E79EBD748AE0B63F8E3219_inline(__this, (bool)0, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Core.Movement.Controller.Jumper::ResetFall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jumper_ResetFall_m7B581CE2BBBDA0E9D2AAF8B8AF80D610E6D6DCCE (Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* __this, const RuntimeMethod* method) 
{
	{
		// if (_rigidbody.velocity.y >= 0)
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->____rigidbody_1;
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
		// IsFalling = false;
		Jumper_set_IsFalling_mB621C8AAC1B6571CADE81CC30AB8DA25E274117F_inline(__this, (bool)0, NULL);
	}

IL_001e:
	{
		// }
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
// System.Void Core.Animation.AnimatorController::PlayAnimation(Core.Animation.AnimationType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController_PlayAnimation_mC5644D1CAFB8663740DB68C5B8E8CB2694687B78 (AnimatorController_tA6B0441AB255A23C190754F0988BC60EC8D6EB6F* __this, int32_t ___0_animationType, bool ___1_active, const RuntimeMethod* method) 
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
		VirtualActionInvoker1< int32_t >::Invoke(4 /* System.Void Core.Animation.AnimatorController::PlayAnimation(Core.Animation.AnimationType) */, __this, L_4);
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
		VirtualActionInvoker1< int32_t >::Invoke(4 /* System.Void Core.Animation.AnimatorController::PlayAnimation(Core.Animation.AnimationType) */, __this, L_8);
		// }
		return;
	}
}
// System.Void Core.Animation.AnimatorController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController__ctor_m01D4C93D46DCFC08B245CE088C0B8D81E4994AAC (AnimatorController_tA6B0441AB255A23C190754F0988BC60EC8D6EB6F* __this, const RuntimeMethod* method) 
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
// System.Void Core.Animation.UnityAnimatorController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAnimatorController_Start_m9AB08B1A730E2E1EFA16A9F18717F7ED7FC153BD (UnityAnimatorController_t0B3B8C58C489DA19538AB944DC26E76FADBE0FC7* __this, const RuntimeMethod* method) 
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
// System.Void Core.Animation.UnityAnimatorController::PlayAnimation(Core.Animation.AnimationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAnimatorController_PlayAnimation_m22DED9F05A8977D4E422E133F404722FB4FC3FC3 (UnityAnimatorController_t0B3B8C58C489DA19538AB944DC26E76FADBE0FC7* __this, int32_t ___0_animationType, const RuntimeMethod* method) 
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
// System.Void Core.Animation.UnityAnimatorController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAnimatorController__ctor_m38E1327D9BA4E50DA8851815FD485EAAB2AA23EC (UnityAnimatorController_t0B3B8C58C489DA19538AB944DC26E76FADBE0FC7* __this, const RuntimeMethod* method) 
{
	{
		AnimatorController__ctor_m01D4C93D46DCFC08B245CE088C0B8D81E4994AAC(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Jumper_get_IsJumping_m1BA2F6DA115F5A897CDCE7EC507ACEE325A0CB45_inline (Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsJumping { get; private set; }
		bool L_0 = __this->___U3CIsJumpingU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Jumper_get_IsFalling_mA854112E191870536C674FBA236A68EBE045E408_inline (Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsFalling { get; private set; }
		bool L_0 = __this->___U3CIsFallingU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HorizontalMover_get_IsRunning_m9D42FE0BBDC2641B16DCA6F3A416D1FD44BDCA17_inline (HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsRunning { get; private set; }
		bool L_0 = __this->___U3CIsRunningU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExternalDevicesInputReader_set_Jump_mAF8EB5562D595F9399649C149979EC53E37D9B6A_inline (ExternalDevicesInputReader_t7A5FA96C19A956DAA2EB6948F201F1CAB0D3C189* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Jump { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CJumpU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExternalDevicesInputReader_set_Flip_m8B31E4EC552EC5DD277600C359B151141C9DC0B5_inline (ExternalDevicesInputReader_t7A5FA96C19A956DAA2EB6948F201F1CAB0D3C189* __this, bool ___0_value, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameUIInputView_set_Jump_mB862C5C8FA87A49E50FD9AA81C69D09FF6BAB2DC_inline (GameUIInputView_tA29AB2FF9BDACA145CD7E1B95E05507ED401F233* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Jump { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CJumpU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameUIInputView_set_Flip_mC6D3E7C9334B6481C0CEA3A28B2AB2025C361F81_inline (GameUIInputView_tA29AB2FF9BDACA145CD7E1B95E05507ED401F233* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Flip { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CFlipU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ProjectUpdater_get_IsPaused_mABADC416852600EDAC128EB34B7442F277760A32_inline (ProjectUpdater_tA32ACA271E919603B045853C01766C3B10876275* __this, const RuntimeMethod* method) 
{
	{
		// get => _isPaused;
		bool L_0 = __this->____isPaused_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HorizontalMovementData_get_FaceRight_mA687E61C31EAE566D99ED24E6D94A74929B9DBCC_inline (HorizontalMovementData_t1E808A175F84676BA8936A6B733C41C9B6480F86* __this, const RuntimeMethod* method) 
{
	{
		// [field: SerializeField] public bool FaceRight { get; private set; }
		bool L_0 = __this->___U3CFaceRightU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HorizontalMovementData_get_HorizontalSpeed_m40D3E4E8C1B831AB9493B4523644D6B5AA935B42_inline (HorizontalMovementData_t1E808A175F84676BA8936A6B733C41C9B6480F86* __this, const RuntimeMethod* method) 
{
	{
		// [field: SerializeField] public float HorizontalSpeed { get; private set; }
		float L_0 = __this->___U3CHorizontalSpeedU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HorizontalMovementData_get_RunSpeed_m50E7616016C37E97D75A000CF903E81AE44E3B48_inline (HorizontalMovementData_t1E808A175F84676BA8936A6B733C41C9B6480F86* __this, const RuntimeMethod* method) 
{
	{
		// [field: SerializeField] public float RunSpeed { get; private set; }
		float L_0 = __this->___U3CRunSpeedU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HorizontalMover_set_IsRunning_m883907D3913CBAF8D5A97EE56FE823A07A76607D_inline (HorizontalMover_t0A29F4466A80B99763C1C297E3A409B47D87B72E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsRunning { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsRunningU3Ek__BackingField_5 = L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Jumper_set_IsJumping_m2C5712326D8CEEA180E79EBD748AE0B63F8E3219_inline (Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsJumping { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsJumpingU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float JumpData_get_JumpForce_m62AEA00BBA6BE8B93C2291784C37278D9554D111_inline (JumpData_tC2119A0CBD84F68709D556AAC474A3B3792BFA37* __this, const RuntimeMethod* method) 
{
	{
		// [field: SerializeField] public float JumpForce { get; private set; }
		float L_0 = __this->___U3CJumpForceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Jumper_set_IsFalling_mB621C8AAC1B6571CADE81CC30AB8DA25E274117F_inline (Jumper_t5BA95E2D626F538558D34B188054C24C64D3A7B2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsFalling { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsFallingU3Ek__BackingField_3 = L_0;
		return;
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
