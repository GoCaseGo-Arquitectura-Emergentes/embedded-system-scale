#ifndef HTTP_UTILS_HPP
#define HTTP_UTILS_HPP
#include <utility>
void checkResponseCode(int httpResponseCode);
std::pair<float, float> getWeightFromServer(const char* authToken, int resourceId = 1);
void updateTotalWeight(const char* authToken, float totalWeight, int resourceId = 1);
#endif
