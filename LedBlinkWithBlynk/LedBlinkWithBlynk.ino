// 1. BU İKİ SATIRI MUTLAKA EN ÜSTE EKLE (Blynk panelinden aldığın kendi ID'lerin olmalı)
// 1. ADD THESE TWO LINES AT THE VERY TOP (Must be your own IDs from the Blynk panel)

#define BLYNK_TEMPLATE_ID "YOUR_TEMPLATE_ID" // Replace with your own credentials
#define BLYNK_TEMPLATE_NAME "YOUR_TEMPLATE_NAME"// Kendi bilgilerinizle değiştirin

// Blynk çıktılarını Seri Port ekranına yazdırır
// Prints Blynk outputs to the Serial Monitor
#define BLYNK_PRINT Serial

// Gerekli kütüphaneleri dahil ediyoruz
// Including necessary libraries
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// 2. Kimlik doğrulama anahtarı ve WiFi bilgileri
// 2. Auth Token and WiFi credentials
char auth[] = "YOUR_AUTH_TOKEN"; // Blynk Auth Token
char ssid[] = "YOUR_WIFI_SSID"; // WiFi Name / WiFi Adı
char pass[] = "YOUR_WIFI_PASSWORD";// WiFi Password / WiFi Şifresi

void setup() {
  // Seri haberleşmeyi başlatıyoruz (Hız: 115200)
  // Starting serial communication (Baud rate: 115200)
  Serial.begin(115200);

  // Blynk bağlantısını başlatıyoruz
  // Initializing Blynk connection
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  // Blynk kütüphanesinin arka plan görevlerini çalıştırır
  // Runs Blynk background tasks
  Blynk.run();
}
