/* DHT22 */
#define DHTPIN D3
#define DHTTYPE DHT22
int localHum = 0;
int localTemp = 0;

/* TimeClient */
#define TZ              0       // (utc+) TZ in hours
#define DST_MN          60      // use 60mn for summer time in some countries
const float UTC_OFFSET = 0;

const int UPDATE_INTERVAL_SECS = 5 * 60; // Update every 5min



// flag changed in the ticker function every 10 minutes
bool readyForWeatherUpdate = false;

String lastUpdate = "--";

long timeSinceLastWUpdate = 0;
