
#include "EncoderPlus.h"

// Yes, all the code is in the header file, to provide the user
// configure options with #define (before they include it), and
// to facilitate some crafty optimizations!

Encoder_internal_state_t * EncoderPlus::interruptArgs[];

Callback EncoderPlus::positive_callback_ = NULL;
Callback EncoderPlus::negative_callback_ = NULL;
