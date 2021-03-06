--- Editor for `amp` DSP script.
-- @script ampui
-- @kind DSPUI amp

local Widget        = require ('kv.Widget')
local Slider        = require ('kv.Slider')
local command       = require ('el.command')
local object        = require ('kv.object')
local script        = require ('el.script')

local bgcolor       = 0xff545454
local fgcolor       = 0xffffffff

local Editor        = object (Widget)
function Editor:init (ctx)
    Widget.init (self)

    local volume = ctx.params [1]

    self.knob = self:add (object.new (Slider))
    self.knob.style = Slider.ROTARY
    self.knob:textboxstyle (Slider.TEXT_BOX_BELOW, true, 52, 26)
    self.knob:range (-90, 24, 0.01)
    self.knob:value (volume:value (false))
    self.knob.dragging  = false
    self.knob.dragstart = function() self.knob.dragging = true end
    self.knob.dragend   = function() self.knob.dragging = false end
    self.knob.valuechanged   = function()
        if not self.knob.dragging then return end
        volume:value (self.knob:value(), false)
    end

    volume.valuechanged = function()
        self.knob:value (volume:value (false), 0)
    end

    self:resize (180, 170)
end

function Editor:paint (g)
    g:fillall (bgcolor)
    g:color (fgcolor)
    g:drawtext ("AMP", 0, 0, self.width, 30)
end

function Editor:resized()
    self.knob.bounds = self.localbounds:reduced (20)
end

local function amp_editor_new (ctx)
    return object.new (Editor, ctx)
end

return script.dspui {
    editor = amp_editor_new
}
