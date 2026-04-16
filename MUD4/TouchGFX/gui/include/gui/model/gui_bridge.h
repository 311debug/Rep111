#ifndef GUI_BRIDGE_H
#define GUI_BRIDGE_H

#ifdef __cplusplus
extern "C" {
#endif

// Функция, которую будем вызывать из main.c
void SetGaugeValue(int value);

#ifdef __cplusplus
}
#endif

#endif // GUI_BRIDGE_H
