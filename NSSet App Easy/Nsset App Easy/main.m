
#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{
    @autoreleasepool
    {

        
        NSMutableSet* mySet = [[NSMutableSet alloc] initWithObjects:
                               @"Sun",
                               @"Mon", nil];
        
        // in iteration they work faster
        
        if ( [mySet containsObject: @"Tue"])
        {
            
        }
        
        [mySet removeObject: @"Mon"];
        
        
        [mySet addObject: @"Wed"];
        
        
        for (NSString* any in mySet)
        {
            if ( [any isEqualToString:@"Ding"])
            {
                
            }
        }
        
        
        
        
    }
    return 0;
}
