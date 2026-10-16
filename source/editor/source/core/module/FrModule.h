/*
 * GNU GENERAL PUBLIC LICENSE
 * Copyright (c) 2026 Liam Rousselle. All rights reserved.
 */
#pragma once

namespace FR
{
	class FrModule
	{
	public:
		virtual ~FrModule() = default;

		virtual void OnInitialized() { }
		virtual void OnUpdate() { }
	};
}