// module téléinformation client
// rene-d 2020

#pragma once

namespace esp8266
{
namespace polledTimeout
{

class periodicMs
{
public:
    void trigger() { periodicMs_activate = true; }
    bool periodicMs_activate = false;

    int timeout = 0;

public:
    static const int neverExpires = -1;
    static const int alwaysExpired = 0;

    explicit periodicMs(int)
    {
    }

    operator bool()
    {
        bool v = periodicMs_activate;
        periodicMs_activate = false;
        return v;
    }

    void resetToNeverExpires()
    {
        periodicMs_activate = false;
    }

    void reset(int t)
    {
        timeout = t;
    }

    int getTimeout() const
    {
        return timeout;
    }
};

} // namespace polledTimeout

} // namespace esp8266
