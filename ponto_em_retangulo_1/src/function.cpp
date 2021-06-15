#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */

location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    location_t loc;
    if (((P.y == IE.y || P.y == SD.y) && P.x >= IE.x && P.x <= SD.x) || 
         (P.x == IE.x || P.x == SD.x) && P.y >= IE.y && P.y <= SD.y) 
        loc = BORDER;
    else if (P.x > IE.x && P.x < SD.x && P.y > IE.y && P.y < SD.y)
        loc = INSIDE;
    else
        loc = OUTSIDE;

    return loc;
}
