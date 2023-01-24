#pragma once
#include "src\include\SDL2\SDL.h"
#include <iostream>
#include "wtypes.h"

class Window {

public:
    //external class functions
    void getWindowResolution(int& horizontal, int& vertical);
    void createWindow(const char* title, int posx, int posy, int width, int height, Uint32 flags);
    void handleEvent(SDL_Event& event);
    void update(float delta_time);
    void clean();

    //internal class functions

    //functions for Game
    SDL_Surface* window_surface;
    SDL_Window* window;
    SDL_Renderer* renderer;

    SDL_Rect yes_button;
    SDL_Rect no_button;

    int window_width;
    int window_height;
    int window_center_x;
    int window_center_y;
    bool escape_box_active = false;
    bool is_running;

private:
    int count = 0;

};