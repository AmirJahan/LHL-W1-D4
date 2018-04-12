#import <Foundation/Foundation.h>


// this is delcaring a protocol with required and optional methods


@protocol BreakTaking

// default is required

-(void)takeTheBreak;

@required
-(void)methodOne;

-(void)methodTwo;



@optional
-(void)methodThree;



-(void)methodFour;


@end


@interface Teacher : NSObject <BreakTaking>

@property (atomic, strong) NSString* name;
@property (atomic, strong) NSString* lastName;


// in declaring propeties, keep an eye on options
/*
 strong
 assing
 weak
 copy
 atomic
 nonatomic
 readonly
 readwrite
 nullable
 nonnull
 */
@end
