// Copyright Epic Games, Inc. All Rights Reserved.

#include "Temporary.h"

void FTemporaryModule::StartupModule()
{
	UE_LOG(LogTemp, Log, TEXT("Temporary 플러그인 활성화"));
}

void FTemporaryModule::ShutdownModule()
{
	UE_LOG(LogTemp, Log, TEXT("Temporary 플러그인 종료"));
}

IMPLEMENT_MODULE(FTemporaryModule, Temporary);
