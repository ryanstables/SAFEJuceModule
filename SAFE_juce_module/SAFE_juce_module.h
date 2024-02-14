/*******************************************************************************
 The block below describes the properties of this module, and is read by
 the Projucer to automatically generate project code that uses it.
 For details about the syntax and how to create or use a module, see the
 JUCE Module Format.md file.


 BEGIN_JUCE_MODULE_DECLARATION

  ID:                 safe_juce_module
  name:               Semantic Audio Feature Extraction
  version:            4.0.0
  description:        A module for creating SAFE plug-ins.
  website:            https://semanticaudio.co.uk
  license:            GPL
  dependencies:       juce_core, juce_audio_processors
  vendor:             Semantic Audio Labs
  minimumCppStandard: 14
  
 END_JUCE_MODULE_DECLARATION
*******************************************************************************/

#ifndef SAFE_JUCE_MODULE
#define SAFE_JUCE_MODULE

#include "juce_core/juce_core.h"
#include "juce_audio_processors/juce_audio_processors.h"

#include "vamp-hostsdk/PluginLoader.h"

#include "xtract/libxtract.h"

#include <complex>
#include <map>

#if JUCE_LINUX
    #include <curl/curl.h>
#endif

//=============================================================================
namespace juce
{
#include "LookAndFeel/SAFEImages.h"
#include "LookAndFeel/SAFEColours.h"
#include "LookAndFeel/SAFELookAndFeel.h"

#include "UIComponents/SAFEButton.h"
#include "UIComponents/SAFESlider.h"
#include "UIComponents/XYSlider.h"
#include "UIComponents/SAFEExtraScreen.h"
#include "UIComponents/SAFEMetaDataScreen.h"
#include "UIComponents/SAFEDescriptorLoadScreen.h"
#include "UIComponents/SAFEInfoScreen.h"
#include "UIComponents/LevelMeterTimer.h"
#include "UIComponents/LevelMeter.h"
#include "UIComponents/FunctionGraph.h"
#include "UIComponents/DynamicProcessorGraph.h"
#include "UIComponents/FilterInfo.h"
#include "UIComponents/FilterGraph.h"

#include "PluginUtils/SAFEWarnings.h"
#include "PluginUtils/LibXtractHolder.h"

#if JUCE_LINUX
    #include "PluginUtils/CurlHolder.h"
#endif

#include "PluginUtils/LibXtractFeatures.h"
#include "PluginUtils/SAFEFeatureExtractor.h"
#include "PluginUtils/SAFEParameter.h"
#include "PluginUtils/SAFEAudioProcessor.h"
#include "PluginUtils/SAFEAudioProcessorEditor.h"

#include "Filters/BrechtsIIRFilter.h"
#include "Filters/Resampler.h"
#include "Filters/AllPassFilter.h"
#include "Filters/QuadratureFilter.h"

#include "Effects/MVerb.h"

#include "Analysis/FundamentalTracker.h"
}

#endif   // SAFE_JUCE_MODULE
