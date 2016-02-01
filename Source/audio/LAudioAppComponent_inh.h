/************************************************************

 LAudioAppComponent_inh.h

    @author Christophe Berbizier (cberbizier@peersuasive.com)
    @license GPLv3
    @copyright 


(c) 2014, Peersuasive Technologies

*************************************************************/

#ifndef __LUCE_LAUDIOAPPCOMPONENT_INH_H
#define __LUCE_LAUDIOAPPCOMPONENT_INH_H

// LComponent inheritage
const Luna<LAudioAppComponent>::Inheritence LAudioAppComponent::inherits[] = {
    {"size", &LComponent::getSize, &LComponent::setSize}, // artificial
    {"explicitFocusOrder", &LComponent::getExplicitFocusOrder, &LComponent::setExplicitFocusOrder},
    {"lookAndFeel", &LComponent::getLookAndFeel, &LComponent::setLookAndFeel},
    {"focusContainer", &LComponent::isFocusContainer, &LComponent::setFocusContainer},
    {"componentEffect", &LComponent::getComponentEffect, &LComponent::setComponentEffect},
    {"bounds", &LComponent::getBounds, &LComponent::setBounds},
    {"opaque", &LComponent::isOpaque, &LComponent::setOpaque},
    {"positioner", &LComponent::getPositioner, &LComponent::setPositioner},
    {"transform", &LComponent::getTransform, &LComponent::setTransform},
    {"componentID", &LComponent::getComponentID, &LComponent::setComponentID},
    {"enabled", &LComponent::isEnabled, &LComponent::setEnabled},
    {"alpha", &LComponent::getAlpha, &LComponent::setAlpha},
    {"alwaysOnTop", &LComponent::isAlwaysOnTop, &LComponent::setAlwaysOnTop},
    {"mouseCursor", &LComponent::getMouseCursor, &LComponent::setMouseCursor},
    {"wantsKeyboardFocus", &LComponent::getWantsKeyboardFocus, &LComponent::setWantsKeyboardFocus},
    {"cachedComponentImage", &LComponent::getCachedComponentImage, &LComponent::setCachedComponentImage},
    {"visible", &LComponent::isVisible, &LComponent::setVisible},
    {"broughtToFrontOnMouseClick", &LComponent::isBroughtToFrontOnMouseClick, &LComponent::setBroughtToFrontOnMouseClick},
    {"mouseClickGrabsKeyboardFocus", &LComponent::getMouseClickGrabsKeyboardFocus, &LComponent::setMouseClickGrabsKeyboardFocus},
    {"interceptsMouseClicks", &LComponent::getInterceptsMouseClicks, &LComponent::setInterceptsMouseClicks},
    {"name", &LComponent::getName, &LComponent::setName},

    {0,0}
};

const Luna<LAudioAppComponent>::InheritenceF LAudioAppComponent::inheritsF[] = {
    method( LBase, light),
    method( LBase, unlight),
    method( LComponent, as ),
    method( LComponent, unreg ),
    method( LComponent, startDragging ),
    method( LComponent, getExplicitFocusOrder ),
    method( LComponent, setExplicitFocusOrder ),
    method( LComponent, findColour ),
    method( LComponent, getRight ),
    method( LComponent, getProperties ),
    method( LComponent, isParentOf ),
    method( LComponent, getLookAndFeel ),
    method( LComponent, setLookAndFeel ),
    method( LComponent, createComponentSnapshot ),
    method( LComponent, getScreenPosition ),
    method( LComponent, proportionOfHeight ),
    method( LComponent, isFocusContainer ),
    method( LComponent, setFocusContainer ),
    method( LComponent, getX ),
    method( LComponent, getY ),
    method( LComponent, getHeight ),
    method( LComponent, getComponentEffect ),
    method( LComponent, setComponentEffect ),
    method( LComponent, getTopLevelComponent ),
    method( LComponent, isMouseOver ),
    method( LComponent, getBounds ),
    method( LComponent, setBounds ),
    method( LComponent, reallyContains ),
    method( LComponent, localAreaToGlobal ),
    method( LComponent, getDesktopScaleFactor ),
    method( LComponent, getCurrentlyModalComponent ),
    method( LComponent, isOpaque ),
    method( LComponent, setOpaque ),
    method( LComponent, getParentWidth ),
    method( LComponent, getNumCurrentlyModalComponents ),
    method( LComponent, hasKeyboardFocus ),
    method( LComponent, getScreenY ),
    method( LComponent, findChildWithID ),
    method( LComponent, hitTest ),
    method( LComponent, isMouseOverOrDragging ),
    method( LComponent, getPositioner ),
    method( LComponent, setPositioner ),
    method( LComponent, isTransformed ),
    method( LComponent, getWidth ),
    method( LComponent, getLocalPoint ),
    method( LComponent, getTransform ),
    method( LComponent, setTransform ),
    method( LComponent, getComponentAt ),
    method( LComponent, getScreenBounds ),
    method( LComponent, getMouseXYRelative ),
    method( LComponent, getComponentID ),
    method( LComponent, setComponentID ),
    method( LComponent, keyStateChanged ),
    method( LComponent, getChildComponent ),
    method( LComponent, getScreenX ),
    method( LComponent, getParentMonitorArea ),
    method( LComponent, getLocalArea ),
    method( LComponent, isColourSpecified ),
    method( LComponent, isEnabled ),
    method( LComponent, setEnabled ),
    method( LComponent, canModalEventBeSentToComponent ),
    method( LComponent, isCurrentlyBlockedByAnotherModalComponent ),
    method( LComponent, findParentComponentOfClass ),
    method( LComponent, getNumChildComponents ),
    method( LComponent, isMouseButtonDownAnywhere ),
    method( LComponent, createFocusTraverser ),
    method( LComponent, isMouseButtonDown ),
    method( LComponent, localPointToGlobal ),
    method( LComponent, getPosition ),
    method( LComponent, getMarkers ),
    method( LComponent, getAlpha ),
    method( LComponent, setAlpha ),
    method( LComponent, isAlwaysOnTop ),
    method( LComponent, setAlwaysOnTop ),
    method( LComponent, getBoundsInParent ),
    method( LComponent, getParentHeight ),
    method( LComponent, getMouseCursor ),
    method( LComponent, setMouseCursor ),
    method( LComponent, getWantsKeyboardFocus ),
    method( LComponent, setWantsKeyboardFocus ),
    method( LComponent, proportionOfWidth ),
    method( LComponent, getBottom ),
    method( LComponent, getCachedComponentImage ),
    method( LComponent, setCachedComponentImage ),
    method( LComponent, getIndexOfChildComponent ),
    method( LComponent, contains ),
    method( LComponent, keyPressed ),
    method( LComponent, isVisible ),
    method( LComponent, setVisible ),
    method( LComponent, getPeer ),
    method( LComponent, isShowing ),
    method( LComponent, getLocalBounds ),
    method( LComponent, getParentComponent ),
    method( LComponent, isCurrentlyModal ),
    method( LComponent, isBroughtToFrontOnMouseClick ),
    method( LComponent, setBroughtToFrontOnMouseClick ),
    method( LComponent, getMouseClickGrabsKeyboardFocus ),
    method( LComponent, setMouseClickGrabsKeyboardFocus ),
    method( LComponent, getName ),
    method( LComponent, setName ),
    method( LComponent, getCurrentlyFocusedComponent ),
    method( LComponent, isOnDesktop ),
    method( LComponent, enterModalState ),
    method( LComponent, setBoundsInset ),
    method( LComponent, setRepaintsOnMouseActivity ),
    method( LComponent, toFront ),
    method( LComponent, addKeyListener ),
    method( LComponent, addAndMakeVisible ),
    method( LComponent, setTopLeftPosition ),
    method( LComponent, removeKeyListener ),
    method( LComponent, sendLookAndFeelChange ),
    method( LComponent, getWindowHandle ),
    method( LComponent, moveKeyboardFocusToSibling ),
    method( LComponent, addChildComponent ),
    method( LComponent, updateMouseCursor ),
    method( LComponent, addMouseListener ),
    method( LComponent, removeComponentListener ),
    method( LComponent, setPaintingIsUnclipped ),
    method( LComponent, unfocusAllComponents ),
    method( LComponent, centreWithSize ),
    method( LComponent, copyAllExplicitColoursTo ),
    method( LComponent, exitModalState ),
    method( LComponent, setInterceptsMouseClicks ),
    method( LComponent, setTopRightPosition ),
    method( LComponent, grabKeyboardFocus ),
    method( LComponent, addToDesktop ),
    method( LComponent, repaint ),
    method( LComponent, setBufferedToImage ),
    method( LComponent, setBoundsToFit ),
    method( LComponent, addChildAndSetID ),
    method( LComponent, getInterceptsMouseClicks ),
    method( LComponent, removeMouseListener ),
    method( LComponent, beginDragAutoRepeat ),
    method( LComponent, setColour ),
    method( LComponent, paintEntireComponent ),
    method( LComponent, deleteAllChildren ),
    method( LComponent, removeColour ),
    method( LComponent, setBoundsRelative ),
    method( LComponent, setCentrePosition ),
    method( LComponent, removeFromDesktop ),
    method( LComponent, getVisibleArea ),
    method( LComponent, toBehind ),
    method( LComponent, removeAllChildren ),
    method( LComponent, postCommandMessage ),
    method( LComponent, setCentreRelative ),
    method( LComponent, getSize ),
    method( LComponent, setSize ),
    method( LComponent, toBack ),
    method( LComponent, addComponentListener ),
    method( LComponent, visibilityChanged ),
    method( LComponent, userTriedToCloseWindow ),
    method( LComponent, minimisationStateChanged ),
    method( LComponent, parentHierarchyChanged ),
    method( LComponent, childrenChanged ),
    method( LComponent, lookAndFeelChanged ),
    method( LComponent, enablementChanged ),
    method( LComponent, paint ),
    method( LComponent, paintOverChildren ),
    method( LComponent, mouseMove ),
    method( LComponent, mouseEnter ),
    method( LComponent, mouseExit ),
    method( LComponent, mouseDown ),
    method( LComponent, mouseDrag ),
    method( LComponent, mouseUp ),
    method( LComponent, mouseDoubleClick ),
    method( LComponent, mouseWheelMove ),
    method( LComponent, mouseMagnify ),
    method( LComponent, modifierKeysChanged ),
    method( LComponent, focusGained ),
    method( LComponent, focusLost ),
    method( LComponent, focusOfChildComponentChanged ),
    method( LComponent, resized ),
    method( LComponent, moved ),
    method( LComponent, childBoundsChanged ),
    method( LComponent, parentSizeChanged ),
    method( LComponent, broughtToFront ),
    method( LComponent, handleCommandMessage ),
    method( LComponent, inputAttemptWhenModal ),
    method( LComponent, colourChanged ),
     
    // ComponentAnimator
    method( LComponent, animateComponent ),
    method( LComponent, fadeOut ),
    method( LComponent, fadeIn ),
    method( LComponent, cancelAnimation ),
    method( LComponent, getComponentDestination ),
    method( LComponent, isAnimating ),

    {0,0}
};

const Luna<LAudioAppComponent>::Enum LAudioAppComponent::enums[] = {
    {0}
};
#endif // __LUCE_LAUDIOAPPCOMPONENT_INH_H
