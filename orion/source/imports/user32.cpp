#include "source/imports/user32.h"

orion::imports::User32::User32( void* const user32 ) noexcept
{
    getWindowLongPtr = LI_FUNC( GetWindowLongPtr )::in( user32 );
    setWindowLongPtr = LI_FUNC( SetWindowLongPtr )::in( user32 );
}
