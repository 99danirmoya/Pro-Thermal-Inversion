/* ***********************************************************************************************************************************************************
ARCHIVO DE MEDICION DEL NIVEL DE BATERIA

Archivo para medir el nivel de bateria (18650).
SE DEBE HACER UN DIVISOR RESISTIVO ENTRE LA BATERÍA Y EL "VBAT_PIN" CON DOS RESISTENCIAS DE 100K.
*********************************************************************************************************************************************************** */
#include "configuration.h"                                                           // Se usan macros declaradas en dicho archivo

// -----------------------------------------------------------------------------------------------------------------------------------------------------------
// Funcion medir el nivel de batería
// -----------------------------------------------------------------------------------------------------------------------------------------------------------
uint16_t battery_value(){
  uint16_t analogValue = analogRead(VBAT_PIN);

  return analogValue;
}