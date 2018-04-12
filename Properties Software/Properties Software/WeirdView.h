

#import <Foundation/Foundation.h>
#import "Weird.h"



@interface WeirdView : NSObject


@property (nonatomic) NSString* myString;

@property (nonatomic) id <ShowingImagesDelegate> delegate;

@end
