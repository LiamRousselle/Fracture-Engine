/*
 * GNU GENERAL PUBLIC LICENSE
 * Copyright (c) 2026 Liam Rousselle. All rights reserved.
 */

#include "core/module/FrModuleHandle.h"
#include "core/module/FrModule.h"
#include <iostream>

int main(int argc, char** argv) 
{
	FR::FrModuleHandle& handle = FR::FrModuleHandle::Singleton();

	if (auto* appModule = handle.CreateModule<FR::FrModule>())
	{
		std::printf("Created FrModule\n");
	}

	return 0;
}