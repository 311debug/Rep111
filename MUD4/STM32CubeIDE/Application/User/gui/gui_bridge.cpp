/*
 * gui_bridge.cpp
 *
 *  Created on: 2 апр. 2026 г.
 *      Author: Asus
 */

#include <C:/INSTALL/TouchGFXProjects/MUD4/TouchGFX/gui/include/gui/model/gui_bridge.h>
#include <C:/INSTALL/TouchGFXProjects/MUD4/TouchGFX/gui/include/gui/model/Model.hpp>
#include <C:/INSTALL/TouchGFXProjects/MUD4/TouchGFX/gui/include/gui/Screen1_screen/Screen1View.hpp>
extern Model model;     // глобальная модель TouchGFX
extern Screen1View* screen1ViewPtr;
extern "C" void SetGaugeValue(int value)
{
	// передаём значение в TouchGFX
    model.setGaugeValue(value);
   //FrontendHeap::getInstance().model.setGaugeValue(value);
}






