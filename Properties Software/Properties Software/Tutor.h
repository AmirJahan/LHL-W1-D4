#import <Foundation/Foundation.h>
#import "Teacher.h"
#import "Weird.h"


// calss that conform to two protocols
// breakTaking is used directly and ShowingImagesDelegate is used for the Delegate in WeirdView

@interface Tutor : Teacher <BreakTaking, ShowingImagesDelegate>

@end
