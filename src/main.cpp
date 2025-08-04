#include "bn_core.h"
#include "bn_display.h"
#include "bn_sprite_ptr.h"
#include "bn_sprite_text_generator.h"
#include "common_fixed_8x16_sprite_font.h"

void main_scene() {
    bn::sprite_text_generator text_generator(common::fixed_8x16_sprite_font);
    text_generator.set_center_alignment();

    bn::vector<bn::sprite_ptr, 11> text_sprites;
    text_generator.generate(0, 0, "hello, world", text_sprites);

    while (true) {
        bn::core::update();
    }
}

int main() {
    bn::core::init();

    while (true) {
        main_scene();
    }
}
