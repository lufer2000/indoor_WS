/* WIFI */
const char* WIFI_SSID = "WiFi_TG784_GMR_EXT";
const char* WIFI_PWD = "3107Lmhfaamq1999";

//const char* WIFI_SSID = "WiFi_TG784_GMR";
//const char* WIFI_PWD = "3107Lmhfaamq1999";

//const char* WIFI_SSID = "NOS_Internet_Movel_94D5";
//const char* WIFI_PWD = "16774211";

/*
  // Wunderground Settings
  const boolean IS_METRIC = true;
  const String WUNDERGRROUND_API_KEY = "2639e9ee0ce9a231";
  const String WUNDERGRROUND_LANGUAGE = "EN";
  const String WUNDERGROUND_COUNTRY = "PT";
  const String WUNDERGROUND_CITY = "Braga";
*/

// OpenWeatherMap Settings
// Sign up here to get an API key:
// https://docs.thingpulse.com/how-tos/openweathermap-key/
String OPEN_WEATHER_MAP_APP_ID = "7808b8b6dcf6ce1019ff027eb3ae5b21";
/*
Go to https://openweathermap.org/find?q= and search for a location. Go through the
result set and select the entry closest to the actual location you want to display 
data for. It'll be a URL like https://openweathermap.org/city/2657896. The number
at the end is what you assign to the constant below.
 */
String OPEN_WEATHER_MAP_LOCATION_ID = "8011176";

// Pick a language code from this list:
// Arabic - ar, Bulgarian - bg, Catalan - ca, Czech - cz, German - de, Greek - el,
// English - en, Persian (Farsi) - fa, Finnish - fi, French - fr, Galician - gl,
// Croatian - hr, Hungarian - hu, Italian - it, Japanese - ja, Korean - kr,
// Latvian - la, Lithuanian - lt, Macedonian - mk, Dutch - nl, Polish - pl,
// Portuguese - pt, Romanian - ro, Russian - ru, Swedish - se, Slovak - sk,
// Slovenian - sl, Spanish - es, Turkish - tr, Ukrainian - ua, Vietnamese - vi,
// Chinese Simplified - zh_cn, Chinese Traditional - zh_tw.
String OPEN_WEATHER_MAP_LANGUAGE = "pt";
const uint8_t MAX_FORECASTS = 4;

const boolean IS_METRIC = true;

// Adjust according to your language
const String WDAY_NAMES[] = {"DOM", "SEG", "TER", "QUA", "QUI", "SEX", "SAB"};
const String MONTH_NAMES[] = {"JAN", "FEV", "MAR", "ABR", "MAI", "JUN", "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"};
