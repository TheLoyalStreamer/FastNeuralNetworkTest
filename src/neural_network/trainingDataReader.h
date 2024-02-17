#pragma once

#include <string>

namespace NNetwork
{
    class TrainingDataReader {
        public:
            TrainingDataReader( std::string const& filename, int32_t numInputs, int32_t numOutputs );

            bool ReadData();

            inline int32_t GetNumInputs() const { return m_numInputs; }
            inline int32_t GetNumOutputs() const { return m_numOutputs; }

            inline int32_t GetNumTrainingSets() const { return 0; }

        private:

            std::string                     m_filename;
            int32_t                         m_numInputs;
            int32_t                         m_numOutputs;
    };
}