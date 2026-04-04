# esp32-blynk-iot-led-control
ESP32 ve Blynk IoT Cloud kullanarak, web ve mobil arayüz üzerinden LED kontrolü sağlayan temel bir Nesnelerin İnterneti (IoT) projesi. A simple IoT project using ESP32 and Blynk IoT Cloud to remotely control an LED via web and mobile dashboard.

# ESP32 & Blynk IoT Cloud LED Control

## [TR] Proje Hakkında
Bu proje, ESP32 mikrodenetleyicisi ve Blynk IoT Cloud platformu kullanılarak geliştirilmiştir. Kullanıcılar, dünyanın herhangi bir yerinden internet aracılığıyla fiziksel bir LED'i açıp kapatabilirler.

### Özellikler
* **Donanım:** ESP32 DevKit V1
* **Platform:** Blynk IoT Cloud (Web & Mobile App)
* **Bağlantı:** WiFi üzerinden MQTT protokolü

---

## [EN] About The Project
This project is developed using the ESP32 microcontroller and the Blynk IoT Cloud platform. Users can toggle a physical LED on and off from anywhere in the world via the internet.

### Features
* **Hardware:** ESP32 DevKit V1
* **Platform:** Blynk IoT Cloud (Web & Mobile App)
* **Connectivity:** MQTT protocol over WiFi

## [TR] Kurulum | [EN] Installation

1. **Blynk Cloud:** Create a template and get your `Template ID` and `Auth Token`.
2. **Circuit:** Connect the LED to GPIO pin (e.g., Pin 2).
3. **Code:** Update the `SSID`, `Password`, and `Auth Token` in the code.
4. **Upload:** Flash the code using Arduino IDE.

1. **Blynk Cloud:** Bir şablon oluşturun ve `Template ID` ile `Auth Token` bilgilerinizi alın.
2. **Devre:** LED'i ilgili GPIO pinine (örneğin Pin 2) bağlayın.
3. **Kod:** Kod içerisindeki `SSID`, `Şifre` ve `Auth Token` alanlarını güncelleyin.
4. **Yükleme:** Arduino IDE kullanarak kodu ESP32'ye yükleyin.

![ledOff](https://github.com/user-attachments/assets/2ccc212c-c8ff-4474-b296-54053c8aae1c)
![ledOn](https://github.com/user-attachments/assets/5dc01f9e-2147-4f1d-85e6-4a8aa458a091)

