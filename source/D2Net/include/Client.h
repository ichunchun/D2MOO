#pragma once

#include <Windows.h>

#include "Packet.h"


//D2Net.0x6FC01000 (#10017)
int32_t __stdcall D2NET_10017();
//D2Net.0x6FC01040
DWORD __stdcall CLIENT_ConnectToHost(void* szIpAddress);
//D2Net.0x6FC01120 (#10025)
int32_t __stdcall D2NET_10025();
//D2Net.0x6FC011B0 (#10000)
void __stdcall CLIENT_Initialize(int32_t a1, const char* szIpAddress);
//D2Net.0x6FC01240 (#10001)
void __stdcall CLIENT_Release();
//D2Net.0x6FC01300 (#10007)
int32_t __stdcall CLIENT_DequeueGamePacket(uint8_t* pBuffer, uint32_t nBufferSize);
//D2Net.0x6FC01310 (#10008)
int32_t __stdcall CLIENT_DequeueSystemPacket(uint8_t* pBuffer, uint32_t nBufferSize);
//D2Net.0x6FC01320
DWORD __stdcall sub_6FC01320(void* a1);
//D2Net.0x6FC015C0
int32_t __stdcall CLIENT_ReadPacketsFromStream();
//D2Net.0x6FC01760 (#10005)
int32_t __stdcall CLIENT_Send(int32_t nUnused, const uint8_t* pBuffer, int32_t nBufferSize);
//D2Net.0x6FC01810
void __fastcall CLIENT_ReadPacketFromBuffer(D2PacketBufferStrc* pBuffer, int32_t nBufferSize);
//D2Net.0x6FC019A0 (#10013)
void __stdcall CLIENT_GetLocalIpAddressString(char* szBuffer);
