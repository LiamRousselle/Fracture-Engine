--[=[
    GNU GENERAL PUBLIC LICENSE
    Copyright (c) 2026 Liam Rousselle. All rights reserved.
]=]--

-- TODO!
-- Check to see if the user has Qt library installed; also check to see if version matches
-- require("./thirdparty/scripts/premake-qt/qt.lua")

workspace "Fracture-Game-Engine"
    configurations { "Debug", "Release" }
    architecture "x64"
    cppdialect "C++20"

    targetdir "build/%{cfg.buildcfg}/bin"
    objdir "build/%{cfg.buildcfg}/obj"

    filter "configurations:Debug"
        defines { "DEBUG" }
        symbols "On"

    filter "configurations:Release"
        defines { "NDEBUG" }
        optimize "On"

    filter {}

include "./source"