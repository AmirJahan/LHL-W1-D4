#import <Foundation/Foundation.h>
#import "Tutor.h"

#import "WeirdView.h"

int main(int argc, const char * argv[])
{
    @autoreleasepool
    {

        WeirdView* thisWeird = [WeirdView new];
        
        thisWeird.myString = @"syx";
        
        Tutor* myTut = [Tutor new];
        
        thisWeird.delegate = myTut;
        
        
    }
    return 0;
}
