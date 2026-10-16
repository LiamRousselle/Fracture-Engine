/*
 * GNU GENERAL PUBLIC LICENSE
 * Copyright (c) 2026 Liam Rousselle. All rights reserved.
 */
#pragma once

#include <memory>
#include <type_traits>
#include <utility>
#include <vector>

#include "FrModule.h"

namespace FR
{
	class FrModuleHandle
	{
	public:
		static FrModuleHandle& Singleton()
		{
			static FrModuleHandle instance;
			return instance;
		}

		FrModuleHandle(const FrModuleHandle&) = delete;
		FrModuleHandle& operator=(const FrModuleHandle&) = delete;

		template<typename TModule, typename... TArgs>
		requires(std::is_base_of_v<FrModule, TModule>)
		TModule* CreateModule(TArgs&... args)
		{
			auto module = std::make_unique<TModule>(std::forward<TArgs>(args)...);
			TModule* ptr = module.get();
			m_Modules.push_back(std::move(module));
			return ptr;
		}

		void RunModules();

	private:
		FrModuleHandle() = default;
		~FrModuleHandle() = default;

		std::vector<std::unique_ptr<FrModule>> m_Modules;
	};
}