#pragma once

#include <JuceHeader.h>

class MoonlightGrainDelayAudioProcessor : public juce::AudioProcessor
{
public:
    MoonlightGrainDelayAudioProcessor();
    ~MoonlightGrainDelayAudioProcessor();

    void prepareToPlay(double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;
    void processBlock(juce::AudioBuffer<float>& buffer, juce::MidiBuffer& midiMessages) override;

    juce::AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override;

    const juce::String getName() const override;
    
private:
    // Add private member variables here.

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MoonlightGrainDelayAudioProcessor)
};
