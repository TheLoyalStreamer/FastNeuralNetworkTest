#include "NeuralNetwork.h"
#include <assert.h>
#include <stdlib.h>
#include <ctime>
#include <random>

namespace NNetwork {
    Network::Network(Settings const& settings)
        : m_numInputs( settings.m_numInputs )
        , m_numHidden( settings.m_numHidden )
        , m_numOutputs( settings.m_numOutputs )
    {
        assert( settings.m_numInputs > 0 && settings.m_numOutputs > 0 && settings.m_numHidden > 0 );
        InitializeNetwork();
        InitializeWeights();
    }

    void Network::InitializeNetwork()
    {
        
    }

    void Network::InitializeWeights()
    {

    }
}