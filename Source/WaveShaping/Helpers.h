/*
  ==============================================================================

    Helpers.h
    Created: 3 Feb 2021 12:29:17pm
    Author:  Vladyslav Voinov

  ==============================================================================
*/
#pragma once

#include <JuceHeader.h>

namespace waveshaping
{

template<typename T>
int sgn (T x) {
    return (T(0) < x) - (x < T(0));
}

}
