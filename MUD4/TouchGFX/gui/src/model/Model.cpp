#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

Model model;
Model::Model() : modelListener(0)
{
modelListener = nullptr;
}

void Model::tick()
{
	int value;
	uint32_t valueTDR;
	uint32_t valueKND;
	    if (osMessageQueueGet(dataQueueHandle, &value, NULL, 0) == osOK)
	    {
	        if (modelListener != nullptr)
	            modelListener->updateGauge(value);
	    }

	    if ( osMessageQueueGet(dataQueueHandleTDR, &valueTDR, NULL, 0) == osOK)
	    	    {
	    	        if (modelListener != nullptr)
	    	            modelListener->updateTDR(valueTDR);

	    	    }
	    if ( osMessageQueueGet(dataQueueHandleKND, &valueKND, NULL, 0) == osOK)
	   	    	    {
	   	    	        if (modelListener != nullptr)
	   	    	            modelListener->updateKND(valueKND);

	   	    	    }
}
void Model::updateGauge(int value)
{
    if (modelListener != nullptr)
    {
       modelListener->updateGauge(value);   // уведомляем Presenter
    }
}
void Model::setGaugeValue(int value)
{
    updateGauge(value);        // вызываем существующий метод
}
