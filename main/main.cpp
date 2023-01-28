#include "Downloader.hpp"
#include "secrets.hpp"

const char *TAG = "Main";

extern "C" void app_main(void)
{

    char _cycleCode[CONFIG_MAX_LENGTH_CYCLE_STRING] = {0};

    ESP_LOGI(TAG, "start...");

    Downloader dl(_WIFI_SSID,
                  _WIFI_PWD,
                  _APP_SCRIPT_URL,
                  _cycleCode);

    ESP_LOGI(TAG, "Downloaded cycle\n%s", _cycleCode);
}
