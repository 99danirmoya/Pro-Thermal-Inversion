/* ***********************************************************************************************************************************************************
ARCHIVO DE MEDICION DEL NIVEL DE BATERIA

Archivo para medir el nivel de bateria teniendo en cuenta que la descarga de una Li-ion 18650 no es lineal.
SE DEBE HACER UN DIVISOR RESISTIVO ENTRE LA BATERÍA Y EL "VBAT_PIN" CON UNA RESISTENCIA DE 22K y otra de 47K.
*********************************************************************************************************************************************************** */
#include "configuration.h"                                                           // Se usan macros declaradas en dicho archivo

// -----------------------------------------------------------------------------------------------------------------------------------------------------------
// Funcion medir el nivel de batería
// -----------------------------------------------------------------------------------------------------------------------------------------------------------
uint8_t battery_value(){
  uint16_t analogValue = analogRead(VBAT_PIN);

  return analogValue;
}