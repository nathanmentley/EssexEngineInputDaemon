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

#include <EssexEngineInputDaemon/InputDaemon.h>

using EssexEngine::WeakPointer;

using EssexEngine::Daemons::Window::IRenderContext;

using EssexEngine::Daemons::Input::InputDaemon;

InputDaemon::InputDaemon(WeakPointer<Context> _context):BaseDaemon(_context) {}

InputDaemon::~InputDaemon() {}

bool InputDaemon::IsKeyPressed(WeakPointer<IRenderContext> context, KeyboardButton::InputKeys key) {
    return GetDriver()->IsKeyPressed(context, key);
}

bool InputDaemon::IsMousePressed(WeakPointer<IRenderContext> context, MouseButton::MouseButtons key, MouseEventLocation &data) {
    return GetDriver()->IsMousePressed(context, key, data);
}
