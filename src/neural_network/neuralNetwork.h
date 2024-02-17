#pragma once
#include <stdint.h>
#include <vector>

namespace NNetwork {
    public:

        struct Settings
        {
            uint32_t                        m_numInputs;
            uint32_t                        m_numHidden;
            uint32_t                        m_numOutputs;
        };
    
    public:

        Network( Settings const& settings );
        Network( Settings const& settings, std::vector<double> const& weights );
    
    private:

        int32_t                 m_numInputs;
        int32_t                 m_numHidden;
        int32_t                 m_numOutputs;
}