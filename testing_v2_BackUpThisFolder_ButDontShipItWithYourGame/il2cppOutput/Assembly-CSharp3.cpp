#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel
struct IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62;
// uPLibrary.Networking.M2Mqtt.Internal.InternalEvent
struct InternalEvent_tC239B49C40C425EF2A2775CA3DE46B3F39DD72BB;
// uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientException
struct MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859;
// uPLibrary.Networking.M2Mqtt.Exceptions.MqttCommunicationException
struct MqttCommunicationException_t016BFB6E56C108061FB2FE6CE77E280AEF4E2EBC;
// uPLibrary.Networking.M2Mqtt.Exceptions.MqttConnectionException
struct MqttConnectionException_t4133D9B042197DC8ACE467698F13BCD634939476;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase
struct MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel
struct MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback
struct MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe
struct MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs
struct MqttMsgSubscribeEventArgs_t8079AA90C7C462A846490E64B2DD3DA4ECCD3BE5;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs
struct MqttMsgSubscribedEventArgs_t8207BBB67D20AE8E6F8F2F3531852BC9D27C6120;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback
struct MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe
struct MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribeEventArgs
struct MqttMsgUnsubscribeEventArgs_tA68BC3F886142FE585E4C77459616DBF79832F29;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs
struct MqttMsgUnsubscribedEventArgs_t46F3D712F85B4F54BD19B4355690C775FAC35E5D;
// uPLibrary.Networking.M2Mqtt.Exceptions.MqttTimeoutException
struct MqttTimeoutException_t43973937D83859B52199C9D855F55A16DFB478A1;
// uPLibrary.Networking.M2Mqtt.Internal.MsgInternalEvent
struct MsgInternalEvent_t58B252CBF33A81BB443C2B2A4D77D13FC64B0B84;
// uPLibrary.Networking.M2Mqtt.Internal.MsgPublishedInternalEvent
struct MsgPublishedInternalEvent_t77F08FECAE4E4CB4F4926233C27C164CADC43873;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t2F3F43301A2C4258285E66980237B7AE65F4CD7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t958E1E27F44A1E57CF73D43A68F1EF1A1E07FE0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgPubrel_Parse_mB8A399524D8A1DCEB711493D1819D89F9432E447_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgSuback_Parse_m20A010AFA01471AB9ABEE28C3F411825114B6175_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgSubscribe_GetBytes_m7FCB240ECBD2094E87DB1449A16E5FFD1EDCC4A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgSubscribe_Parse_m8C4DA5A4A872CEF2347FD0055BAF71ECFB65DBD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgUnsuback_Parse_m2A79C7B7BF7AE243997C3818041E815C5B893D54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgUnsubscribe_GetBytes_m937D276453E8FB292ACBEE1B4BAC08A757B95A54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgUnsubscribe_Parse_m4811DC0CD06B0BA35797231F7BE189DDBA594DCE_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// uPLibrary.Networking.M2Mqtt.Internal.InternalEvent
struct InternalEvent_tC239B49C40C425EF2A2775CA3DE46B3F39DD72BB  : public RuntimeObject
{
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase
struct MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB  : public RuntimeObject
{
	// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::type
	uint8_t ___type_50;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::dupFlag
	bool ___dupFlag_51;
	// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::qosLevel
	uint8_t ___qosLevel_52;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::retain
	bool ___retain_53;
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::messageId
	uint16_t ___messageId_54;
};

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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
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

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel
struct MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B  : public MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB
{
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback
struct MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214  : public MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB
{
	// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::grantedQosLevels
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___grantedQosLevels_55;
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe
struct MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42  : public MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB
{
	// System.String[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::topics
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___topics_55;
	// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::qosLevels
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___qosLevels_56;
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs
struct MqttMsgSubscribeEventArgs_t8079AA90C7C462A846490E64B2DD3DA4ECCD3BE5  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::messageId
	uint16_t ___messageId_1;
	// System.String[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::topics
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___topics_2;
	// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::qosLevels
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___qosLevels_3;
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs
struct MqttMsgSubscribedEventArgs_t8207BBB67D20AE8E6F8F2F3531852BC9D27C6120  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs::messageId
	uint16_t ___messageId_1;
	// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs::grantedQosLevels
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___grantedQosLevels_2;
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback
struct MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934  : public MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB
{
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe
struct MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98  : public MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB
{
	// System.String[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::topics
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___topics_55;
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribeEventArgs
struct MqttMsgUnsubscribeEventArgs_tA68BC3F886142FE585E4C77459616DBF79832F29  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribeEventArgs::messageId
	uint16_t ___messageId_1;
	// System.String[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribeEventArgs::topics
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___topics_2;
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs
struct MqttMsgUnsubscribedEventArgs_t46F3D712F85B4F54BD19B4355690C775FAC35E5D  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs::messageId
	uint16_t ___messageId_1;
};

// uPLibrary.Networking.M2Mqtt.Internal.MsgInternalEvent
struct MsgInternalEvent_t58B252CBF33A81BB443C2B2A4D77D13FC64B0B84  : public InternalEvent_tC239B49C40C425EF2A2775CA3DE46B3F39DD72BB
{
	// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.Internal.MsgInternalEvent::msg
	MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* ___msg_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// uPLibrary.Networking.M2Mqtt.Internal.MsgPublishedInternalEvent
struct MsgPublishedInternalEvent_t77F08FECAE4E4CB4F4926233C27C164CADC43873  : public MsgInternalEvent_t58B252CBF33A81BB443C2B2A4D77D13FC64B0B84
{
	// System.Boolean uPLibrary.Networking.M2Mqtt.Internal.MsgPublishedInternalEvent::isPublished
	bool ___isPublished_1;
};

// uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientException
struct MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859  : public Exception_t
{
	// uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientErrorCode uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientException::errorCode
	int32_t ___errorCode_18;
};

// uPLibrary.Networking.M2Mqtt.Exceptions.MqttCommunicationException
struct MqttCommunicationException_t016BFB6E56C108061FB2FE6CE77E280AEF4E2EBC  : public Exception_t
{
};

// uPLibrary.Networking.M2Mqtt.Exceptions.MqttConnectionException
struct MqttConnectionException_t4133D9B042197DC8ACE467698F13BCD634939476  : public Exception_t
{
};

// uPLibrary.Networking.M2Mqtt.Exceptions.MqttTimeoutException
struct MqttTimeoutException_t43973937D83859B52199C9D855F55A16DFB478A1  : public Exception_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA  : public RuntimeArray
{
	ALIGN_FIELD (8) ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* m_Items[1];

	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;

// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A (MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* __this, const RuntimeMethod* method) ;
// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::encodeRemainingLength(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttMsgBase_encodeRemainingLength_m43EA5D6E75723B929A7F2D60D97BCAF1D724A3F0 (MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* __this, int32_t ___remainingLength0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___index2, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPubrel__ctor_m0F8CDE90BB655C17120673B7E73A5F1408FDD6EB (MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* __this, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientException::.ctor(uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientErrorCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* __this, int32_t ___errorCode0, const RuntimeMethod* method) ;
// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::decodeRemainingLength(uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttMsgBase_decodeRemainingLength_mAA0A253D5200808CA79F127D67EE30510189E664 (RuntimeObject* ___channel0, const RuntimeMethod* method) ;
// System.String System.Object::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_ToString_mF8AC1EB9D85AB52EC8FD8B8BDD131E855E69673F (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSuback__ctor_m469D8F0B93A0B36C1A4D295F3AEB14E5B0FBFDBC (MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* __this, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribe__ctor_m5E9AA30D36FD0659C42FAC4A226DF27878B210DA (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
inline void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared)(__this, method);
}
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___val0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsuback__ctor_mE20D77A0C9F8A1F6F6B4D4597A11A4C6747FC568 (MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* __this, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribe__ctor_mB5999A22CD1515F66ACEE158BA9533E04B6EFEC7 (MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Internal.InternalEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalEvent__ctor_mCA1DB6F9F0C187BBE3C18FDD5B93919DAFC004EC (InternalEvent_tC239B49C40C425EF2A2775CA3DE46B3F39DD72BB* __this, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Internal.MsgInternalEvent::.ctor(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MsgInternalEvent__ctor_mD2ECF81AE8634E936664761C86E173B6D85824D7 (MsgInternalEvent_t58B252CBF33A81BB443C2B2A4D77D13FC64B0B84* __this, MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* ___msg0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPubrel__ctor_m0F8CDE90BB655C17120673B7E73A5F1408FDD6EB (MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* __this, const RuntimeMethod* method) 
{
	{
		// public MqttMsgPubrel()
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		// this.type = MQTT_MSG_PUBREL_TYPE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type_50 = (uint8_t)6;
		// this.qosLevel = QOS_LEVEL_AT_LEAST_ONCE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel_52 = (uint8_t)1;
		// }
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgPubrel_GetBytes_m107F0D310AF4AD936C687B61E8CF5D8DDF095D84 (MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* __this, uint8_t ___protocolVersion0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t G_B6_0 = 0;
	uint8_t* G_B6_1 = NULL;
	int32_t G_B5_0 = 0;
	uint8_t* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	uint8_t* G_B7_2 = NULL;
	{
		// int fixedHeaderSize = 0;
		V_0 = 0;
		// int varHeaderSize = 0;
		V_1 = 0;
		// int payloadSize = 0;
		V_2 = 0;
		// int remainingLength = 0;
		V_3 = 0;
		// int index = 0;
		V_5 = 0;
		// varHeaderSize += MESSAGE_ID_SIZE;
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, 2));
		// remainingLength += (varHeaderSize + payloadSize);
		int32_t L_1 = V_3;
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_add(L_2, L_3))));
		// fixedHeaderSize = 1;
		V_0 = 1;
		// int temp = remainingLength;
		int32_t L_4 = V_3;
		V_6 = L_4;
	}

IL_001a:
	{
		// fixedHeaderSize++;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// temp = temp / 128;
		int32_t L_6 = V_6;
		V_6 = ((int32_t)(L_6/((int32_t)128)));
		// } while (temp > 0);
		int32_t L_7 = V_6;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		// buffer = new byte[fixedHeaderSize + varHeaderSize + payloadSize];
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_8, L_9)), L_10)));
		V_4 = L_11;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_12 = ___protocolVersion0;
		if ((!(((uint32_t)L_12) == ((uint32_t)4))))
		{
			goto IL_004b;
		}
	}
	{
		// buffer[index++] = (MQTT_MSG_PUBREL_TYPE << MSG_TYPE_OFFSET) | MQTT_MSG_PUBREL_FLAG_BITS; // [v.3.1.1]
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_4;
		int32_t L_14 = V_5;
		int32_t L_15 = L_14;
		V_5 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (uint8_t)((int32_t)98));
		goto IL_007c;
	}

IL_004b:
	{
		// buffer[index] = (byte)((MQTT_MSG_PUBREL_TYPE << MSG_TYPE_OFFSET) |
		//                    (this.qosLevel << QOS_LEVEL_OFFSET));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_4;
		int32_t L_17 = V_5;
		uint8_t L_18 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel_52;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)96)|((int32_t)((int32_t)L_18<<1))))));
		// buffer[index] |= this.dupFlag ? (byte)(1 << DUP_FLAG_OFFSET) : (byte)0x00;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_4;
		int32_t L_20 = V_5;
		NullCheck(L_19);
		uint8_t* L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)));
		int32_t L_22 = *((uint8_t*)L_21);
		bool L_23 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___dupFlag_51;
		G_B5_0 = L_22;
		G_B5_1 = L_21;
		if (L_23)
		{
			G_B6_0 = L_22;
			G_B6_1 = L_21;
			goto IL_0072;
		}
	}
	{
		G_B7_0 = 0;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0073;
	}

IL_0072:
	{
		G_B7_0 = 8;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0073:
	{
		*((int8_t*)G_B7_2) = (int8_t)((int32_t)(uint8_t)((int32_t)(G_B7_1|G_B7_0)));
		// index++;
		int32_t L_24 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_007c:
	{
		// index = this.encodeRemainingLength(remainingLength, buffer, index);
		int32_t L_25 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_4;
		int32_t L_27 = V_5;
		int32_t L_28;
		L_28 = MqttMsgBase_encodeRemainingLength_m43EA5D6E75723B929A7F2D60D97BCAF1D724A3F0(__this, L_25, L_26, L_27, NULL);
		V_5 = L_28;
		// buffer[index++] = (byte)((this.messageId >> 8) & 0x00FF); // MSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_4;
		int32_t L_30 = V_5;
		int32_t L_31 = L_30;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		uint16_t L_32 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_32>>8))&((int32_t)255)))));
		// buffer[index++] = (byte)(this.messageId & 0x00FF); // LSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_4;
		int32_t L_34 = V_5;
		int32_t L_35 = L_34;
		V_5 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		uint16_t L_36 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_36&((int32_t)255)))));
		// return buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_4;
		return L_37;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* MqttMsgPubrel_Parse_mB8A399524D8A1DCEB711493D1819D89F9432E447 (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* V_2 = NULL;
	{
		// int index = 0;
		V_1 = 0;
		// MqttMsgPubrel msg = new MqttMsgPubrel();
		MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* L_0 = (MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B*)il2cpp_codegen_object_new(MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MqttMsgPubrel__ctor_m0F8CDE90BB655C17120673B7E73A5F1408FDD6EB(L_0, NULL);
		V_2 = L_0;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_1 = ___protocolVersion1;
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_001b;
		}
	}
	{
		// if ((fixedHeaderFirstByte & MSG_FLAG_BITS_MASK) != MQTT_MSG_PUBREL_FLAG_BITS)
		uint8_t L_2 = ___fixedHeaderFirstByte0;
		if ((((int32_t)((int32_t)((int32_t)L_2&((int32_t)15)))) == ((int32_t)2)))
		{
			goto IL_001b;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.InvalidFlagBits);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_3 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_3, ((int32_t)12), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgPubrel_Parse_mB8A399524D8A1DCEB711493D1819D89F9432E447_RuntimeMethod_var)));
	}

IL_001b:
	{
		// int remainingLength = MqttMsgBase.decodeRemainingLength(channel);
		RuntimeObject* L_4 = ___channel2;
		int32_t L_5;
		L_5 = MqttMsgBase_decodeRemainingLength_mAA0A253D5200808CA79F127D67EE30510189E664(L_4, NULL);
		// buffer = new byte[remainingLength];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_0 = L_6;
		// channel.Receive(buffer);
		RuntimeObject* L_7 = ___channel2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var, L_7, L_8);
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1)
		uint8_t L_10 = ___protocolVersion1;
		if ((!(((uint32_t)L_10) == ((uint32_t)3))))
		{
			goto IL_004d;
		}
	}
	{
		// msg.qosLevel = (byte)((fixedHeaderFirstByte & QOS_LEVEL_MASK) >> QOS_LEVEL_OFFSET);
		MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* L_11 = V_2;
		uint8_t L_12 = ___fixedHeaderFirstByte0;
		NullCheck(L_11);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_11)->___qosLevel_52 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_12&6))>>1)));
		// msg.dupFlag = (((fixedHeaderFirstByte & DUP_FLAG_MASK) >> DUP_FLAG_OFFSET) == 0x01);
		MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* L_13 = V_2;
		uint8_t L_14 = ___fixedHeaderFirstByte0;
		NullCheck(L_13);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_13)->___dupFlag_51 = (bool)((((int32_t)((int32_t)(((int32_t)((int32_t)L_14&8))>>3))) == ((int32_t)1))? 1 : 0);
	}

IL_004d:
	{
		// msg.messageId = (ushort)((buffer[index++] << 8) & 0xFF00);
		MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* L_15 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = L_17;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		NullCheck(L_16);
		int32_t L_19 = L_18;
		uint8_t L_20 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_15);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_15)->___messageId_54 = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_20<<8))&((int32_t)65280))));
		// msg.messageId |= (buffer[index++]);
		MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* L_21 = V_2;
		MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* L_22 = L_21;
		NullCheck(L_22);
		uint16_t L_23 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_22)->___messageId_54;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_0;
		int32_t L_25 = V_1;
		int32_t L_26 = L_25;
		V_1 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		NullCheck(L_24);
		int32_t L_27 = L_26;
		uint8_t L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_22);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_22)->___messageId_54 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_23|(int32_t)L_28)));
		// return msg;
		MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* L_29 = V_2;
		return L_29;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgPubrel_ToString_m26EBDD54A5BAAE3C702585C0ECC7E4EF97BD9F17 (MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* __this, const RuntimeMethod* method) 
{
	{
		// return base.ToString();
		String_t* L_0;
		L_0 = Object_ToString_mF8AC1EB9D85AB52EC8FD8B8BDD131E855E69673F(__this, NULL);
		return L_0;
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
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::get_GrantedQoSLevels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgSuback_get_GrantedQoSLevels_m881CE92269A02B2C37E26A08FE4F3A4A81128C38 (MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.grantedQosLevels; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___grantedQosLevels_55;
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::set_GrantedQoSLevels(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSuback_set_GrantedQoSLevels_m557F90AFAED1457782DF7324B9CF9B0E01CFE7FB (MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.grantedQosLevels = value; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___grantedQosLevels_55 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grantedQosLevels_55), (void*)L_0);
		// set { this.grantedQosLevels = value; }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSuback__ctor_m469D8F0B93A0B36C1A4D295F3AEB14E5B0FBFDBC (MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* __this, const RuntimeMethod* method) 
{
	{
		// public MqttMsgSuback()
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		// this.type = MQTT_MSG_SUBACK_TYPE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type_50 = (uint8_t)((int32_t)9);
		// }
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* MqttMsgSuback_Parse_m20A010AFA01471AB9ABEE28C3F411825114B6175 (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// int index = 0;
		V_1 = 0;
		// MqttMsgSuback msg = new MqttMsgSuback();
		MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* L_0 = (MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214*)il2cpp_codegen_object_new(MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MqttMsgSuback__ctor_m469D8F0B93A0B36C1A4D295F3AEB14E5B0FBFDBC(L_0, NULL);
		V_2 = L_0;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_1 = ___protocolVersion1;
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_001a;
		}
	}
	{
		// if ((fixedHeaderFirstByte & MSG_FLAG_BITS_MASK) != MQTT_MSG_SUBACK_FLAG_BITS)
		uint8_t L_2 = ___fixedHeaderFirstByte0;
		if (!((int32_t)((int32_t)L_2&((int32_t)15))))
		{
			goto IL_001a;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.InvalidFlagBits);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_3 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_3, ((int32_t)12), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgSuback_Parse_m20A010AFA01471AB9ABEE28C3F411825114B6175_RuntimeMethod_var)));
	}

IL_001a:
	{
		// int remainingLength = MqttMsgBase.decodeRemainingLength(channel);
		RuntimeObject* L_4 = ___channel2;
		int32_t L_5;
		L_5 = MqttMsgBase_decodeRemainingLength_mAA0A253D5200808CA79F127D67EE30510189E664(L_4, NULL);
		V_3 = L_5;
		// buffer = new byte[remainingLength];
		int32_t L_6 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_0 = L_7;
		// channel.Receive(buffer);
		RuntimeObject* L_8 = ___channel2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var, L_8, L_9);
		// msg.messageId = (ushort)((buffer[index++] << 8) & 0xFF00);
		MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* L_11 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		int32_t L_13 = V_1;
		int32_t L_14 = L_13;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		NullCheck(L_12);
		int32_t L_15 = L_14;
		uint8_t L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_11)->___messageId_54 = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_16<<8))&((int32_t)65280))));
		// msg.messageId |= (buffer[index++]);
		MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* L_17 = V_2;
		MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* L_18 = L_17;
		NullCheck(L_18);
		uint16_t L_19 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_18)->___messageId_54;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_0;
		int32_t L_21 = V_1;
		int32_t L_22 = L_21;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		NullCheck(L_20);
		int32_t L_23 = L_22;
		uint8_t L_24 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_18);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_18)->___messageId_54 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_19|(int32_t)L_24)));
		// msg.grantedQosLevels = new byte[remainingLength - MESSAGE_ID_SIZE];
		MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* L_25 = V_2;
		int32_t L_26 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(L_26, 2)));
		NullCheck(L_25);
		L_25->___grantedQosLevels_55 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->___grantedQosLevels_55), (void*)L_27);
		// int qosIdx = 0;
		V_4 = 0;
	}

IL_006c:
	{
		// msg.grantedQosLevels[qosIdx++] = buffer[index++];
		MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* L_28 = V_2;
		NullCheck(L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = L_28->___grantedQosLevels_55;
		int32_t L_30 = V_4;
		int32_t L_31 = L_30;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_0;
		int32_t L_33 = V_1;
		int32_t L_34 = L_33;
		V_1 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		NullCheck(L_32);
		int32_t L_35 = L_34;
		uint8_t L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (uint8_t)L_36);
		// } while (index < remainingLength);
		int32_t L_37 = V_1;
		int32_t L_38 = V_3;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_006c;
		}
	}
	{
		// return msg;
		MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* L_39 = V_2;
		return L_39;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgSuback_GetBytes_mD8E27F4456B2A95CC39DC94CC80C034F14D5F352 (MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* __this, uint8_t ___protocolVersion0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// int fixedHeaderSize = 0;
		V_0 = 0;
		// int varHeaderSize = 0;
		V_1 = 0;
		// int payloadSize = 0;
		V_2 = 0;
		// int remainingLength = 0;
		V_3 = 0;
		// int index = 0;
		V_5 = 0;
		// varHeaderSize += MESSAGE_ID_SIZE;
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, 2));
		// int grantedQosIdx = 0;
		V_6 = 0;
		// for (grantedQosIdx = 0; grantedQosIdx < this.grantedQosLevels.Length; grantedQosIdx++)
		V_6 = 0;
		goto IL_0021;
	}

IL_0017:
	{
		// payloadSize++;
		int32_t L_1 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// for (grantedQosIdx = 0; grantedQosIdx < this.grantedQosLevels.Length; grantedQosIdx++)
		int32_t L_2 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0021:
	{
		// for (grantedQosIdx = 0; grantedQosIdx < this.grantedQosLevels.Length; grantedQosIdx++)
		int32_t L_3 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___grantedQosLevels_55;
		NullCheck(L_4);
		if ((((int32_t)L_3) < ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		// remainingLength += (varHeaderSize + payloadSize);
		int32_t L_5 = V_3;
		int32_t L_6 = V_1;
		int32_t L_7 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)il2cpp_codegen_add(L_6, L_7))));
		// fixedHeaderSize = 1;
		V_0 = 1;
		// int temp = remainingLength;
		int32_t L_8 = V_3;
		V_7 = L_8;
	}

IL_0038:
	{
		// fixedHeaderSize++;
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// temp = temp / 128;
		int32_t L_10 = V_7;
		V_7 = ((int32_t)(L_10/((int32_t)128)));
		// } while (temp > 0);
		int32_t L_11 = V_7;
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		// buffer = new byte[fixedHeaderSize + varHeaderSize + payloadSize];
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_12, L_13)), L_14)));
		V_4 = L_15;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_16 = ___protocolVersion0;
		if ((!(((uint32_t)L_16) == ((uint32_t)4))))
		{
			goto IL_006c;
		}
	}
	{
		// buffer[index++] = (MQTT_MSG_SUBACK_TYPE << MSG_TYPE_OFFSET) | MQTT_MSG_SUBACK_FLAG_BITS; // [v.3.1.1]
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_4;
		int32_t L_18 = V_5;
		int32_t L_19 = L_18;
		V_5 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (uint8_t)((int32_t)144));
		goto IL_007b;
	}

IL_006c:
	{
		// buffer[index++] = (byte)(MQTT_MSG_SUBACK_TYPE << MSG_TYPE_OFFSET);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_4;
		int32_t L_21 = V_5;
		int32_t L_22 = L_21;
		V_5 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (uint8_t)((int32_t)144));
	}

IL_007b:
	{
		// index = this.encodeRemainingLength(remainingLength, buffer, index);
		int32_t L_23 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_4;
		int32_t L_25 = V_5;
		int32_t L_26;
		L_26 = MqttMsgBase_encodeRemainingLength_m43EA5D6E75723B929A7F2D60D97BCAF1D724A3F0(__this, L_23, L_24, L_25, NULL);
		V_5 = L_26;
		// buffer[index++] = (byte)((this.messageId >> 8) & 0x00FF); // MSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_4;
		int32_t L_28 = V_5;
		int32_t L_29 = L_28;
		V_5 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		uint16_t L_30 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_30>>8))&((int32_t)255)))));
		// buffer[index++] = (byte)(this.messageId & 0x00FF); // LSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_4;
		int32_t L_32 = V_5;
		int32_t L_33 = L_32;
		V_5 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		uint16_t L_34 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_34&((int32_t)255)))));
		// for (grantedQosIdx = 0; grantedQosIdx < this.grantedQosLevels.Length; grantedQosIdx++)
		V_6 = 0;
		goto IL_00d6;
	}

IL_00bd:
	{
		// buffer[index++] = this.grantedQosLevels[grantedQosIdx];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_4;
		int32_t L_36 = V_5;
		int32_t L_37 = L_36;
		V_5 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = __this->___grantedQosLevels_55;
		int32_t L_39 = V_6;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		uint8_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (uint8_t)L_41);
		// for (grantedQosIdx = 0; grantedQosIdx < this.grantedQosLevels.Length; grantedQosIdx++)
		int32_t L_42 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00d6:
	{
		// for (grantedQosIdx = 0; grantedQosIdx < this.grantedQosLevels.Length; grantedQosIdx++)
		int32_t L_43 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = __this->___grantedQosLevels_55;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
		{
			goto IL_00bd;
		}
	}
	{
		// return buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_4;
		return L_45;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgSuback_ToString_mF3452B6FB23598C0DD8E77C1E9B47DF058982E92 (MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* __this, const RuntimeMethod* method) 
{
	{
		// return base.ToString();
		String_t* L_0;
		L_0 = Object_ToString_mF8AC1EB9D85AB52EC8FD8B8BDD131E855E69673F(__this, NULL);
		return L_0;
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
// System.String[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::get_Topics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* MqttMsgSubscribe_get_Topics_mBF2D19E3B4F35FD5FA75822E174801557A6EFB0D (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.topics; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___topics_55;
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::set_Topics(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribe_set_Topics_m64ABCBE107AE277A744299DECB4C2FE73532F7DE (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.topics = value; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___value0;
		__this->___topics_55 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topics_55), (void*)L_0);
		// set { this.topics = value; }
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::get_QoSLevels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgSubscribe_get_QoSLevels_m727E4E956B6EF2B1D9913AD60CC4F3FF87FDE47F (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.qosLevels; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___qosLevels_56;
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::set_QoSLevels(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribe_set_QoSLevels_m50BF1E2CFA283B48843CB88FD4C093AA3DE96648 (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.qosLevels = value; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___qosLevels_56 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___qosLevels_56), (void*)L_0);
		// set { this.qosLevels = value; }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribe__ctor_m5E9AA30D36FD0659C42FAC4A226DF27878B210DA (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* __this, const RuntimeMethod* method) 
{
	{
		// public MqttMsgSubscribe()
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		// this.type = MQTT_MSG_SUBSCRIBE_TYPE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type_50 = (uint8_t)8;
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::.ctor(System.String[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribe__ctor_m03C757BE9B7FB41EC068B5AEFEBD42D3F8E9FBAB (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___topics0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___qosLevels1, const RuntimeMethod* method) 
{
	{
		// public MqttMsgSubscribe(string[] topics, byte[] qosLevels)
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		// this.type = MQTT_MSG_SUBSCRIBE_TYPE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type_50 = (uint8_t)8;
		// this.topics = topics;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___topics0;
		__this->___topics_55 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topics_55), (void*)L_0);
		// this.qosLevels = qosLevels;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___qosLevels1;
		__this->___qosLevels_56 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___qosLevels_56), (void*)L_1);
		// this.qosLevel = QOS_LEVEL_AT_LEAST_ONCE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel_52 = (uint8_t)1;
		// }
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* MqttMsgSubscribe_Parse_m8C4DA5A4A872CEF2347FD0055BAF71ECFB65DBD3 (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t2F3F43301A2C4258285E66980237B7AE65F4CD7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t958E1E27F44A1E57CF73D43A68F1EF1A1E07FE0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	{
		// int index = 0;
		V_1 = 0;
		// MqttMsgSubscribe msg = new MqttMsgSubscribe();
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_0 = (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42*)il2cpp_codegen_object_new(MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MqttMsgSubscribe__ctor_m5E9AA30D36FD0659C42FAC4A226DF27878B210DA(L_0, NULL);
		V_4 = L_0;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_1 = ___protocolVersion1;
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_001c;
		}
	}
	{
		// if ((fixedHeaderFirstByte & MSG_FLAG_BITS_MASK) != MQTT_MSG_SUBSCRIBE_FLAG_BITS)
		uint8_t L_2 = ___fixedHeaderFirstByte0;
		if ((((int32_t)((int32_t)((int32_t)L_2&((int32_t)15)))) == ((int32_t)2)))
		{
			goto IL_001c;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.InvalidFlagBits);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_3 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_3, ((int32_t)12), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgSubscribe_Parse_m8C4DA5A4A872CEF2347FD0055BAF71ECFB65DBD3_RuntimeMethod_var)));
	}

IL_001c:
	{
		// int remainingLength = MqttMsgBase.decodeRemainingLength(channel);
		RuntimeObject* L_4 = ___channel2;
		int32_t L_5;
		L_5 = MqttMsgBase_decodeRemainingLength_mAA0A253D5200808CA79F127D67EE30510189E664(L_4, NULL);
		V_5 = L_5;
		// buffer = new byte[remainingLength];
		int32_t L_6 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_0 = L_7;
		// int received = channel.Receive(buffer);
		RuntimeObject* L_8 = ___channel2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var, L_8, L_9);
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1)
		uint8_t L_11 = ___protocolVersion1;
		if ((!(((uint32_t)L_11) == ((uint32_t)3))))
		{
			goto IL_005c;
		}
	}
	{
		// msg.qosLevel = (byte)((fixedHeaderFirstByte & QOS_LEVEL_MASK) >> QOS_LEVEL_OFFSET);
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_12 = V_4;
		uint8_t L_13 = ___fixedHeaderFirstByte0;
		NullCheck(L_12);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_12)->___qosLevel_52 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_13&6))>>1)));
		// msg.dupFlag = (((fixedHeaderFirstByte & DUP_FLAG_MASK) >> DUP_FLAG_OFFSET) == 0x01);
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_14 = V_4;
		uint8_t L_15 = ___fixedHeaderFirstByte0;
		NullCheck(L_14);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_14)->___dupFlag_51 = (bool)((((int32_t)((int32_t)(((int32_t)((int32_t)L_15&8))>>3))) == ((int32_t)1))? 1 : 0);
		// msg.retain = false;
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_16 = V_4;
		NullCheck(L_16);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_16)->___retain_53 = (bool)0;
	}

IL_005c:
	{
		// msg.messageId = (ushort)((buffer[index++] << 8) & 0xFF00);
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_17 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_0;
		int32_t L_19 = V_1;
		int32_t L_20 = L_19;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		NullCheck(L_18);
		int32_t L_21 = L_20;
		uint8_t L_22 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_17);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_17)->___messageId_54 = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_22<<8))&((int32_t)65280))));
		// msg.messageId |= (buffer[index++]);
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_23 = V_4;
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_24 = L_23;
		NullCheck(L_24);
		uint16_t L_25 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_24)->___messageId_54;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_0;
		int32_t L_27 = V_1;
		int32_t L_28 = L_27;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		NullCheck(L_26);
		int32_t L_29 = L_28;
		uint8_t L_30 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_24);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_24)->___messageId_54 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_25|(int32_t)L_30)));
		// IList<String> tmpTopics = new List<String>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_31 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_31, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_6 = L_31;
		// IList<byte> tmpQosLevels = new List<byte>();
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_32 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9(L_32, List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		V_7 = L_32;
	}

IL_0097:
	{
		// topicUtf8Length = ((buffer[index++] << 8) & 0xFF00);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_0;
		int32_t L_34 = V_1;
		int32_t L_35 = L_34;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		NullCheck(L_33);
		int32_t L_36 = L_35;
		uint8_t L_37 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_3 = ((int32_t)(((int32_t)((int32_t)L_37<<8))&((int32_t)65280)));
		// topicUtf8Length |= buffer[index++];
		int32_t L_38 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_0;
		int32_t L_40 = V_1;
		int32_t L_41 = L_40;
		V_1 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		NullCheck(L_39);
		int32_t L_42 = L_41;
		uint8_t L_43 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_3 = ((int32_t)(L_38|(int32_t)L_43));
		// topicUtf8 = new byte[topicUtf8Length];
		int32_t L_44 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_44);
		V_2 = L_45;
		// Array.Copy(buffer, index, topicUtf8, 0, topicUtf8Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_0;
		int32_t L_47 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_2;
		int32_t L_49 = V_3;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_46, L_47, (RuntimeArray*)L_48, 0, L_49, NULL);
		// index += topicUtf8Length;
		int32_t L_50 = V_1;
		int32_t L_51 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_add(L_50, L_51));
		// tmpTopics.Add(new String(Encoding.UTF8.GetChars(topicUtf8)));
		RuntimeObject* L_52 = V_6;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_53;
		L_53 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_2;
		NullCheck(L_53);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_55;
		L_55 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(23 /* System.Char[] System.Text.Encoding::GetChars(System.Byte[]) */, L_53, L_54);
		String_t* L_56;
		L_56 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_55, NULL);
		NullCheck(L_52);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.String>::Add(T) */, ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var, L_52, L_56);
		// tmpQosLevels.Add(buffer[index++]);
		RuntimeObject* L_57 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = V_0;
		int32_t L_59 = V_1;
		int32_t L_60 = L_59;
		V_1 = ((int32_t)il2cpp_codegen_add(L_60, 1));
		NullCheck(L_58);
		int32_t L_61 = L_60;
		uint8_t L_62 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_57);
		InterfaceActionInvoker1< uint8_t >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Byte>::Add(T) */, ICollection_1_t2F3F43301A2C4258285E66980237B7AE65F4CD7C_il2cpp_TypeInfo_var, L_57, L_62);
		// } while (index < remainingLength);
		int32_t L_63 = V_1;
		int32_t L_64 = V_5;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0097;
		}
	}
	{
		// msg.topics = new string[tmpTopics.Count];
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_65 = V_4;
		RuntimeObject* L_66 = V_6;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.String>::get_Count() */, ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var, L_66);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_67);
		NullCheck(L_65);
		L_65->___topics_55 = L_68;
		Il2CppCodeGenWriteBarrier((void**)(&L_65->___topics_55), (void*)L_68);
		// msg.qosLevels = new byte[tmpQosLevels.Count];
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_69 = V_4;
		RuntimeObject* L_70 = V_7;
		NullCheck(L_70);
		int32_t L_71;
		L_71 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Byte>::get_Count() */, ICollection_1_t2F3F43301A2C4258285E66980237B7AE65F4CD7C_il2cpp_TypeInfo_var, L_70);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_71);
		NullCheck(L_69);
		L_69->___qosLevels_56 = L_72;
		Il2CppCodeGenWriteBarrier((void**)(&L_69->___qosLevels_56), (void*)L_72);
		// for (int i = 0; i < tmpTopics.Count; i++)
		V_8 = 0;
		goto IL_0147;
	}

IL_011b:
	{
		// msg.topics[i] = (string)tmpTopics[i];
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_73 = V_4;
		NullCheck(L_73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_74 = L_73->___topics_55;
		int32_t L_75 = V_8;
		RuntimeObject* L_76 = V_6;
		int32_t L_77 = V_8;
		NullCheck(L_76);
		String_t* L_78;
		L_78 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.String>::get_Item(System.Int32) */, IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB_il2cpp_TypeInfo_var, L_76, L_77);
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, L_78);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(L_75), (String_t*)L_78);
		// msg.qosLevels[i] = (byte)tmpQosLevels[i];
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_79 = V_4;
		NullCheck(L_79);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80 = L_79->___qosLevels_56;
		int32_t L_81 = V_8;
		RuntimeObject* L_82 = V_7;
		int32_t L_83 = V_8;
		NullCheck(L_82);
		uint8_t L_84;
		L_84 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Byte>::get_Item(System.Int32) */, IList_1_t958E1E27F44A1E57CF73D43A68F1EF1A1E07FE0C_il2cpp_TypeInfo_var, L_82, L_83);
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(L_81), (uint8_t)L_84);
		// for (int i = 0; i < tmpTopics.Count; i++)
		int32_t L_85 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_85, 1));
	}

IL_0147:
	{
		// for (int i = 0; i < tmpTopics.Count; i++)
		int32_t L_86 = V_8;
		RuntimeObject* L_87 = V_6;
		NullCheck(L_87);
		int32_t L_88;
		L_88 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.String>::get_Count() */, ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var, L_87);
		if ((((int32_t)L_86) < ((int32_t)L_88)))
		{
			goto IL_011b;
		}
	}
	{
		// return msg;
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_89 = V_4;
		return L_89;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgSubscribe_GetBytes_m7FCB240ECBD2094E87DB1449A16E5FFD1EDCC4A1 (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* __this, uint8_t ___protocolVersion0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t G_B20_0 = 0;
	uint8_t* G_B20_1 = NULL;
	int32_t G_B19_0 = 0;
	uint8_t* G_B19_1 = NULL;
	int32_t G_B21_0 = 0;
	int32_t G_B21_1 = 0;
	uint8_t* G_B21_2 = NULL;
	{
		// int fixedHeaderSize = 0;
		V_0 = 0;
		// int varHeaderSize = 0;
		V_1 = 0;
		// int payloadSize = 0;
		V_2 = 0;
		// int remainingLength = 0;
		V_3 = 0;
		// int index = 0;
		V_5 = 0;
		// if ((this.topics == null) || (this.topics.Length == 0))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___topics_55;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___topics_55;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0023;
		}
	}

IL_001c:
	{
		// throw new MqttClientException(MqttClientErrorCode.TopicsEmpty);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_2 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_2, 6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgSubscribe_GetBytes_m7FCB240ECBD2094E87DB1449A16E5FFD1EDCC4A1_RuntimeMethod_var)));
	}

IL_0023:
	{
		// if ((this.qosLevels == null) || (this.qosLevels.Length == 0))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___qosLevels_56;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___qosLevels_56;
		NullCheck(L_4);
		if ((((RuntimeArray*)L_4)->max_length))
		{
			goto IL_003b;
		}
	}

IL_0034:
	{
		// throw new MqttClientException(MqttClientErrorCode.QosLevelsEmpty);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_5 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_5, 7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgSubscribe_GetBytes_m7FCB240ECBD2094E87DB1449A16E5FFD1EDCC4A1_RuntimeMethod_var)));
	}

IL_003b:
	{
		// if (this.topics.Length != this.qosLevels.Length)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = __this->___topics_55;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___qosLevels_56;
		NullCheck(L_7);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0054;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.TopicsQosLevelsNotMatch);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_8 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_8, 8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgSubscribe_GetBytes_m7FCB240ECBD2094E87DB1449A16E5FFD1EDCC4A1_RuntimeMethod_var)));
	}

IL_0054:
	{
		// varHeaderSize += MESSAGE_ID_SIZE;
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		// int topicIdx = 0;
		V_6 = 0;
		// byte[][] topicsUtf8 = new byte[this.topics.Length][];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = __this->___topics_55;
		NullCheck(L_10);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_11 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)));
		V_7 = L_11;
		// for (topicIdx = 0; topicIdx < this.topics.Length; topicIdx++)
		V_6 = 0;
		goto IL_00cc;
	}

IL_006f:
	{
		// if ((this.topics[topicIdx].Length < MIN_TOPIC_LENGTH) || (this.topics[topicIdx].Length > MAX_TOPIC_LENGTH))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = __this->___topics_55;
		int32_t L_13 = V_6;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_15, NULL);
		if ((((int32_t)L_16) < ((int32_t)1)))
		{
			goto IL_0095;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = __this->___topics_55;
		int32_t L_18 = V_6;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		String_t* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		int32_t L_21;
		L_21 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_20, NULL);
		if ((((int32_t)L_21) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_009c;
		}
	}

IL_0095:
	{
		// throw new MqttClientException(MqttClientErrorCode.TopicLength);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_22 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_22, 4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgSubscribe_GetBytes_m7FCB240ECBD2094E87DB1449A16E5FFD1EDCC4A1_RuntimeMethod_var)));
	}

IL_009c:
	{
		// topicsUtf8[topicIdx] = Encoding.UTF8.GetBytes(this.topics[topicIdx]);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_23 = V_7;
		int32_t L_24 = V_6;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_25;
		L_25 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = __this->___topics_55;
		int32_t L_27 = V_6;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		String_t* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_25);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30;
		L_30 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_25, L_29);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_30);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_30);
		// payloadSize += 2; // topic size (MSB, LSB)
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_31, 2));
		// payloadSize += topicsUtf8[topicIdx].Length;
		int32_t L_32 = V_2;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_33 = V_7;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_36);
		V_2 = ((int32_t)il2cpp_codegen_add(L_32, ((int32_t)(((RuntimeArray*)L_36)->max_length))));
		// payloadSize++; // byte for QoS
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		// for (topicIdx = 0; topicIdx < this.topics.Length; topicIdx++)
		int32_t L_38 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cc:
	{
		// for (topicIdx = 0; topicIdx < this.topics.Length; topicIdx++)
		int32_t L_39 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = __this->___topics_55;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_006f;
		}
	}
	{
		// remainingLength += (varHeaderSize + payloadSize);
		int32_t L_41 = V_3;
		int32_t L_42 = V_1;
		int32_t L_43 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, ((int32_t)il2cpp_codegen_add(L_42, L_43))));
		// fixedHeaderSize = 1;
		V_0 = 1;
		// int temp = remainingLength;
		int32_t L_44 = V_3;
		V_8 = L_44;
	}

IL_00e3:
	{
		// fixedHeaderSize++;
		int32_t L_45 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		// temp = temp / 128;
		int32_t L_46 = V_8;
		V_8 = ((int32_t)(L_46/((int32_t)128)));
		// } while (temp > 0);
		int32_t L_47 = V_8;
		if ((((int32_t)L_47) > ((int32_t)0)))
		{
			goto IL_00e3;
		}
	}
	{
		// buffer = new byte[fixedHeaderSize + varHeaderSize + payloadSize];
		int32_t L_48 = V_0;
		int32_t L_49 = V_1;
		int32_t L_50 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_48, L_49)), L_50)));
		V_4 = L_51;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_52 = ___protocolVersion0;
		if ((!(((uint32_t)L_52) == ((uint32_t)4))))
		{
			goto IL_0117;
		}
	}
	{
		// buffer[index++] = (MQTT_MSG_SUBSCRIBE_TYPE << MSG_TYPE_OFFSET) | MQTT_MSG_SUBSCRIBE_FLAG_BITS; // [v.3.1.1]
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = V_4;
		int32_t L_54 = V_5;
		int32_t L_55 = L_54;
		V_5 = ((int32_t)il2cpp_codegen_add(L_55, 1));
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_55), (uint8_t)((int32_t)130));
		goto IL_014b;
	}

IL_0117:
	{
		// buffer[index] = (byte)((MQTT_MSG_SUBSCRIBE_TYPE << MSG_TYPE_OFFSET) |
		//                    (this.qosLevel << QOS_LEVEL_OFFSET));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_4;
		int32_t L_57 = V_5;
		uint8_t L_58 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel_52;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)128)|((int32_t)((int32_t)L_58<<1))))));
		// buffer[index] |= this.dupFlag ? (byte)(1 << DUP_FLAG_OFFSET) : (byte)0x00;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = V_4;
		int32_t L_60 = V_5;
		NullCheck(L_59);
		uint8_t* L_61 = ((L_59)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_60)));
		int32_t L_62 = *((uint8_t*)L_61);
		bool L_63 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___dupFlag_51;
		G_B19_0 = L_62;
		G_B19_1 = L_61;
		if (L_63)
		{
			G_B20_0 = L_62;
			G_B20_1 = L_61;
			goto IL_0141;
		}
	}
	{
		G_B21_0 = 0;
		G_B21_1 = G_B19_0;
		G_B21_2 = G_B19_1;
		goto IL_0142;
	}

IL_0141:
	{
		G_B21_0 = 8;
		G_B21_1 = G_B20_0;
		G_B21_2 = G_B20_1;
	}

IL_0142:
	{
		*((int8_t*)G_B21_2) = (int8_t)((int32_t)(uint8_t)((int32_t)(G_B21_1|G_B21_0)));
		// index++;
		int32_t L_64 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_64, 1));
	}

IL_014b:
	{
		// index = this.encodeRemainingLength(remainingLength, buffer, index);
		int32_t L_65 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = V_4;
		int32_t L_67 = V_5;
		int32_t L_68;
		L_68 = MqttMsgBase_encodeRemainingLength_m43EA5D6E75723B929A7F2D60D97BCAF1D724A3F0(__this, L_65, L_66, L_67, NULL);
		V_5 = L_68;
		// if (this.messageId == 0)
		uint16_t L_69 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		if (L_69)
		{
			goto IL_0168;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.WrongMessageId);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_70 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_70);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_70, ((int32_t)10), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_70, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgSubscribe_GetBytes_m7FCB240ECBD2094E87DB1449A16E5FFD1EDCC4A1_RuntimeMethod_var)));
	}

IL_0168:
	{
		// buffer[index++] = (byte)((messageId >> 8) & 0x00FF); // MSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = V_4;
		int32_t L_72 = V_5;
		int32_t L_73 = L_72;
		V_5 = ((int32_t)il2cpp_codegen_add(L_73, 1));
		uint16_t L_74 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_73), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_74>>8))&((int32_t)255)))));
		// buffer[index++] = (byte)(messageId & 0x00FF); // LSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = V_4;
		int32_t L_76 = V_5;
		int32_t L_77 = L_76;
		V_5 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		uint16_t L_78 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(L_77), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_78&((int32_t)255)))));
		// topicIdx = 0;
		V_6 = 0;
		// for (topicIdx = 0; topicIdx < this.topics.Length; topicIdx++)
		V_6 = 0;
		goto IL_020d;
	}

IL_01a0:
	{
		// buffer[index++] = (byte)((topicsUtf8[topicIdx].Length >> 8) & 0x00FF); // MSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = V_4;
		int32_t L_80 = V_5;
		int32_t L_81 = L_80;
		V_5 = ((int32_t)il2cpp_codegen_add(L_81, 1));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_82 = V_7;
		int32_t L_83 = V_6;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_85);
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_81), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)(((RuntimeArray*)L_85)->max_length))>>8))&((int32_t)255)))));
		// buffer[index++] = (byte)(topicsUtf8[topicIdx].Length & 0x00FF); // LSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = V_4;
		int32_t L_87 = V_5;
		int32_t L_88 = L_87;
		V_5 = ((int32_t)il2cpp_codegen_add(L_88, 1));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_89 = V_7;
		int32_t L_90 = V_6;
		NullCheck(L_89);
		int32_t L_91 = L_90;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		NullCheck(L_92);
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(L_88), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((RuntimeArray*)L_92)->max_length))&((int32_t)255)))));
		// Array.Copy(topicsUtf8[topicIdx], 0, buffer, index, topicsUtf8[topicIdx].Length);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_93 = V_7;
		int32_t L_94 = V_6;
		NullCheck(L_93);
		int32_t L_95 = L_94;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = V_4;
		int32_t L_98 = V_5;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_99 = V_7;
		int32_t L_100 = V_6;
		NullCheck(L_99);
		int32_t L_101 = L_100;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		NullCheck(L_102);
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_96, 0, (RuntimeArray*)L_97, L_98, ((int32_t)(((RuntimeArray*)L_102)->max_length)), NULL);
		// index += topicsUtf8[topicIdx].Length;
		int32_t L_103 = V_5;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_104 = V_7;
		int32_t L_105 = V_6;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		NullCheck(L_107);
		V_5 = ((int32_t)il2cpp_codegen_add(L_103, ((int32_t)(((RuntimeArray*)L_107)->max_length))));
		// buffer[index++] = this.qosLevels[topicIdx];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_108 = V_4;
		int32_t L_109 = V_5;
		int32_t L_110 = L_109;
		V_5 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_111 = __this->___qosLevels_56;
		int32_t L_112 = V_6;
		NullCheck(L_111);
		int32_t L_113 = L_112;
		uint8_t L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(L_110), (uint8_t)L_114);
		// for (topicIdx = 0; topicIdx < this.topics.Length; topicIdx++)
		int32_t L_115 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_020d:
	{
		// for (topicIdx = 0; topicIdx < this.topics.Length; topicIdx++)
		int32_t L_116 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_117 = __this->___topics_55;
		NullCheck(L_117);
		if ((((int32_t)L_116) < ((int32_t)((int32_t)(((RuntimeArray*)L_117)->max_length)))))
		{
			goto IL_01a0;
		}
	}
	{
		// return buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_118 = V_4;
		return L_118;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgSubscribe_ToString_mF3C92B0EE686890CF9A58382FD0B170D864C7625 (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* __this, const RuntimeMethod* method) 
{
	{
		// return base.ToString();
		String_t* L_0;
		L_0 = Object_ToString_mF8AC1EB9D85AB52EC8FD8B8BDD131E855E69673F(__this, NULL);
		return L_0;
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
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs::get_MessageId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t MqttMsgSubscribedEventArgs_get_MessageId_m10214D6CA2D2EBA97FE2CF597C9B8897973773BC (MqttMsgSubscribedEventArgs_t8207BBB67D20AE8E6F8F2F3531852BC9D27C6120* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.messageId; }
		uint16_t L_0 = __this->___messageId_1;
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs::set_MessageId(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribedEventArgs_set_MessageId_m0A19147B3D040AB104050A0AD70E93F1056399BD (MqttMsgSubscribedEventArgs_t8207BBB67D20AE8E6F8F2F3531852BC9D27C6120* __this, uint16_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { this.messageId = value; }
		uint16_t L_0 = ___value0;
		__this->___messageId_1 = L_0;
		// internal set { this.messageId = value; }
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs::get_GrantedQoSLevels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgSubscribedEventArgs_get_GrantedQoSLevels_m14E08DACF1938D513C6E5E22C175E3F51127B358 (MqttMsgSubscribedEventArgs_t8207BBB67D20AE8E6F8F2F3531852BC9D27C6120* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.grantedQosLevels; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___grantedQosLevels_2;
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs::set_GrantedQoSLevels(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribedEventArgs_set_GrantedQoSLevels_m8FB3B7ED1B56AABD1880DC863E137D3F8B9A6B17 (MqttMsgSubscribedEventArgs_t8207BBB67D20AE8E6F8F2F3531852BC9D27C6120* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { this.grantedQosLevels = value; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___grantedQosLevels_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grantedQosLevels_2), (void*)L_0);
		// internal set { this.grantedQosLevels = value; }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs::.ctor(System.UInt16,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribedEventArgs__ctor_mADEE5005EB6EF967769EC330CA265B4E168B147D (MqttMsgSubscribedEventArgs_t8207BBB67D20AE8E6F8F2F3531852BC9D27C6120* __this, uint16_t ___messageId0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___grantedQosLevels1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MqttMsgSubscribedEventArgs(ushort messageId, byte[] grantedQosLevels)
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		// this.messageId = messageId;
		uint16_t L_0 = ___messageId0;
		__this->___messageId_1 = L_0;
		// this.grantedQosLevels = grantedQosLevels;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___grantedQosLevels1;
		__this->___grantedQosLevels_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grantedQosLevels_2), (void*)L_1);
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
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::get_MessageId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t MqttMsgSubscribeEventArgs_get_MessageId_m217AE681D58C5A9ACF401B3300B798B436248AF6 (MqttMsgSubscribeEventArgs_t8079AA90C7C462A846490E64B2DD3DA4ECCD3BE5* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.messageId; }
		uint16_t L_0 = __this->___messageId_1;
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::set_MessageId(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribeEventArgs_set_MessageId_mD0841B50AB2347E3C2F110C2F66FC0217CF310D6 (MqttMsgSubscribeEventArgs_t8079AA90C7C462A846490E64B2DD3DA4ECCD3BE5* __this, uint16_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { this.messageId = value; }
		uint16_t L_0 = ___value0;
		__this->___messageId_1 = L_0;
		// internal set { this.messageId = value; }
		return;
	}
}
// System.String[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::get_Topics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* MqttMsgSubscribeEventArgs_get_Topics_m08E7E9214E3BBC5E9D655A76E9D930135F24E460 (MqttMsgSubscribeEventArgs_t8079AA90C7C462A846490E64B2DD3DA4ECCD3BE5* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.topics; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___topics_2;
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::set_Topics(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribeEventArgs_set_Topics_mB140081EA768D3DAD8029E3AD101ABF370599ED7 (MqttMsgSubscribeEventArgs_t8079AA90C7C462A846490E64B2DD3DA4ECCD3BE5* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { this.topics = value; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___value0;
		__this->___topics_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topics_2), (void*)L_0);
		// internal set { this.topics = value; }
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::get_QoSLevels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgSubscribeEventArgs_get_QoSLevels_m4F0A6F92F23706C006EFFB732CADF3E52D1D7BA6 (MqttMsgSubscribeEventArgs_t8079AA90C7C462A846490E64B2DD3DA4ECCD3BE5* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.qosLevels; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___qosLevels_3;
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::set_QoSLevels(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribeEventArgs_set_QoSLevels_m6C5CEFDFA3B9A5102DE665F588713655B3F38E94 (MqttMsgSubscribeEventArgs_t8079AA90C7C462A846490E64B2DD3DA4ECCD3BE5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { this.qosLevels = value; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___qosLevels_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___qosLevels_3), (void*)L_0);
		// internal set { this.qosLevels = value; }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::.ctor(System.UInt16,System.String[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribeEventArgs__ctor_m7C8EBED372A95741DA5954B8015CC96AEAAB6264 (MqttMsgSubscribeEventArgs_t8079AA90C7C462A846490E64B2DD3DA4ECCD3BE5* __this, uint16_t ___messageId0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___topics1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___qosLevels2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MqttMsgSubscribeEventArgs(ushort messageId, string[] topics, byte[] qosLevels)
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		// this.messageId = messageId;
		uint16_t L_0 = ___messageId0;
		__this->___messageId_1 = L_0;
		// this.topics = topics;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___topics1;
		__this->___topics_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topics_2), (void*)L_1);
		// this.qosLevels = qosLevels;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___qosLevels2;
		__this->___qosLevels_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___qosLevels_3), (void*)L_2);
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsuback__ctor_mE20D77A0C9F8A1F6F6B4D4597A11A4C6747FC568 (MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* __this, const RuntimeMethod* method) 
{
	{
		// public MqttMsgUnsuback()
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		// this.type = MQTT_MSG_UNSUBACK_TYPE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type_50 = (uint8_t)((int32_t)11);
		// }
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* MqttMsgUnsuback_Parse_m2A79C7B7BF7AE243997C3818041E815C5B893D54 (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* G_B3_0 = NULL;
	MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* G_B1_0 = NULL;
	MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* G_B2_0 = NULL;
	{
		// int index = 0;
		V_1 = 0;
		// MqttMsgUnsuback msg = new MqttMsgUnsuback();
		MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* L_0 = (MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934*)il2cpp_codegen_object_new(MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MqttMsgUnsuback__ctor_mE20D77A0C9F8A1F6F6B4D4597A11A4C6747FC568(L_0, NULL);
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_1 = ___protocolVersion1;
		G_B1_0 = L_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			G_B3_0 = L_0;
			goto IL_0019;
		}
	}
	{
		// if ((fixedHeaderFirstByte & MSG_FLAG_BITS_MASK) != MQTT_MSG_UNSUBACK_FLAG_BITS)
		uint8_t L_2 = ___fixedHeaderFirstByte0;
		G_B2_0 = G_B1_0;
		if (!((int32_t)((int32_t)L_2&((int32_t)15))))
		{
			G_B3_0 = G_B1_0;
			goto IL_0019;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.InvalidFlagBits);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_3 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_3, ((int32_t)12), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgUnsuback_Parse_m2A79C7B7BF7AE243997C3818041E815C5B893D54_RuntimeMethod_var)));
	}

IL_0019:
	{
		// int remainingLength = MqttMsgBase.decodeRemainingLength(channel);
		RuntimeObject* L_4 = ___channel2;
		int32_t L_5;
		L_5 = MqttMsgBase_decodeRemainingLength_mAA0A253D5200808CA79F127D67EE30510189E664(L_4, NULL);
		// buffer = new byte[remainingLength];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_0 = L_6;
		// channel.Receive(buffer);
		RuntimeObject* L_7 = ___channel2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var, L_7, L_8);
		// msg.messageId = (ushort)((buffer[index++] << 8) & 0xFF00);
		MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* L_10 = G_B3_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		NullCheck(L_11);
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_10);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_10)->___messageId_54 = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_15<<8))&((int32_t)65280))));
		// msg.messageId |= (buffer[index++]);
		MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* L_16 = L_10;
		MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* L_17 = L_16;
		NullCheck(L_17);
		uint16_t L_18 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_17)->___messageId_54;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_0;
		int32_t L_20 = V_1;
		int32_t L_21 = L_20;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		NullCheck(L_19);
		int32_t L_22 = L_21;
		uint8_t L_23 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_17);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_17)->___messageId_54 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_18|(int32_t)L_23)));
		// return msg;
		return L_16;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgUnsuback_GetBytes_m30DC727322F12E81ECA5151E9CD032F8262D3A62 (MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* __this, uint8_t ___protocolVersion0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// int fixedHeaderSize = 0;
		V_0 = 0;
		// int varHeaderSize = 0;
		V_1 = 0;
		// int payloadSize = 0;
		V_2 = 0;
		// int remainingLength = 0;
		V_3 = 0;
		// int index = 0;
		V_5 = 0;
		// varHeaderSize += MESSAGE_ID_SIZE;
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, 2));
		// remainingLength += (varHeaderSize + payloadSize);
		int32_t L_1 = V_3;
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_add(L_2, L_3))));
		// fixedHeaderSize = 1;
		V_0 = 1;
		// int temp = remainingLength;
		int32_t L_4 = V_3;
		V_6 = L_4;
	}

IL_001a:
	{
		// fixedHeaderSize++;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// temp = temp / 128;
		int32_t L_6 = V_6;
		V_6 = ((int32_t)(L_6/((int32_t)128)));
		// } while (temp > 0);
		int32_t L_7 = V_6;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		// buffer = new byte[fixedHeaderSize + varHeaderSize + payloadSize];
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_8, L_9)), L_10)));
		V_4 = L_11;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_12 = ___protocolVersion0;
		if ((!(((uint32_t)L_12) == ((uint32_t)4))))
		{
			goto IL_004e;
		}
	}
	{
		// buffer[index++] = (MQTT_MSG_UNSUBACK_TYPE << MSG_TYPE_OFFSET) | MQTT_MSG_UNSUBACK_FLAG_BITS; // [v.3.1.1]
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_4;
		int32_t L_14 = V_5;
		int32_t L_15 = L_14;
		V_5 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (uint8_t)((int32_t)176));
		goto IL_005d;
	}

IL_004e:
	{
		// buffer[index++] = (byte)(MQTT_MSG_UNSUBACK_TYPE << MSG_TYPE_OFFSET);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t L_18 = L_17;
		V_5 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint8_t)((int32_t)176));
	}

IL_005d:
	{
		// index = this.encodeRemainingLength(remainingLength, buffer, index);
		int32_t L_19 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_4;
		int32_t L_21 = V_5;
		int32_t L_22;
		L_22 = MqttMsgBase_encodeRemainingLength_m43EA5D6E75723B929A7F2D60D97BCAF1D724A3F0(__this, L_19, L_20, L_21, NULL);
		V_5 = L_22;
		// buffer[index++] = (byte)((this.messageId >> 8) & 0x00FF); // MSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_4;
		int32_t L_24 = V_5;
		int32_t L_25 = L_24;
		V_5 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		uint16_t L_26 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_26>>8))&((int32_t)255)))));
		// buffer[index++] = (byte)(this.messageId & 0x00FF); // LSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_4;
		int32_t L_28 = V_5;
		int32_t L_29 = L_28;
		V_5 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		uint16_t L_30 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_30&((int32_t)255)))));
		// return buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_4;
		return L_31;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgUnsuback_ToString_mB4331A74ADF9109B769B78CC579C614C09200E31 (MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* __this, const RuntimeMethod* method) 
{
	{
		// return base.ToString();
		String_t* L_0;
		L_0 = Object_ToString_mF8AC1EB9D85AB52EC8FD8B8BDD131E855E69673F(__this, NULL);
		return L_0;
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
// System.String[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::get_Topics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* MqttMsgUnsubscribe_get_Topics_m3400CA9B22F7F6120033BC64CFBD574A94B9802E (MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.topics; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___topics_55;
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::set_Topics(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribe_set_Topics_mFF403E8D2738D5797C0CFA93DD314A5A882C23CB (MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.topics = value; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___value0;
		__this->___topics_55 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topics_55), (void*)L_0);
		// set { this.topics = value; }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribe__ctor_mB5999A22CD1515F66ACEE158BA9533E04B6EFEC7 (MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* __this, const RuntimeMethod* method) 
{
	{
		// public MqttMsgUnsubscribe()
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		// this.type = MQTT_MSG_UNSUBSCRIBE_TYPE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type_50 = (uint8_t)((int32_t)10);
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::.ctor(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribe__ctor_m456E5394BB897F90B09436C4A0AF7D5E4955F2B7 (MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___topics0, const RuntimeMethod* method) 
{
	{
		// public MqttMsgUnsubscribe(string[] topics)
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		// this.type = MQTT_MSG_UNSUBSCRIBE_TYPE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type_50 = (uint8_t)((int32_t)10);
		// this.topics = topics;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___topics0;
		__this->___topics_55 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topics_55), (void*)L_0);
		// this.qosLevel = QOS_LEVEL_AT_LEAST_ONCE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel_52 = (uint8_t)1;
		// }
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* MqttMsgUnsubscribe_Parse_m4811DC0CD06B0BA35797231F7BE189DDBA594DCE (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	{
		// int index = 0;
		V_1 = 0;
		// MqttMsgUnsubscribe msg = new MqttMsgUnsubscribe();
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_0 = (MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98*)il2cpp_codegen_object_new(MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MqttMsgUnsubscribe__ctor_mB5999A22CD1515F66ACEE158BA9533E04B6EFEC7(L_0, NULL);
		V_4 = L_0;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_1 = ___protocolVersion1;
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_001c;
		}
	}
	{
		// if ((fixedHeaderFirstByte & MSG_FLAG_BITS_MASK) != MQTT_MSG_UNSUBSCRIBE_FLAG_BITS)
		uint8_t L_2 = ___fixedHeaderFirstByte0;
		if ((((int32_t)((int32_t)((int32_t)L_2&((int32_t)15)))) == ((int32_t)2)))
		{
			goto IL_001c;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.InvalidFlagBits);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_3 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_3, ((int32_t)12), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgUnsubscribe_Parse_m4811DC0CD06B0BA35797231F7BE189DDBA594DCE_RuntimeMethod_var)));
	}

IL_001c:
	{
		// int remainingLength = MqttMsgBase.decodeRemainingLength(channel);
		RuntimeObject* L_4 = ___channel2;
		int32_t L_5;
		L_5 = MqttMsgBase_decodeRemainingLength_mAA0A253D5200808CA79F127D67EE30510189E664(L_4, NULL);
		V_5 = L_5;
		// buffer = new byte[remainingLength];
		int32_t L_6 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_0 = L_7;
		// int received = channel.Receive(buffer);
		RuntimeObject* L_8 = ___channel2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var, L_8, L_9);
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1)
		uint8_t L_11 = ___protocolVersion1;
		if ((!(((uint32_t)L_11) == ((uint32_t)3))))
		{
			goto IL_005c;
		}
	}
	{
		// msg.qosLevel = (byte)((fixedHeaderFirstByte & QOS_LEVEL_MASK) >> QOS_LEVEL_OFFSET);
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_12 = V_4;
		uint8_t L_13 = ___fixedHeaderFirstByte0;
		NullCheck(L_12);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_12)->___qosLevel_52 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_13&6))>>1)));
		// msg.dupFlag = (((fixedHeaderFirstByte & DUP_FLAG_MASK) >> DUP_FLAG_OFFSET) == 0x01);
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_14 = V_4;
		uint8_t L_15 = ___fixedHeaderFirstByte0;
		NullCheck(L_14);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_14)->___dupFlag_51 = (bool)((((int32_t)((int32_t)(((int32_t)((int32_t)L_15&8))>>3))) == ((int32_t)1))? 1 : 0);
		// msg.retain = false;
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_16 = V_4;
		NullCheck(L_16);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_16)->___retain_53 = (bool)0;
	}

IL_005c:
	{
		// msg.messageId = (ushort)((buffer[index++] << 8) & 0xFF00);
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_17 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_0;
		int32_t L_19 = V_1;
		int32_t L_20 = L_19;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		NullCheck(L_18);
		int32_t L_21 = L_20;
		uint8_t L_22 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_17);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_17)->___messageId_54 = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_22<<8))&((int32_t)65280))));
		// msg.messageId |= (buffer[index++]);
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_23 = V_4;
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_24 = L_23;
		NullCheck(L_24);
		uint16_t L_25 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_24)->___messageId_54;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_0;
		int32_t L_27 = V_1;
		int32_t L_28 = L_27;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		NullCheck(L_26);
		int32_t L_29 = L_28;
		uint8_t L_30 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_24);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_24)->___messageId_54 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_25|(int32_t)L_30)));
		// IList<String> tmpTopics = new List<String>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_31 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_31, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_6 = L_31;
	}

IL_0090:
	{
		// topicUtf8Length = ((buffer[index++] << 8) & 0xFF00);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_0;
		int32_t L_33 = V_1;
		int32_t L_34 = L_33;
		V_1 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		NullCheck(L_32);
		int32_t L_35 = L_34;
		uint8_t L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_3 = ((int32_t)(((int32_t)((int32_t)L_36<<8))&((int32_t)65280)));
		// topicUtf8Length |= buffer[index++];
		int32_t L_37 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_0;
		int32_t L_39 = V_1;
		int32_t L_40 = L_39;
		V_1 = ((int32_t)il2cpp_codegen_add(L_40, 1));
		NullCheck(L_38);
		int32_t L_41 = L_40;
		uint8_t L_42 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_3 = ((int32_t)(L_37|(int32_t)L_42));
		// topicUtf8 = new byte[topicUtf8Length];
		int32_t L_43 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_43);
		V_2 = L_44;
		// Array.Copy(buffer, index, topicUtf8, 0, topicUtf8Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_0;
		int32_t L_46 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = V_2;
		int32_t L_48 = V_3;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_45, L_46, (RuntimeArray*)L_47, 0, L_48, NULL);
		// index += topicUtf8Length;
		int32_t L_49 = V_1;
		int32_t L_50 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_add(L_49, L_50));
		// tmpTopics.Add(new String(Encoding.UTF8.GetChars(topicUtf8)));
		RuntimeObject* L_51 = V_6;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_52;
		L_52 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = V_2;
		NullCheck(L_52);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_54;
		L_54 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(23 /* System.Char[] System.Text.Encoding::GetChars(System.Byte[]) */, L_52, L_53);
		String_t* L_55;
		L_55 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_54, NULL);
		NullCheck(L_51);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.String>::Add(T) */, ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var, L_51, L_55);
		// } while (index < remainingLength);
		int32_t L_56 = V_1;
		int32_t L_57 = V_5;
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_0090;
		}
	}
	{
		// msg.topics = new string[tmpTopics.Count];
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_58 = V_4;
		RuntimeObject* L_59 = V_6;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.String>::get_Count() */, ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var, L_59);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_60);
		NullCheck(L_58);
		L_58->___topics_55 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&L_58->___topics_55), (void*)L_61);
		// for (int i = 0; i < tmpTopics.Count; i++)
		V_7 = 0;
		goto IL_010c;
	}

IL_00f3:
	{
		// msg.topics[i] = (string)tmpTopics[i];
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_62 = V_4;
		NullCheck(L_62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = L_62->___topics_55;
		int32_t L_64 = V_7;
		RuntimeObject* L_65 = V_6;
		int32_t L_66 = V_7;
		NullCheck(L_65);
		String_t* L_67;
		L_67 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.String>::get_Item(System.Int32) */, IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB_il2cpp_TypeInfo_var, L_65, L_66);
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_67);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (String_t*)L_67);
		// for (int i = 0; i < tmpTopics.Count; i++)
		int32_t L_68 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_68, 1));
	}

IL_010c:
	{
		// for (int i = 0; i < tmpTopics.Count; i++)
		int32_t L_69 = V_7;
		RuntimeObject* L_70 = V_6;
		NullCheck(L_70);
		int32_t L_71;
		L_71 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.String>::get_Count() */, ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var, L_70);
		if ((((int32_t)L_69) < ((int32_t)L_71)))
		{
			goto IL_00f3;
		}
	}
	{
		// return msg;
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_72 = V_4;
		return L_72;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgUnsubscribe_GetBytes_m937D276453E8FB292ACBEE1B4BAC08A757B95A54 (MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* __this, uint8_t ___protocolVersion0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t G_B15_0 = 0;
	uint8_t* G_B15_1 = NULL;
	int32_t G_B14_0 = 0;
	uint8_t* G_B14_1 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	uint8_t* G_B16_2 = NULL;
	{
		// int fixedHeaderSize = 0;
		V_0 = 0;
		// int varHeaderSize = 0;
		V_1 = 0;
		// int payloadSize = 0;
		V_2 = 0;
		// int remainingLength = 0;
		V_3 = 0;
		// int index = 0;
		V_5 = 0;
		// if ((this.topics == null) || (this.topics.Length == 0))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___topics_55;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___topics_55;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0023;
		}
	}

IL_001c:
	{
		// throw new MqttClientException(MqttClientErrorCode.TopicsEmpty);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_2 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_2, 6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgUnsubscribe_GetBytes_m937D276453E8FB292ACBEE1B4BAC08A757B95A54_RuntimeMethod_var)));
	}

IL_0023:
	{
		// varHeaderSize += MESSAGE_ID_SIZE;
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, 2));
		// int topicIdx = 0;
		V_6 = 0;
		// byte[][] topicsUtf8 = new byte[this.topics.Length][];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = __this->___topics_55;
		NullCheck(L_4);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_5 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		V_7 = L_5;
		// for (topicIdx = 0; topicIdx < this.topics.Length; topicIdx++)
		V_6 = 0;
		goto IL_0097;
	}

IL_003e:
	{
		// if ((this.topics[topicIdx].Length < MIN_TOPIC_LENGTH) || (this.topics[topicIdx].Length > MAX_TOPIC_LENGTH))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = __this->___topics_55;
		int32_t L_7 = V_6;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		if ((((int32_t)L_10) < ((int32_t)1)))
		{
			goto IL_0064;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = __this->___topics_55;
		int32_t L_12 = V_6;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		String_t* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_006b;
		}
	}

IL_0064:
	{
		// throw new MqttClientException(MqttClientErrorCode.TopicLength);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_16 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_16, 4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgUnsubscribe_GetBytes_m937D276453E8FB292ACBEE1B4BAC08A757B95A54_RuntimeMethod_var)));
	}

IL_006b:
	{
		// topicsUtf8[topicIdx] = Encoding.UTF8.GetBytes(this.topics[topicIdx]);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_17 = V_7;
		int32_t L_18 = V_6;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_19;
		L_19 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = __this->___topics_55;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		String_t* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_19);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_19, L_23);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_24);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_24);
		// payloadSize += 2; // topic size (MSB, LSB)
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 2));
		// payloadSize += topicsUtf8[topicIdx].Length;
		int32_t L_26 = V_2;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_27 = V_7;
		int32_t L_28 = V_6;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, ((int32_t)(((RuntimeArray*)L_30)->max_length))));
		// for (topicIdx = 0; topicIdx < this.topics.Length; topicIdx++)
		int32_t L_31 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0097:
	{
		// for (topicIdx = 0; topicIdx < this.topics.Length; topicIdx++)
		int32_t L_32 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = __this->___topics_55;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_003e;
		}
	}
	{
		// remainingLength += (varHeaderSize + payloadSize);
		int32_t L_34 = V_3;
		int32_t L_35 = V_1;
		int32_t L_36 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, ((int32_t)il2cpp_codegen_add(L_35, L_36))));
		// fixedHeaderSize = 1;
		V_0 = 1;
		// int temp = remainingLength;
		int32_t L_37 = V_3;
		V_8 = L_37;
	}

IL_00ae:
	{
		// fixedHeaderSize++;
		int32_t L_38 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		// temp = temp / 128;
		int32_t L_39 = V_8;
		V_8 = ((int32_t)(L_39/((int32_t)128)));
		// } while (temp > 0);
		int32_t L_40 = V_8;
		if ((((int32_t)L_40) > ((int32_t)0)))
		{
			goto IL_00ae;
		}
	}
	{
		// buffer = new byte[fixedHeaderSize + varHeaderSize + payloadSize];
		int32_t L_41 = V_0;
		int32_t L_42 = V_1;
		int32_t L_43 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_41, L_42)), L_43)));
		V_4 = L_44;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_45 = ___protocolVersion0;
		if ((!(((uint32_t)L_45) == ((uint32_t)4))))
		{
			goto IL_00e2;
		}
	}
	{
		// buffer[index++] = (MQTT_MSG_UNSUBSCRIBE_TYPE << MSG_TYPE_OFFSET) | MQTT_MSG_UNSUBSCRIBE_FLAG_BITS; // [v.3.1.1]
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_4;
		int32_t L_47 = V_5;
		int32_t L_48 = L_47;
		V_5 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (uint8_t)((int32_t)162));
		goto IL_0116;
	}

IL_00e2:
	{
		// buffer[index] = (byte)((MQTT_MSG_UNSUBSCRIBE_TYPE << MSG_TYPE_OFFSET) |
		//                    (this.qosLevel << QOS_LEVEL_OFFSET));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_4;
		int32_t L_50 = V_5;
		uint8_t L_51 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel_52;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(L_50), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)160)|((int32_t)((int32_t)L_51<<1))))));
		// buffer[index] |= this.dupFlag ? (byte)(1 << DUP_FLAG_OFFSET) : (byte)0x00;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_4;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		uint8_t* L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)));
		int32_t L_55 = *((uint8_t*)L_54);
		bool L_56 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___dupFlag_51;
		G_B14_0 = L_55;
		G_B14_1 = L_54;
		if (L_56)
		{
			G_B15_0 = L_55;
			G_B15_1 = L_54;
			goto IL_010c;
		}
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_0;
		G_B16_2 = G_B14_1;
		goto IL_010d;
	}

IL_010c:
	{
		G_B16_0 = 8;
		G_B16_1 = G_B15_0;
		G_B16_2 = G_B15_1;
	}

IL_010d:
	{
		*((int8_t*)G_B16_2) = (int8_t)((int32_t)(uint8_t)((int32_t)(G_B16_1|G_B16_0)));
		// index++;
		int32_t L_57 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_0116:
	{
		// index = this.encodeRemainingLength(remainingLength, buffer, index);
		int32_t L_58 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = V_4;
		int32_t L_60 = V_5;
		int32_t L_61;
		L_61 = MqttMsgBase_encodeRemainingLength_m43EA5D6E75723B929A7F2D60D97BCAF1D724A3F0(__this, L_58, L_59, L_60, NULL);
		V_5 = L_61;
		// if (this.messageId == 0)
		uint16_t L_62 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		if (L_62)
		{
			goto IL_0133;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.WrongMessageId);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_63 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_63);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_63, ((int32_t)10), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_63, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgUnsubscribe_GetBytes_m937D276453E8FB292ACBEE1B4BAC08A757B95A54_RuntimeMethod_var)));
	}

IL_0133:
	{
		// buffer[index++] = (byte)((messageId >> 8) & 0x00FF); // MSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = V_4;
		int32_t L_65 = V_5;
		int32_t L_66 = L_65;
		V_5 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		uint16_t L_67 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(L_66), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_67>>8))&((int32_t)255)))));
		// buffer[index++] = (byte)(messageId & 0x00FF); // LSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = V_4;
		int32_t L_69 = V_5;
		int32_t L_70 = L_69;
		V_5 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		uint16_t L_71 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(L_70), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_71&((int32_t)255)))));
		// topicIdx = 0;
		V_6 = 0;
		// for (topicIdx = 0; topicIdx < this.topics.Length; topicIdx++)
		V_6 = 0;
		goto IL_01c5;
	}

IL_016b:
	{
		// buffer[index++] = (byte)((topicsUtf8[topicIdx].Length >> 8) & 0x00FF); // MSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = V_4;
		int32_t L_73 = V_5;
		int32_t L_74 = L_73;
		V_5 = ((int32_t)il2cpp_codegen_add(L_74, 1));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_75 = V_7;
		int32_t L_76 = V_6;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_78);
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(L_74), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)(((RuntimeArray*)L_78)->max_length))>>8))&((int32_t)255)))));
		// buffer[index++] = (byte)(topicsUtf8[topicIdx].Length & 0x00FF); // LSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = V_4;
		int32_t L_80 = V_5;
		int32_t L_81 = L_80;
		V_5 = ((int32_t)il2cpp_codegen_add(L_81, 1));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_82 = V_7;
		int32_t L_83 = V_6;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_85);
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_81), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((RuntimeArray*)L_85)->max_length))&((int32_t)255)))));
		// Array.Copy(topicsUtf8[topicIdx], 0, buffer, index, topicsUtf8[topicIdx].Length);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_86 = V_7;
		int32_t L_87 = V_6;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = V_4;
		int32_t L_91 = V_5;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_92 = V_7;
		int32_t L_93 = V_6;
		NullCheck(L_92);
		int32_t L_94 = L_93;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		NullCheck(L_95);
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_89, 0, (RuntimeArray*)L_90, L_91, ((int32_t)(((RuntimeArray*)L_95)->max_length)), NULL);
		// index += topicsUtf8[topicIdx].Length;
		int32_t L_96 = V_5;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_97 = V_7;
		int32_t L_98 = V_6;
		NullCheck(L_97);
		int32_t L_99 = L_98;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		NullCheck(L_100);
		V_5 = ((int32_t)il2cpp_codegen_add(L_96, ((int32_t)(((RuntimeArray*)L_100)->max_length))));
		// for (topicIdx = 0; topicIdx < this.topics.Length; topicIdx++)
		int32_t L_101 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_101, 1));
	}

IL_01c5:
	{
		// for (topicIdx = 0; topicIdx < this.topics.Length; topicIdx++)
		int32_t L_102 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_103 = __this->___topics_55;
		NullCheck(L_103);
		if ((((int32_t)L_102) < ((int32_t)((int32_t)(((RuntimeArray*)L_103)->max_length)))))
		{
			goto IL_016b;
		}
	}
	{
		// return buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = V_4;
		return L_104;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgUnsubscribe_ToString_m137BEF83C0D58EE8CD6D179111874504F41D3385 (MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* __this, const RuntimeMethod* method) 
{
	{
		// return base.ToString();
		String_t* L_0;
		L_0 = Object_ToString_mF8AC1EB9D85AB52EC8FD8B8BDD131E855E69673F(__this, NULL);
		return L_0;
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
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs::get_MessageId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t MqttMsgUnsubscribedEventArgs_get_MessageId_m45D749DAB8C188360DDD1F22B60805621E9EB7CD (MqttMsgUnsubscribedEventArgs_t46F3D712F85B4F54BD19B4355690C775FAC35E5D* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.messageId; }
		uint16_t L_0 = __this->___messageId_1;
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs::set_MessageId(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribedEventArgs_set_MessageId_m9990BD192EA3CA1FAB52CE7B8E0665DD7971626F (MqttMsgUnsubscribedEventArgs_t46F3D712F85B4F54BD19B4355690C775FAC35E5D* __this, uint16_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { this.messageId = value; }
		uint16_t L_0 = ___value0;
		__this->___messageId_1 = L_0;
		// internal set { this.messageId = value; }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs::.ctor(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribedEventArgs__ctor_m333FE1E9970E80D75E5D22A9067F5C1F86BBE8A4 (MqttMsgUnsubscribedEventArgs_t46F3D712F85B4F54BD19B4355690C775FAC35E5D* __this, uint16_t ___messageId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MqttMsgUnsubscribedEventArgs(ushort messageId)
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		// this.messageId = messageId;
		uint16_t L_0 = ___messageId0;
		__this->___messageId_1 = L_0;
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
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribeEventArgs::get_MessageId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t MqttMsgUnsubscribeEventArgs_get_MessageId_m2227CAA42BF53FE4D9FF0927F838E200AD5D9FB0 (MqttMsgUnsubscribeEventArgs_tA68BC3F886142FE585E4C77459616DBF79832F29* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.messageId; }
		uint16_t L_0 = __this->___messageId_1;
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribeEventArgs::set_MessageId(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribeEventArgs_set_MessageId_m0F8DD20B80B0641CB65354B306818192ADE39FA7 (MqttMsgUnsubscribeEventArgs_tA68BC3F886142FE585E4C77459616DBF79832F29* __this, uint16_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { this.messageId = value; }
		uint16_t L_0 = ___value0;
		__this->___messageId_1 = L_0;
		// internal set { this.messageId = value; }
		return;
	}
}
// System.String[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribeEventArgs::get_Topics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* MqttMsgUnsubscribeEventArgs_get_Topics_m193E54AAB9CFA1B5E4F945FAB62B151325B9E5E1 (MqttMsgUnsubscribeEventArgs_tA68BC3F886142FE585E4C77459616DBF79832F29* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.topics; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___topics_2;
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribeEventArgs::set_Topics(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribeEventArgs_set_Topics_mCFDD5556902E9F81263D1FC06594C0D5103BC5EF (MqttMsgUnsubscribeEventArgs_tA68BC3F886142FE585E4C77459616DBF79832F29* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { this.topics = value; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___value0;
		__this->___topics_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topics_2), (void*)L_0);
		// internal set { this.topics = value; }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribeEventArgs::.ctor(System.UInt16,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribeEventArgs__ctor_m7F674ECBD50170060E07C8CD6DCA65CC38E4950B (MqttMsgUnsubscribeEventArgs_tA68BC3F886142FE585E4C77459616DBF79832F29* __this, uint16_t ___messageId0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___topics1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MqttMsgUnsubscribeEventArgs(ushort messageId, string[] topics)
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		// this.messageId = messageId;
		uint16_t L_0 = ___messageId0;
		__this->___messageId_1 = L_0;
		// this.topics = topics;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___topics1;
		__this->___topics_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topics_2), (void*)L_1);
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
// System.Void uPLibrary.Networking.M2Mqtt.Internal.InternalEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalEvent__ctor_mCA1DB6F9F0C187BBE3C18FDD5B93919DAFC004EC (InternalEvent_tC239B49C40C425EF2A2775CA3DE46B3F39DD72BB* __this, const RuntimeMethod* method) 
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
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.Internal.MsgInternalEvent::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* MsgInternalEvent_get_Message_m28B4FCC92193372BE26B1BC9BF8173A1B7D1DB6F (MsgInternalEvent_t58B252CBF33A81BB443C2B2A4D77D13FC64B0B84* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.msg; }
		MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* L_0 = __this->___msg_0;
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Internal.MsgInternalEvent::set_Message(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MsgInternalEvent_set_Message_m8EF55DDB59A3C5D4D4D8693C30F2ACD0D3112199 (MsgInternalEvent_t58B252CBF33A81BB443C2B2A4D77D13FC64B0B84* __this, MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.msg = value; }
		MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* L_0 = ___value0;
		__this->___msg_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___msg_0), (void*)L_0);
		// set { this.msg = value; }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Internal.MsgInternalEvent::.ctor(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MsgInternalEvent__ctor_mD2ECF81AE8634E936664761C86E173B6D85824D7 (MsgInternalEvent_t58B252CBF33A81BB443C2B2A4D77D13FC64B0B84* __this, MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* ___msg0, const RuntimeMethod* method) 
{
	{
		// public MsgInternalEvent(MqttMsgBase msg)
		InternalEvent__ctor_mCA1DB6F9F0C187BBE3C18FDD5B93919DAFC004EC(__this, NULL);
		// this.msg = msg;
		MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* L_0 = ___msg0;
		__this->___msg_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___msg_0), (void*)L_0);
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
// System.Boolean uPLibrary.Networking.M2Mqtt.Internal.MsgPublishedInternalEvent::get_IsPublished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MsgPublishedInternalEvent_get_IsPublished_mE56C25A2E5769105EF0CA59FDCB10297FE2CCDF4 (MsgPublishedInternalEvent_t77F08FECAE4E4CB4F4926233C27C164CADC43873* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.isPublished; }
		bool L_0 = __this->___isPublished_1;
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Internal.MsgPublishedInternalEvent::set_IsPublished(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MsgPublishedInternalEvent_set_IsPublished_m08C5E0F5021B70697FD6076C269A74C4358A55DA (MsgPublishedInternalEvent_t77F08FECAE4E4CB4F4926233C27C164CADC43873* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { this.isPublished = value; }
		bool L_0 = ___value0;
		__this->___isPublished_1 = L_0;
		// internal set { this.isPublished = value; }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Internal.MsgPublishedInternalEvent::.ctor(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MsgPublishedInternalEvent__ctor_mE3654CE99F37363D95DB561D402B778B12DDB894 (MsgPublishedInternalEvent_t77F08FECAE4E4CB4F4926233C27C164CADC43873* __this, MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* ___msg0, bool ___isPublished1, const RuntimeMethod* method) 
{
	{
		// : base(msg)
		MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* L_0 = ___msg0;
		MsgInternalEvent__ctor_mD2ECF81AE8634E936664761C86E173B6D85824D7(__this, L_0, NULL);
		// this.isPublished = isPublished;
		bool L_1 = ___isPublished1;
		__this->___isPublished_1 = L_1;
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
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientException::.ctor(uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientErrorCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* __this, int32_t ___errorCode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MqttClientException(MqttClientErrorCode errorCode)
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// this.errorCode = errorCode;
		int32_t L_0 = ___errorCode0;
		__this->___errorCode_18 = L_0;
		// }
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientErrorCode uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientException::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttClientException_get_ErrorCode_m58062C993177C18A6B3F59F810920634FF3F8B4D (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.errorCode; }
		int32_t L_0 = __this->___errorCode_18;
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientException::set_ErrorCode(uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientErrorCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClientException_set_ErrorCode_mB78CB6ABDB7FE0AF952AEBDC9FD42A3203AB8ADE (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.errorCode = value; }
		int32_t L_0 = ___value0;
		__this->___errorCode_18 = L_0;
		// set { this.errorCode = value; }
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
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttCommunicationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttCommunicationException__ctor_mD4031454FE16E33887D5E318BE3440BFBDF0FB77 (MqttCommunicationException_t016BFB6E56C108061FB2FE6CE77E280AEF4E2EBC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MqttCommunicationException()
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttCommunicationException::.ctor(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttCommunicationException__ctor_m0AF8276EBCE12EDEF85EC8CAB5D75CC3933F392B (MqttCommunicationException_t016BFB6E56C108061FB2FE6CE77E280AEF4E2EBC* __this, Exception_t* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(String.Empty, e)
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		Exception_t* L_1 = ___e0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
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
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttConnectionException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttConnectionException__ctor_mB3D08501C9415D641FA2A3EB4F4BBAFB3F36DF37 (MqttConnectionException_t4133D9B042197DC8ACE467698F13BCD634939476* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(message, innerException)
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___innerException1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
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
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttTimeoutException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttTimeoutException__ctor_mE628E891112184AE977020286DEB216CC838A7B0 (MqttTimeoutException_t43973937D83859B52199C9D855F55A16DFB478A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
