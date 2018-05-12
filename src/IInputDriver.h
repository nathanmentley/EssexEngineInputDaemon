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

#include <EssexEngineCore/IDriver.h>
#include <EssexEngineCore/WeakPointer.h>

#include <EssexEngineWindowDaemon/IRenderContext.h>

namespace EssexEngine{
namespace Daemons{
namespace Input{
    namespace KeyboardButton {
        enum InputKeys {
            Left,
            Right,
            Up,
            Down,
            Plus,
            Minus,
            Space,
            Esc,
            Tilde
        };
    }

    namespace MouseButton {
        enum MouseButtons {
            MouseLeft,
            MouseRight,
            MouseMiddle
        };
    }

    struct MouseEventLocation {
        int x;
        int y;
    };
    
    class IInputDriver: public Core::IDriver
    {
    public:
        virtual bool IsKeyPressed(WeakPointer<Window::IRenderContext> context, KeyboardButton::InputKeys key) = 0;
        virtual bool IsMousePressed(WeakPointer<Window::IRenderContext> context, MouseButton::MouseButtons key, MouseEventLocation &data) = 0;
    private:
    };
}}};
