#include <gui/screen1_screen/Screen1View.hpp>
Screen1View* screen1ViewPtr = nullptr;
extern volatile int g_duty_percent;
//static Unicode::UnicodeChar textArea1Buffer[10];
Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
    screen1ViewPtr = this;
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}
void Screen1View::toggleLED()
{
   /* if (toggleButton1.getState())          // ON
        HAL_GPIO_WritePin(GPIOG, GPIO_PIN_13, GPIO_PIN_SET);
    else                                   // OFF
        HAL_GPIO_WritePin(GPIOG, GPIO_PIN_13, GPIO_PIN_RESET);*/
}
void Screen1View::updateGauge(int value)
{
	gauge1.setValue(value);      // или gauge1.updateValue(value, 10); для анимации
	    gauge1.invalidate(); // обязательно! чтобы перерисовать
	    // Для теста — меняем текст
	           // Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", value);
	       // textArea1.setTypedText('hgkj');
	       // textArea1.invalidate();
	    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", value);
	        textArea1.setWildcard(textArea1Buffer);
	        textArea1.resizeToCurrentText();   // пересчитать размер
	        textArea1.invalidate();
	}
void Screen1View::function1()
{
	if (g_duty_percent+5 < 100)
    g_duty_percent += 5;
	updateGauge(g_duty_percent);// обновить отображение

}
void Screen1View::function2()
{
	if (g_duty_percent-5 > 0)
    g_duty_percent -= 5;
	updateGauge(g_duty_percent);

}
