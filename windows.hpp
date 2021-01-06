#pragma once
#include <gtkmm/window.h>

class window_screen : public Gtk::Window
{
public:
    window_screen()
    {
        set_title("Gui nxxm");
        set_icon_from_file("logo.png");
        set_border_width(10);
        resize(640, 480);
        set_position(Gtk::WIN_POS_CENTER);
    }
};
