#pragma once

#include <gmock/gmock.h>

#include "devicesettings.h"

class FrontPanelIndicatorImplMock : public device::FrontPanelIndicatorImpl {
public:
    virtual ~FrontPanelIndicatorImplMock() = default;

    MOCK_METHOD(void,getBrightnessLevels, (int &levels,int &min,int &max), (const, override));
    MOCK_METHOD(int,getColorMode, (), (const, override));
    MOCK_METHOD(void,setBrightness, (const int brightness, bool persist), (const, override));
    MOCK_METHOD(int,getBrightness, (), (const, override));
    MOCK_METHOD(std::string,getName, (), (const, override));
    MOCK_METHOD(std::string,getColorName, (), (const, override));
    MOCK_METHOD(void,setState, (const bool &enable), (const, override));

    
};

