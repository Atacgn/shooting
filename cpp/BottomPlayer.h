#pragma once

#include <godot_cpp/classes/character_body2d.hpp>
#include <godot_cpp/core/class_db.hpp>

using namespace godot;

class BottomPlayer : public CharacterBody2D {
    GDCLASS(BottomPlayer, CharacterBody2D)

public:
    BottomPlayer();
    ~BottomPlayer();

    void _process(double delta);
};