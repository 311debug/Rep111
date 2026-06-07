#include <gui/screen1_screen/Screen1View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>

Screen1Presenter::Screen1Presenter(Screen1View& v)
    : view(v)
{

}

void Screen1Presenter::activate()
{
	model->bind(this); // привязываем Model к Presenter
		// вызывается когда экран становится активным
}

void Screen1Presenter::deactivate()
{

}
void Screen1Presenter::updateGauge(int value)
{
    view.updateGauge(value);
}
void Screen1Presenter::updateTDR(uint32_t valueTDR)// частота
{
	 view.updateTDR(valueTDR);
}
void  Screen1Presenter::updateKND(uint32_t valueKND)
{
	view.updateKND(valueKND);
}
