#include "safe_juce_module.h"

#define ANALYSIS_FRAME_LENGTH 4096

namespace juce
{
#include "LookAndFeel/SAFEImages.cpp"
#include "LookAndFeel/SAFEColours.cpp"
#include "LookAndFeel/SAFELookAndFeel.cpp"

#include "UIComponents/SAFEButton.cpp"
#include "UIComponents/SAFESlider.cpp"
#include "UIComponents/XYSlider.cpp"
#include "UIComponents/SAFEExtraScreen.cpp"
#include "UIComponents/SAFEMetaDataScreen.cpp"
#include "UIComponents/SAFEDescriptorLoadScreen.cpp"
#include "UIComponents/SAFEInfoScreen.cpp"
#include "UIComponents/LevelMeterTimer.cpp"
#include "UIComponents/LevelMeter.cpp"
#include "UIComponents/FunctionGraph.cpp"
#include "UIComponents/DynamicProcessorGraph.cpp"
#include "UIComponents/FilterInfo.cpp"
#include "UIComponents/FilterGraph.cpp"

#include "PluginUtils/LibXtractHolder.cpp"
#include "PluginUtils/LibXtractFeatures.cpp"
#include "PluginUtils/SAFEFeatureExtractor.cpp"
#include "PluginUtils/SAFEParameter.cpp"
#include "PluginUtils/SAFEAudioProcessor.cpp"
#include "PluginUtils/SAFEAudioProcessorEditor.cpp"

#include "Filters/BrechtsIIRFilter.cpp"
#include "Filters/Resampler.cpp"
#include "Filters/AllPassFilter.cpp"
#include "Filters/QuadratureFilter.cpp"

#include "Analysis/FundamentalTracker.cpp"
}
