/* 
 * Essex Engine
 * 
 * Copyright (C) 2017 Nathan Mentley - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the BSD license.
 *
 * You should have received a copy of the BSD license with
 * this file. If not, please visit: https://github.com/nathanmentley/EssexEngine
 */

#include <EssexEngineInputDaemon/InputDaemon.h>

EssexEngine::Daemons::Input::InputDaemon::InputDaemon(WeakPointer<Context> _context):BaseDaemon(_context) {}

EssexEngine::Daemons::Input::InputDaemon::~InputDaemon() {}

bool EssexEngine::Daemons::Input::InputDaemon::IsKeyPressed(KeyboardButton::InputKeys key) {
    return GetDriver()->IsKeyPressed(key);
}

bool EssexEngine::Daemons::Input::InputDaemon::IsMousePressed(MouseButton::MouseButtons key, MouseEventLocation &data) {
    return GetDriver()->IsMousePressed(key, data);
}
