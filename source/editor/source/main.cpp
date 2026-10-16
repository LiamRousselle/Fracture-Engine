/*
 * GNU GENERAL PUBLIC LICENSE
 * Copyright (c) 2026 Liam Rousselle. All rights reserved.
 */

#include "core/module/FrModuleHandle.h"
#include "core/module/FrModule.h"

#include "core/app//FrApplicationModule.h"

#include <iostream>

int main(int argc, char** argv) 
{
	FR::FrModuleHandle& handle = FR::FrModuleHandle::Singleton();

	if (auto* appModule = handle.CreateModule<FR::FrApplicationModule>())
	{
		std::printf("Created FrModule\n");
	}
	
	handle.RunModules();
}