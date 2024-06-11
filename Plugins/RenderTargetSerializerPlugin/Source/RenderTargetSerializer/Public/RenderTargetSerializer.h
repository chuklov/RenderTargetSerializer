/*
	This code was written by Alexander Chadfield
	
	Plugin created by Alexander Chadfield
*/

#pragma once

#include "Modules/ModuleManager.h"

class FRenderTargetSerializerModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
