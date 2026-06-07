#include "cmsis_os.h"
extern osMessageQueueId_t dataQueueHandle;
extern osMessageQueueId_t dataQueueHandleTDR;
extern osMessageQueueId_t dataQueueHandleKND;
#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();
    void updateGauge(int value);
    void setGaugeValue(int value);

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();
protected:
    ModelListener* modelListener;
};

#endif // MODEL_HPP
