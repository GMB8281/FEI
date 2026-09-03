float celsius_fahrenheit(float c) {
    float r=(c*9/5)+32;
    return r;
}

float fahrenheit_celsius(float f) {
    float r=(f-32)*5/9;
    return r;
}

float metros_quilometros(float m) {
    float r= m/1000;
    return r;
}

float quilometros_metros(float km) {
    float r = km*1000;
    return r;
}

float segundos_minutos(float s) {
    float r = s/60;
    return r;
}

float minutos_segundos(float min) {
    float r = min*60;
    return r;
}