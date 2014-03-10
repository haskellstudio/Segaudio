/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_90189DFC3624428__
#define __JUCE_HEADER_90189DFC3624428__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include "AudioAnalysisController.h"

//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class AudioSourceSelector  : public Component,
                             public ActionBroadcaster,
                             public ButtonListener
{
public:
    //==============================================================================
    AudioSourceSelector (AudioFormatManager &appFormatManager, AudioThumbnailCache &appThumbCache, AudioAnalysisController &analysisController);
    ~AudioSourceSelector();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void setSelectedRegion(int startX, int width);
    void getAudioSelection();

    bool hasFileLoaded();

    void setDraggable(bool isDraggable);
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void buttonClicked (Button* buttonThatWasClicked);
    void visibilityChanged();
    void mouseDown (const MouseEvent& e);
    void mouseDrag (const MouseEvent& e);



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    AudioThumbnail *thumbComponent;

    DrawableRectangle regionOverlay;

    bool hasRegionSelected;
    bool fileLoaded;

    int regionStartFraction;
    int regionEndFraction;

    AudioFormatManager &appFormatManager;
    bool isDraggable;

    AudioAnalysisController analysisController;

    //[/UserVariables]

    //==============================================================================
    ScopedPointer<TextButton> playButton;
    ScopedPointer<TextButton> stopButton;
    ScopedPointer<TextButton> playSelectionButton;
    ScopedPointer<TextButton> loadFileButton;
    ScopedPointer<TextButton> clearSelectionButton;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AudioSourceSelector)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_90189DFC3624428__