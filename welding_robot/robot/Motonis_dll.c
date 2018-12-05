// CVI wrapper source file for .NET assembly: MotoNIS, Version=0.9.1.1, Culture=neutral, PublicKeyToken=cf185952c1ac8640

#include "Motonis_dll.h"
#include <stdarg.h>

// Macros
#ifndef __errChk
#define __errChk(f) if (__error = (f), __error < 0) goto __Error; else
#endif
#ifndef __nullChk
#define __nullChk(p) if (!(p)) { __error = CDotNetOutOfMemoryError; goto __Error; } else
#endif

// Constants
static const char * __assemblyName = "MotoNIS, Version=0.9.1.1, Culture=neutral, PublicKeyToken=cf185952c1ac8640";

// Static Variables
static CDotNetAssemblyHandle __assemblyHandle = 0;

// Forward declarations
static int CVIFUNC Motoman_MotoNIS_WebMethodResult__Create(
	Motoman_MotoNIS_WebMethodResult * value,
	CDotNetHandle * handle,
	CDotNetHandle * __exception);
static int CVIFUNC Motoman_MotoNIS_TokenRequestResult__Create(
	Motoman_MotoNIS_TokenRequestResult * value,
	CDotNetHandle * handle,
	CDotNetHandle * __exception);
static int CVIFUNC Motoman_MotoNIS_AccessLevel__Create(
	Motoman_MotoNIS_AccessLevel * value,
	CDotNetHandle * handle,
	CDotNetHandle * __exception);
static int CVIFUNC System_Web_Services_Protocols_SoapProtocolVersion__Create(
	System_Web_Services_Protocols_SoapProtocolVersion * value,
	CDotNetHandle * handle,
	CDotNetHandle * __exception);
static void _CDotNetGenDisposeScalar(void * scalar, unsigned int typeId);
static void CVIFUNC_C _CDotNetGenDisposeArray(void * array, unsigned int typeId, int nDims, ...);

// Global Functions
int CVIFUNC Initialize_MotoNIS(void)
{
	int __error = 0;


	if (__assemblyHandle == 0)
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__assemblyHandle));



__Error:
	return __error;
}

int CVIFUNC Close_MotoNIS(void)
{
	int __error = 0;


	if (__assemblyHandle) {
		__errChk(CDotNetDiscardAssemblyHandle(__assemblyHandle));
		__assemblyHandle = 0;
	}



__Error:
	return __error;
}


// Type: Motoman.MotoNIS.MasterJobData
int CVIFUNC Motoman_MotoNIS_MasterJobData__Create(
	Motoman_MotoNIS_MasterJobData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.MasterJobData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MasterJobData__Create_1(
	Motoman_MotoNIS_MasterJobData * __instance,
	char * jobName,
	short taskNumber,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: jobName
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &jobName;

	// Pre-process parameter: taskNumber
	__parameterTypeNames[1] = "System.Int16";
	__parameterTypes[1] = (CDOTNET_INT16);
	__parameters[1] = &taskNumber;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.MasterJobData", 
		0, 
		0, 
		__instance, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MasterJobData_Get_TaskNumber(
	Motoman_MotoNIS_MasterJobData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MasterJobData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"TaskNumber", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MasterJobData_Set_TaskNumber(
	Motoman_MotoNIS_MasterJobData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MasterJobData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"TaskNumber", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MasterJobData_Get_JobName(
	Motoman_MotoNIS_MasterJobData __instance,
	char ** __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_STRING;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MasterJobData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"JobName", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_STRING);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MasterJobData_Set_JobName(
	Motoman_MotoNIS_MasterJobData __instance,
	char * value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MasterJobData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"JobName", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.StandardResponseData
int CVIFUNC Motoman_MotoNIS_StandardResponseData__Create(
	Motoman_MotoNIS_StandardResponseData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.StandardResponseData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_StandardResponseData_Get_ErrorNumber(
	Motoman_MotoNIS_StandardResponseData __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.StandardResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"ErrorNumber", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_StandardResponseData_Set_ErrorNumber(
	Motoman_MotoNIS_StandardResponseData __instance,
	unsigned short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.UInt16";
	__parameterTypes[0] = (CDOTNET_UINT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.StandardResponseData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"ErrorNumber", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.VarInfo
int CVIFUNC Motoman_MotoNIS_VarInfo__Create(
	Motoman_MotoNIS_VarInfo * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.VarInfo", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_VarInfo__Create_1(
	Motoman_MotoNIS_VarInfo * __instance,
	unsigned short Index,
	unsigned short Type,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: Index
	__parameterTypeNames[0] = "System.UInt16";
	__parameterTypes[0] = (CDOTNET_UINT16);
	__parameters[0] = &Index;

	// Pre-process parameter: Type
	__parameterTypeNames[1] = "System.UInt16";
	__parameterTypes[1] = (CDOTNET_UINT16);
	__parameters[1] = &Type;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.VarInfo", 
		0, 
		0, 
		__instance, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_VarInfo_Get_Index(
	Motoman_MotoNIS_VarInfo __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.VarInfo", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Index", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_VarInfo_Set_Index(
	Motoman_MotoNIS_VarInfo __instance,
	unsigned short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.UInt16";
	__parameterTypes[0] = (CDOTNET_UINT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.VarInfo", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Index", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_VarInfo_Get_Type(
	Motoman_MotoNIS_VarInfo __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.VarInfo", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Type", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_VarInfo_Set_Type(
	Motoman_MotoNIS_VarInfo __instance,
	unsigned short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.UInt16";
	__parameterTypes[0] = (CDOTNET_UINT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.VarInfo", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Type", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.PosVarInfo
int CVIFUNC Motoman_MotoNIS_PosVarInfo__Create(
	Motoman_MotoNIS_PosVarInfo * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.PosVarInfo", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PosVarInfo__Create_1(
	Motoman_MotoNIS_PosVarInfo * __instance,
	unsigned short index,
	unsigned short type,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: index
	__parameterTypeNames[0] = "System.UInt16";
	__parameterTypes[0] = (CDOTNET_UINT16);
	__parameters[0] = &index;

	// Pre-process parameter: type
	__parameterTypeNames[1] = "System.UInt16";
	__parameterTypes[1] = (CDOTNET_UINT16);
	__parameters[1] = &type;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.PosVarInfo", 
		0, 
		0, 
		__instance, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PosVarInfo_Get_Index(
	Motoman_MotoNIS_PosVarInfo __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PosVarInfo", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Index", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PosVarInfo_Set_Index(
	Motoman_MotoNIS_PosVarInfo __instance,
	unsigned short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.UInt16";
	__parameterTypes[0] = (CDOTNET_UINT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PosVarInfo", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Index", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PosVarInfo_Get_Type(
	Motoman_MotoNIS_PosVarInfo __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PosVarInfo", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Type", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PosVarInfo_Set_Type(
	Motoman_MotoNIS_PosVarInfo __instance,
	unsigned short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.UInt16";
	__parameterTypes[0] = (CDOTNET_UINT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PosVarInfo", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Type", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.IoInfo
int CVIFUNC Motoman_MotoNIS_IoInfo__Create(
	Motoman_MotoNIS_IoInfo * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.IoInfo", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_IoInfo__Create_1(
	Motoman_MotoNIS_IoInfo * __instance,
	unsigned __int64 address,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: address
	__parameterTypeNames[0] = "System.UInt64";
	__parameterTypes[0] = (CDOTNET_UINT64);
	__parameters[0] = &address;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.IoInfo", 
		0, 
		0, 
		__instance, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_IoInfo_Get_Address(
	Motoman_MotoNIS_IoInfo __instance,
	unsigned __int64 * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT64;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.IoInfo", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Address", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_IoInfo_Set_Address(
	Motoman_MotoNIS_IoInfo __instance,
	unsigned __int64 value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.UInt64";
	__parameterTypes[0] = (CDOTNET_UINT64);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.IoInfo", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Address", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.MonitorInfo
int CVIFUNC Motoman_MotoNIS_MonitorInfo__Create(
	Motoman_MotoNIS_MonitorInfo * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.MonitorInfo", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MonitorInfo__Create_1(
	Motoman_MotoNIS_MonitorInfo * __instance,
	unsigned __int64 index,
	unsigned __int64 type,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: index
	__parameterTypeNames[0] = "System.UInt64";
	__parameterTypes[0] = (CDOTNET_UINT64);
	__parameters[0] = &index;

	// Pre-process parameter: type
	__parameterTypeNames[1] = "System.UInt64";
	__parameterTypes[1] = (CDOTNET_UINT64);
	__parameters[1] = &type;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.MonitorInfo", 
		0, 
		0, 
		__instance, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MonitorInfo_Get_Index(
	Motoman_MotoNIS_MonitorInfo __instance,
	unsigned __int64 * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT64;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MonitorInfo", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Index", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MonitorInfo_Set_Index(
	Motoman_MotoNIS_MonitorInfo __instance,
	unsigned __int64 value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.UInt64";
	__parameterTypes[0] = (CDOTNET_UINT64);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MonitorInfo", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Index", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MonitorInfo_Get_Type(
	Motoman_MotoNIS_MonitorInfo __instance,
	unsigned __int64 * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT64;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MonitorInfo", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Type", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MonitorInfo_Set_Type(
	Motoman_MotoNIS_MonitorInfo __instance,
	unsigned __int64 value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.UInt64";
	__parameterTypes[0] = (CDOTNET_UINT64);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MonitorInfo", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Type", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.AlarmStatusResponseData
int CVIFUNC Motoman_MotoNIS_AlarmStatusResponseData__Create(
	Motoman_MotoNIS_AlarmStatusResponseData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.AlarmStatusResponseData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_AlarmStatusResponseData_Get_IsAlarm(
	Motoman_MotoNIS_AlarmStatusResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.AlarmStatusResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"IsAlarm", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_AlarmStatusResponseData_Set_IsAlarm(
	Motoman_MotoNIS_AlarmStatusResponseData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.AlarmStatusResponseData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"IsAlarm", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.AlarmData
int CVIFUNC Motoman_MotoNIS_AlarmData__Create(
	Motoman_MotoNIS_AlarmData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.AlarmData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_AlarmData__Create_1(
	Motoman_MotoNIS_AlarmData * __instance,
	Motoman_MotoNIS_Core_ALARMDATA b,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: b
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.ALARMDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &b;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.AlarmData", 
		0, 
		0, 
		__instance, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_AlarmData_Get_AlarmNumber(
	Motoman_MotoNIS_AlarmData __instance,
	unsigned short ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT16 | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.AlarmData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"AlarmNumber", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_UINT16, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_UINT16, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_AlarmData_Set_AlarmNumber(
	Motoman_MotoNIS_AlarmData __instance,
	unsigned short * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_UINT16, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.UInt16[]";
	__parameterTypes[0] = (CDOTNET_UINT16 | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.AlarmData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"AlarmNumber", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_AlarmData_Get_AlarmInfo(
	Motoman_MotoNIS_AlarmData __instance,
	unsigned short ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT16 | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.AlarmData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"AlarmInfo", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_UINT16, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_UINT16, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_AlarmData_Set_AlarmInfo(
	Motoman_MotoNIS_AlarmData __instance,
	unsigned short * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_UINT16, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.UInt16[]";
	__parameterTypes[0] = (CDOTNET_UINT16 | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.AlarmData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"AlarmInfo", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_AlarmData__Get__MAX_ALARM_COUNT(
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call static member
	__errChk(CDotNetInvokeGenericStaticMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.AlarmData", 
		0, 
		0, 
		CDOTNET_GET_FIELD, 
		"MAX_ALARM_COUNT", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.AlarmCodeResponseData
int CVIFUNC Motoman_MotoNIS_AlarmCodeResponseData__Create(
	Motoman_MotoNIS_AlarmCodeResponseData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.AlarmCodeResponseData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_AlarmCodeResponseData__Create_1(
	Motoman_MotoNIS_AlarmCodeResponseData * __instance,
	Motoman_MotoNIS_Core_ALARMCODERSPDATA b,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: b
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.ALARMCODERSPDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &b;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.AlarmCodeResponseData", 
		0, 
		0, 
		__instance, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_AlarmCodeResponseData_Get_AlarmCount(
	Motoman_MotoNIS_AlarmCodeResponseData __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.AlarmCodeResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"AlarmCount", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_AlarmCodeResponseData_Set_AlarmCount(
	Motoman_MotoNIS_AlarmCodeResponseData __instance,
	unsigned short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.UInt16";
	__parameterTypes[0] = (CDOTNET_UINT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.AlarmCodeResponseData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"AlarmCount", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_AlarmCodeResponseData_Get_ErrorData(
	Motoman_MotoNIS_AlarmCodeResponseData __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.AlarmCodeResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"ErrorData", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_AlarmCodeResponseData_Set_ErrorData(
	Motoman_MotoNIS_AlarmCodeResponseData __instance,
	unsigned short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.UInt16";
	__parameterTypes[0] = (CDOTNET_UINT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.AlarmCodeResponseData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"ErrorData", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_AlarmCodeResponseData_Get_ErrorNumber(
	Motoman_MotoNIS_AlarmCodeResponseData __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.AlarmCodeResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"ErrorNumber", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_AlarmCodeResponseData_Set_ErrorNumber(
	Motoman_MotoNIS_AlarmCodeResponseData __instance,
	unsigned short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.UInt16";
	__parameterTypes[0] = (CDOTNET_UINT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.AlarmCodeResponseData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"ErrorNumber", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_AlarmCodeResponseData_Get_AlarmData(
	Motoman_MotoNIS_AlarmCodeResponseData __instance,
	Motoman_MotoNIS_AlarmData * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.AlarmCodeResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"AlarmData", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_AlarmCodeResponseData_Set_AlarmData(
	Motoman_MotoNIS_AlarmCodeResponseData __instance,
	Motoman_MotoNIS_AlarmData value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.AlarmData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.AlarmCodeResponseData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"AlarmData", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.ModeResponseData
int CVIFUNC Motoman_MotoNIS_ModeResponseData__Create(
	Motoman_MotoNIS_ModeResponseData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.ModeResponseData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ModeResponseData__Create_1(
	Motoman_MotoNIS_ModeResponseData * __instance,
	Motoman_MotoNIS_Core_MODERSPDATA b,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: b
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.MODERSPDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &b;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.ModeResponseData", 
		0, 
		0, 
		__instance, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ModeResponseData_Get_Mode(
	Motoman_MotoNIS_ModeResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.ModeResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Mode", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ModeResponseData_Set_Mode(
	Motoman_MotoNIS_ModeResponseData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.ModeResponseData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Mode", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ModeResponseData_Get_Remote(
	Motoman_MotoNIS_ModeResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.ModeResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Remote", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ModeResponseData_Set_Remote(
	Motoman_MotoNIS_ModeResponseData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.ModeResponseData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Remote", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.CycleResponseData
int CVIFUNC Motoman_MotoNIS_CycleResponseData__Create(
	Motoman_MotoNIS_CycleResponseData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.CycleResponseData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_CycleResponseData__Create_1(
	Motoman_MotoNIS_CycleResponseData * __instance,
	Motoman_MotoNIS_Core_CYCLERSPDATA b,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: b
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CYCLERSPDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &b;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.CycleResponseData", 
		0, 
		0, 
		__instance, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_CycleResponseData_Get_Cycle(
	Motoman_MotoNIS_CycleResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.CycleResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Cycle", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_CycleResponseData_Set_Cycle(
	Motoman_MotoNIS_CycleResponseData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.CycleResponseData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Cycle", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.ServoPowerResponseData
int CVIFUNC Motoman_MotoNIS_ServoPowerResponseData__Create(
	Motoman_MotoNIS_ServoPowerResponseData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.ServoPowerResponseData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ServoPowerResponseData__Create_1(
	Motoman_MotoNIS_ServoPowerResponseData * __instance,
	Motoman_MotoNIS_Core_SERVOPOWERRSPDATA b,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: b
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.SERVOPOWERRSPDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &b;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.ServoPowerResponseData", 
		0, 
		0, 
		__instance, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ServoPowerResponseData_Get_ServoPower(
	Motoman_MotoNIS_ServoPowerResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.ServoPowerResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"ServoPower", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ServoPowerResponseData_Set_ServoPower(
	Motoman_MotoNIS_ServoPowerResponseData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.ServoPowerResponseData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"ServoPower", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.PlayStatusResponseData
int CVIFUNC Motoman_MotoNIS_PlayStatusResponseData__Create(
	Motoman_MotoNIS_PlayStatusResponseData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.PlayStatusResponseData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PlayStatusResponseData__Create_1(
	Motoman_MotoNIS_PlayStatusResponseData * __instance,
	Motoman_MotoNIS_Core_PLAYSTATUSRSPDATA b,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: b
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.PLAYSTATUSRSPDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &b;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.PlayStatusResponseData", 
		0, 
		0, 
		__instance, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PlayStatusResponseData_Get_Hold(
	Motoman_MotoNIS_PlayStatusResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PlayStatusResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Hold", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PlayStatusResponseData_Get_Start(
	Motoman_MotoNIS_PlayStatusResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PlayStatusResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Start", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.TaskData
int CVIFUNC Motoman_MotoNIS_TaskData__Create(
	Motoman_MotoNIS_TaskData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.TaskData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_TaskData__Create_1(
	Motoman_MotoNIS_TaskData * __instance,
	short taskNumber,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: taskNumber
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &taskNumber;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.TaskData", 
		0, 
		0, 
		__instance, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_TaskData_Get_TaskNumber(
	Motoman_MotoNIS_TaskData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.TaskData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"TaskNumber", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_TaskData_Set_TaskNumber(
	Motoman_MotoNIS_TaskData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.TaskData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"TaskNumber", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.CurJobResponseData
int CVIFUNC Motoman_MotoNIS_CurJobResponseData__Create(
	Motoman_MotoNIS_CurJobResponseData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.CurJobResponseData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_CurJobResponseData__Create_1(
	Motoman_MotoNIS_CurJobResponseData * __instance,
	Motoman_MotoNIS_Core_CURJOBRSPDATA b,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: b
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CURJOBRSPDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &b;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.CurJobResponseData", 
		0, 
		0, 
		__instance, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_CurJobResponseData_Get_JobLine(
	Motoman_MotoNIS_CurJobResponseData __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.CurJobResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"JobLine", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_CurJobResponseData_Get_Step(
	Motoman_MotoNIS_CurJobResponseData __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.CurJobResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Step", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_CurJobResponseData_Get_JobName(
	Motoman_MotoNIS_CurJobResponseData __instance,
	char ** __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_STRING;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.CurJobResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"JobName", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_STRING);
	}
	return __error;
}


// Type: Motoman.MotoNIS.JobNameResponseData
int CVIFUNC Motoman_MotoNIS_JobNameResponseData__Create(
	Motoman_MotoNIS_JobNameResponseData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.JobNameResponseData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_JobNameResponseData_Get_JobName(
	Motoman_MotoNIS_JobNameResponseData __instance,
	char ** __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_STRING;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.JobNameResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"JobName", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_STRING);
	}
	return __error;
}


// Type: Motoman.MotoNIS.SpecialOperationResponseData
int CVIFUNC Motoman_MotoNIS_SpecialOperationResponseData__Create(
	Motoman_MotoNIS_SpecialOperationResponseData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.SpecialOperationResponseData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_SpecialOperationResponseData_Get_SpecialOperationStatus(
	Motoman_MotoNIS_SpecialOperationResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.SpecialOperationResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"SpecialOperationStatus", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.JobNameData
int CVIFUNC Motoman_MotoNIS_JobNameData__Create(
	Motoman_MotoNIS_JobNameData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.JobNameData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_JobNameData__Create_1(
	Motoman_MotoNIS_JobNameData * __instance,
	char * jobName,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: jobName
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &jobName;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.JobNameData", 
		0, 
		0, 
		__instance, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_JobNameData_Set_JobName(
	Motoman_MotoNIS_JobNameData __instance,
	char * value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.JobNameData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"JobName", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.SystemTimeResponseData
int CVIFUNC Motoman_MotoNIS_SystemTimeResponseData__Create(
	Motoman_MotoNIS_SystemTimeResponseData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.SystemTimeResponseData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_SystemTimeResponseData_Get_ElapsedTime(
	Motoman_MotoNIS_SystemTimeResponseData __instance,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.SystemTimeResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"ElapsedTime", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_SystemTimeResponseData_Get_StartDay(
	Motoman_MotoNIS_SystemTimeResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.SystemTimeResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"StartDay", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_SystemTimeResponseData_Get_StartHour(
	Motoman_MotoNIS_SystemTimeResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.SystemTimeResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"StartHour", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_SystemTimeResponseData_Get_StartMin(
	Motoman_MotoNIS_SystemTimeResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.SystemTimeResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"StartMin", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_SystemTimeResponseData_Get_StartMonth(
	Motoman_MotoNIS_SystemTimeResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.SystemTimeResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"StartMonth", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_SystemTimeResponseData_Get_StartSec(
	Motoman_MotoNIS_SystemTimeResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.SystemTimeResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"StartSec", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_SystemTimeResponseData_Get_StartYear(
	Motoman_MotoNIS_SystemTimeResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.SystemTimeResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"StartYear", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.ControlGroupData
int CVIFUNC Motoman_MotoNIS_ControlGroupData__Create(
	Motoman_MotoNIS_ControlGroupData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.ControlGroupData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ControlGroupData__Create_1(
	Motoman_MotoNIS_ControlGroupData * __instance,
	short controlGroup,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: controlGroup
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &controlGroup;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.ControlGroupData", 
		0, 
		0, 
		__instance, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ControlGroupData_Get_ControlGroup(
	Motoman_MotoNIS_ControlGroupData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.ControlGroupData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"ControlGroup", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ControlGroupData_Set_ControlGroup(
	Motoman_MotoNIS_ControlGroupData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.ControlGroupData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"ControlGroup", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.CartesianPositionResponseData
int CVIFUNC Motoman_MotoNIS_CartesianPositionResponseData__Create(
	Motoman_MotoNIS_CartesianPositionResponseData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.CartesianPositionResponseData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_CartesianPositionResponseData__Create_1(
	Motoman_MotoNIS_CartesianPositionResponseData * __instance,
	Motoman_MotoNIS_Core_CARTPOSRSPDATA b,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: b
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CARTPOSRSPDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &b;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.CartesianPositionResponseData", 
		0, 
		0, 
		__instance, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_CartesianPositionResponseData_Get_Configuration(
	Motoman_MotoNIS_CartesianPositionResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.CartesianPositionResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Configuration", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_CartesianPositionResponseData_Get_Position(
	Motoman_MotoNIS_CartesianPositionResponseData __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32 | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.CartesianPositionResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Position", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_INT32, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_INT32, 
			1, 
			____returnValueLength);
	}
	return __error;
}


// Type: Motoman.MotoNIS.PulsePositionResponseData
int CVIFUNC Motoman_MotoNIS_PulsePositionResponseData__Create(
	Motoman_MotoNIS_PulsePositionResponseData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.PulsePositionResponseData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PulsePositionResponseData__Create_1(
	Motoman_MotoNIS_PulsePositionResponseData * __instance,
	Motoman_MotoNIS_Core_PULSEPOSRSPDATA b,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: b
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.PULSEPOSRSPDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &b;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.PulsePositionResponseData", 
		0, 
		0, 
		__instance, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PulsePositionResponseData_Get_Position(
	Motoman_MotoNIS_PulsePositionResponseData __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32 | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PulsePositionResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Position", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_INT32, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_INT32, 
			1, 
			____returnValueLength);
	}
	return __error;
}


// Type: Motoman.MotoNIS.FbPulsePositionresponseData
int CVIFUNC Motoman_MotoNIS_FbPulsePositionresponseData__Create(
	Motoman_MotoNIS_FbPulsePositionresponseData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.FbPulsePositionresponseData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_FbPulsePositionresponseData__Create_1(
	Motoman_MotoNIS_FbPulsePositionresponseData * __instance,
	Motoman_MotoNIS_Core_FBPULSEPOSRSPDATA b,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: b
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.FBPULSEPOSRSPDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &b;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.FbPulsePositionresponseData", 
		0, 
		0, 
		__instance, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_FbPulsePositionresponseData_Get_Position(
	Motoman_MotoNIS_FbPulsePositionresponseData __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32 | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.FbPulsePositionresponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Position", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_INT32, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_INT32, 
			1, 
			____returnValueLength);
	}
	return __error;
}


// Type: Motoman.MotoNIS.ServoSpeedResponseData
int CVIFUNC Motoman_MotoNIS_ServoSpeedResponseData__Create(
	Motoman_MotoNIS_ServoSpeedResponseData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.ServoSpeedResponseData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ServoSpeedResponseData__Create_1(
	Motoman_MotoNIS_ServoSpeedResponseData * __instance,
	Motoman_MotoNIS_Core_SERVOSPEEDRSPDATA b,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: b
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.SERVOSPEEDRSPDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &b;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.ServoSpeedResponseData", 
		0, 
		0, 
		__instance, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ServoSpeedResponseData_Get_Speed(
	Motoman_MotoNIS_ServoSpeedResponseData __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32 | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.ServoSpeedResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Speed", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_INT32, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_INT32, 
			1, 
			____returnValueLength);
	}
	return __error;
}


// Type: Motoman.MotoNIS.FbSpeedResponseData
int CVIFUNC Motoman_MotoNIS_FbSpeedResponseData__Create(
	Motoman_MotoNIS_FbSpeedResponseData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.FbSpeedResponseData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_FbSpeedResponseData__Create_1(
	Motoman_MotoNIS_FbSpeedResponseData * __instance,
	Motoman_MotoNIS_Core_FBSPEEDRSPDATA b,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: b
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.FBSPEEDRSPDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &b;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.FbSpeedResponseData", 
		0, 
		0, 
		__instance, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_FbSpeedResponseData_Get_Speed(
	Motoman_MotoNIS_FbSpeedResponseData __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32 | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.FbSpeedResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Speed", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_INT32, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_INT32, 
			1, 
			____returnValueLength);
	}
	return __error;
}


// Type: Motoman.MotoNIS.TorqueResponseData
int CVIFUNC Motoman_MotoNIS_TorqueResponseData__Create(
	Motoman_MotoNIS_TorqueResponseData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.TorqueResponseData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_TorqueResponseData__Create_1(
	Motoman_MotoNIS_TorqueResponseData * __instance,
	Motoman_MotoNIS_Core_TORQUERSPDATA b,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: b
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.TORQUERSPDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &b;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.TorqueResponseData", 
		0, 
		0, 
		__instance, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_TorqueResponseData_Get_TorquePercentage(
	Motoman_MotoNIS_TorqueResponseData __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32 | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.TorqueResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"TorquePercentage", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_INT32, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_INT32, 
			1, 
			____returnValueLength);
	}
	return __error;
}


// Type: Motoman.MotoNIS.SystemTimeData
int CVIFUNC Motoman_MotoNIS_SystemTimeData__Create(
	Motoman_MotoNIS_SystemTimeData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.SystemTimeData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_SystemTimeData__Create_1(
	Motoman_MotoNIS_SystemTimeData * __instance,
	short timeType,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: timeType
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &timeType;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.SystemTimeData", 
		0, 
		0, 
		__instance, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_SystemTimeData_Get_TimeType(
	Motoman_MotoNIS_SystemTimeData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.SystemTimeData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"TimeType", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_SystemTimeData_Set_TimeType(
	Motoman_MotoNIS_SystemTimeData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.SystemTimeData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"TimeType", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.VarData
int CVIFUNC Motoman_MotoNIS_VarData__Create(
	Motoman_MotoNIS_VarData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.VarData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_VarData__Create_1(
	Motoman_MotoNIS_VarData * __instance,
	int value,
	unsigned short index,
	unsigned short type,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &value;

	// Pre-process parameter: index
	__parameterTypeNames[1] = "System.UInt16";
	__parameterTypes[1] = (CDOTNET_UINT16);
	__parameters[1] = &index;

	// Pre-process parameter: type
	__parameterTypeNames[2] = "System.UInt16";
	__parameterTypes[2] = (CDOTNET_UINT16);
	__parameters[2] = &type;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.VarData", 
		0, 
		0, 
		__instance, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_VarData_Get_Value(
	Motoman_MotoNIS_VarData __instance,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.VarData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Value", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_VarData_Set_Value(
	Motoman_MotoNIS_VarData __instance,
	int value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.VarData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Value", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_VarData_Get_Index(
	Motoman_MotoNIS_VarData __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.VarData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Index", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_VarData_Set_Index(
	Motoman_MotoNIS_VarData __instance,
	unsigned short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.UInt16";
	__parameterTypes[0] = (CDOTNET_UINT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.VarData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Index", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_VarData_Get_Type(
	Motoman_MotoNIS_VarData __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.VarData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Type", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_VarData_Set_Type(
	Motoman_MotoNIS_VarData __instance,
	unsigned short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.UInt16";
	__parameterTypes[0] = (CDOTNET_UINT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.VarData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Type", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.IoData
int CVIFUNC Motoman_MotoNIS_IoData__Create(
	Motoman_MotoNIS_IoData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.IoData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_IoData__Create_1(
	Motoman_MotoNIS_IoData * __instance,
	unsigned __int64 value,
	unsigned __int64 address,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.UInt64";
	__parameterTypes[0] = (CDOTNET_UINT64);
	__parameters[0] = &value;

	// Pre-process parameter: address
	__parameterTypeNames[1] = "System.UInt64";
	__parameterTypes[1] = (CDOTNET_UINT64);
	__parameters[1] = &address;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.IoData", 
		0, 
		0, 
		__instance, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_IoData_Get_Address(
	Motoman_MotoNIS_IoData __instance,
	unsigned __int64 * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT64;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.IoData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Address", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_IoData_Set_Address(
	Motoman_MotoNIS_IoData __instance,
	unsigned __int64 value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.UInt64";
	__parameterTypes[0] = (CDOTNET_UINT64);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.IoData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Address", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_IoData_Get_Value(
	Motoman_MotoNIS_IoData __instance,
	unsigned __int64 * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT64;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.IoData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Value", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_IoData_Set_Value(
	Motoman_MotoNIS_IoData __instance,
	unsigned __int64 value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.UInt64";
	__parameterTypes[0] = (CDOTNET_UINT64);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.IoData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Value", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.PosVarData
int CVIFUNC Motoman_MotoNIS_PosVarData__Create(
	Motoman_MotoNIS_PosVarData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.PosVarData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PosVarData__Create_1(
	Motoman_MotoNIS_PosVarData * __instance,
	Motoman_MotoNIS_Core_POSVARDATA b,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: b
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.POSVARDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &b;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.PosVarData", 
		0, 
		0, 
		__instance, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PosVarData_Get_Index(
	Motoman_MotoNIS_PosVarData __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PosVarData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Index", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PosVarData_Set_Index(
	Motoman_MotoNIS_PosVarData __instance,
	unsigned short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.UInt16";
	__parameterTypes[0] = (CDOTNET_UINT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PosVarData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Index", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PosVarData_Get_Type(
	Motoman_MotoNIS_PosVarData __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PosVarData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Type", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PosVarData_Set_Type(
	Motoman_MotoNIS_PosVarData __instance,
	unsigned short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.UInt16";
	__parameterTypes[0] = (CDOTNET_UINT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PosVarData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Type", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PosVarData_Get_Value(
	Motoman_MotoNIS_PosVarData __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32 | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PosVarData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Value", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_INT32, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_INT32, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PosVarData_Set_Value(
	Motoman_MotoNIS_PosVarData __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_INT32, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.Int32[]";
	__parameterTypes[0] = (CDOTNET_INT32 | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PosVarData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Value", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PosVarData_GetBaseInstance(
	Motoman_MotoNIS_PosVarData __instance,
	Motoman_MotoNIS_Core_POSVARDATA * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PosVarData", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"GetBaseInstance", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}


// Type: Motoman.MotoNIS.ModeData
int CVIFUNC Motoman_MotoNIS_ModeData__Create(
	Motoman_MotoNIS_ModeData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.ModeData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ModeData__Create_1(
	Motoman_MotoNIS_ModeData * __instance,
	short mode,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: mode
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &mode;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.ModeData", 
		0, 
		0, 
		__instance, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ModeData_Get_Mode(
	Motoman_MotoNIS_ModeData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.ModeData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Mode", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ModeData_Set_Mode(
	Motoman_MotoNIS_ModeData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.ModeData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Mode", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.CycleData
int CVIFUNC Motoman_MotoNIS_CycleData__Create(
	Motoman_MotoNIS_CycleData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.CycleData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_CycleData__Create_1(
	Motoman_MotoNIS_CycleData * __instance,
	short cycle,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: cycle
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &cycle;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.CycleData", 
		0, 
		0, 
		__instance, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_CycleData_Get_Cycle(
	Motoman_MotoNIS_CycleData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.CycleData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Cycle", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_CycleData_Set_Cycle(
	Motoman_MotoNIS_CycleData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.CycleData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Cycle", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.ServoPowerData
int CVIFUNC Motoman_MotoNIS_ServoPowerData__Create(
	Motoman_MotoNIS_ServoPowerData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.ServoPowerData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ServoPowerData__Create_1(
	Motoman_MotoNIS_ServoPowerData * __instance,
	short servoPower,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: servoPower
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &servoPower;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.ServoPowerData", 
		0, 
		0, 
		__instance, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ServoPowerData_Get_ServoPower(
	Motoman_MotoNIS_ServoPowerData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.ServoPowerData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"ServoPower", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ServoPowerData_Set_ServoPower(
	Motoman_MotoNIS_ServoPowerData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.ServoPowerData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"ServoPower", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.CurrentJobData
int CVIFUNC Motoman_MotoNIS_CurrentJobData__Create(
	Motoman_MotoNIS_CurrentJobData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.CurrentJobData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_CurrentJobData__Create_1(
	Motoman_MotoNIS_CurrentJobData * __instance,
	char * jobName,
	unsigned short jobLine,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: jobName
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &jobName;

	// Pre-process parameter: jobLine
	__parameterTypeNames[1] = "System.UInt16";
	__parameterTypes[1] = (CDOTNET_UINT16);
	__parameters[1] = &jobLine;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.CurrentJobData", 
		0, 
		0, 
		__instance, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_CurrentJobData_Get_JobLine(
	Motoman_MotoNIS_CurrentJobData __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.CurrentJobData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"JobLine", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_CurrentJobData_Set_JobLine(
	Motoman_MotoNIS_CurrentJobData __instance,
	unsigned short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.UInt16";
	__parameterTypes[0] = (CDOTNET_UINT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.CurrentJobData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"JobLine", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_CurrentJobData_Get_JobName(
	Motoman_MotoNIS_CurrentJobData __instance,
	char ** __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_STRING;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.CurrentJobData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"JobName", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_STRING);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_CurrentJobData_Set_JobName(
	Motoman_MotoNIS_CurrentJobData __instance,
	char * value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.CurrentJobData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"JobName", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.StartJobData
int CVIFUNC Motoman_MotoNIS_StartJobData__Create(
	Motoman_MotoNIS_StartJobData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.StartJobData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_StartJobData__Create_1(
	Motoman_MotoNIS_StartJobData * __instance,
	char * jobName,
	short taskNumber,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: jobName
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &jobName;

	// Pre-process parameter: taskNumber
	__parameterTypeNames[1] = "System.Int16";
	__parameterTypes[1] = (CDOTNET_INT16);
	__parameters[1] = &taskNumber;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.StartJobData", 
		0, 
		0, 
		__instance, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_StartJobData_Get_TaskNumber(
	Motoman_MotoNIS_StartJobData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.StartJobData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"TaskNumber", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_StartJobData_Set_TaskNumber(
	Motoman_MotoNIS_StartJobData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.StartJobData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"TaskNumber", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_StartJobData_Get_JobName(
	Motoman_MotoNIS_StartJobData __instance,
	char ** __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_STRING;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.StartJobData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"JobName", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_STRING);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_StartJobData_Set_JobName(
	Motoman_MotoNIS_StartJobData __instance,
	char * value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.StartJobData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"JobName", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.HoldData
int CVIFUNC Motoman_MotoNIS_HoldData__Create(
	Motoman_MotoNIS_HoldData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.HoldData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_HoldData__Create_1(
	Motoman_MotoNIS_HoldData * __instance,
	short hold,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: hold
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &hold;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.HoldData", 
		0, 
		0, 
		__instance, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_HoldData_Get_Hold(
	Motoman_MotoNIS_HoldData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.HoldData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Hold", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_HoldData_Set_Hold(
	Motoman_MotoNIS_HoldData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.HoldData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Hold", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.WaitJobData
int CVIFUNC Motoman_MotoNIS_WaitJobData__Create(
	Motoman_MotoNIS_WaitJobData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.WaitJobData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_WaitJobData__Create_1(
	Motoman_MotoNIS_WaitJobData * __instance,
	short taskNumber,
	short time,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: taskNumber
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &taskNumber;

	// Pre-process parameter: time
	__parameterTypeNames[1] = "System.Int16";
	__parameterTypes[1] = (CDOTNET_INT16);
	__parameters[1] = &time;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.WaitJobData", 
		0, 
		0, 
		__instance, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_WaitJobData_Get_TaskNumber(
	Motoman_MotoNIS_WaitJobData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.WaitJobData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"TaskNumber", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_WaitJobData_Set_TaskNumber(
	Motoman_MotoNIS_WaitJobData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.WaitJobData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"TaskNumber", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_WaitJobData_Get_Time(
	Motoman_MotoNIS_WaitJobData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.WaitJobData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Time", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_WaitJobData_Set_Time(
	Motoman_MotoNIS_WaitJobData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.WaitJobData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Time", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.DeleteJobData
int CVIFUNC Motoman_MotoNIS_DeleteJobData__Create(
	Motoman_MotoNIS_DeleteJobData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.DeleteJobData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_DeleteJobData__Create_1(
	Motoman_MotoNIS_DeleteJobData * __instance,
	char * jobName,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: jobName
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &jobName;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.DeleteJobData", 
		0, 
		0, 
		__instance, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_DeleteJobData_Get_JobName(
	Motoman_MotoNIS_DeleteJobData __instance,
	char ** __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_STRING;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.DeleteJobData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"JobName", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_STRING);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_DeleteJobData_Set_JobName(
	Motoman_MotoNIS_DeleteJobData __instance,
	char * value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.DeleteJobData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"JobName", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.JogSpeedResponseData
int CVIFUNC Motoman_MotoNIS_JogSpeedResponseData__Create(
	Motoman_MotoNIS_JogSpeedResponseData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.JogSpeedResponseData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_JogSpeedResponseData__Create_1(
	Motoman_MotoNIS_JogSpeedResponseData * __instance,
	Motoman_MotoNIS_Core_JOGSPEEDRSPDATA b,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: b
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.JOGSPEEDRSPDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &b;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.JogSpeedResponseData", 
		0, 
		0, 
		__instance, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_JogSpeedResponseData_Get_JogSpeed(
	Motoman_MotoNIS_JogSpeedResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.JogSpeedResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"JogSpeed", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.JogCoordinateResponseData
int CVIFUNC Motoman_MotoNIS_JogCoordinateResponseData__Create(
	Motoman_MotoNIS_JogCoordinateResponseData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.JogCoordinateResponseData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_JogCoordinateResponseData__Create_1(
	Motoman_MotoNIS_JogCoordinateResponseData * __instance,
	Motoman_MotoNIS_Core_JOGCOORDRSPDATA b,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: b
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.JOGCOORDRSPDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &b;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.JogCoordinateResponseData", 
		0, 
		0, 
		__instance, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_JogCoordinateResponseData_Get_JogCoordinate(
	Motoman_MotoNIS_JogCoordinateResponseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.JogCoordinateResponseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"JogCoordinate", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.ConvertJobToRelativeData
int CVIFUNC Motoman_MotoNIS_ConvertJobToRelativeData__Create(
	Motoman_MotoNIS_ConvertJobToRelativeData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.ConvertJobToRelativeData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ConvertJobToRelativeData__Create_1(
	Motoman_MotoNIS_ConvertJobToRelativeData * __instance,
	char * jobName,
	short frame,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: jobName
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &jobName;

	// Pre-process parameter: frame
	__parameterTypeNames[1] = "System.Int16";
	__parameterTypes[1] = (CDOTNET_INT16);
	__parameters[1] = &frame;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.ConvertJobToRelativeData", 
		0, 
		0, 
		__instance, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ConvertJobToRelativeData_Get_Frame(
	Motoman_MotoNIS_ConvertJobToRelativeData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.ConvertJobToRelativeData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Frame", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ConvertJobToRelativeData_Set_Frame(
	Motoman_MotoNIS_ConvertJobToRelativeData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.ConvertJobToRelativeData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Frame", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ConvertJobToRelativeData_Get_JobName(
	Motoman_MotoNIS_ConvertJobToRelativeData __instance,
	char ** __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_STRING;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.ConvertJobToRelativeData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"JobName", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_STRING);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ConvertJobToRelativeData_Set_JobName(
	Motoman_MotoNIS_ConvertJobToRelativeData __instance,
	char * value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.ConvertJobToRelativeData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"JobName", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.ConvertJobRelativeToPulseData
int CVIFUNC Motoman_MotoNIS_ConvertJobRelativeToPulseData__Create(
	Motoman_MotoNIS_ConvertJobRelativeToPulseData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.ConvertJobRelativeToPulseData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ConvertJobRelativeToPulseData__Create_1(
	Motoman_MotoNIS_ConvertJobRelativeToPulseData * __instance,
	char * jobName,
	short conversionType,
	short variableNumber,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: jobName
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &jobName;

	// Pre-process parameter: conversionType
	__parameterTypeNames[1] = "System.Int16";
	__parameterTypes[1] = (CDOTNET_INT16);
	__parameters[1] = &conversionType;

	// Pre-process parameter: variableNumber
	__parameterTypeNames[2] = "System.Int16";
	__parameterTypes[2] = (CDOTNET_INT16);
	__parameters[2] = &variableNumber;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.ConvertJobRelativeToPulseData", 
		0, 
		0, 
		__instance, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ConvertJobRelativeToPulseData_Get_ConversionType(
	Motoman_MotoNIS_ConvertJobRelativeToPulseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.ConvertJobRelativeToPulseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"ConversionType", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ConvertJobRelativeToPulseData_Set_ConversionType(
	Motoman_MotoNIS_ConvertJobRelativeToPulseData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.ConvertJobRelativeToPulseData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"ConversionType", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ConvertJobRelativeToPulseData_Get_VariableNumber(
	Motoman_MotoNIS_ConvertJobRelativeToPulseData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.ConvertJobRelativeToPulseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"VariableNumber", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ConvertJobRelativeToPulseData_Set_VariableNumber(
	Motoman_MotoNIS_ConvertJobRelativeToPulseData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.ConvertJobRelativeToPulseData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"VariableNumber", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ConvertJobRelativeToPulseData_Get_JobName(
	Motoman_MotoNIS_ConvertJobRelativeToPulseData __instance,
	char ** __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_STRING;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.ConvertJobRelativeToPulseData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"JobName", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_STRING);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_ConvertJobRelativeToPulseData_Set_JobName(
	Motoman_MotoNIS_ConvertJobRelativeToPulseData __instance,
	char * value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.ConvertJobRelativeToPulseData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"JobName", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.IMoveData
int CVIFUNC Motoman_MotoNIS_IMoveData__Create(
	Motoman_MotoNIS_IMoveData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.IMoveData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_IMoveData__Create_1(
	Motoman_MotoNIS_IMoveData * __instance,
	int * position,
	int __positionLength,
	int speed,
	short controlGroup,
	short frame,
	short toolNumber,
	short speedType,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[6];
	unsigned int __parameterTypes[6];
	void * __parameters[6];
	CDotNetHandle position__ = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: position
	if (position)
		__errChk(CDotNetCreateArray(
			CDOTNET_INT32, 
			1, 
			0, 
			&__positionLength, 
			position, 
			&position__));
	__parameterTypeNames[0] = "System.Int32[]";
	__parameterTypes[0] = (CDOTNET_INT32 | CDOTNET_ARRAY);
	__parameters[0] = &position__;

	// Pre-process parameter: speed
	__parameterTypeNames[1] = "System.Int32";
	__parameterTypes[1] = (CDOTNET_INT32);
	__parameters[1] = &speed;

	// Pre-process parameter: controlGroup
	__parameterTypeNames[2] = "System.Int16";
	__parameterTypes[2] = (CDOTNET_INT16);
	__parameters[2] = &controlGroup;

	// Pre-process parameter: frame
	__parameterTypeNames[3] = "System.Int16";
	__parameterTypes[3] = (CDOTNET_INT16);
	__parameters[3] = &frame;

	// Pre-process parameter: toolNumber
	__parameterTypeNames[4] = "System.Int16";
	__parameterTypes[4] = (CDOTNET_INT16);
	__parameters[4] = &toolNumber;

	// Pre-process parameter: speedType
	__parameterTypeNames[5] = "System.Int16";
	__parameterTypes[5] = (CDOTNET_INT16);
	__parameters[5] = &speedType;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.IMoveData", 
		0, 
		0, 
		__instance, 
		6, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	if (position__)
		CDotNetDiscardHandle(position__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_IMoveData_Get_Speed(
	Motoman_MotoNIS_IMoveData __instance,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.IMoveData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Speed", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_IMoveData_Set_Speed(
	Motoman_MotoNIS_IMoveData __instance,
	int value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.IMoveData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Speed", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_IMoveData_Get_ControlGroup(
	Motoman_MotoNIS_IMoveData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.IMoveData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"ControlGroup", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_IMoveData_Set_ControlGroup(
	Motoman_MotoNIS_IMoveData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.IMoveData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"ControlGroup", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_IMoveData_Get_Frame(
	Motoman_MotoNIS_IMoveData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.IMoveData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Frame", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_IMoveData_Set_Frame(
	Motoman_MotoNIS_IMoveData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.IMoveData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Frame", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_IMoveData_Get_ToolNumber(
	Motoman_MotoNIS_IMoveData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.IMoveData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"ToolNumber", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_IMoveData_Set_ToolNumber(
	Motoman_MotoNIS_IMoveData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.IMoveData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"ToolNumber", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_IMoveData_Get_SpeedType(
	Motoman_MotoNIS_IMoveData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.IMoveData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"SpeedType", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_IMoveData_Set_SpeedType(
	Motoman_MotoNIS_IMoveData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.IMoveData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"SpeedType", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_IMoveData_Get_Position(
	Motoman_MotoNIS_IMoveData __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32 | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.IMoveData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Position", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_INT32, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_INT32, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_IMoveData_Set_Position(
	Motoman_MotoNIS_IMoveData __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_INT32, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.Int32[]";
	__parameterTypes[0] = (CDOTNET_INT32 | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.IMoveData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Position", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.MoveJData
int CVIFUNC Motoman_MotoNIS_MoveJData__Create(
	Motoman_MotoNIS_MoveJData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveJData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MoveJData__Create_1(
	Motoman_MotoNIS_MoveJData * __instance,
	int * position,
	int __positionLength,
	int speed,
	short configuration,
	short controlGroup,
	short frame,
	short toolNumber,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[6];
	unsigned int __parameterTypes[6];
	void * __parameters[6];
	CDotNetHandle position__ = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: position
	if (position)
		__errChk(CDotNetCreateArray(
			CDOTNET_INT32, 
			1, 
			0, 
			&__positionLength, 
			position, 
			&position__));
	__parameterTypeNames[0] = "System.Int32[]";
	__parameterTypes[0] = (CDOTNET_INT32 | CDOTNET_ARRAY);
	__parameters[0] = &position__;

	// Pre-process parameter: speed
	__parameterTypeNames[1] = "System.Int32";
	__parameterTypes[1] = (CDOTNET_INT32);
	__parameters[1] = &speed;

	// Pre-process parameter: configuration
	__parameterTypeNames[2] = "System.Int16";
	__parameterTypes[2] = (CDOTNET_INT16);
	__parameters[2] = &configuration;

	// Pre-process parameter: controlGroup
	__parameterTypeNames[3] = "System.Int16";
	__parameterTypes[3] = (CDOTNET_INT16);
	__parameters[3] = &controlGroup;

	// Pre-process parameter: frame
	__parameterTypeNames[4] = "System.Int16";
	__parameterTypes[4] = (CDOTNET_INT16);
	__parameters[4] = &frame;

	// Pre-process parameter: toolNumber
	__parameterTypeNames[5] = "System.Int16";
	__parameterTypes[5] = (CDOTNET_INT16);
	__parameters[5] = &toolNumber;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveJData", 
		0, 
		0, 
		__instance, 
		6, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	if (position__)
		CDotNetDiscardHandle(position__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MoveJData_Get_Speed(
	Motoman_MotoNIS_MoveJData __instance,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveJData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Speed", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MoveJData_Set_Speed(
	Motoman_MotoNIS_MoveJData __instance,
	int value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveJData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Speed", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MoveJData_Get_ControlGroup(
	Motoman_MotoNIS_MoveJData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveJData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"ControlGroup", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MoveJData_Set_ControlGroup(
	Motoman_MotoNIS_MoveJData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveJData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"ControlGroup", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MoveJData_Get_Frame(
	Motoman_MotoNIS_MoveJData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveJData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Frame", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MoveJData_Set_Frame(
	Motoman_MotoNIS_MoveJData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveJData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Frame", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MoveJData_Get_ToolNumber(
	Motoman_MotoNIS_MoveJData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveJData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"ToolNumber", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MoveJData_Set_ToolNumber(
	Motoman_MotoNIS_MoveJData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveJData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"ToolNumber", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MoveJData_Get_Configuration(
	Motoman_MotoNIS_MoveJData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveJData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Configuration", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MoveJData_Set_Configuration(
	Motoman_MotoNIS_MoveJData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveJData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Configuration", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MoveJData_Get_Postition(
	Motoman_MotoNIS_MoveJData __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32 | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveJData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Postition", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_INT32, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_INT32, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MoveJData_Set_Postition(
	Motoman_MotoNIS_MoveJData __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_INT32, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.Int32[]";
	__parameterTypes[0] = (CDOTNET_INT32 | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveJData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Postition", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.MoveLData
int CVIFUNC Motoman_MotoNIS_MoveLData__Create(
	Motoman_MotoNIS_MoveLData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveLData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MoveLData__Create_1(
	Motoman_MotoNIS_MoveLData * __instance,
	int * position,
	int __positionLength,
	int speed,
	short motionSpeed,
	short configuration,
	short controlGroup,
	short frame,
	short toolNumber,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[7];
	unsigned int __parameterTypes[7];
	void * __parameters[7];
	CDotNetHandle position__ = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: position
	if (position)
		__errChk(CDotNetCreateArray(
			CDOTNET_INT32, 
			1, 
			0, 
			&__positionLength, 
			position, 
			&position__));
	__parameterTypeNames[0] = "System.Int32[]";
	__parameterTypes[0] = (CDOTNET_INT32 | CDOTNET_ARRAY);
	__parameters[0] = &position__;

	// Pre-process parameter: speed
	__parameterTypeNames[1] = "System.Int32";
	__parameterTypes[1] = (CDOTNET_INT32);
	__parameters[1] = &speed;

	// Pre-process parameter: motionSpeed
	__parameterTypeNames[2] = "System.Int16";
	__parameterTypes[2] = (CDOTNET_INT16);
	__parameters[2] = &motionSpeed;

	// Pre-process parameter: configuration
	__parameterTypeNames[3] = "System.Int16";
	__parameterTypes[3] = (CDOTNET_INT16);
	__parameters[3] = &configuration;

	// Pre-process parameter: controlGroup
	__parameterTypeNames[4] = "System.Int16";
	__parameterTypes[4] = (CDOTNET_INT16);
	__parameters[4] = &controlGroup;

	// Pre-process parameter: frame
	__parameterTypeNames[5] = "System.Int16";
	__parameterTypes[5] = (CDOTNET_INT16);
	__parameters[5] = &frame;

	// Pre-process parameter: toolNumber
	__parameterTypeNames[6] = "System.Int16";
	__parameterTypes[6] = (CDOTNET_INT16);
	__parameters[6] = &toolNumber;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveLData", 
		0, 
		0, 
		__instance, 
		7, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	if (position__)
		CDotNetDiscardHandle(position__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MoveLData_Get_Speed(
	Motoman_MotoNIS_MoveLData __instance,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveLData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Speed", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MoveLData_Set_Speed(
	Motoman_MotoNIS_MoveLData __instance,
	int value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveLData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Speed", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MoveLData_Get_MotionSpeed(
	Motoman_MotoNIS_MoveLData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveLData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"MotionSpeed", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MoveLData_Set_MotionSpeed(
	Motoman_MotoNIS_MoveLData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveLData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"MotionSpeed", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MoveLData_Get_ControlGroup(
	Motoman_MotoNIS_MoveLData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveLData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"ControlGroup", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MoveLData_Set_ControlGroup(
	Motoman_MotoNIS_MoveLData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveLData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"ControlGroup", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MoveLData_Get_Frame(
	Motoman_MotoNIS_MoveLData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveLData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Frame", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MoveLData_Set_Frame(
	Motoman_MotoNIS_MoveLData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveLData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Frame", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MoveLData_Get_ToolNumber(
	Motoman_MotoNIS_MoveLData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveLData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"ToolNumber", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MoveLData_Set_ToolNumber(
	Motoman_MotoNIS_MoveLData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveLData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"ToolNumber", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MoveLData_Get_Configuration(
	Motoman_MotoNIS_MoveLData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveLData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Configuration", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MoveLData_Set_Configuration(
	Motoman_MotoNIS_MoveLData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveLData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Configuration", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MoveLData_Get_Postition(
	Motoman_MotoNIS_MoveLData __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32 | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveLData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Postition", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_INT32, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_INT32, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_MoveLData_Set_Postition(
	Motoman_MotoNIS_MoveLData __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_INT32, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.Int32[]";
	__parameterTypes[0] = (CDOTNET_INT32 | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.MoveLData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Postition", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.PMoveJData
int CVIFUNC Motoman_MotoNIS_PMoveJData__Create(
	Motoman_MotoNIS_PMoveJData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.PMoveJData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PMoveJData__Create_1(
	Motoman_MotoNIS_PMoveJData * __instance,
	int * position,
	int __positionLength,
	int speed,
	short controlGroup,
	short toolNumber,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[4];
	unsigned int __parameterTypes[4];
	void * __parameters[4];
	CDotNetHandle position__ = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: position
	if (position)
		__errChk(CDotNetCreateArray(
			CDOTNET_INT32, 
			1, 
			0, 
			&__positionLength, 
			position, 
			&position__));
	__parameterTypeNames[0] = "System.Int32[]";
	__parameterTypes[0] = (CDOTNET_INT32 | CDOTNET_ARRAY);
	__parameters[0] = &position__;

	// Pre-process parameter: speed
	__parameterTypeNames[1] = "System.Int32";
	__parameterTypes[1] = (CDOTNET_INT32);
	__parameters[1] = &speed;

	// Pre-process parameter: controlGroup
	__parameterTypeNames[2] = "System.Int16";
	__parameterTypes[2] = (CDOTNET_INT16);
	__parameters[2] = &controlGroup;

	// Pre-process parameter: toolNumber
	__parameterTypeNames[3] = "System.Int16";
	__parameterTypes[3] = (CDOTNET_INT16);
	__parameters[3] = &toolNumber;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.PMoveJData", 
		0, 
		0, 
		__instance, 
		4, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	if (position__)
		CDotNetDiscardHandle(position__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PMoveJData_Get_Speed(
	Motoman_MotoNIS_PMoveJData __instance,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PMoveJData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Speed", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PMoveJData_Set_Speed(
	Motoman_MotoNIS_PMoveJData __instance,
	int value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PMoveJData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Speed", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PMoveJData_Get_ControlGroup(
	Motoman_MotoNIS_PMoveJData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PMoveJData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"ControlGroup", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PMoveJData_Set_ControlGroup(
	Motoman_MotoNIS_PMoveJData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PMoveJData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"ControlGroup", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PMoveJData_Get_ToolNumber(
	Motoman_MotoNIS_PMoveJData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PMoveJData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"ToolNumber", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PMoveJData_Set_ToolNumber(
	Motoman_MotoNIS_PMoveJData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PMoveJData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"ToolNumber", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PMoveJData_Get_Postition(
	Motoman_MotoNIS_PMoveJData __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32 | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PMoveJData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Postition", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_INT32, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_INT32, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PMoveJData_Set_Postition(
	Motoman_MotoNIS_PMoveJData __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_INT32, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.Int32[]";
	__parameterTypes[0] = (CDOTNET_INT32 | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PMoveJData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Postition", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.PMoveLData
int CVIFUNC Motoman_MotoNIS_PMoveLData__Create(
	Motoman_MotoNIS_PMoveLData * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.PMoveLData", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PMoveLData__Create_1(
	Motoman_MotoNIS_PMoveLData * __instance,
	int * position,
	int __positionLength,
	int speed,
	short controlGroup,
	short toolNumber,
	short motionSpeed,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[5];
	unsigned int __parameterTypes[5];
	void * __parameters[5];
	CDotNetHandle position__ = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: position
	if (position)
		__errChk(CDotNetCreateArray(
			CDOTNET_INT32, 
			1, 
			0, 
			&__positionLength, 
			position, 
			&position__));
	__parameterTypeNames[0] = "System.Int32[]";
	__parameterTypes[0] = (CDOTNET_INT32 | CDOTNET_ARRAY);
	__parameters[0] = &position__;

	// Pre-process parameter: speed
	__parameterTypeNames[1] = "System.Int32";
	__parameterTypes[1] = (CDOTNET_INT32);
	__parameters[1] = &speed;

	// Pre-process parameter: controlGroup
	__parameterTypeNames[2] = "System.Int16";
	__parameterTypes[2] = (CDOTNET_INT16);
	__parameters[2] = &controlGroup;

	// Pre-process parameter: toolNumber
	__parameterTypeNames[3] = "System.Int16";
	__parameterTypes[3] = (CDOTNET_INT16);
	__parameters[3] = &toolNumber;

	// Pre-process parameter: motionSpeed
	__parameterTypeNames[4] = "System.Int16";
	__parameterTypes[4] = (CDOTNET_INT16);
	__parameters[4] = &motionSpeed;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.PMoveLData", 
		0, 
		0, 
		__instance, 
		5, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	if (position__)
		CDotNetDiscardHandle(position__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PMoveLData_Get_MotionSpeed(
	Motoman_MotoNIS_PMoveLData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PMoveLData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"MotionSpeed", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PMoveLData_Set_MotionSpeed(
	Motoman_MotoNIS_PMoveLData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PMoveLData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"MotionSpeed", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PMoveLData_Get_Speed(
	Motoman_MotoNIS_PMoveLData __instance,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PMoveLData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Speed", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PMoveLData_Set_Speed(
	Motoman_MotoNIS_PMoveLData __instance,
	int value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PMoveLData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Speed", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PMoveLData_Get_ControlGroup(
	Motoman_MotoNIS_PMoveLData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PMoveLData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"ControlGroup", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PMoveLData_Set_ControlGroup(
	Motoman_MotoNIS_PMoveLData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PMoveLData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"ControlGroup", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PMoveLData_Get_ToolNumber(
	Motoman_MotoNIS_PMoveLData __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PMoveLData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"ToolNumber", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PMoveLData_Set_ToolNumber(
	Motoman_MotoNIS_PMoveLData __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PMoveLData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"ToolNumber", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PMoveLData_Get_Position(
	Motoman_MotoNIS_PMoveLData __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32 | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PMoveLData", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Position", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_INT32, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_INT32, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_PMoveLData_Set_Position(
	Motoman_MotoNIS_PMoveLData __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_INT32, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.Int32[]";
	__parameterTypes[0] = (CDOTNET_INT32 | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.PMoveLData", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Position", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.INisService
int CVIFUNC Motoman_MotoNIS_INisService_NxSetCurJob(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_CurrentJobData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.CurrentJobData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxSetCurJob", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxStartJob(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_StartJobData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.StartJobData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxStartJob", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxHold(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_HoldData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.HoldData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxHold", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxWaitForJobEnd(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_WaitJobData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.WaitJobData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxWaitForJobEnd", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxDeleteJob(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_DeleteJobData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.DeleteJobData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxDeleteJob", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxGetJogSpeed(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_JogSpeedResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.JogSpeedResponseData&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetJogSpeed", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxGetJogCoord(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_JogCoordinateResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.JogCoordinateResponseData&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetJogCoord", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxGetSysId(
	Motoman_MotoNIS_INisService __instance,
	unsigned char ** rData,
	int * __rDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle rData__ = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;
	*__rDataLength = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "System.Byte[]&";
	__parameterTypes[0] = (CDOTNET_BYTE | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[0] = &rData__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetSysId", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process parameter: rData
	if (rData__) {
		__errChk(CDotNetGetArrayElements(
			rData__, 
			CDOTNET_BYTE, 
			0, 
			rData));
		__errChk(CDotNetGetArrayLength(
			rData__, 
			0, 
			__rDataLength));
	}

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (rData__)
		CDotNetDiscardHandle(rData__);
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			rData, 
			CDOTNET_BYTE, 
			1, 
			__rDataLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxDebug(
	Motoman_MotoNIS_INisService __instance,
	int cmd,
	unsigned char * fileDataIn,
	int __fileDataInLength,
	unsigned char ** fileDataOut,
	int * __fileDataOutLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	CDotNetHandle fileDataIn__ = 0;
	CDotNetHandle fileDataOut__ = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*fileDataOut = 0;
	*__fileDataOutLength = 0;


	// Pre-process parameter: cmd
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &cmd;

	// Pre-process parameter: fileDataIn
	if (fileDataIn)
		__errChk(CDotNetCreateArray(
			CDOTNET_BYTE, 
			1, 
			0, 
			&__fileDataInLength, 
			fileDataIn, 
			&fileDataIn__));
	__parameterTypeNames[1] = "System.Byte[]";
	__parameterTypes[1] = (CDOTNET_BYTE | CDOTNET_ARRAY);
	__parameters[1] = &fileDataIn__;

	// Pre-process parameter: fileDataOut
	__parameterTypeNames[2] = "System.Byte[]&";
	__parameterTypes[2] = (CDOTNET_BYTE | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[2] = &fileDataOut__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxDebug", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process parameter: fileDataOut
	if (fileDataOut__) {
		__errChk(CDotNetGetArrayElements(
			fileDataOut__, 
			CDOTNET_BYTE, 
			0, 
			fileDataOut));
		__errChk(CDotNetGetArrayLength(
			fileDataOut__, 
			0, 
			__fileDataOutLength));
	}

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (fileDataIn__)
		CDotNetDiscardHandle(fileDataIn__);
	if (fileDataOut__)
		CDotNetDiscardHandle(fileDataOut__);
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			fileDataOut, 
			CDOTNET_BYTE, 
			1, 
			__fileDataOutLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxConvertJobPtoR(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_ConvertJobToRelativeData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.ConvertJobToRelativeData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxConvertJobPtoR", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxConvertJobRtoP(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_ConvertJobRelativeToPulseData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.ConvertJobRelativeToPulseData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxConvertJobRtoP", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxIMOV(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_IMoveData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.IMoveData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxIMOV", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxMOVJ(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_MoveJData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.MoveJData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxMOVJ", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxMOVL(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_MoveLData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.MoveLData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxMOVL", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxPulseMOVJ(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_PMoveJData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.PMoveJData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxPulseMOVJ", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxPulseMOVL(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_PMoveLData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.PMoveLData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxPulseMOVL", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxReadFile(
	Motoman_MotoNIS_INisService __instance,
	char * fileName,
	unsigned char ** fileData,
	int * __fileDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle fileData__ = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*fileData = 0;
	*__fileDataLength = 0;


	// Pre-process parameter: fileName
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &fileName;

	// Pre-process parameter: fileData
	__parameterTypeNames[1] = "System.Byte[]&";
	__parameterTypes[1] = (CDOTNET_BYTE | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[1] = &fileData__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxReadFile", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process parameter: fileData
	if (fileData__) {
		__errChk(CDotNetGetArrayElements(
			fileData__, 
			CDOTNET_BYTE, 
			0, 
			fileData));
		__errChk(CDotNetGetArrayLength(
			fileData__, 
			0, 
			__fileDataLength));
	}

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (fileData__)
		CDotNetDiscardHandle(fileData__);
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			fileData, 
			CDOTNET_BYTE, 
			1, 
			__fileDataLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxWriteFile(
	Motoman_MotoNIS_INisService __instance,
	char * fileName,
	unsigned char * fileData,
	int __fileDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle fileData__ = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: fileName
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &fileName;

	// Pre-process parameter: fileData
	if (fileData)
		__errChk(CDotNetCreateArray(
			CDOTNET_BYTE, 
			1, 
			0, 
			&__fileDataLength, 
			fileData, 
			&fileData__));
	__parameterTypeNames[1] = "System.Byte[]";
	__parameterTypes[1] = (CDOTNET_BYTE | CDOTNET_ARRAY);
	__parameters[1] = &fileData__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxWriteFile", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (fileData__)
		CDotNetDiscardHandle(fileData__);
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxGetFileList(
	Motoman_MotoNIS_INisService __instance,
	short extension,
	char *** fileList,
	int * __fileListLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle fileList__ = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*fileList = 0;
	*__fileListLength = 0;


	// Pre-process parameter: extension
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &extension;

	// Pre-process parameter: fileList
	__parameterTypeNames[1] = "System.String[]&";
	__parameterTypes[1] = (CDOTNET_STRING | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[1] = &fileList__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetFileList", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process parameter: fileList
	if (fileList__) {
		__errChk(CDotNetGetArrayElements(
			fileList__, 
			CDOTNET_STRING, 
			0, 
			fileList));
		__errChk(CDotNetGetArrayLength(
			fileList__, 
			0, 
			__fileListLength));
	}

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (fileList__)
		CDotNetDiscardHandle(fileList__);
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			fileList, 
			CDOTNET_STRING, 
			1, 
			__fileListLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_SetUrl(
	Motoman_MotoNIS_INisService __instance,
	char * url,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: url
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &url;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"SetUrl", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxPing(
	Motoman_MotoNIS_INisService __instance,
	int cmd,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: cmd
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &cmd;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxPing", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxGetVarData(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_VarInfo * sData,
	int __sDataLength,
	int ** rData,
	int * __rDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;
	CDotNetHandle rData__ = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;
	*__rDataLength = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.VarInfo", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.VarInfo[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "System.Int32[]&";
	__parameterTypes[1] = (CDOTNET_INT32 | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[1] = &rData__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetVarData", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process parameter: rData
	if (rData__) {
		__errChk(CDotNetGetArrayElements(
			rData__, 
			CDOTNET_INT32, 
			0, 
			rData));
		__errChk(CDotNetGetArrayLength(
			rData__, 
			0, 
			__rDataLength));
	}

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	if (rData__)
		CDotNetDiscardHandle(rData__);
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			rData, 
			CDOTNET_INT32, 
			1, 
			__rDataLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxReadIO(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_IoInfo * sData,
	int __sDataLength,
	unsigned short ** rData,
	int * __rDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;
	CDotNetHandle rData__ = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;
	*__rDataLength = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.IoInfo", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.IoInfo[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "System.UInt16[]&";
	__parameterTypes[1] = (CDOTNET_UINT16 | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[1] = &rData__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxReadIO", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process parameter: rData
	if (rData__) {
		__errChk(CDotNetGetArrayElements(
			rData__, 
			CDOTNET_UINT16, 
			0, 
			rData));
		__errChk(CDotNetGetArrayLength(
			rData__, 
			0, 
			__rDataLength));
	}

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	if (rData__)
		CDotNetDiscardHandle(rData__);
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			rData, 
			CDOTNET_UINT16, 
			1, 
			__rDataLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxMonitor(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_MonitorInfo * sData,
	int __sDataLength,
	int ** rData,
	int * __rDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;
	CDotNetHandle rData__ = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;
	*__rDataLength = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.MonitorInfo", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.MonitorInfo[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "System.Int32[]&";
	__parameterTypes[1] = (CDOTNET_INT32 | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[1] = &rData__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxMonitor", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process parameter: rData
	if (rData__) {
		__errChk(CDotNetGetArrayElements(
			rData__, 
			CDOTNET_INT32, 
			0, 
			rData));
		__errChk(CDotNetGetArrayLength(
			rData__, 
			0, 
			__rDataLength));
	}

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	if (rData__)
		CDotNetDiscardHandle(rData__);
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			rData, 
			CDOTNET_INT32, 
			1, 
			__rDataLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxGetPosVarData(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_PosVarInfo * sData,
	int __sDataLength,
	int ** rData,
	int * __rDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;
	CDotNetHandle rData__ = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;
	*__rDataLength = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.PosVarInfo", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.PosVarInfo[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "System.Int32[]&";
	__parameterTypes[1] = (CDOTNET_INT32 | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[1] = &rData__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetPosVarData", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process parameter: rData
	if (rData__) {
		__errChk(CDotNetGetArrayElements(
			rData__, 
			CDOTNET_INT32, 
			0, 
			rData));
		__errChk(CDotNetGetArrayLength(
			rData__, 
			0, 
			__rDataLength));
	}

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	if (rData__)
		CDotNetDiscardHandle(rData__);
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			rData, 
			CDOTNET_INT32, 
			1, 
			__rDataLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxGetAlarmStatus(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_AlarmStatusResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.AlarmStatusResponseData&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetAlarmStatus", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxGetAlarmCode(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_AlarmCodeResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.AlarmCodeResponseData&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetAlarmCode", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxGetMode(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_ModeResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.ModeResponseData&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetMode", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxGetCycle(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_CycleResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.CycleResponseData&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetCycle", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxGetServoPower(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_ServoPowerResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.ServoPowerResponseData&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetServoPower", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxGetPlayStatus(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_PlayStatusResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.PlayStatusResponseData&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetPlayStatus", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxGetMasterJob(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_TaskData sData,
	Motoman_MotoNIS_CurJobResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.TaskData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.CurJobResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetMasterJob", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxGetCurJob(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_TaskData sData,
	Motoman_MotoNIS_CurJobResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.TaskData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.CurJobResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetCurJob", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxGetSpecialOpStatus(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_SpecialOperationResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.SpecialOperationResponseData&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetSpecialOpStatus", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxGetJobDate(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_JobNameData sData,
	Motoman_MotoNIS_SystemTimeResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.JobNameData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.SystemTimeResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetJobDate", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxGetCartPos(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_ControlGroupData sData,
	Motoman_MotoNIS_CartesianPositionResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.ControlGroupData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.CartesianPositionResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetCartPos", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxGetPulsePos(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_ControlGroupData sData,
	Motoman_MotoNIS_PulsePositionResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.ControlGroupData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.PulsePositionResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetPulsePos", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxGetFBPulsePos(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_ControlGroupData sData,
	Motoman_MotoNIS_FbPulsePositionresponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.ControlGroupData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.FbPulsePositionresponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetFBPulsePos", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxGetServoSpeed(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_ControlGroupData sData,
	Motoman_MotoNIS_ServoSpeedResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.ControlGroupData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.ServoSpeedResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetServoSpeed", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxGetFBSpeed(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_ControlGroupData sData,
	Motoman_MotoNIS_FbSpeedResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.ControlGroupData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.FbSpeedResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetFBSpeed", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxGetTorque(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_ControlGroupData sData,
	Motoman_MotoNIS_TorqueResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.ControlGroupData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.TorqueResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetTorque", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxGetSysTimes(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_SystemTimeData sData,
	Motoman_MotoNIS_SystemTimeResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.SystemTimeData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.SystemTimeResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetSysTimes", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxPutVarData(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_VarData * sData,
	int __sDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.VarData", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.VarData[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxPutVarData", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxWriteIO(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_IoData * sData,
	int __sDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.IoData", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.IoData[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxWriteIO", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxPutPosVarData(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_PosVarData * sData,
	int __sDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.PosVarData", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.PosVarData[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxPutPosVarData", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxCancelError(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxCancelError", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxResetAlarm(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxResetAlarm", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxSetMode(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_ModeData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.ModeData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxSetMode", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxSetCycle(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_CycleData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.CycleData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxSetCycle", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxSetServoPower(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_ServoPowerData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.ServoPowerData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxSetServoPower", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_INisService_NxSetMasterJob(
	Motoman_MotoNIS_INisService __instance,
	Motoman_MotoNIS_MasterJobData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.MasterJobData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call interface member
	__errChk(CDotNetInvokeGenericInterfaceMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.INisService", 
		0, 
		0, 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxSetMasterJob", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}


// Type: Motoman.MotoNIS.NisService
int CVIFUNC Motoman_MotoNIS_NisService__Create(
	Motoman_MotoNIS_NisService * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService__Create_1(
	Motoman_MotoNIS_NisService * __instance,
	char * url,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Pre-process parameter: url
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &url;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		0, 
		0, 
		__instance, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_Get_CurrentToken(
	Motoman_MotoNIS_AccessToken * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_STRUCT;

	// Call static member
	__errChk(CDotNetInvokeGenericStaticMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		0, 
		0, 
		CDOTNET_GET_PROPERTY, 
		"CurrentToken", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_STRUCT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxGetPrmS1D(
	Motoman_MotoNIS_NisService __instance,
	int dPrmNo,
	int dPRmNum,
	int ** data,
	int * __dataLength,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	CDotNetHandle data__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*data = 0;
	*__dataLength = 0;


	// Pre-process parameter: dPrmNo
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &dPrmNo;

	// Pre-process parameter: dPRmNum
	__parameterTypeNames[1] = "System.Int32";
	__parameterTypes[1] = (CDOTNET_INT32);
	__parameters[1] = &dPRmNum;

	// Pre-process parameter: data
	__parameterTypeNames[2] = "System.Int32[]&";
	__parameterTypes[2] = (CDOTNET_INT32 | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[2] = &data__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetPrmS1D", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));

	// Post-process parameter: data
	if (data__) {
		__errChk(CDotNetGetArrayElements(
			data__, 
			CDOTNET_INT32, 
			0, 
			data));
		__errChk(CDotNetGetArrayLength(
			data__, 
			0, 
			__dataLength));
	}


__Error:
	if (data__)
		CDotNetDiscardHandle(data__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			data, 
			CDOTNET_INT32, 
			1, 
			__dataLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_SetUrl(
	Motoman_MotoNIS_NisService __instance,
	char * url,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: url
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &url;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"SetUrl", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_StringTosbyteArray(
	Motoman_MotoNIS_NisService __instance,
	char * str,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process parameter: str
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &str;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"StringTosbyteArray", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_sbyteArrayToString(
	Motoman_MotoNIS_NisService __instance,
	char * data,
	int __dataLength,
	char ** __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle data__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: data
	if (data)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__dataLength, 
			data, 
			&data__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &data__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_STRING;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"sbyteArrayToString", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (data__)
		CDotNetDiscardHandle(data__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_STRING);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxConvertJobPtoR(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_ConvertJobToRelativeData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.ConvertJobToRelativeData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxConvertJobPtoR", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxConvertJobRtoP(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_ConvertJobRelativeToPulseData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.ConvertJobRelativeToPulseData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxConvertJobRtoP", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxIMOV(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_IMoveData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.IMoveData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxIMOV", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxMOVJ(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_MoveJData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.MoveJData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxMOVJ", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxMOVL(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_MoveLData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.MoveLData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxMOVL", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxPulseMOVJ(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_PMoveJData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.PMoveJData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxPulseMOVJ", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxPulseMOVL(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_PMoveLData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.PMoveLData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxPulseMOVL", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxWriteFile(
	Motoman_MotoNIS_NisService __instance,
	char * fileName,
	unsigned char * fileData,
	int __fileDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle fileData__ = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: fileName
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &fileName;

	// Pre-process parameter: fileData
	if (fileData)
		__errChk(CDotNetCreateArray(
			CDOTNET_BYTE, 
			1, 
			0, 
			&__fileDataLength, 
			fileData, 
			&fileData__));
	__parameterTypeNames[1] = "System.Byte[]";
	__parameterTypes[1] = (CDOTNET_BYTE | CDOTNET_ARRAY);
	__parameters[1] = &fileData__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxWriteFile", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (fileData__)
		CDotNetDiscardHandle(fileData__);
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxReadFile(
	Motoman_MotoNIS_NisService __instance,
	char * fileName,
	unsigned char ** fileData,
	int * __fileDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle fileData__ = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*fileData = 0;
	*__fileDataLength = 0;


	// Pre-process parameter: fileName
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &fileName;

	// Pre-process parameter: fileData
	__parameterTypeNames[1] = "System.Byte[]&";
	__parameterTypes[1] = (CDOTNET_BYTE | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[1] = &fileData__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxReadFile", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process parameter: fileData
	if (fileData__) {
		__errChk(CDotNetGetArrayElements(
			fileData__, 
			CDOTNET_BYTE, 
			0, 
			fileData));
		__errChk(CDotNetGetArrayLength(
			fileData__, 
			0, 
			__fileDataLength));
	}

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (fileData__)
		CDotNetDiscardHandle(fileData__);
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			fileData, 
			CDOTNET_BYTE, 
			1, 
			__fileDataLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxGetFileList(
	Motoman_MotoNIS_NisService __instance,
	short extension,
	char *** fileList,
	int * __fileListLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle fileList__ = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*fileList = 0;
	*__fileListLength = 0;


	// Pre-process parameter: extension
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &extension;

	// Pre-process parameter: fileList
	__parameterTypeNames[1] = "System.String[]&";
	__parameterTypes[1] = (CDOTNET_STRING | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[1] = &fileList__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetFileList", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process parameter: fileList
	if (fileList__) {
		__errChk(CDotNetGetArrayElements(
			fileList__, 
			CDOTNET_STRING, 
			0, 
			fileList));
		__errChk(CDotNetGetArrayLength(
			fileList__, 
			0, 
			__fileListLength));
	}

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (fileList__)
		CDotNetDiscardHandle(fileList__);
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			fileList, 
			CDOTNET_STRING, 
			1, 
			__fileListLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxPing(
	Motoman_MotoNIS_NisService __instance,
	int cmd,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: cmd
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &cmd;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxPing", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxGetVarData(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_VarInfo * sData,
	int __sDataLength,
	int ** rData,
	int * __rDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;
	CDotNetHandle rData__ = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;
	*__rDataLength = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.VarInfo", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.VarInfo[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "System.Int32[]&";
	__parameterTypes[1] = (CDOTNET_INT32 | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[1] = &rData__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetVarData", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process parameter: rData
	if (rData__) {
		__errChk(CDotNetGetArrayElements(
			rData__, 
			CDOTNET_INT32, 
			0, 
			rData));
		__errChk(CDotNetGetArrayLength(
			rData__, 
			0, 
			__rDataLength));
	}

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	if (rData__)
		CDotNetDiscardHandle(rData__);
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			rData, 
			CDOTNET_INT32, 
			1, 
			__rDataLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxReadIO(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_IoInfo * sData,
	int __sDataLength,
	unsigned short ** rData,
	int * __rDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;
	CDotNetHandle rData__ = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;
	*__rDataLength = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.IoInfo", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.IoInfo[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "System.UInt16[]&";
	__parameterTypes[1] = (CDOTNET_UINT16 | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[1] = &rData__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxReadIO", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process parameter: rData
	if (rData__) {
		__errChk(CDotNetGetArrayElements(
			rData__, 
			CDOTNET_UINT16, 
			0, 
			rData));
		__errChk(CDotNetGetArrayLength(
			rData__, 
			0, 
			__rDataLength));
	}

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	if (rData__)
		CDotNetDiscardHandle(rData__);
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			rData, 
			CDOTNET_UINT16, 
			1, 
			__rDataLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxMonitor(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_MonitorInfo * sData,
	int __sDataLength,
	int ** rData,
	int * __rDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;
	CDotNetHandle rData__ = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;
	*__rDataLength = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.MonitorInfo", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.MonitorInfo[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "System.Int32[]&";
	__parameterTypes[1] = (CDOTNET_INT32 | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[1] = &rData__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxMonitor", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process parameter: rData
	if (rData__) {
		__errChk(CDotNetGetArrayElements(
			rData__, 
			CDOTNET_INT32, 
			0, 
			rData));
		__errChk(CDotNetGetArrayLength(
			rData__, 
			0, 
			__rDataLength));
	}

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	if (rData__)
		CDotNetDiscardHandle(rData__);
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			rData, 
			CDOTNET_INT32, 
			1, 
			__rDataLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxGetPosVarData(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_PosVarInfo * sData,
	int __sDataLength,
	int ** rData,
	int * __rDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;
	CDotNetHandle rData__ = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;
	*__rDataLength = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.PosVarInfo", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.PosVarInfo[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "System.Int32[]&";
	__parameterTypes[1] = (CDOTNET_INT32 | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[1] = &rData__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetPosVarData", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process parameter: rData
	if (rData__) {
		__errChk(CDotNetGetArrayElements(
			rData__, 
			CDOTNET_INT32, 
			0, 
			rData));
		__errChk(CDotNetGetArrayLength(
			rData__, 
			0, 
			__rDataLength));
	}

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	if (rData__)
		CDotNetDiscardHandle(rData__);
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			rData, 
			CDOTNET_INT32, 
			1, 
			__rDataLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxGetAlarmStatus(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_AlarmStatusResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.AlarmStatusResponseData&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetAlarmStatus", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxGetAlarmCode(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_AlarmCodeResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.AlarmCodeResponseData&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetAlarmCode", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxGetMode(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_ModeResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.ModeResponseData&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetMode", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxGetCycle(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_CycleResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.CycleResponseData&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetCycle", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxGetServoPower(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_ServoPowerResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.ServoPowerResponseData&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetServoPower", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxGetPlayStatus(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_PlayStatusResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.PlayStatusResponseData&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetPlayStatus", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxGetMasterJob(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_TaskData sData,
	Motoman_MotoNIS_CurJobResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.TaskData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.CurJobResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetMasterJob", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxGetCurJob(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_TaskData sData,
	Motoman_MotoNIS_CurJobResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.TaskData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.CurJobResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetCurJob", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxGetSpecialOpStatus(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_SpecialOperationResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.SpecialOperationResponseData&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetSpecialOpStatus", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxGetJobDate(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_JobNameData sData,
	Motoman_MotoNIS_SystemTimeResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.JobNameData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.SystemTimeResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetJobDate", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxGetCartPos(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_ControlGroupData sData,
	Motoman_MotoNIS_CartesianPositionResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.ControlGroupData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.CartesianPositionResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetCartPos", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxGetPulsePos(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_ControlGroupData sData,
	Motoman_MotoNIS_PulsePositionResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.ControlGroupData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.PulsePositionResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetPulsePos", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxGetFBPulsePos(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_ControlGroupData sData,
	Motoman_MotoNIS_FbPulsePositionresponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.ControlGroupData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.FbPulsePositionresponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetFBPulsePos", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxGetServoSpeed(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_ControlGroupData sData,
	Motoman_MotoNIS_ServoSpeedResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.ControlGroupData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.ServoSpeedResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetServoSpeed", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxGetFBSpeed(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_ControlGroupData sData,
	Motoman_MotoNIS_FbSpeedResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.ControlGroupData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.FbSpeedResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetFBSpeed", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxGetTorque(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_ControlGroupData sData,
	Motoman_MotoNIS_TorqueResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.ControlGroupData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.TorqueResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetTorque", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxGetSysTimes(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_SystemTimeData sData,
	Motoman_MotoNIS_SystemTimeResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.SystemTimeData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.SystemTimeResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetSysTimes", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxPutVarData(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_VarData * sData,
	int __sDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.VarData", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.VarData[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxPutVarData", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxWriteIO(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_IoData * sData,
	int __sDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.IoData", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.IoData[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxWriteIO", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxPutPosVarData(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_PosVarData * sData,
	int __sDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.PosVarData", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.PosVarData[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxPutPosVarData", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxCancelError(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxCancelError", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxResetAlarm(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxResetAlarm", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxSetMode(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_ModeData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.ModeData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxSetMode", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxSetCycle(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_CycleData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.CycleData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxSetCycle", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxSetServoPower(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_ServoPowerData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.ServoPowerData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxSetServoPower", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxSetMasterJob(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_MasterJobData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.MasterJobData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxSetMasterJob", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxSetCurJob(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_CurrentJobData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.CurrentJobData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxSetCurJob", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxStartJob(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_StartJobData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.StartJobData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxStartJob", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxHold(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_HoldData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.HoldData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxHold", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxWaitForJobEnd(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_WaitJobData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.WaitJobData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxWaitForJobEnd", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxDeleteJob(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_DeleteJobData sData,
	Motoman_MotoNIS_StandardResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.DeleteJobData";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.StandardResponseData&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxDeleteJob", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxGetJogSpeed(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_JogSpeedResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.JogSpeedResponseData&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetJogSpeed", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxGetJogCoord(
	Motoman_MotoNIS_NisService __instance,
	Motoman_MotoNIS_JogCoordinateResponseData * rData,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.JogCoordinateResponseData&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetJogCoord", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxGetSysId(
	Motoman_MotoNIS_NisService __instance,
	unsigned char ** rData,
	int * __rDataLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle rData__ = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;
	*__rDataLength = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "System.Byte[]&";
	__parameterTypes[0] = (CDOTNET_BYTE | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[0] = &rData__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetSysId", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process parameter: rData
	if (rData__) {
		__errChk(CDotNetGetArrayElements(
			rData__, 
			CDOTNET_BYTE, 
			0, 
			rData));
		__errChk(CDotNetGetArrayLength(
			rData__, 
			0, 
			__rDataLength));
	}

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (rData__)
		CDotNetDiscardHandle(rData__);
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			rData, 
			CDOTNET_BYTE, 
			1, 
			__rDataLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_NisService_NxDebug(
	Motoman_MotoNIS_NisService __instance,
	int cmd,
	unsigned char * fileDataIn,
	int __fileDataInLength,
	unsigned char ** fileDataOut,
	int * __fileDataOutLength,
	Motoman_MotoNIS_WebMethodResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	CDotNetHandle fileDataIn__ = 0;
	CDotNetHandle fileDataOut__ = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*fileDataOut = 0;
	*__fileDataOutLength = 0;


	// Pre-process parameter: cmd
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &cmd;

	// Pre-process parameter: fileDataIn
	if (fileDataIn)
		__errChk(CDotNetCreateArray(
			CDOTNET_BYTE, 
			1, 
			0, 
			&__fileDataInLength, 
			fileDataIn, 
			&fileDataIn__));
	__parameterTypeNames[1] = "System.Byte[]";
	__parameterTypes[1] = (CDOTNET_BYTE | CDOTNET_ARRAY);
	__parameters[1] = &fileDataIn__;

	// Pre-process parameter: fileDataOut
	__parameterTypeNames[2] = "System.Byte[]&";
	__parameterTypes[2] = (CDOTNET_BYTE | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[2] = &fileDataOut__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.NisService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxDebug", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process parameter: fileDataOut
	if (fileDataOut__) {
		__errChk(CDotNetGetArrayElements(
			fileDataOut__, 
			CDOTNET_BYTE, 
			0, 
			fileDataOut));
		__errChk(CDotNetGetArrayLength(
			fileDataOut__, 
			0, 
			__fileDataOutLength));
	}

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (fileDataIn__)
		CDotNetDiscardHandle(fileDataIn__);
	if (fileDataOut__)
		CDotNetDiscardHandle(fileDataOut__);
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			fileDataOut, 
			CDOTNET_BYTE, 
			1, 
			__fileDataOutLength);
	}
	return __error;
}


// Type: Motoman.MotoNIS.AccessToken
int CVIFUNC Motoman_MotoNIS_AccessToken__Create(
	Motoman_MotoNIS_AccessToken * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.AccessToken", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_AccessToken__Get__Token(
	Motoman_MotoNIS_AccessToken __instance,
	char ** __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_STRING;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.AccessToken", 
		__instance, 
		CDOTNET_GET_FIELD, 
		"Token", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_STRING);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_AccessToken__Set__Token(
	Motoman_MotoNIS_AccessToken __instance,
	char * Token,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: Token
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &Token;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.AccessToken", 
		__instance, 
		CDOTNET_SET_FIELD, 
		"Token", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_AccessToken__Get__Level(
	Motoman_MotoNIS_AccessToken __instance,
	Motoman_MotoNIS_AccessLevel * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.AccessToken", 
		__instance, 
		CDOTNET_GET_FIELD, 
		"Level", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_AccessToken__Set__Level(
	Motoman_MotoNIS_AccessToken __instance,
	Motoman_MotoNIS_AccessLevel Level,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle Level__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: Level
	__errChk(Motoman_MotoNIS_AccessLevel__Create(
		&Level, 
		&Level__, 
		__exception));
	__parameterTypeNames[0] = "Motoman.MotoNIS.AccessLevel";
	__parameterTypes[0] = (CDOTNET_ENUM);
	__parameters[0] = &Level__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.AccessToken", 
		__instance, 
		CDOTNET_SET_FIELD, 
		"Level", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (Level__)
		CDotNetDiscardHandle(Level__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_AccessToken__Get__TimeCreated(
	Motoman_MotoNIS_AccessToken __instance,
	System_DateTime * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_STRUCT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.AccessToken", 
		__instance, 
		CDOTNET_GET_FIELD, 
		"TimeCreated", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_STRUCT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_AccessToken__Set__TimeCreated(
	Motoman_MotoNIS_AccessToken __instance,
	System_DateTime TimeCreated,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: TimeCreated
	__parameterTypeNames[0] = "System.DateTime";
	__parameterTypes[0] = (CDOTNET_STRUCT);
	__parameters[0] = &TimeCreated;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.AccessToken", 
		__instance, 
		CDOTNET_SET_FIELD, 
		"TimeCreated", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.Core.CoreService
int CVIFUNC Motoman_MotoNIS_Core_CoreService__Create(
	Motoman_MotoNIS_Core_CoreService * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_SoapVersion(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_Web_Services_Protocols_SoapProtocolVersion * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_ENUM;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"SoapVersion", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue)
		__errChk(CDotNetGetEnumValue(
			__returnValue__, 
			__returnValue));


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_SoapVersion(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_Web_Services_Protocols_SoapProtocolVersion value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__errChk(System_Web_Services_Protocols_SoapProtocolVersion__Create(
		&value, 
		&value__, 
		__exception));
	__parameterTypeNames[0] = "System.Web.Services.Protocols.SoapProtocolVersion,System.Web.Services, Version=2.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a";
	__parameterTypes[0] = (CDOTNET_ENUM);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"SoapVersion", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_AllowAutoRedirect(
	Motoman_MotoNIS_Core_CoreService __instance,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_BOOLEAN;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"AllowAutoRedirect", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_AllowAutoRedirect(
	Motoman_MotoNIS_Core_CoreService __instance,
	int value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Boolean";
	__parameterTypes[0] = (CDOTNET_BOOLEAN);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"AllowAutoRedirect", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_CookieContainer(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_Net_CookieContainer * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"CookieContainer", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_CookieContainer(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_Net_CookieContainer value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Net.CookieContainer,System, Version=2.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"CookieContainer", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_ClientCertificates(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_Security_Cryptography_X509Certificates_X509CertificateCollection * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"ClientCertificates", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_EnableDecompression(
	Motoman_MotoNIS_Core_CoreService __instance,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_BOOLEAN;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"EnableDecompression", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_EnableDecompression(
	Motoman_MotoNIS_Core_CoreService __instance,
	int value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Boolean";
	__parameterTypes[0] = (CDOTNET_BOOLEAN);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"EnableDecompression", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_UserAgent(
	Motoman_MotoNIS_Core_CoreService __instance,
	char ** __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_STRING;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"UserAgent", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_STRING);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_UserAgent(
	Motoman_MotoNIS_Core_CoreService __instance,
	char * value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"UserAgent", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_Proxy(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_Net_IWebProxy * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Proxy", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_Proxy(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_Net_IWebProxy value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Net.IWebProxy,System, Version=2.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Proxy", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_UnsafeAuthenticatedConnectionSharing(
	Motoman_MotoNIS_Core_CoreService __instance,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_BOOLEAN;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"UnsafeAuthenticatedConnectionSharing", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_UnsafeAuthenticatedConnectionSharing(
	Motoman_MotoNIS_Core_CoreService __instance,
	int value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Boolean";
	__parameterTypes[0] = (CDOTNET_BOOLEAN);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"UnsafeAuthenticatedConnectionSharing", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_Credentials(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_Net_ICredentials * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Credentials", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_Credentials(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_Net_ICredentials value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Net.ICredentials,System, Version=2.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Credentials", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_UseDefaultCredentials(
	Motoman_MotoNIS_Core_CoreService __instance,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_BOOLEAN;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"UseDefaultCredentials", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_UseDefaultCredentials(
	Motoman_MotoNIS_Core_CoreService __instance,
	int value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Boolean";
	__parameterTypes[0] = (CDOTNET_BOOLEAN);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"UseDefaultCredentials", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_ConnectionGroupName(
	Motoman_MotoNIS_Core_CoreService __instance,
	char ** __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_STRING;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"ConnectionGroupName", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_STRING);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_ConnectionGroupName(
	Motoman_MotoNIS_Core_CoreService __instance,
	char * value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"ConnectionGroupName", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_PreAuthenticate(
	Motoman_MotoNIS_Core_CoreService __instance,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_BOOLEAN;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"PreAuthenticate", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_PreAuthenticate(
	Motoman_MotoNIS_Core_CoreService __instance,
	int value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Boolean";
	__parameterTypes[0] = (CDOTNET_BOOLEAN);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"PreAuthenticate", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_Url(
	Motoman_MotoNIS_Core_CoreService __instance,
	char ** __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_STRING;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Url", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_STRING);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_Url(
	Motoman_MotoNIS_Core_CoreService __instance,
	char * value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Url", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_RequestEncoding(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_Text_Encoding * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"RequestEncoding", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_RequestEncoding(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_Text_Encoding value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Text.Encoding";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"RequestEncoding", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_Timeout(
	Motoman_MotoNIS_Core_CoreService __instance,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Timeout", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_Timeout(
	Motoman_MotoNIS_Core_CoreService __instance,
	int value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Timeout", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_Site(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_ComponentModel_ISite * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Site", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Set_Site(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_ComponentModel_ISite value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.ComponentModel.ISite,System, Version=2.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"Site", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Get_Container(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_ComponentModel_IContainer * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"Container", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxConvertJobRtoP(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CONVERTJOBRTOPSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxConvertJobRtoP", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxConvertJobRtoP(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxConvertJobRtoP", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxConvertJobRtoPAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA sData,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CONVERTJOBRTOPSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxConvertJobRtoPAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxConvertJobRtoPAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CONVERTJOBRTOPSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxConvertJobRtoPAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxIMOV(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_IMOVSENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.IMOVSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxIMOV", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxIMOV(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_IMOVSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.IMOVSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxIMOV", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxIMOV(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxIMOV", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxIMOVAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_IMOVSENDDATA sData,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.IMOVSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxIMOVAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxIMOVAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_IMOVSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.IMOVSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxIMOVAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxMOVJ(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MOVJSENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.MOVJSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxMOVJ", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxMOVJ(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MOVJSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.MOVJSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxMOVJ", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxMOVJ(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxMOVJ", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxMOVJAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MOVJSENDDATA sData,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.MOVJSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxMOVJAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxMOVJAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MOVJSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.MOVJSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxMOVJAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxMOVL(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MOVLSENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.MOVLSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxMOVL", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxMOVL(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MOVLSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.MOVLSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxMOVL", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxMOVL(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxMOVL", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxMOVLAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MOVLSENDDATA sData,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.MOVLSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxMOVLAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxMOVLAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MOVLSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.MOVLSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxMOVLAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPulseMOVJ(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_PMOVJSENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.PMOVJSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxPulseMOVJ", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxPulseMOVJ(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_PMOVJSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.PMOVJSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxPulseMOVJ", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxPulseMOVJ(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxPulseMOVJ", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPulseMOVJAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_PMOVJSENDDATA sData,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.PMOVJSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxPulseMOVJAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPulseMOVJAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_PMOVJSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.PMOVJSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxPulseMOVJAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPulseMOVL(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_PMOVLSENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.PMOVLSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxPulseMOVL", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxPulseMOVL(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_PMOVLSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.PMOVLSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxPulseMOVL", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxPulseMOVL(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxPulseMOVL", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPulseMOVLAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_PMOVLSENDDATA sData,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.PMOVLSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxPulseMOVLAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPulseMOVLAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_PMOVLSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.PMOVLSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxPulseMOVLAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxWriteFile(
	Motoman_MotoNIS_Core_CoreService __instance,
	char * fileName,
	CDotNetHandle sData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: fileName
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &fileName;

	// Pre-process parameter: sData
	__parameterTypeNames[1] = "System.Byte[][]";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &sData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxWriteFile", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxWriteFile(
	Motoman_MotoNIS_Core_CoreService __instance,
	char * fileName,
	CDotNetHandle sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[4];
	unsigned int __parameterTypes[4];
	void * __parameters[4];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: fileName
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &fileName;

	// Pre-process parameter: sData
	__parameterTypeNames[1] = "System.Byte[][]";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &sData;

	// Pre-process parameter: callback
	__parameterTypeNames[2] = "System.AsyncCallback";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[3] = "System.Object";
	__parameterTypes[3] = (CDOTNET_OBJECT);
	__parameters[3] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxWriteFile", 
		0, 
		0, 
		4, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxWriteFile(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxWriteFile", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxWriteFileAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	char * fileName,
	CDotNetHandle sData,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: fileName
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &fileName;

	// Pre-process parameter: sData
	__parameterTypeNames[1] = "System.Byte[][]";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &sData;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxWriteFileAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxWriteFileAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	char * fileName,
	CDotNetHandle sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: fileName
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &fileName;

	// Pre-process parameter: sData
	__parameterTypeNames[1] = "System.Byte[][]";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &sData;

	// Pre-process parameter: userState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxWriteFileAsync", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxReadFile(
	Motoman_MotoNIS_Core_CoreService __instance,
	char * fileName,
	CDotNetHandle * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: fileName
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &fileName;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "System.Byte[][]&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxReadFile", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxReadFile(
	Motoman_MotoNIS_Core_CoreService __instance,
	char * fileName,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: fileName
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &fileName;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxReadFile", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxReadFile(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	CDotNetHandle * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "System.Byte[][]&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxReadFile", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxReadFileAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	char * fileName,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: fileName
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &fileName;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxReadFileAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxReadFileAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	char * fileName,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: fileName
	__parameterTypeNames[0] = "System.String";
	__parameterTypes[0] = (CDOTNET_STRING);
	__parameters[0] = &fileName;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxReadFileAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetFileList(
	Motoman_MotoNIS_Core_CoreService __instance,
	short extension,
	char *** rData,
	int * __rDataLength,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle rData__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;
	*__rDataLength = 0;


	// Pre-process parameter: extension
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &extension;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "System.String[]&";
	__parameterTypes[1] = (CDOTNET_STRING | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[1] = &rData__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetFileList", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));

	// Post-process parameter: rData
	if (rData__) {
		__errChk(CDotNetGetArrayElements(
			rData__, 
			CDOTNET_STRING, 
			0, 
			rData));
		__errChk(CDotNetGetArrayLength(
			rData__, 
			0, 
			__rDataLength));
	}


__Error:
	if (rData__)
		CDotNetDiscardHandle(rData__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			rData, 
			CDOTNET_STRING, 
			1, 
			__rDataLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetFileList(
	Motoman_MotoNIS_Core_CoreService __instance,
	short extension,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: extension
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &extension;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxGetFileList", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetFileList(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	char *** rData,
	int * __rDataLength,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle rData__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;
	*__rDataLength = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "System.String[]&";
	__parameterTypes[1] = (CDOTNET_STRING | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[1] = &rData__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxGetFileList", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));

	// Post-process parameter: rData
	if (rData__) {
		__errChk(CDotNetGetArrayElements(
			rData__, 
			CDOTNET_STRING, 
			0, 
			rData));
		__errChk(CDotNetGetArrayLength(
			rData__, 
			0, 
			__rDataLength));
	}


__Error:
	if (rData__)
		CDotNetDiscardHandle(rData__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			rData, 
			CDOTNET_STRING, 
			1, 
			__rDataLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetFileListAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	short extension,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: extension
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &extension;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetFileListAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetFileListAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	short extension,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: extension
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &extension;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetFileListAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPing(
	Motoman_MotoNIS_Core_CoreService __instance,
	int cmd,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: cmd
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &cmd;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxPing", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxPing(
	Motoman_MotoNIS_Core_CoreService __instance,
	int cmd,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: cmd
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &cmd;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxPing", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxPing(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxPing", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPingAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	int cmd,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: cmd
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &cmd;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxPingAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPingAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	int cmd,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: cmd
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &cmd;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxPingAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetPrmS1D(
	Motoman_MotoNIS_Core_CoreService __instance,
	int dPrmNo,
	int dPrmNum,
	int ** data,
	int * __dataLength,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	CDotNetHandle data__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*data = 0;
	*__dataLength = 0;


	// Pre-process parameter: dPrmNo
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &dPrmNo;

	// Pre-process parameter: dPrmNum
	__parameterTypeNames[1] = "System.Int32";
	__parameterTypes[1] = (CDOTNET_INT32);
	__parameters[1] = &dPrmNum;

	// Pre-process parameter: data
	__parameterTypeNames[2] = "System.Int32[]&";
	__parameterTypes[2] = (CDOTNET_INT32 | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[2] = &data__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetPrmS1D", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));

	// Post-process parameter: data
	if (data__) {
		__errChk(CDotNetGetArrayElements(
			data__, 
			CDOTNET_INT32, 
			0, 
			data));
		__errChk(CDotNetGetArrayLength(
			data__, 
			0, 
			__dataLength));
	}


__Error:
	if (data__)
		CDotNetDiscardHandle(data__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			data, 
			CDOTNET_INT32, 
			1, 
			__dataLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetPrmS1D(
	Motoman_MotoNIS_Core_CoreService __instance,
	int dPrmNo,
	int dPrmNum,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[4];
	unsigned int __parameterTypes[4];
	void * __parameters[4];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: dPrmNo
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &dPrmNo;

	// Pre-process parameter: dPrmNum
	__parameterTypeNames[1] = "System.Int32";
	__parameterTypes[1] = (CDOTNET_INT32);
	__parameters[1] = &dPrmNum;

	// Pre-process parameter: callback
	__parameterTypeNames[2] = "System.AsyncCallback";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[3] = "System.Object";
	__parameterTypes[3] = (CDOTNET_OBJECT);
	__parameters[3] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxGetPrmS1D", 
		0, 
		0, 
		4, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetPrmS1D(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	int ** data,
	int * __dataLength,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle data__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*data = 0;
	*__dataLength = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: data
	__parameterTypeNames[1] = "System.Int32[]&";
	__parameterTypes[1] = (CDOTNET_INT32 | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[1] = &data__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxGetPrmS1D", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));

	// Post-process parameter: data
	if (data__) {
		__errChk(CDotNetGetArrayElements(
			data__, 
			CDOTNET_INT32, 
			0, 
			data));
		__errChk(CDotNetGetArrayLength(
			data__, 
			0, 
			__dataLength));
	}


__Error:
	if (data__)
		CDotNetDiscardHandle(data__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			data, 
			CDOTNET_INT32, 
			1, 
			__dataLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetPrmS1DAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	int dPrmNo,
	int dPrmNum,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: dPrmNo
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &dPrmNo;

	// Pre-process parameter: dPrmNum
	__parameterTypeNames[1] = "System.Int32";
	__parameterTypes[1] = (CDOTNET_INT32);
	__parameters[1] = &dPrmNum;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetPrmS1DAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetPrmS1DAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	int dPrmNo,
	int dPrmNum,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: dPrmNo
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &dPrmNo;

	// Pre-process parameter: dPrmNum
	__parameterTypeNames[1] = "System.Int32";
	__parameterTypes[1] = (CDOTNET_INT32);
	__parameters[1] = &dPrmNum;

	// Pre-process parameter: userState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetPrmS1DAsync", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetSysId(
	Motoman_MotoNIS_Core_CoreService __instance,
	unsigned char ** rData,
	int * __rDataLength,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle rData__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;
	*__rDataLength = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "System.Byte[]&";
	__parameterTypes[0] = (CDOTNET_BYTE | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[0] = &rData__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetSysId", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));

	// Post-process parameter: rData
	if (rData__) {
		__errChk(CDotNetGetArrayElements(
			rData__, 
			CDOTNET_BYTE, 
			0, 
			rData));
		__errChk(CDotNetGetArrayLength(
			rData__, 
			0, 
			__rDataLength));
	}


__Error:
	if (rData__)
		CDotNetDiscardHandle(rData__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			rData, 
			CDOTNET_BYTE, 
			1, 
			__rDataLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetSysId(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: callback
	__parameterTypeNames[0] = "System.AsyncCallback";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxGetSysId", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetSysId(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	unsigned char ** rData,
	int * __rDataLength,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle rData__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;
	*__rDataLength = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "System.Byte[]&";
	__parameterTypes[1] = (CDOTNET_BYTE | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[1] = &rData__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxGetSysId", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));

	// Post-process parameter: rData
	if (rData__) {
		__errChk(CDotNetGetArrayElements(
			rData__, 
			CDOTNET_BYTE, 
			0, 
			rData));
		__errChk(CDotNetGetArrayLength(
			rData__, 
			0, 
			__rDataLength));
	}


__Error:
	if (rData__)
		CDotNetDiscardHandle(rData__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			rData, 
			CDOTNET_BYTE, 
			1, 
			__rDataLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetSysIdAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetSysIdAsync", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetSysIdAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: userState
	__parameterTypeNames[0] = "System.Object";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetSysIdAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxDebug(
	Motoman_MotoNIS_Core_CoreService __instance,
	int cmd,
	CDotNetHandle sData,
	CDotNetHandle * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: cmd
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &cmd;

	// Pre-process parameter: sData
	__parameterTypeNames[1] = "System.Byte[][]";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[2] = "System.Byte[][]&";
	__parameterTypes[2] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[2] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxDebug", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxDebug(
	Motoman_MotoNIS_Core_CoreService __instance,
	int cmd,
	CDotNetHandle sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[4];
	unsigned int __parameterTypes[4];
	void * __parameters[4];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: cmd
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &cmd;

	// Pre-process parameter: sData
	__parameterTypeNames[1] = "System.Byte[][]";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &sData;

	// Pre-process parameter: callback
	__parameterTypeNames[2] = "System.AsyncCallback";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[3] = "System.Object";
	__parameterTypes[3] = (CDOTNET_OBJECT);
	__parameters[3] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxDebug", 
		0, 
		0, 
		4, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxDebug(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	CDotNetHandle * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "System.Byte[][]&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxDebug", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxDebugAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	int cmd,
	CDotNetHandle sData,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: cmd
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &cmd;

	// Pre-process parameter: sData
	__parameterTypeNames[1] = "System.Byte[][]";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &sData;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxDebugAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxDebugAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	int cmd,
	CDotNetHandle sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: cmd
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &cmd;

	// Pre-process parameter: sData
	__parameterTypeNames[1] = "System.Byte[][]";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &sData;

	// Pre-process parameter: userState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxDebugAsync", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_CancelAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: userState
	__parameterTypeNames[0] = "System.Object";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"CancelAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxCancelError(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxCancelError", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxCancelError(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: callback
	__parameterTypeNames[0] = "System.AsyncCallback";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxCancelError", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxCancelError(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxCancelError", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxCancelErrorAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxCancelErrorAsync", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxCancelErrorAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: userState
	__parameterTypeNames[0] = "System.Object";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxCancelErrorAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxResetAlarm(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxResetAlarm", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxResetAlarm(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: callback
	__parameterTypeNames[0] = "System.AsyncCallback";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxResetAlarm", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxResetAlarm(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxResetAlarm", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxResetAlarmAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxResetAlarmAsync", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxResetAlarmAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: userState
	__parameterTypeNames[0] = "System.Object";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxResetAlarmAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetMode(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MODESENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.MODESENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxSetMode", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxSetMode(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MODESENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.MODESENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxSetMode", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxSetMode(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxSetMode", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetModeAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MODESENDDATA sData,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.MODESENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxSetModeAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetModeAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MODESENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.MODESENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxSetModeAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetCycle(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CYCLESENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CYCLESENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxSetCycle", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxSetCycle(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CYCLESENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CYCLESENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxSetCycle", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxSetCycle(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxSetCycle", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetCycleAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CYCLESENDDATA sData,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CYCLESENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxSetCycleAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetCycleAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CYCLESENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CYCLESENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxSetCycleAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetServoPower(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_SERVOPOWERSENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.SERVOPOWERSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxSetServoPower", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxSetServoPower(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_SERVOPOWERSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.SERVOPOWERSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxSetServoPower", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxSetServoPower(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxSetServoPower", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetServoPowerAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_SERVOPOWERSENDDATA sData,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.SERVOPOWERSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxSetServoPowerAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetServoPowerAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_SERVOPOWERSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.SERVOPOWERSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxSetServoPowerAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetMasterJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MASTERJOBSENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.MASTERJOBSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxSetMasterJob", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxSetMasterJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MASTERJOBSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.MASTERJOBSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxSetMasterJob", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxSetMasterJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxSetMasterJob", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetMasterJobAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MASTERJOBSENDDATA sData,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.MASTERJOBSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxSetMasterJobAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetMasterJobAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MASTERJOBSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.MASTERJOBSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxSetMasterJobAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetCurJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CURJOBSENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CURJOBSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxSetCurJob", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxSetCurJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CURJOBSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CURJOBSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxSetCurJob", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxSetCurJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxSetCurJob", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetCurJobAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CURJOBSENDDATA sData,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CURJOBSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxSetCurJobAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxSetCurJobAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CURJOBSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CURJOBSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxSetCurJobAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxStartJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_STARTJOBSENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.STARTJOBSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxStartJob", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxStartJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_STARTJOBSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.STARTJOBSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxStartJob", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxStartJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxStartJob", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxStartJobAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_STARTJOBSENDDATA sData,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.STARTJOBSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxStartJobAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxStartJobAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_STARTJOBSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.STARTJOBSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxStartJobAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxHold(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_HOLDSENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.HOLDSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxHold", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxHold(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_HOLDSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.HOLDSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxHold", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxHold(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxHold", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxHoldAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_HOLDSENDDATA sData,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.HOLDSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxHoldAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxHoldAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_HOLDSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.HOLDSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxHoldAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxWaitForJobEnd(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_WAITJOBSENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.WAITJOBSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxWaitForJobEnd", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxWaitForJobEnd(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_WAITJOBSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.WAITJOBSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxWaitForJobEnd", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxWaitForJobEnd(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxWaitForJobEnd", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxWaitForJobEndAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_WAITJOBSENDDATA sData,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.WAITJOBSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxWaitForJobEndAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxWaitForJobEndAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_WAITJOBSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.WAITJOBSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxWaitForJobEndAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxDeleteJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_DELETEJOBSENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.DELETEJOBSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxDeleteJob", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxDeleteJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_DELETEJOBSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.DELETEJOBSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxDeleteJob", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxDeleteJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxDeleteJob", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxDeleteJobAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_DELETEJOBSENDDATA sData,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.DELETEJOBSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxDeleteJobAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxDeleteJobAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_DELETEJOBSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.DELETEJOBSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxDeleteJobAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetJogSpeed(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_JOGSPEEDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.JOGSPEEDRSPDATA&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetJogSpeed", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetJogSpeed(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: callback
	__parameterTypeNames[0] = "System.AsyncCallback";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxGetJogSpeed", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetJogSpeed(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_JOGSPEEDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.JOGSPEEDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxGetJogSpeed", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetJogSpeedAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetJogSpeedAsync", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetJogSpeedAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: userState
	__parameterTypeNames[0] = "System.Object";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetJogSpeedAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetJogCoord(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_JOGCOORDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.JOGCOORDRSPDATA&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetJogCoord", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetJogCoord(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: callback
	__parameterTypeNames[0] = "System.AsyncCallback";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxGetJogCoord", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetJogCoord(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_JOGCOORDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.JOGCOORDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxGetJogCoord", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetJogCoordAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetJogCoordAsync", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetJogCoordAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: userState
	__parameterTypeNames[0] = "System.Object";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetJogCoordAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxConvertJobPtoR(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CONVERTJOBPTORSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxConvertJobPtoR", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxConvertJobPtoR(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CONVERTJOBPTORSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxConvertJobPtoR", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxConvertJobPtoR(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxConvertJobPtoR", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxConvertJobPtoRAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA sData,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CONVERTJOBPTORSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxConvertJobPtoRAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxConvertJobPtoRAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CONVERTJOBPTORSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxConvertJobPtoRAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxConvertJobRtoP(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA sData,
	Motoman_MotoNIS_Core_STDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CONVERTJOBRTOPSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.STDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxConvertJobRtoP", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetTorque(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	Motoman_MotoNIS_Core_TORQUERSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CTRLGRPSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.TORQUERSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetTorque", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetTorque(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CTRLGRPSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxGetTorque", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetTorque(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_TORQUERSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.TORQUERSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxGetTorque", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetTorqueAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CTRLGRPSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetTorqueAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetTorqueAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CTRLGRPSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetTorqueAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxMonitor(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MONITORINFO * sData,
	int __sDataLength,
	int ** intArray,
	int * __intArrayLength,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;
	CDotNetHandle intArray__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*intArray = 0;
	*__intArrayLength = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.Core.MONITORINFO", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.MONITORINFO[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process parameter: intArray
	__parameterTypeNames[1] = "System.Int32[]&";
	__parameterTypes[1] = (CDOTNET_INT32 | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[1] = &intArray__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxMonitor", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));

	// Post-process parameter: intArray
	if (intArray__) {
		__errChk(CDotNetGetArrayElements(
			intArray__, 
			CDOTNET_INT32, 
			0, 
			intArray));
		__errChk(CDotNetGetArrayLength(
			intArray__, 
			0, 
			__intArrayLength));
	}


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	if (intArray__)
		CDotNetDiscardHandle(intArray__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			intArray, 
			CDOTNET_INT32, 
			1, 
			__intArrayLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxMonitor(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MONITORINFO * sData,
	int __sDataLength,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.Core.MONITORINFO", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.MONITORINFO[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxMonitor", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxMonitor(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	int ** intArray,
	int * __intArrayLength,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle intArray__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*intArray = 0;
	*__intArrayLength = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: intArray
	__parameterTypeNames[1] = "System.Int32[]&";
	__parameterTypes[1] = (CDOTNET_INT32 | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[1] = &intArray__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxMonitor", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));

	// Post-process parameter: intArray
	if (intArray__) {
		__errChk(CDotNetGetArrayElements(
			intArray__, 
			CDOTNET_INT32, 
			0, 
			intArray));
		__errChk(CDotNetGetArrayLength(
			intArray__, 
			0, 
			__intArrayLength));
	}


__Error:
	if (intArray__)
		CDotNetDiscardHandle(intArray__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			intArray, 
			CDOTNET_INT32, 
			1, 
			__intArrayLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxMonitorAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MONITORINFO * sData,
	int __sDataLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.Core.MONITORINFO", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.MONITORINFO[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxMonitorAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxMonitorAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MONITORINFO * sData,
	int __sDataLength,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.Core.MONITORINFO", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.MONITORINFO[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxMonitorAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetAlarmStatus(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_ALARMSTATUSRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.ALARMSTATUSRSPDATA&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetAlarmStatus", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetAlarmStatus(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: callback
	__parameterTypeNames[0] = "System.AsyncCallback";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxGetAlarmStatus", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetAlarmStatus(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_ALARMSTATUSRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.ALARMSTATUSRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxGetAlarmStatus", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetAlarmStatusAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetAlarmStatusAsync", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetAlarmStatusAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: userState
	__parameterTypeNames[0] = "System.Object";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetAlarmStatusAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetAlarmCode(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_ALARMCODERSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.ALARMCODERSPDATA&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetAlarmCode", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetAlarmCode(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: callback
	__parameterTypeNames[0] = "System.AsyncCallback";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxGetAlarmCode", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetAlarmCode(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_ALARMCODERSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.ALARMCODERSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxGetAlarmCode", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetAlarmCodeAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetAlarmCodeAsync", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetAlarmCodeAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: userState
	__parameterTypeNames[0] = "System.Object";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetAlarmCodeAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetMode(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_MODERSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.MODERSPDATA&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetMode", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetMode(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: callback
	__parameterTypeNames[0] = "System.AsyncCallback";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxGetMode", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetMode(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_MODERSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.MODERSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxGetMode", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetModeAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetModeAsync", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetModeAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: userState
	__parameterTypeNames[0] = "System.Object";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetModeAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetCycle(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CYCLERSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CYCLERSPDATA&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetCycle", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetCycle(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: callback
	__parameterTypeNames[0] = "System.AsyncCallback";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxGetCycle", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetCycle(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_CYCLERSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.CYCLERSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxGetCycle", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetCycleAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetCycleAsync", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetCycleAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: userState
	__parameterTypeNames[0] = "System.Object";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetCycleAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetServoPower(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_SERVOPOWERRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.SERVOPOWERRSPDATA&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetServoPower", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetServoPower(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: callback
	__parameterTypeNames[0] = "System.AsyncCallback";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxGetServoPower", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetServoPower(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_SERVOPOWERRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.SERVOPOWERRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxGetServoPower", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetServoPowerAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetServoPowerAsync", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetServoPowerAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: userState
	__parameterTypeNames[0] = "System.Object";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetServoPowerAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetPlayStatus(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_PLAYSTATUSRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.PLAYSTATUSRSPDATA&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetPlayStatus", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetPlayStatus(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: callback
	__parameterTypeNames[0] = "System.AsyncCallback";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxGetPlayStatus", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetPlayStatus(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_PLAYSTATUSRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.PLAYSTATUSRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxGetPlayStatus", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetPlayStatusAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetPlayStatusAsync", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetPlayStatusAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: userState
	__parameterTypeNames[0] = "System.Object";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetPlayStatusAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetMasterJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_TASKSENDDATA sData,
	Motoman_MotoNIS_Core_JOBNAMERSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.TASKSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.JOBNAMERSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetMasterJob", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetMasterJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_TASKSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.TASKSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxGetMasterJob", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetMasterJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_JOBNAMERSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.JOBNAMERSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxGetMasterJob", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetMasterJobAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_TASKSENDDATA sData,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.TASKSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetMasterJobAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetMasterJobAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_TASKSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.TASKSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetMasterJobAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetCurJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_TASKSENDDATA sData,
	Motoman_MotoNIS_Core_CURJOBRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.TASKSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.CURJOBRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetCurJob", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetCurJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_TASKSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.TASKSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxGetCurJob", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetCurJob(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_CURJOBRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.CURJOBRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxGetCurJob", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetCurJobAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_TASKSENDDATA sData,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.TASKSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetCurJobAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetCurJobAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_TASKSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.TASKSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetCurJobAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetSpecialOpStatus(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_SPECIALOPRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: rData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.SPECIALOPRSPDATA&";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[0] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetSpecialOpStatus", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetSpecialOpStatus(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: callback
	__parameterTypeNames[0] = "System.AsyncCallback";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxGetSpecialOpStatus", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetSpecialOpStatus(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_SPECIALOPRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.SPECIALOPRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxGetSpecialOpStatus", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetSpecialOpStatusAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetSpecialOpStatusAsync", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetSpecialOpStatusAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: userState
	__parameterTypeNames[0] = "System.Object";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetSpecialOpStatusAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetJobDate(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_JOBNAMESENDDATA sData,
	Motoman_MotoNIS_Core_SYSTIMERSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.JOBNAMESENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.SYSTIMERSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetJobDate", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetJobDate(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_JOBNAMESENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.JOBNAMESENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxGetJobDate", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetJobDate(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_SYSTIMERSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.SYSTIMERSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxGetJobDate", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetJobDateAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_JOBNAMESENDDATA sData,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.JOBNAMESENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetJobDateAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetJobDateAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_JOBNAMESENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.JOBNAMESENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetJobDateAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetSysTimes(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_SYSTIMESENDDATA sData,
	Motoman_MotoNIS_Core_SYSTIMERSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.SYSTIMESENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.SYSTIMERSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetSysTimes", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetSysTimes(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_SYSTIMESENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.SYSTIMESENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxGetSysTimes", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetSysTimes(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_SYSTIMERSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.SYSTIMERSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxGetSysTimes", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetSysTimesAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_SYSTIMESENDDATA sData,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.SYSTIMESENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetSysTimesAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetSysTimesAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_SYSTIMESENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.SYSTIMESENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetSysTimesAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPutPosVarData(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_POSVARDATA * sData,
	int __sDataLength,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.Core.POSVARDATA", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.POSVARDATA[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxPutPosVarData", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxPutPosVarData(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_POSVARDATA * sData,
	int __sDataLength,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.Core.POSVARDATA", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.POSVARDATA[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxPutPosVarData", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxPutPosVarData(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxPutPosVarData", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPutPosVarDataAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_POSVARDATA * sData,
	int __sDataLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.Core.POSVARDATA", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.POSVARDATA[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxPutPosVarDataAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPutPosVarDataAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_POSVARDATA * sData,
	int __sDataLength,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.Core.POSVARDATA", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.POSVARDATA[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxPutPosVarDataAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxMOVLCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxMOVLCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxMOVLCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxMOVLCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxMOVLCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxMOVLCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxMOVLCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxPulseMOVJCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxPulseMOVJCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxPulseMOVJCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxPulseMOVJCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxPulseMOVJCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxPulseMOVJCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxPulseMOVJCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxPulseMOVLCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxPulseMOVLCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxPulseMOVLCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxPulseMOVLCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxPulseMOVLCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxPulseMOVLCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxPulseMOVLCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxWriteFileCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxWriteFileCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxWriteFileCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxWriteFileCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxWriteFileCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxWriteFileCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxWriteFileCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxReadFileCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxReadFileCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxReadFileCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxReadFileCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxReadFileCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxReadFileCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxReadFileCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetFileListCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetFileListCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxGetFileListCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetFileListCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetFileListCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetFileListCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxGetFileListCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxPingCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxPingCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxPingCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxPingCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxPingCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxPingCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxPingCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxPingCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetPrmS1DCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetPrmS1DCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxGetPrmS1DCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetPrmS1DCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetPrmS1DCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetPrmS1DCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxGetPrmS1DCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetSysIdCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetSysIdCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxGetSysIdCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetSysIdCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetSysIdCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetSysIdCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxGetSysIdCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxDebugCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxDebugCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxDebugCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxDebugCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxDebugCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxDebugCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxDebugCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxDebugCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetVarData(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_VARINFO * sData,
	int __sDataLength,
	int ** intArray,
	int * __intArrayLength,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;
	CDotNetHandle intArray__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*intArray = 0;
	*__intArrayLength = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.Core.VARINFO", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.VARINFO[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process parameter: intArray
	__parameterTypeNames[1] = "System.Int32[]&";
	__parameterTypes[1] = (CDOTNET_INT32 | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[1] = &intArray__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetVarData", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));

	// Post-process parameter: intArray
	if (intArray__) {
		__errChk(CDotNetGetArrayElements(
			intArray__, 
			CDOTNET_INT32, 
			0, 
			intArray));
		__errChk(CDotNetGetArrayLength(
			intArray__, 
			0, 
			__intArrayLength));
	}


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	if (intArray__)
		CDotNetDiscardHandle(intArray__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			intArray, 
			CDOTNET_INT32, 
			1, 
			__intArrayLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetVarData(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_VARINFO * sData,
	int __sDataLength,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.Core.VARINFO", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.VARINFO[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxGetVarData", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetVarData(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	int ** intArray,
	int * __intArrayLength,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle intArray__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*intArray = 0;
	*__intArrayLength = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: intArray
	__parameterTypeNames[1] = "System.Int32[]&";
	__parameterTypes[1] = (CDOTNET_INT32 | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[1] = &intArray__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxGetVarData", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));

	// Post-process parameter: intArray
	if (intArray__) {
		__errChk(CDotNetGetArrayElements(
			intArray__, 
			CDOTNET_INT32, 
			0, 
			intArray));
		__errChk(CDotNetGetArrayLength(
			intArray__, 
			0, 
			__intArrayLength));
	}


__Error:
	if (intArray__)
		CDotNetDiscardHandle(intArray__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			intArray, 
			CDOTNET_INT32, 
			1, 
			__intArrayLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetVarDataAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_VARINFO * sData,
	int __sDataLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.Core.VARINFO", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.VARINFO[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetVarDataAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetVarDataAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_VARINFO * sData,
	int __sDataLength,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.Core.VARINFO", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.VARINFO[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetVarDataAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPutVarData(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_VARDATA * sData,
	int __sDataLength,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.Core.VARDATA", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.VARDATA[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxPutVarData", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxPutVarData(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_VARDATA * sData,
	int __sDataLength,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.Core.VARDATA", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.VARDATA[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxPutVarData", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxPutVarData(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxPutVarData", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPutVarDataAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_VARDATA * sData,
	int __sDataLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.Core.VARDATA", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.VARDATA[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxPutVarDataAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxPutVarDataAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_VARDATA * sData,
	int __sDataLength,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.Core.VARDATA", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.VARDATA[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxPutVarDataAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxWriteIO(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_IODATA * sData,
	int __sDataLength,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.Core.IODATA", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.IODATA[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxWriteIO", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxWriteIO(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_IODATA * sData,
	int __sDataLength,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.Core.IODATA", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.IODATA[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxWriteIO", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxWriteIO(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxWriteIO", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxWriteIOAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_IODATA * sData,
	int __sDataLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.Core.IODATA", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.IODATA[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxWriteIOAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxWriteIOAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_IODATA * sData,
	int __sDataLength,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.Core.IODATA", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.IODATA[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxWriteIOAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxReadIO(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_IOINFO * sData,
	int __sDataLength,
	unsigned short ** ushortArray,
	int * __ushortArrayLength,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;
	CDotNetHandle ushortArray__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*ushortArray = 0;
	*__ushortArrayLength = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.Core.IOINFO", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.IOINFO[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process parameter: ushortArray
	__parameterTypeNames[1] = "System.UInt16[]&";
	__parameterTypes[1] = (CDOTNET_UINT16 | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[1] = &ushortArray__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxReadIO", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));

	// Post-process parameter: ushortArray
	if (ushortArray__) {
		__errChk(CDotNetGetArrayElements(
			ushortArray__, 
			CDOTNET_UINT16, 
			0, 
			ushortArray));
		__errChk(CDotNetGetArrayLength(
			ushortArray__, 
			0, 
			__ushortArrayLength));
	}


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	if (ushortArray__)
		CDotNetDiscardHandle(ushortArray__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			ushortArray, 
			CDOTNET_UINT16, 
			1, 
			__ushortArrayLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxReadIO(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_IOINFO * sData,
	int __sDataLength,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.Core.IOINFO", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.IOINFO[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxReadIO", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxReadIO(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	unsigned short ** ushortArray,
	int * __ushortArrayLength,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle ushortArray__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*ushortArray = 0;
	*__ushortArrayLength = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: ushortArray
	__parameterTypeNames[1] = "System.UInt16[]&";
	__parameterTypes[1] = (CDOTNET_UINT16 | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[1] = &ushortArray__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxReadIO", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));

	// Post-process parameter: ushortArray
	if (ushortArray__) {
		__errChk(CDotNetGetArrayElements(
			ushortArray__, 
			CDOTNET_UINT16, 
			0, 
			ushortArray));
		__errChk(CDotNetGetArrayLength(
			ushortArray__, 
			0, 
			__ushortArrayLength));
	}


__Error:
	if (ushortArray__)
		CDotNetDiscardHandle(ushortArray__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			ushortArray, 
			CDOTNET_UINT16, 
			1, 
			__ushortArrayLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxReadIOAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_IOINFO * sData,
	int __sDataLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.Core.IOINFO", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.IOINFO[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxReadIOAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxReadIOAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_IOINFO * sData,
	int __sDataLength,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.Core.IOINFO", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.IOINFO[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxReadIOAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetPulsePos(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	Motoman_MotoNIS_Core_PULSEPOSRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CTRLGRPSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.PULSEPOSRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetPulsePos", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetPulsePos(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CTRLGRPSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxGetPulsePos", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetPulsePos(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_PULSEPOSRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.PULSEPOSRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxGetPulsePos", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetPulsePosAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CTRLGRPSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetPulsePosAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetPulsePosAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CTRLGRPSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetPulsePosAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetCartPos(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	Motoman_MotoNIS_Core_CARTPOSRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CTRLGRPSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.CARTPOSRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetCartPos", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetCartPos(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CTRLGRPSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxGetCartPos", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetCartPos(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_CARTPOSRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.CARTPOSRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxGetCartPos", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetCartPosAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CTRLGRPSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetCartPosAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetCartPosAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CTRLGRPSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetCartPosAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetCartPosEx(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CARTPOSEXSENDDATA sData,
	Motoman_MotoNIS_Core_CARTPOSRSPDATAEX * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CARTPOSEXSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.CARTPOSRSPDATAEX&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetCartPosEx", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetCartPosEx(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CARTPOSEXSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CARTPOSEXSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxGetCartPosEx", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetCartPosEx(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_CARTPOSRSPDATAEX * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.CARTPOSRSPDATAEX&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxGetCartPosEx", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetCartPosExAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CARTPOSEXSENDDATA sData,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CARTPOSEXSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetCartPosExAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetCartPosExAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CARTPOSEXSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CARTPOSEXSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetCartPosExAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetPosVarData(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_POSVARINFO * sData,
	int __sDataLength,
	int ** intArray,
	int * __intArrayLength,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;
	CDotNetHandle intArray__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*intArray = 0;
	*__intArrayLength = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.Core.POSVARINFO", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.POSVARINFO[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process parameter: intArray
	__parameterTypeNames[1] = "System.Int32[]&";
	__parameterTypes[1] = (CDOTNET_INT32 | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[1] = &intArray__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetPosVarData", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));

	// Post-process parameter: intArray
	if (intArray__) {
		__errChk(CDotNetGetArrayElements(
			intArray__, 
			CDOTNET_INT32, 
			0, 
			intArray));
		__errChk(CDotNetGetArrayLength(
			intArray__, 
			0, 
			__intArrayLength));
	}


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	if (intArray__)
		CDotNetDiscardHandle(intArray__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			intArray, 
			CDOTNET_INT32, 
			1, 
			__intArrayLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetPosVarData(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_POSVARINFO * sData,
	int __sDataLength,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.Core.POSVARINFO", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.POSVARINFO[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxGetPosVarData", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetPosVarData(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	int ** intArray,
	int * __intArrayLength,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle intArray__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*intArray = 0;
	*__intArrayLength = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: intArray
	__parameterTypeNames[1] = "System.Int32[]&";
	__parameterTypes[1] = (CDOTNET_INT32 | CDOTNET_ARRAY | CDOTNET_OUT);
	__parameters[1] = &intArray__;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxGetPosVarData", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));

	// Post-process parameter: intArray
	if (intArray__) {
		__errChk(CDotNetGetArrayElements(
			intArray__, 
			CDOTNET_INT32, 
			0, 
			intArray));
		__errChk(CDotNetGetArrayLength(
			intArray__, 
			0, 
			__intArrayLength));
	}


__Error:
	if (intArray__)
		CDotNetDiscardHandle(intArray__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			intArray, 
			CDOTNET_INT32, 
			1, 
			__intArrayLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetPosVarDataAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_POSVARINFO * sData,
	int __sDataLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.Core.POSVARINFO", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.POSVARINFO[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetPosVarDataAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetPosVarDataAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_POSVARINFO * sData,
	int __sDataLength,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	CDotNetHandle sData__ = 0;
	CDotNetAssemblyHandle __sDataAssembly = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	if (sData) {
		__errChk(CDotNetLoadAssembly(
			__assemblyName, 
			&__sDataAssembly));
		__errChk(CDotNetCreateTypedArray(
			__sDataAssembly, 
			"Motoman.MotoNIS.Core.POSVARINFO", 
			1, 
			0, 
			&__sDataLength, 
			sData, 
			&sData__));
	}
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.POSVARINFO[]";
	__parameterTypes[0] = (CDOTNET_OBJECT | CDOTNET_ARRAY);
	__parameters[0] = &sData__;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetPosVarDataAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (sData__)
		CDotNetDiscardHandle(sData__);
	if (__sDataAssembly)
		CDotNetDiscardAssemblyHandle(__sDataAssembly);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetFBPulsePos(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	Motoman_MotoNIS_Core_FBPULSEPOSRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CTRLGRPSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.FBPULSEPOSRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetFBPulsePos", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetFBPulsePos(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CTRLGRPSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxGetFBPulsePos", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetFBPulsePos(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_FBPULSEPOSRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.FBPULSEPOSRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxGetFBPulsePos", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetFBPulsePosAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CTRLGRPSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetFBPulsePosAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetFBPulsePosAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CTRLGRPSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetFBPulsePosAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetServoSpeed(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	Motoman_MotoNIS_Core_SERVOSPEEDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CTRLGRPSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.SERVOSPEEDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetServoSpeed", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetServoSpeed(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CTRLGRPSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxGetServoSpeed", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetServoSpeed(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_SERVOSPEEDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.SERVOSPEEDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxGetServoSpeed", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetServoSpeedAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CTRLGRPSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetServoSpeedAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetServoSpeedAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CTRLGRPSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetServoSpeedAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetFBSpeed(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	Motoman_MotoNIS_Core_FBSPEEDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CTRLGRPSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.FBSPEEDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetFBSpeed", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_BeginNxGetFBSpeed(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	System_AsyncCallback callback,
	CDotNetHandle asyncState,
	System_IAsyncResult * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[3];
	unsigned int __parameterTypes[3];
	void * __parameters[3];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CTRLGRPSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: callback
	__parameterTypeNames[1] = "System.AsyncCallback";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &callback;

	// Pre-process parameter: asyncState
	__parameterTypeNames[2] = "System.Object";
	__parameterTypes[2] = (CDOTNET_OBJECT);
	__parameters[2] = &asyncState;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"BeginNxGetFBSpeed", 
		0, 
		0, 
		3, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_EndNxGetFBSpeed(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_IAsyncResult asyncResult,
	Motoman_MotoNIS_Core_FBSPEEDRSPDATA * rData,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	*rData = 0;


	// Pre-process parameter: asyncResult
	__parameterTypeNames[0] = "System.IAsyncResult";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &asyncResult;

	// Pre-process parameter: rData
	__parameterTypeNames[1] = "Motoman.MotoNIS.Core.FBSPEEDRSPDATA&";
	__parameterTypes[1] = (CDOTNET_OBJECT | CDOTNET_OUT);
	__parameters[1] = rData;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"EndNxGetFBSpeed", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			rData, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetFBSpeedAsync(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CTRLGRPSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetFBSpeedAsync", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_NxGetFBSpeedAsync_1(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_CTRLGRPSENDDATA sData,
	CDotNetHandle userState,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[2];
	unsigned int __parameterTypes[2];
	void * __parameters[2];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: sData
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.CTRLGRPSENDDATA";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &sData;

	// Pre-process parameter: userState
	__parameterTypeNames[1] = "System.Object";
	__parameterTypes[1] = (CDOTNET_OBJECT);
	__parameters[1] = &userState;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"NxGetFBSpeedAsync", 
		0, 
		0, 
		2, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetVarDataCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetVarDataCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxGetVarDataCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetVarDataCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetVarDataCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetVarDataCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxGetVarDataCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxPutVarDataCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxPutVarDataCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxPutVarDataCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxPutVarDataCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxPutVarDataCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxPutVarDataCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxPutVarDataCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxWriteIOCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxWriteIOCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxWriteIOCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxWriteIOCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxWriteIOCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxWriteIOCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxWriteIOCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxReadIOCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxReadIOCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxReadIOCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxReadIOCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxReadIOCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxReadIOCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxReadIOCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetPulsePosCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetPulsePosCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxGetPulsePosCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetPulsePosCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetPulsePosCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetPulsePosCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxGetPulsePosCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetCartPosCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetCartPosCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxGetCartPosCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetCartPosCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetCartPosCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetCartPosCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxGetCartPosCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetCartPosExCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetCartPosExCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxGetCartPosExCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetCartPosExCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetCartPosExCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetCartPosExCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxGetCartPosExCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetPosVarDataCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetPosVarDataCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxGetPosVarDataCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetPosVarDataCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetPosVarDataCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetPosVarDataCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxGetPosVarDataCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetFBPulsePosCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetFBPulsePosCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxGetFBPulsePosCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetFBPulsePosCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetFBPulsePosCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetFBPulsePosCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxGetFBPulsePosCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetServoSpeedCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetServoSpeedCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxGetServoSpeedCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetServoSpeedCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetServoSpeedCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetServoSpeedCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxGetServoSpeedCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetFBSpeedCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetFBSpeedCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxGetFBSpeedCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetFBSpeedCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetFBSpeedCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetFBSpeedCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxGetFBSpeedCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetTorqueCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetTorqueCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxGetTorqueCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetTorqueCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetTorqueCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetTorqueCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxGetTorqueCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxMonitorCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxMonitorCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxMonitorCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxMonitorCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxMonitorCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxMonitorCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxMonitorCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetAlarmStatusCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetAlarmStatusCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxGetAlarmStatusCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetAlarmStatusCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetAlarmStatusCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetAlarmStatusCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxGetAlarmStatusCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetAlarmCodeCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetAlarmCodeCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxGetAlarmCodeCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetAlarmCodeCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetAlarmCodeCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetAlarmCodeCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxGetAlarmCodeCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetModeCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetModeCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxGetModeCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetModeCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetModeCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetModeCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxGetModeCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetCycleCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetCycleCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxGetCycleCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetCycleCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetCycleCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetCycleCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxGetCycleCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetServoPowerCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetServoPowerCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxGetServoPowerCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetServoPowerCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetServoPowerCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetServoPowerCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxGetServoPowerCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetPlayStatusCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetPlayStatusCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxGetPlayStatusCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetPlayStatusCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetPlayStatusCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetPlayStatusCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxGetPlayStatusCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetMasterJobCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetMasterJobCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxGetMasterJobCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetMasterJobCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetMasterJobCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetMasterJobCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxGetMasterJobCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetCurJobCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetCurJobCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxGetCurJobCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetCurJobCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetCurJobCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetCurJobCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxGetCurJobCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetSpecialOpStatusCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetSpecialOpStatusCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxGetSpecialOpStatusCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetSpecialOpStatusCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetSpecialOpStatusCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetSpecialOpStatusCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxGetSpecialOpStatusCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetJobDateCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetJobDateCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxGetJobDateCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetJobDateCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetJobDateCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetJobDateCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxGetJobDateCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetSysTimesCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetSysTimesCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxGetSysTimesCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetSysTimesCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetSysTimesCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetSysTimesCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxGetSysTimesCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxPutPosVarDataCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxPutPosVarDataCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxPutPosVarDataCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxPutPosVarDataCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxPutPosVarDataCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxPutPosVarDataCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxPutPosVarDataCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxCancelErrorCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxCancelErrorCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxCancelErrorCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxCancelErrorCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxCancelErrorCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxCancelErrorCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxCancelErrorCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxResetAlarmCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxResetAlarmCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxResetAlarmCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxResetAlarmCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxResetAlarmCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxResetAlarmCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxResetAlarmCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxSetModeCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxSetModeCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxSetModeCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxSetModeCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxSetModeCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxSetModeCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxSetModeCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxSetCycleCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxSetCycleCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxSetCycleCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxSetCycleCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxSetCycleCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxSetCycleCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxSetCycleCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxSetServoPowerCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxSetServoPowerCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxSetServoPowerCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxSetServoPowerCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxSetServoPowerCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxSetServoPowerCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxSetServoPowerCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxSetMasterJobCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxSetMasterJobCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxSetMasterJobCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxSetMasterJobCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxSetMasterJobCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxSetMasterJobCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxSetMasterJobCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxSetCurJobCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxSetCurJobCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxSetCurJobCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxSetCurJobCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxSetCurJobCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxSetCurJobCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxSetCurJobCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxStartJobCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxStartJobCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxStartJobCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxStartJobCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxStartJobCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxStartJobCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxStartJobCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxHoldCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxHoldCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxHoldCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxHoldCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxHoldCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxHoldCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxHoldCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxHoldCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxWaitForJobEndCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxWaitForJobEndCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxWaitForJobEndCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxWaitForJobEndCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxWaitForJobEndCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxWaitForJobEndCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxWaitForJobEndCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxDeleteJobCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxDeleteJobCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxDeleteJobCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxDeleteJobCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxDeleteJobCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxDeleteJobCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxDeleteJobCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetJogSpeedCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetJogSpeedCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxGetJogSpeedCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetJogSpeedCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetJogSpeedCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetJogSpeedCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxGetJogSpeedCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxGetJogCoordCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetJogCoordCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxGetJogCoordCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxGetJogCoordCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxGetJogCoordCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxGetJogCoordCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxGetJogCoordCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxConvertJobPtoRCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxConvertJobPtoRCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxConvertJobPtoRCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxConvertJobPtoRCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxConvertJobPtoRCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxConvertJobPtoRCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxConvertJobPtoRCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxConvertJobRtoPCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxConvertJobRtoPCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxConvertJobRtoPCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxConvertJobRtoPCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxConvertJobRtoPCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxConvertJobRtoPCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxConvertJobRtoPCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxIMOVCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxIMOVCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxIMOVCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxIMOVCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxIMOVCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxIMOVCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxIMOVCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_NxMOVJCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxMOVJCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_NxMOVJCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_NxMOVJCompleted(
	Motoman_MotoNIS_Core_CoreService __instance,
	Motoman_MotoNIS_Core_NxMOVJCompletedEventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "Motoman.MotoNIS.Core.NxMOVJCompletedEventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_NxMOVJCompleted", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Discover(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"Discover", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Abort(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"Abort", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_add_Disposed(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_EventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.EventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"add_Disposed", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_remove_Disposed(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_EventHandler value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.EventHandler";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"remove_Disposed", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_Dispose(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"Dispose", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_ToString(
	Motoman_MotoNIS_Core_CoreService __instance,
	char ** __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_STRING;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"ToString", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_STRING);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_GetLifetimeService(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"GetLifetimeService", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_InitializeLifetimeService(
	Motoman_MotoNIS_Core_CoreService __instance,
	CDotNetHandle * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"InitializeLifetimeService", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CoreService_CreateObjRef(
	Motoman_MotoNIS_Core_CoreService __instance,
	System_Type requestedType,
	System_Runtime_Remoting_ObjRef * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;


	// Pre-process parameter: requestedType
	__parameterTypeNames[0] = "System.Type";
	__parameterTypes[0] = (CDOTNET_OBJECT);
	__parameters[0] = &requestedType;

	// Pre-process return value
	__returnValueTypeId = CDOTNET_OBJECT;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CoreService", 
		__instance, 
		CDOTNET_CALL_METHOD, 
		"CreateObjRef", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	if (__error < 0) {
		_CDotNetGenDisposeScalar(
			__returnValue, 
			CDOTNET_OBJECT);
	}
	return __error;
}


// Type: Motoman.MotoNIS.Core.VARINFO
int CVIFUNC Motoman_MotoNIS_Core_VARINFO__Create(
	Motoman_MotoNIS_Core_VARINFO * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.VARINFO", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_VARINFO_Get_usType(
	Motoman_MotoNIS_Core_VARINFO __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.VARINFO", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"usType", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_VARINFO_Set_usType(
	Motoman_MotoNIS_Core_VARINFO __instance,
	unsigned short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.UInt16";
	__parameterTypes[0] = (CDOTNET_UINT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.VARINFO", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"usType", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_VARINFO_Get_usIndex(
	Motoman_MotoNIS_Core_VARINFO __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.VARINFO", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"usIndex", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_VARINFO_Set_usIndex(
	Motoman_MotoNIS_Core_VARINFO __instance,
	unsigned short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.UInt16";
	__parameterTypes[0] = (CDOTNET_UINT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.VARINFO", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"usIndex", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.Core.PMOVLSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_PMOVLSENDDATA__Create(
	Motoman_MotoNIS_Core_PMOVLSENDDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.PMOVLSENDDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_PMOVLSENDDATA_Get_sCtrlGrp(
	Motoman_MotoNIS_Core_PMOVLSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.PMOVLSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sCtrlGrp", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_PMOVLSENDDATA_Set_sCtrlGrp(
	Motoman_MotoNIS_Core_PMOVLSENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.PMOVLSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sCtrlGrp", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_PMOVLSENDDATA_Get_sVType(
	Motoman_MotoNIS_Core_PMOVLSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.PMOVLSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sVType", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_PMOVLSENDDATA_Set_sVType(
	Motoman_MotoNIS_Core_PMOVLSENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.PMOVLSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sVType", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_PMOVLSENDDATA_Get_lSpeed(
	Motoman_MotoNIS_Core_PMOVLSENDDATA __instance,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.PMOVLSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"lSpeed", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_PMOVLSENDDATA_Set_lSpeed(
	Motoman_MotoNIS_Core_PMOVLSENDDATA __instance,
	int value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.PMOVLSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"lSpeed", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_PMOVLSENDDATA_Get_sToolNo(
	Motoman_MotoNIS_Core_PMOVLSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.PMOVLSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sToolNo", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_PMOVLSENDDATA_Set_sToolNo(
	Motoman_MotoNIS_Core_PMOVLSENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.PMOVLSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sToolNo", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_PMOVLSENDDATA_Get_lPos(
	Motoman_MotoNIS_Core_PMOVLSENDDATA __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32 | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.PMOVLSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"lPos", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_INT32, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_INT32, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_PMOVLSENDDATA_Set_lPos(
	Motoman_MotoNIS_Core_PMOVLSENDDATA __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_INT32, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.Int32[]";
	__parameterTypes[0] = (CDOTNET_INT32 | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.PMOVLSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"lPos", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_PMOVLSENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_PMOVLSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.PMOVLSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_PMOVLSENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_PMOVLSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.PMOVLSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.Core.PMOVJSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_PMOVJSENDDATA__Create(
	Motoman_MotoNIS_Core_PMOVJSENDDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.PMOVJSENDDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_PMOVJSENDDATA_Get_sCtrlGrp(
	Motoman_MotoNIS_Core_PMOVJSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.PMOVJSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sCtrlGrp", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_PMOVJSENDDATA_Set_sCtrlGrp(
	Motoman_MotoNIS_Core_PMOVJSENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.PMOVJSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sCtrlGrp", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_PMOVJSENDDATA_Get_lSpeed(
	Motoman_MotoNIS_Core_PMOVJSENDDATA __instance,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.PMOVJSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"lSpeed", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_PMOVJSENDDATA_Set_lSpeed(
	Motoman_MotoNIS_Core_PMOVJSENDDATA __instance,
	int value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.PMOVJSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"lSpeed", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_PMOVJSENDDATA_Get_sToolNo(
	Motoman_MotoNIS_Core_PMOVJSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.PMOVJSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sToolNo", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_PMOVJSENDDATA_Set_sToolNo(
	Motoman_MotoNIS_Core_PMOVJSENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.PMOVJSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sToolNo", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_PMOVJSENDDATA_Get_lPos(
	Motoman_MotoNIS_Core_PMOVJSENDDATA __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32 | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.PMOVJSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"lPos", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_INT32, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_INT32, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_PMOVJSENDDATA_Set_lPos(
	Motoman_MotoNIS_Core_PMOVJSENDDATA __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_INT32, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.Int32[]";
	__parameterTypes[0] = (CDOTNET_INT32 | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.PMOVJSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"lPos", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_PMOVJSENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_PMOVJSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.PMOVJSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_PMOVJSENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_PMOVJSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.PMOVJSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.Core.MOVLSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA__Create(
	Motoman_MotoNIS_Core_MOVLSENDDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVLSENDDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA_Get_sCtrlGrp(
	Motoman_MotoNIS_Core_MOVLSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVLSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sCtrlGrp", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA_Set_sCtrlGrp(
	Motoman_MotoNIS_Core_MOVLSENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVLSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sCtrlGrp", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA_Get_sVType(
	Motoman_MotoNIS_Core_MOVLSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVLSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sVType", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA_Set_sVType(
	Motoman_MotoNIS_Core_MOVLSENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVLSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sVType", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA_Get_lSpeed(
	Motoman_MotoNIS_Core_MOVLSENDDATA __instance,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVLSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"lSpeed", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA_Set_lSpeed(
	Motoman_MotoNIS_Core_MOVLSENDDATA __instance,
	int value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVLSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"lSpeed", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA_Get_sFrame(
	Motoman_MotoNIS_Core_MOVLSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVLSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sFrame", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA_Set_sFrame(
	Motoman_MotoNIS_Core_MOVLSENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVLSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sFrame", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA_Get_sConfig(
	Motoman_MotoNIS_Core_MOVLSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVLSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sConfig", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA_Set_sConfig(
	Motoman_MotoNIS_Core_MOVLSENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVLSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sConfig", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA_Get_sToolNo(
	Motoman_MotoNIS_Core_MOVLSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVLSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sToolNo", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA_Set_sToolNo(
	Motoman_MotoNIS_Core_MOVLSENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVLSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sToolNo", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA_Get_lPos(
	Motoman_MotoNIS_Core_MOVLSENDDATA __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32 | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVLSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"lPos", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_INT32, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_INT32, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MOVLSENDDATA_Set_lPos(
	Motoman_MotoNIS_Core_MOVLSENDDATA __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_INT32, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.Int32[]";
	__parameterTypes[0] = (CDOTNET_INT32 | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVLSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"lPos", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.Core.MOVJSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA__Create(
	Motoman_MotoNIS_Core_MOVJSENDDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVJSENDDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA_Get_sCtrlGrp(
	Motoman_MotoNIS_Core_MOVJSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVJSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sCtrlGrp", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA_Set_sCtrlGrp(
	Motoman_MotoNIS_Core_MOVJSENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVJSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sCtrlGrp", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA_Get_lSpeed(
	Motoman_MotoNIS_Core_MOVJSENDDATA __instance,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVJSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"lSpeed", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA_Set_lSpeed(
	Motoman_MotoNIS_Core_MOVJSENDDATA __instance,
	int value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVJSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"lSpeed", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA_Get_sFrame(
	Motoman_MotoNIS_Core_MOVJSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVJSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sFrame", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA_Set_sFrame(
	Motoman_MotoNIS_Core_MOVJSENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVJSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sFrame", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA_Get_sConfig(
	Motoman_MotoNIS_Core_MOVJSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVJSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sConfig", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA_Set_sConfig(
	Motoman_MotoNIS_Core_MOVJSENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVJSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sConfig", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA_Get_sToolNo(
	Motoman_MotoNIS_Core_MOVJSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVJSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sToolNo", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA_Set_sToolNo(
	Motoman_MotoNIS_Core_MOVJSENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVJSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sToolNo", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA_Get_lPos(
	Motoman_MotoNIS_Core_MOVJSENDDATA __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32 | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVJSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"lPos", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_INT32, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_INT32, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA_Set_lPos(
	Motoman_MotoNIS_Core_MOVJSENDDATA __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_INT32, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.Int32[]";
	__parameterTypes[0] = (CDOTNET_INT32 | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVJSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"lPos", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_MOVJSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVJSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MOVJSENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_MOVJSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MOVJSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.Core.IMOVSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA__Create(
	Motoman_MotoNIS_Core_IMOVSENDDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.IMOVSENDDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA_Get_sCtrlGrp(
	Motoman_MotoNIS_Core_IMOVSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.IMOVSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sCtrlGrp", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA_Set_sCtrlGrp(
	Motoman_MotoNIS_Core_IMOVSENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.IMOVSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sCtrlGrp", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA_Get_sVType(
	Motoman_MotoNIS_Core_IMOVSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.IMOVSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sVType", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA_Set_sVType(
	Motoman_MotoNIS_Core_IMOVSENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.IMOVSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sVType", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA_Get_lSpeed(
	Motoman_MotoNIS_Core_IMOVSENDDATA __instance,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.IMOVSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"lSpeed", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA_Set_lSpeed(
	Motoman_MotoNIS_Core_IMOVSENDDATA __instance,
	int value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.IMOVSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"lSpeed", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA_Get_sFrame(
	Motoman_MotoNIS_Core_IMOVSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.IMOVSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sFrame", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA_Set_sFrame(
	Motoman_MotoNIS_Core_IMOVSENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.IMOVSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sFrame", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA_Get_sToolNo(
	Motoman_MotoNIS_Core_IMOVSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.IMOVSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sToolNo", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA_Set_sToolNo(
	Motoman_MotoNIS_Core_IMOVSENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.IMOVSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sToolNo", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA_Get_lPos(
	Motoman_MotoNIS_Core_IMOVSENDDATA __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32 | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.IMOVSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"lPos", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_INT32, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_INT32, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA_Set_lPos(
	Motoman_MotoNIS_Core_IMOVSENDDATA __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_INT32, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.Int32[]";
	__parameterTypes[0] = (CDOTNET_INT32 | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.IMOVSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"lPos", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_IMOVSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.IMOVSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_IMOVSENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_IMOVSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.IMOVSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.Core.CONVERTJOBRTOPSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA__Create(
	Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CONVERTJOBRTOPSENDDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA_Get_sConvType(
	Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CONVERTJOBRTOPSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sConvType", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA_Set_sConvType(
	Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CONVERTJOBRTOPSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sConvType", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA_Get_sVarNo(
	Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CONVERTJOBRTOPSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sVarNo", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA_Set_sVarNo(
	Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CONVERTJOBRTOPSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sVarNo", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA_Get_cJobName(
	Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CONVERTJOBRTOPSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"cJobName", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA_Set_cJobName(
	Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CONVERTJOBRTOPSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"cJobName", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CONVERTJOBRTOPSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_CONVERTJOBRTOPSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CONVERTJOBRTOPSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.Core.CONVERTJOBPTORSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA__Create(
	Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CONVERTJOBPTORSENDDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA_Get_sFrame(
	Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CONVERTJOBPTORSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sFrame", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA_Set_sFrame(
	Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CONVERTJOBPTORSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sFrame", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA_Get_cJobName(
	Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CONVERTJOBPTORSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"cJobName", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA_Set_cJobName(
	Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CONVERTJOBPTORSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"cJobName", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CONVERTJOBPTORSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_CONVERTJOBPTORSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CONVERTJOBPTORSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.Core.JOGCOORDRSPDATA
int CVIFUNC Motoman_MotoNIS_Core_JOGCOORDRSPDATA__Create(
	Motoman_MotoNIS_Core_JOGCOORDRSPDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.JOGCOORDRSPDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_JOGCOORDRSPDATA_Get_sJogCoord(
	Motoman_MotoNIS_Core_JOGCOORDRSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.JOGCOORDRSPDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sJogCoord", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_JOGCOORDRSPDATA_Set_sJogCoord(
	Motoman_MotoNIS_Core_JOGCOORDRSPDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.JOGCOORDRSPDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sJogCoord", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_JOGCOORDRSPDATA_Get_reserved(
	Motoman_MotoNIS_Core_JOGCOORDRSPDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.JOGCOORDRSPDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_JOGCOORDRSPDATA_Set_reserved(
	Motoman_MotoNIS_Core_JOGCOORDRSPDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.JOGCOORDRSPDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.Core.JOGSPEEDRSPDATA
int CVIFUNC Motoman_MotoNIS_Core_JOGSPEEDRSPDATA__Create(
	Motoman_MotoNIS_Core_JOGSPEEDRSPDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.JOGSPEEDRSPDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_JOGSPEEDRSPDATA_Get_sJogSpeed(
	Motoman_MotoNIS_Core_JOGSPEEDRSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.JOGSPEEDRSPDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sJogSpeed", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_JOGSPEEDRSPDATA_Set_sJogSpeed(
	Motoman_MotoNIS_Core_JOGSPEEDRSPDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.JOGSPEEDRSPDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sJogSpeed", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_JOGSPEEDRSPDATA_Get_reserved(
	Motoman_MotoNIS_Core_JOGSPEEDRSPDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.JOGSPEEDRSPDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_JOGSPEEDRSPDATA_Set_reserved(
	Motoman_MotoNIS_Core_JOGSPEEDRSPDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.JOGSPEEDRSPDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.Core.DELETEJOBSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_DELETEJOBSENDDATA__Create(
	Motoman_MotoNIS_Core_DELETEJOBSENDDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.DELETEJOBSENDDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_DELETEJOBSENDDATA_Get_cJobName(
	Motoman_MotoNIS_Core_DELETEJOBSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.DELETEJOBSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"cJobName", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_DELETEJOBSENDDATA_Set_cJobName(
	Motoman_MotoNIS_Core_DELETEJOBSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.DELETEJOBSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"cJobName", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_DELETEJOBSENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_DELETEJOBSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.DELETEJOBSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_DELETEJOBSENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_DELETEJOBSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.DELETEJOBSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.Core.WAITJOBSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_WAITJOBSENDDATA__Create(
	Motoman_MotoNIS_Core_WAITJOBSENDDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.WAITJOBSENDDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_WAITJOBSENDDATA_Get_sTaskNo(
	Motoman_MotoNIS_Core_WAITJOBSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.WAITJOBSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sTaskNo", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_WAITJOBSENDDATA_Set_sTaskNo(
	Motoman_MotoNIS_Core_WAITJOBSENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.WAITJOBSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sTaskNo", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_WAITJOBSENDDATA_Get_sTime(
	Motoman_MotoNIS_Core_WAITJOBSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.WAITJOBSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sTime", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_WAITJOBSENDDATA_Set_sTime(
	Motoman_MotoNIS_Core_WAITJOBSENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.WAITJOBSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sTime", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.Core.HOLDSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_HOLDSENDDATA__Create(
	Motoman_MotoNIS_Core_HOLDSENDDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.HOLDSENDDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_HOLDSENDDATA_Get_sHold(
	Motoman_MotoNIS_Core_HOLDSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.HOLDSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sHold", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_HOLDSENDDATA_Set_sHold(
	Motoman_MotoNIS_Core_HOLDSENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.HOLDSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sHold", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_HOLDSENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_HOLDSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.HOLDSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_HOLDSENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_HOLDSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.HOLDSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.Core.STARTJOBSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_STARTJOBSENDDATA__Create(
	Motoman_MotoNIS_Core_STARTJOBSENDDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.STARTJOBSENDDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_STARTJOBSENDDATA_Get_sTaskNo(
	Motoman_MotoNIS_Core_STARTJOBSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.STARTJOBSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sTaskNo", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_STARTJOBSENDDATA_Set_sTaskNo(
	Motoman_MotoNIS_Core_STARTJOBSENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.STARTJOBSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sTaskNo", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_STARTJOBSENDDATA_Get_cJobName(
	Motoman_MotoNIS_Core_STARTJOBSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.STARTJOBSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"cJobName", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_STARTJOBSENDDATA_Set_cJobName(
	Motoman_MotoNIS_Core_STARTJOBSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.STARTJOBSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"cJobName", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_STARTJOBSENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_STARTJOBSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.STARTJOBSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_STARTJOBSENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_STARTJOBSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.STARTJOBSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.Core.CURJOBSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_CURJOBSENDDATA__Create(
	Motoman_MotoNIS_Core_CURJOBSENDDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CURJOBSENDDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CURJOBSENDDATA_Get_usJobLine(
	Motoman_MotoNIS_Core_CURJOBSENDDATA __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CURJOBSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"usJobLine", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CURJOBSENDDATA_Set_usJobLine(
	Motoman_MotoNIS_Core_CURJOBSENDDATA __instance,
	unsigned short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.UInt16";
	__parameterTypes[0] = (CDOTNET_UINT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CURJOBSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"usJobLine", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CURJOBSENDDATA_Get_cJobName(
	Motoman_MotoNIS_Core_CURJOBSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CURJOBSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"cJobName", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CURJOBSENDDATA_Set_cJobName(
	Motoman_MotoNIS_Core_CURJOBSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CURJOBSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"cJobName", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CURJOBSENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_CURJOBSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CURJOBSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CURJOBSENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_CURJOBSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CURJOBSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.Core.MASTERJOBSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_MASTERJOBSENDDATA__Create(
	Motoman_MotoNIS_Core_MASTERJOBSENDDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MASTERJOBSENDDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MASTERJOBSENDDATA_Get_sTaskNo(
	Motoman_MotoNIS_Core_MASTERJOBSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MASTERJOBSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sTaskNo", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MASTERJOBSENDDATA_Set_sTaskNo(
	Motoman_MotoNIS_Core_MASTERJOBSENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MASTERJOBSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sTaskNo", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MASTERJOBSENDDATA_Get_cJobName(
	Motoman_MotoNIS_Core_MASTERJOBSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MASTERJOBSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"cJobName", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MASTERJOBSENDDATA_Set_cJobName(
	Motoman_MotoNIS_Core_MASTERJOBSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MASTERJOBSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"cJobName", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MASTERJOBSENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_MASTERJOBSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MASTERJOBSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MASTERJOBSENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_MASTERJOBSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MASTERJOBSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.Core.SERVOPOWERSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_SERVOPOWERSENDDATA__Create(
	Motoman_MotoNIS_Core_SERVOPOWERSENDDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SERVOPOWERSENDDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SERVOPOWERSENDDATA_Get_sServoPower(
	Motoman_MotoNIS_Core_SERVOPOWERSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SERVOPOWERSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sServoPower", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SERVOPOWERSENDDATA_Set_sServoPower(
	Motoman_MotoNIS_Core_SERVOPOWERSENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SERVOPOWERSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sServoPower", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SERVOPOWERSENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_SERVOPOWERSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SERVOPOWERSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SERVOPOWERSENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_SERVOPOWERSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SERVOPOWERSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.Core.CYCLESENDDATA
int CVIFUNC Motoman_MotoNIS_Core_CYCLESENDDATA__Create(
	Motoman_MotoNIS_Core_CYCLESENDDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CYCLESENDDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CYCLESENDDATA_Get_sCycle(
	Motoman_MotoNIS_Core_CYCLESENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CYCLESENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sCycle", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CYCLESENDDATA_Set_sCycle(
	Motoman_MotoNIS_Core_CYCLESENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CYCLESENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sCycle", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CYCLESENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_CYCLESENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CYCLESENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CYCLESENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_CYCLESENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CYCLESENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.Core.MODESENDDATA
int CVIFUNC Motoman_MotoNIS_Core_MODESENDDATA__Create(
	Motoman_MotoNIS_Core_MODESENDDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MODESENDDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MODESENDDATA_Get_sMode(
	Motoman_MotoNIS_Core_MODESENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MODESENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sMode", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MODESENDDATA_Set_sMode(
	Motoman_MotoNIS_Core_MODESENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MODESENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sMode", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MODESENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_MODESENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MODESENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MODESENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_MODESENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MODESENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.Core.STDRSPDATA
int CVIFUNC Motoman_MotoNIS_Core_STDRSPDATA__Create(
	Motoman_MotoNIS_Core_STDRSPDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.STDRSPDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_STDRSPDATA_Get_errno(
	Motoman_MotoNIS_Core_STDRSPDATA __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.STDRSPDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"errno", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_STDRSPDATA_Set_errno(
	Motoman_MotoNIS_Core_STDRSPDATA __instance,
	unsigned short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.UInt16";
	__parameterTypes[0] = (CDOTNET_UINT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.STDRSPDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"errno", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_STDRSPDATA_Get_reserved(
	Motoman_MotoNIS_Core_STDRSPDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.STDRSPDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_STDRSPDATA_Set_reserved(
	Motoman_MotoNIS_Core_STDRSPDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.STDRSPDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.Core.POSVARDATA
int CVIFUNC Motoman_MotoNIS_Core_POSVARDATA__Create(
	Motoman_MotoNIS_Core_POSVARDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.POSVARDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_POSVARDATA_Get_usType(
	Motoman_MotoNIS_Core_POSVARDATA __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.POSVARDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"usType", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_POSVARDATA_Set_usType(
	Motoman_MotoNIS_Core_POSVARDATA __instance,
	unsigned short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.UInt16";
	__parameterTypes[0] = (CDOTNET_UINT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.POSVARDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"usType", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_POSVARDATA_Get_usIndex(
	Motoman_MotoNIS_Core_POSVARDATA __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.POSVARDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"usIndex", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_POSVARDATA_Set_usIndex(
	Motoman_MotoNIS_Core_POSVARDATA __instance,
	unsigned short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.UInt16";
	__parameterTypes[0] = (CDOTNET_UINT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.POSVARDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"usIndex", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_POSVARDATA_Get_ulValue(
	Motoman_MotoNIS_Core_POSVARDATA __instance,
	int ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32 | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.POSVARDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"ulValue", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_INT32, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_INT32, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_POSVARDATA_Set_ulValue(
	Motoman_MotoNIS_Core_POSVARDATA __instance,
	int * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_INT32, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.Int32[]";
	__parameterTypes[0] = (CDOTNET_INT32 | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.POSVARDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"ulValue", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.Core.SYSTIMESENDDATA
int CVIFUNC Motoman_MotoNIS_Core_SYSTIMESENDDATA__Create(
	Motoman_MotoNIS_Core_SYSTIMESENDDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SYSTIMESENDDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SYSTIMESENDDATA_Get_sTimeType(
	Motoman_MotoNIS_Core_SYSTIMESENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SYSTIMESENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sTimeType", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SYSTIMESENDDATA_Set_sTimeType(
	Motoman_MotoNIS_Core_SYSTIMESENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SYSTIMESENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sTimeType", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SYSTIMESENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_SYSTIMESENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SYSTIMESENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SYSTIMESENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_SYSTIMESENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SYSTIMESENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.Core.SYSTIMERSPDATA
int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA__Create(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SYSTIMERSPDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA_Get_sStartYear(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SYSTIMERSPDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sStartYear", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA_Set_sStartYear(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SYSTIMERSPDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sStartYear", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA_Get_sStartMonth(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SYSTIMERSPDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sStartMonth", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA_Set_sStartMonth(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SYSTIMERSPDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sStartMonth", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA_Get_sStartDay(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SYSTIMERSPDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sStartDay", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA_Set_sStartDay(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SYSTIMERSPDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sStartDay", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA_Get_sStartHour(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SYSTIMERSPDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sStartHour", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA_Set_sStartHour(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SYSTIMERSPDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sStartHour", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA_Get_sStartMin(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SYSTIMERSPDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sStartMin", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA_Set_sStartMin(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SYSTIMERSPDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sStartMin", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA_Get_sStartSec(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SYSTIMERSPDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sStartSec", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA_Set_sStartSec(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SYSTIMERSPDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sStartSec", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA_Get_lElapsedTime(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA __instance,
	int * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT32;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SYSTIMERSPDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"lElapsedTime", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SYSTIMERSPDATA_Set_lElapsedTime(
	Motoman_MotoNIS_Core_SYSTIMERSPDATA __instance,
	int value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int32";
	__parameterTypes[0] = (CDOTNET_INT32);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SYSTIMERSPDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"lElapsedTime", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.Core.JOBNAMESENDDATA
int CVIFUNC Motoman_MotoNIS_Core_JOBNAMESENDDATA__Create(
	Motoman_MotoNIS_Core_JOBNAMESENDDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.JOBNAMESENDDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_JOBNAMESENDDATA_Get_cJobName(
	Motoman_MotoNIS_Core_JOBNAMESENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.JOBNAMESENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"cJobName", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_JOBNAMESENDDATA_Set_cJobName(
	Motoman_MotoNIS_Core_JOBNAMESENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.JOBNAMESENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"cJobName", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_JOBNAMESENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_JOBNAMESENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.JOBNAMESENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_JOBNAMESENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_JOBNAMESENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.JOBNAMESENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.Core.SPECIALOPRSPDATA
int CVIFUNC Motoman_MotoNIS_Core_SPECIALOPRSPDATA__Create(
	Motoman_MotoNIS_Core_SPECIALOPRSPDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SPECIALOPRSPDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SPECIALOPRSPDATA_Get_sSpecialOpStatus(
	Motoman_MotoNIS_Core_SPECIALOPRSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SPECIALOPRSPDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sSpecialOpStatus", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SPECIALOPRSPDATA_Set_sSpecialOpStatus(
	Motoman_MotoNIS_Core_SPECIALOPRSPDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SPECIALOPRSPDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sSpecialOpStatus", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SPECIALOPRSPDATA_Get_reserved(
	Motoman_MotoNIS_Core_SPECIALOPRSPDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SPECIALOPRSPDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SPECIALOPRSPDATA_Set_reserved(
	Motoman_MotoNIS_Core_SPECIALOPRSPDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SPECIALOPRSPDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.Core.CURJOBRSPDATA
int CVIFUNC Motoman_MotoNIS_Core_CURJOBRSPDATA__Create(
	Motoman_MotoNIS_Core_CURJOBRSPDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CURJOBRSPDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CURJOBRSPDATA_Get_usJobLine(
	Motoman_MotoNIS_Core_CURJOBRSPDATA __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CURJOBRSPDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"usJobLine", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CURJOBRSPDATA_Set_usJobLine(
	Motoman_MotoNIS_Core_CURJOBRSPDATA __instance,
	unsigned short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.UInt16";
	__parameterTypes[0] = (CDOTNET_UINT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CURJOBRSPDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"usJobLine", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CURJOBRSPDATA_Get_usStep(
	Motoman_MotoNIS_Core_CURJOBRSPDATA __instance,
	unsigned short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_UINT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CURJOBRSPDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"usStep", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CURJOBRSPDATA_Set_usStep(
	Motoman_MotoNIS_Core_CURJOBRSPDATA __instance,
	unsigned short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.UInt16";
	__parameterTypes[0] = (CDOTNET_UINT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CURJOBRSPDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"usStep", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CURJOBRSPDATA_Get_cJobName(
	Motoman_MotoNIS_Core_CURJOBRSPDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CURJOBRSPDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"cJobName", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CURJOBRSPDATA_Set_cJobName(
	Motoman_MotoNIS_Core_CURJOBRSPDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CURJOBRSPDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"cJobName", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CURJOBRSPDATA_Get_reserved(
	Motoman_MotoNIS_Core_CURJOBRSPDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CURJOBRSPDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CURJOBRSPDATA_Set_reserved(
	Motoman_MotoNIS_Core_CURJOBRSPDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CURJOBRSPDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.Core.JOBNAMERSPDATA
int CVIFUNC Motoman_MotoNIS_Core_JOBNAMERSPDATA__Create(
	Motoman_MotoNIS_Core_JOBNAMERSPDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.JOBNAMERSPDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_JOBNAMERSPDATA_Get_cJobName(
	Motoman_MotoNIS_Core_JOBNAMERSPDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.JOBNAMERSPDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"cJobName", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_JOBNAMERSPDATA_Set_cJobName(
	Motoman_MotoNIS_Core_JOBNAMERSPDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.JOBNAMERSPDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"cJobName", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_JOBNAMERSPDATA_Get_reserved(
	Motoman_MotoNIS_Core_JOBNAMERSPDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.JOBNAMERSPDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_JOBNAMERSPDATA_Set_reserved(
	Motoman_MotoNIS_Core_JOBNAMERSPDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.JOBNAMERSPDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.Core.TASKSENDDATA
int CVIFUNC Motoman_MotoNIS_Core_TASKSENDDATA__Create(
	Motoman_MotoNIS_Core_TASKSENDDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.TASKSENDDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_TASKSENDDATA_Get_sTaskNo(
	Motoman_MotoNIS_Core_TASKSENDDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.TASKSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sTaskNo", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_TASKSENDDATA_Set_sTaskNo(
	Motoman_MotoNIS_Core_TASKSENDDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.TASKSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sTaskNo", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_TASKSENDDATA_Get_reserved(
	Motoman_MotoNIS_Core_TASKSENDDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.TASKSENDDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_TASKSENDDATA_Set_reserved(
	Motoman_MotoNIS_Core_TASKSENDDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.TASKSENDDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.Core.PLAYSTATUSRSPDATA
int CVIFUNC Motoman_MotoNIS_Core_PLAYSTATUSRSPDATA__Create(
	Motoman_MotoNIS_Core_PLAYSTATUSRSPDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.PLAYSTATUSRSPDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_PLAYSTATUSRSPDATA_Get_sStart(
	Motoman_MotoNIS_Core_PLAYSTATUSRSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.PLAYSTATUSRSPDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sStart", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_PLAYSTATUSRSPDATA_Set_sStart(
	Motoman_MotoNIS_Core_PLAYSTATUSRSPDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.PLAYSTATUSRSPDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sStart", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_PLAYSTATUSRSPDATA_Get_sHold(
	Motoman_MotoNIS_Core_PLAYSTATUSRSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.PLAYSTATUSRSPDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sHold", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_PLAYSTATUSRSPDATA_Set_sHold(
	Motoman_MotoNIS_Core_PLAYSTATUSRSPDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.PLAYSTATUSRSPDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sHold", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}


// Type: Motoman.MotoNIS.Core.SERVOPOWERRSPDATA
int CVIFUNC Motoman_MotoNIS_Core_SERVOPOWERRSPDATA__Create(
	Motoman_MotoNIS_Core_SERVOPOWERRSPDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SERVOPOWERRSPDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SERVOPOWERRSPDATA_Get_sServoPower(
	Motoman_MotoNIS_Core_SERVOPOWERRSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SERVOPOWERRSPDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sServoPower", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SERVOPOWERRSPDATA_Set_sServoPower(
	Motoman_MotoNIS_Core_SERVOPOWERRSPDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SERVOPOWERRSPDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sServoPower", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SERVOPOWERRSPDATA_Get_reserved(
	Motoman_MotoNIS_Core_SERVOPOWERRSPDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SERVOPOWERRSPDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_SERVOPOWERRSPDATA_Set_reserved(
	Motoman_MotoNIS_Core_SERVOPOWERRSPDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.SERVOPOWERRSPDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.Core.CYCLERSPDATA
int CVIFUNC Motoman_MotoNIS_Core_CYCLERSPDATA__Create(
	Motoman_MotoNIS_Core_CYCLERSPDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CYCLERSPDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CYCLERSPDATA_Get_sCycle(
	Motoman_MotoNIS_Core_CYCLERSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CYCLERSPDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sCycle", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CYCLERSPDATA_Set_sCycle(
	Motoman_MotoNIS_Core_CYCLERSPDATA __instance,
	short value,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	__parameterTypeNames[0] = "System.Int16";
	__parameterTypes[0] = (CDOTNET_INT16);
	__parameters[0] = &value;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CYCLERSPDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"sCycle", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CYCLERSPDATA_Get_reserved(
	Motoman_MotoNIS_Core_CYCLERSPDATA __instance,
	char ** __returnValue,
	int * ____returnValueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	CDotNetHandle __returnValue__ = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;
	if (__returnValue)
		*__returnValue = 0;
	if (__returnValue)
		*____returnValueLength = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_SBYTE | CDOTNET_ARRAY;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CYCLERSPDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		&__returnValue__, 
		__exception));

	// Post-process return value
	if (__returnValue__) {
		if (__returnValue)
			__errChk(CDotNetGetArrayElements(
				__returnValue__, 
				CDOTNET_SBYTE, 
				0, 
				__returnValue));
		if (__returnValue)
			__errChk(CDotNetGetArrayLength(
				__returnValue__, 
				0, 
				____returnValueLength));
	}


__Error:
	if (__returnValue__)
		CDotNetDiscardHandle(__returnValue__);
	if (__error < 0) {
		_CDotNetGenDisposeArray(
			__returnValue, 
			CDOTNET_SBYTE, 
			1, 
			____returnValueLength);
	}
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_CYCLERSPDATA_Set_reserved(
	Motoman_MotoNIS_Core_CYCLERSPDATA __instance,
	char * value,
	int __valueLength,
	CDotNetHandle * __exception)
{
	int __error = 0;
	char * __parameterTypeNames[1];
	unsigned int __parameterTypes[1];
	void * __parameters[1];
	CDotNetHandle value__ = 0;

	if (__exception)
		*__exception = 0;


	// Pre-process parameter: value
	if (value)
		__errChk(CDotNetCreateArray(
			CDOTNET_SBYTE, 
			1, 
			0, 
			&__valueLength, 
			value, 
			&value__));
	__parameterTypeNames[0] = "System.SByte[]";
	__parameterTypes[0] = (CDOTNET_SBYTE | CDOTNET_ARRAY);
	__parameters[0] = &value__;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.CYCLERSPDATA", 
		__instance, 
		CDOTNET_SET_PROPERTY, 
		"reserved", 
		0, 
		0, 
		1, 
		__parameterTypeNames, 
		__parameterTypes, 
		__parameters, 
		0, 
		0, 
		__exception));


__Error:
	if (value__)
		CDotNetDiscardHandle(value__);
	return __error;
}


// Type: Motoman.MotoNIS.Core.MODERSPDATA
int CVIFUNC Motoman_MotoNIS_Core_MODERSPDATA__Create(
	Motoman_MotoNIS_Core_MODERSPDATA * __instance,
	CDotNetHandle * __exception)
{
	int __error = 0;

	if (__exception)
		*__exception = 0;


	*__instance = 0;

	// Call constructor
	__errChk(CDotNetCreateGenericInstance(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MODERSPDATA", 
		0, 
		0, 
		__instance, 
		0, 
		0, 
		0, 
		0, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MODERSPDATA_Get_sMode(
	Motoman_MotoNIS_Core_MODERSPDATA __instance,
	short * __returnValue,
	CDotNetHandle * __exception)
{
	int __error = 0;
	unsigned int __returnValueTypeId;

	if (__exception)
		*__exception = 0;


	// Pre-process return value
	__returnValueTypeId = CDOTNET_INT16;

	// Call instance member
	__errChk(CDotNetInvokeGenericMember(
		__assemblyHandle, 
		"Motoman.MotoNIS.Core.MODERSPDATA", 
		__instance, 
		CDOTNET_GET_PROPERTY, 
		"sMode", 
		0, 
		0, 
		0, 
		0, 
		0, 
		0, 
		&__returnValueTypeId, 
		__returnValue, 
		__exception));


__Error:
	return __error;
}

int CVIFUNC Motoman_MotoNIS_Core_MODERSPDATA_Set_sMode(
	Motoman_MotoNIS_Core_MODERSPDATA __instance,
	short value,
	CDotNetHandle * __exception)
{





