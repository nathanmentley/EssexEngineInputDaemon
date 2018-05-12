/* 
 * Essex Engine
 * 
 * Copyright (C) 2018 Nathan Mentley - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the BSD license.
 *
 * You should have received a copy of the BSD license with
 * this file. If not, please visit: https://github.com/nathanmentley/EssexEngine
 */
#pragma once

#include <EssexEngineCore/BaseDaemon.h>
#include <EssexEngineCore/LogDaemon.h>

#include <EssexEngineWindowDaemon/IRenderContext.h>

#include <EssexEngineInputDaemon/IInputDriver.h>

namespace EssexEngine{
namespace Daemons{
namespace Input{
    class InputDaemon:public BaseDaemon<IInputDriver>
    {
    public:
        InputDaemon(WeakPointer<Context> _context);
        ~InputDaemon();
        
        void Init() {
            if(GetContext()->HasDaemon<Core::Logging::LogDaemon>()) {
                GetContext()->GetDaemon<Core::Logging::LogDaemon>()->LogLine(
                    "Loading Daemon [%s] [%s]",
                    GetDaemonName().c_str(),
                    GetDaemonVersion().c_str()
                );
            }
        }
        std::string GetDaemonName() { return "Input"; }
        std::string GetDaemonVersion() { return ESSEX_ENGINE_VERSION; }
        
        bool IsKeyPressed(WeakPointer<Window::IRenderContext> context, KeyboardButton::InputKeys key);
        bool IsMousePressed(WeakPointer<Window::IRenderContext> context, MouseButton::MouseButtons key, MouseEventLocation &data);
    private:
    };
}}};
