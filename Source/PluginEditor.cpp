/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
Team8_projectAudioProcessorEditor::Team8_projectAudioProcessorEditor (Team8_projectAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (500, 400);
}

Team8_projectAudioProcessorEditor::~Team8_projectAudioProcessorEditor()
{
}

//==============================================================================
void Team8_projectAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::white);
    g.setFont (juce::FontOptions (15.0f));
    g.drawFittedText ("Team JUICE!!!", getLocalBounds(), juce::Justification::centred, 1); 
    g.drawFittedText ("Distortion team!!!", getLocalBounds(), juce::Justification::centred, 1);   
}

void Team8_projectAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
