
#pragma once

#include <JuceHeader.h>

// Forward declaration of the MoonlightGrainDelayAudioProcessor class
class MoonlightGrainDelayAudioProcessor;

class MoonlightGrainDelayAudioProcessorEditor : public juce::AudioProcessorEditor
{
public:
    MoonlightGrainDelayAudioProcessorEditor(MoonlightGrainDelayAudioProcessor& processor);
    ~MoonlightGrainDelayAudioProcessorEditor();

    void paint(juce::Graphics& g) override;
    void resized() override;

private:
    // Add your GUI elements here.

    MoonlightGrainDelayAudioProcessor& audioProcessor; // Reference to the processor

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(MoonlightGrainDelayAudioProcessorEditor)
};
