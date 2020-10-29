/*
    This file is part of Element
    Copyright (C) 2019  Kushview, LLC.  All rights reserved.

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#include "scripting/ScriptingEngine.h"
#include "scripting/LuaBindings.h"
#include "Globals.h"
#include "sol/sol.hpp"

namespace Element {

ScriptingEngine::Environment::Environment (sol::state& state)
    : lua (state), env (lua, sol::create, lua.globals())
{ }

ScriptingEngine::Environment::~Environment() { }

//=============================================================================
ScriptingEngine::ScriptingEngine() {}
ScriptingEngine::~ScriptingEngine() {}

ScriptingEngine::Environment* ScriptingEngine::createEnvironment()
{
    return new Environment (lua);
}

void ScriptingEngine::initialize (Globals& w)
{
    world = &w;
    Lua::initializeState (lua, *world);
}

}
