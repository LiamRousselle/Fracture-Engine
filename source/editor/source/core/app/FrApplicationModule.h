/*
 * GNU GENERAL PUBLIC LICENSE
 * Copyright (c) 2026 Liam Rousselle. All rights reserved.
 */
#pragma once

#include "core/module/FrModule.h"

#include <iostream>

namespace FR
{
    class FrApplicationModule : public FrModule
    {
    public:
        void OnInitialized() override
        {
            std::printf("I was initialized!\n");
        }
    };
}