/*
 * GNU GENERAL PUBLIC LICENSE
 * Copyright (c) 2026 Liam Rousselle. All rights reserved.
 */
#include "FrModuleHandle.h"

namespace FR
{
	void FrModuleHandle::RunModules()
	{
		for (auto& module : m_Modules)
			module->OnInitialized();
	}
}