// generated by Fast Light User Interface Designer (fluid) version 1.0011

#ifndef HelpPageUI_h
#define HelpPageUI_h
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Text_Display.H>
#include <FL/Fl_Button.H>

class HelpPageUI
{
public:
    HelpPageUI();
    ~HelpPageUI();
    Fl_Window* mainWindow;
    Fl_Text_Display* helpText;
    Fl_Text_Buffer* helpTextBuffer;
private:
    inline void cb_OK_i(Fl_Button*, void*);
    static void cb_OK(Fl_Button*, void*);
public:
    void show();
    void hide();
};
#endif