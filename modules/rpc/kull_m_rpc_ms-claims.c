#include "kull_m_rpc_ms-claims.h"

#if defined(_M_X64) || defined(_M_ARM64) // TODO:ARM64
#define _Claims_MIDL_TYPE_FORMAT_STRING_SIZE	371
#define _Claims_MIDL_TYPE_FORMAT_OFFSET			316
#elif defined(_M_IX86)
#define _Claims_MIDL_TYPE_FORMAT_STRING_SIZE	383
#define _Claims_MIDL_TYPE_FORMAT_OFFSET			328
#endif

typedef struct _Claims_MIDL_TYPE_FORMAT_STRING {
	SHORT Pad;
	UCHAR Format[_Claims_MIDL_TYPE_FORMAT_STRING_SIZE];
} Claims_MIDL_TYPE_FORMAT_STRING;

static const Claims_MIDL_TYPE_FORMAT_STRING Claims__MIDL_TypeFormatString;
static const RPC_CLIENT_INTERFACE Claims___RpcClientInterface = {sizeof(RPC_CLIENT_INTERFACE), {{0xbba9cb76, 0xeb0c, 0x462c, {0xaa, 0x1b, 0x5d, 0x8c, 0x34, 0x41, 0x57, 0x01}}, {1, 0}}, {{0x8a885d04, 0x1ceb, 0x11c9, {0x9f, 0xe8, 0x08, 0x00, 0x2b, 0x10, 0x48, 0x60}}, {2, 0}}, 0, 0, 0, 0, 0, 0x00000000};
static const MIDL_TYPE_PICKLING_INFO __MIDL_TypePicklingInfo = {0x33205054, 0x3, 0, 0, 0,};
static RPC_BINDING_HANDLE Claims__MIDL_AutoBindHandle;
static const MIDL_STUB_DESC Claims_StubDesc = {(void *) &Claims___RpcClientInterface, MIDL_user_allocate, MIDL_user_free, &Claims__MIDL_AutoBindHandle, 0, 0, 0, 0, Claims__MIDL_TypeFormatString.Format, 1, 0x60000, 0, 0x8000253, 0, 0, 0, 0x1, 0, 0, 0};

size_t PCLAIMS_SET_AlignSize(handle_t _MidlEsHandle, PCLAIMS_SET * _pType)
{
    return NdrMesTypeAlignSize2(_MidlEsHandle, (PMIDL_TYPE_PICKLING_INFO) &__MIDL_TypePicklingInfo, &Claims_StubDesc, (PFORMAT_STRING ) &Claims__MIDL_TypeFormatString.Format[2], _pType);
}

void PCLAIMS_SET_Encode(handle_t _MidlEsHandle, PCLAIMS_SET * _pType)
{
    NdrMesTypeEncode2(_MidlEsHandle, (PMIDL_TYPE_PICKLING_INFO) &__MIDL_TypePicklingInfo, &Claims_StubDesc, (PFORMAT_STRING) &Claims__MIDL_TypeFormatString.Format[2], _pType);
}

void PCLAIMS_SET_Decode(handle_t _MidlEsHandle, PCLAIMS_SET * _pType)
{
    NdrMesTypeDecode2(_MidlEsHandle, (PMIDL_TYPE_PICKLING_INFO) &__MIDL_TypePicklingInfo, &Claims_StubDesc, (PFORMAT_STRING) &Claims__MIDL_TypeFormatString.Format[2], _pType);
}

void PCLAIMS_SET_Free(handle_t _MidlEsHandle, PCLAIMS_SET * _pType)
{
    NdrMesTypeFree2(_MidlEsHandle, (PMIDL_TYPE_PICKLING_INFO) &__MIDL_TypePicklingInfo, &Claims_StubDesc, (PFORMAT_STRING) &Claims__MIDL_TypeFormatString.Format[2], _pType);
}

size_t PCLAIMS_SET_METADATA_AlignSize(handle_t _MidlEsHandle, PCLAIMS_SET_METADATA * _pType)
{
    return NdrMesTypeAlignSize2(_MidlEsHandle, (PMIDL_TYPE_PICKLING_INFO) &__MIDL_TypePicklingInfo, &Claims_StubDesc, (PFORMAT_STRING) &Claims__MIDL_TypeFormatString.Format[_Claims_MIDL_TYPE_FORMAT_OFFSET], _pType);
}

void PCLAIMS_SET_METADATA_Encode(handle_t _MidlEsHandle, PCLAIMS_SET_METADATA * _pType)
{
    NdrMesTypeEncode2(_MidlEsHandle, (PMIDL_TYPE_PICKLING_INFO) &__MIDL_TypePicklingInfo, &Claims_StubDesc, (PFORMAT_STRING) &Claims__MIDL_TypeFormatString.Format[_Claims_MIDL_TYPE_FORMAT_OFFSET], _pType);
}

void PCLAIMS_SET_METADATA_Decode(handle_t _MidlEsHandle, PCLAIMS_SET_METADATA * _pType)
{
    NdrMesTypeDecode2(_MidlEsHandle, (PMIDL_TYPE_PICKLING_INFO) &__MIDL_TypePicklingInfo, &Claims_StubDesc, (PFORMAT_STRING) &Claims__MIDL_TypeFormatString.Format[_Claims_MIDL_TYPE_FORMAT_OFFSET], _pType);
}

void PCLAIMS_SET_METADATA_Free(handle_t _MidlEsHandle, PCLAIMS_SET_METADATA * _pType)
{
    NdrMesTypeFree2(_MidlEsHandle, (PMIDL_TYPE_PICKLING_INFO) &__MIDL_TypePicklingInfo, &Claims_StubDesc, (PFORMAT_STRING) &Claims__MIDL_TypeFormatString.Format[_Claims_MIDL_TYPE_FORMAT_OFFSET], _pType);
}
#if defined(_M_X64) || defined(_M_ARM64) // TODO:ARM64
static const Claims_MIDL_TYPE_FORMAT_STRING Claims__MIDL_TypeFormatString = {0, {
	0x00, 0x00, 0x12, 0x00, 0x20, 0x01, 0x2b, 0x0d, 0x06, 0x00, 0xf8, 0xff, 0x01, 0x00, 0x02, 0x00, 0x10, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x02, 0x00, 0x00, 0x00, 0x44, 0x00,
	0x03, 0x00, 0x00, 0x00, 0x72, 0x00, 0x06, 0x00, 0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, 0xb7, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x1b, 0x07, 0x08, 0x00, 0x19, 0x00, 0x00, 0x00,
	0x01, 0x00, 0x0b, 0x5b, 0x1a, 0x03, 0x10, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x4c, 0x00, 0xe0, 0xff, 0x40, 0x36, 0x5c, 0x5b, 0x12, 0x00, 0xe2, 0xff, 0xb7, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xa0, 0x00, 0x1a, 0x03, 0x10, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x4c, 0x00, 0xec, 0xff, 0x40, 0x36, 0x5c, 0x5b, 0x12, 0x00, 0xc4, 0xff, 0xb7, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x00,
	0x21, 0x03, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x01, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x5c, 0x5b, 0x1a, 0x03, 0x10, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x4c, 0x00,
	0xd6, 0xff, 0x40, 0x36, 0x5c, 0x5b, 0x12, 0x00, 0xd8, 0xff, 0xb7, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x1a, 0x03, 0x10, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x4c, 0x00, 0xec, 0xff,
	0x40, 0x36, 0x5c, 0x5b, 0x12, 0x00, 0x72, 0xff, 0x1a, 0x03, 0x20, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x36, 0x0d, 0x40, 0x4c, 0x00, 0x31, 0xff, 0x5b, 0x12, 0x08, 0x25, 0x5c, 0x21, 0x03, 0x00, 0x00,
	0x19, 0x00, 0x04, 0x00, 0x01, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x4c, 0x00, 0xda, 0xff, 0x5c, 0x5b, 0x1a, 0x03, 0x10, 0x00, 0x00, 0x00, 0x06, 0x00, 0x0d, 0x08, 0x36, 0x5b, 0x12, 0x00,
	0xdc, 0xff, 0x21, 0x03, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x01, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x4c, 0x00, 0xde, 0xff, 0x5c, 0x5b, 0x1b, 0x00, 0x01, 0x00, 0x19, 0x00, 0x14, 0x00,
	0x01, 0x00, 0x01, 0x5b, 0x1a, 0x03, 0x20, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x08, 0x40, 0x36, 0x06, 0x3e, 0x08, 0x36, 0x5b, 0x12, 0x00, 0xcc, 0xff, 0x12, 0x00, 0xde, 0xff, 0x12, 0x00, 0x1a, 0x00,
	0x1b, 0x00, 0x01, 0x00, 0x19, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x5b, 0x1b, 0x00, 0x01, 0x00, 0x19, 0x00, 0x1c, 0x00, 0x01, 0x00, 0x01, 0x5b, 0x1a, 0x03, 0x28, 0x00, 0x00, 0x00, 0x0c, 0x00,
	0x08, 0x40, 0x36, 0x0d, 0x08, 0x06, 0x3e, 0x08, 0x36, 0x5b, 0x12, 0x00, 0xd4, 0xff, 0x12, 0x00, 0xdc, 0xff, 0x00,
}};
#elif defined(_M_IX86)
static const Claims_MIDL_TYPE_FORMAT_STRING Claims__MIDL_TypeFormatString = {0, {
    0x00, 0x00, 0x12, 0x00, 0x22, 0x01, 0x2b, 0x0d, 0x06, 0x00, 0xfc, 0xff, 0x01, 0x00, 0x02, 0x00, 0x08, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x02, 0x00, 0x00, 0x00, 0x42, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x78, 0x00, 0x06, 0x00, 0x00, 0x00, 0x8e, 0x00, 0x00, 0x00, 0xb7, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x1b, 0x07, 0x08, 0x00, 0x19, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x0b, 0x5b, 0x1a, 0x03, 0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x4c, 0x00, 0xe0, 0xff, 0x36, 0x5b, 0x12, 0x00, 0xe4, 0xff, 0xb7, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x00,
    0x1a, 0x03, 0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x4c, 0x00, 0xec, 0xff, 0x36, 0x5b, 0x12, 0x00, 0xc8, 0xff, 0xb7, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x1b, 0x03, 0x04, 0x00,
    0x19, 0x00, 0x00, 0x00, 0x01, 0x00, 0x4b, 0x5c, 0x48, 0x49, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x5b, 0x08, 0x5c, 0x5b, 0x1a, 0x03, 0x08, 0x00,
    0x00, 0x00, 0x08, 0x00, 0x4c, 0x00, 0xcc, 0xff, 0x36, 0x5b, 0x12, 0x00, 0xd0, 0xff, 0xb7, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x1a, 0x03, 0x08, 0x00, 0x00, 0x00, 0x08, 0x00,
    0x4c, 0x00, 0xec, 0xff, 0x36, 0x5b, 0x12, 0x00, 0x70, 0xff, 0x1a, 0x03, 0x10, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x36, 0x0d, 0x4c, 0x00, 0x30, 0xff, 0x5c, 0x5b, 0x12, 0x08, 0x25, 0x5c, 0x21, 0x03,
    0x00, 0x00, 0x19, 0x00, 0x04, 0x00, 0x01, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x4c, 0x00, 0xda, 0xff, 0x5c, 0x5b, 0x1a, 0x03, 0x0c, 0x00, 0x00, 0x00, 0x06, 0x00, 0x0d, 0x08, 0x36, 0x5b,
    0x12, 0x00, 0xdc, 0xff, 0x21, 0x03, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x01, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x4c, 0x00, 0xde, 0xff, 0x5c, 0x5b, 0x1b, 0x00, 0x01, 0x00, 0x19, 0x00,
    0x0c, 0x00, 0x01, 0x00, 0x01, 0x5b, 0x16, 0x03, 0x14, 0x00, 0x4b, 0x5c, 0x46, 0x5c, 0x04, 0x00, 0x04, 0x00, 0x12, 0x00, 0xd0, 0xff, 0x46, 0x5c, 0x10, 0x00, 0x10, 0x00, 0x12, 0x00, 0xdc, 0xff,
    0x5b, 0x08, 0x08, 0x06, 0x3e, 0x08, 0x08, 0x5b, 0x12, 0x00, 0x1a, 0x00, 0x1b, 0x00, 0x01, 0x00, 0x19, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x5b, 0x1b, 0x00, 0x01, 0x00, 0x19, 0x00, 0x14, 0x00,
    0x01, 0x00, 0x01, 0x5b, 0x1a, 0x03, 0x1c, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x08, 0x36, 0x0d, 0x08, 0x06, 0x3e, 0x08, 0x36, 0x5c, 0x5b, 0x12, 0x00, 0xd4, 0xff, 0x12, 0x00, 0xdc, 0xff, 0x00,
}};
#endif
