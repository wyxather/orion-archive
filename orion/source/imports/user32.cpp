#include "source/imports/user32.h"

orion::imports::User32::User32( void* const user32 ) noexcept
{
    callWindowProc           = LI_FUNC( CallWindowProc )::in( user32 );
    enumWindows              = LI_FUNC( EnumWindows )::in( user32 );
    getClassNameA            = LI_FUNC( GetClassNameA )::in( user32 );
    getWindowLongPtr         = LI_FUNC( GetWindowLongPtr )::in( user32 );
    getWindowTextA           = LI_FUNC( GetWindowTextA )::in( user32 );
    getWindowTextLengthA     = LI_FUNC( GetWindowTextLengthA )::in( user32 );
    getWindowThreadProcessId = LI_FUNC( GetWindowThreadProcessId )::in( user32 );
    setWindowLongPtr         = LI_FUNC( SetWindowLongPtr )::in( user32 );
}
