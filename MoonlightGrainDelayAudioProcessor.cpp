#include "MoonlightGrainDelayAudioProcessor.h"
#include "MoonlightGrainDelayAudioProcessorEditor.h"

MoonlightGrainDelayAudioProcessor::MoonlightGrainDelayAudioProcessor()
{
    // Initialize your parameters and member variables here (if any).
}

MoonlightGrainDelayAudioProcessor::~MoonlightGrainDelayAudioProcessor()
{
}

void MoonlightGrainDelayAudioProcessor::prepareToPlay(double sampleRate, int samplesPerBlock)
{
    // Implement any initialization needed before audio processing starts.
}

void MoonlightGrainDelayAudioProcessor::releaseResources()
{
    // Implement any cleanup here.
}

void MoonlightGrainDelayAudioProcessor::processBlock(juce::AudioBuffer<float>& buffer, juce::MidiBuffer& midiMessages)
{
    // Implement your grain delay processing here.
    // You can use the buffer to read/write audio data and midiMessages for MIDI data (if required).
}

juce::AudioProcessorEditor* MoonlightGrainDelayAudioProcessor::createEditor()
{
    return new MoonlightGrainDelayAudioProcessorEditor(*this);
}

bool MoonlightGrainDelayAudioProcessor::hasEditor() const
{
    return true;
}

const juce::String MoonlightGrainDelayAudioProcessor::getName() const
{
    return "Moonlight Grain Delay V2";
}
