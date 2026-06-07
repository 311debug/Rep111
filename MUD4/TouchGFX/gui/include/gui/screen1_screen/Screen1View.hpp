#ifndef SCREEN1VIEW_HPP
#define SCREEN1VIEW_HPP

#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>

class Screen1View : public Screen1ViewBase
{
public:
    Screen1View();
    virtual ~Screen1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void toggleLED();// управление переключателем
    void updateGauge(int value);// управление стрелкой
    void updateTDR(uint32_t valueTDR);// // частота
    void updateKND(uint32_t valueKND);// // частота
    void function1();
    void function2();
    void SetKND();
protected:
};
extern Screen1View* screen1ViewPtr;
#endif // SCREEN1VIEW_HPP
