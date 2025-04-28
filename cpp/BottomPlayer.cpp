#include <godot_cpp/godot.hpp>
#include "BottomPlayer.h"

BottomPlayer::BottomPlayer() {
}

BottomPlayer::~BottomPlayer() {
}

void BottomPlayer::_process(double delta) {
    Vector2 velocity = Vector2();

    if (Input::get_singleton()->is_action_pressed("ui_right")) {
        velocity.x += 200.0;
    }
    if (Input::get_singleton()->is_action_pressed("ui_left")) {
        velocity.x -= 200.0;
    }

    set_velocity(velocity);
    move_and_slide();
}
extern "C" {

// Godot motoru bu fonksiyonu çağırarak C++ sınıflarını kayıt ediyor
GDExtensionBool bottomplayer_library_init(const GDExtensionInterface *p_interface,
                                          GDExtensionClassLibraryPtr p_library,
                                          GDExtensionInitialization *r_initialization) {
    godot::GDExtensionBinding::InitObject init_obj(p_interface, p_library, r_initialization);

    init_obj.register_class<BottomPlayer>();

    return init_obj.init();
}

}