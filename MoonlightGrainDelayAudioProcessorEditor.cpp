#include "MoonlightGrainDelayAudioProcessorEditor.h"
#include "MoonlightGrainDelayAudioProcessor.h"



MoonlightGrainDelayAudioProcessorEditor::MoonlightGrainDelayAudioProcessorEditor(MoonlightGrainDelayAudioProcessor& processor)
    : AudioProcessorEditor(processor), audioProcessor(processor) // Initialize reference member in the initialization list
{
    // Initialize your GUI elements here.
    // For example, you can add sliders, buttons, labels, etc., to control the grain delay parameters.
}

MoonlightGrainDelayAudioProcessorEditor::~MoonlightGrainDelayAudioProcessorEditor()
{
}

void MoonlightGrainDelayAudioProcessorEditor::paint(juce::Graphics& g)
{
    // Paint the background and other graphical elements of the editor.
    // You can customize this to give your plugin a unique look.
}

void MoonlightGrainDelayAudioProcessorEditor::resized()
{
    // Define the layout and positioning of your GUI elements here.
    // This function will be called when the editor is resized.
}
