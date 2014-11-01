#pragma once
#include <mutex>
#include "./base_sink.h"
#include "../details/null_mutex.h"


namespace spdlog
{
namespace sinks
{

template <class Mutex>
class null_sink : public base_sink<Mutex>
{
protected:
    void _sink_it(const details::log_msg&) override
    {}

    void close() override
    {}
};

typedef null_sink<details::null_mutex> null_sink_st;
typedef null_sink<std::mutex> null_sink_mt;

}
}
