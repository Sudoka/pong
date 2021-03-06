#ifndef PONG_SPRITE_H_
#define PONG_SPRITE_H_

#include <string>
#include "SDL/SDL.h"

class GameObject;
class Screen;

class Sprite
{
    private:
        double width_;
        double height_;
        SDL_Texture * texture_;
        Screen * screen_;
        std::string art_asset_;
        GameObject * object_;


    public:
        Sprite(GameObject * object, std::string asset);

        // accessors
        double width() const { return width_; }
        double height() const { return height_; }
        std::string art_asset() const { return art_asset_; }
        SDL_Texture * texture() const { return texture_; }
        Screen * screen() const { return screen_; }

        // mutators
        void set_texture(SDL_Texture * texture) { texture_ = texture; }
        void set_screen(Screen * screen) { screen_ = screen; }
        void set_object(GameObject * object) { object_ = object; }

        void render();
        void select();
        void deselect();
};

#endif
