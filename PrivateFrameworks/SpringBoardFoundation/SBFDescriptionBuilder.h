/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
@class NSObject, NSMutableString;

@interface SBFDescriptionBuilder : NSObject {

	NSObject* _object;
	NSMutableString* _description;

}
+(id)descriptionBuilderWithObject:(id)arg1 ;
+(id)descriptionForObject:(id)arg1 withNamesAndObjects:(id)arg2 ;
+(id)componentSeparator;
+(id)nameObjectSeparator;
-(id)appendNamesAndObjects:(id)arg1 ;
-(id)appendName:(id)arg1 object:(id)arg2 ;
-(id)appendName:(id)arg1 intValue:(int)arg2 ;
-(void)dealloc;
-(id)initWithObject:(id)arg1 ;
-(id)appendObject:(id)arg1 withName:(id)arg2 ;
-(id)build;
-(id)appendNamesAndObjects:(id)arg1 args:(void*)arg2 ;
-(void)tryAppendKey:(id)arg1 ;
-(id)appendName:(id)arg1 size:(CGSize)arg2 ;
-(id)appendName:(id)arg1 boolValue:(char)arg2 ;
-(id)appendName:(id)arg1 integerValue:(int)arg2 ;
-(id)appendName:(id)arg1 unsignedInteger:(unsigned)arg2 ;
-(id)appendName:(id)arg1 doubleValue:(double)arg2 ;
-(id)appendName:(id)arg1 cgFloatValue:(float)arg2 ;
-(id)appendName:(id)arg1 pointerValue:(void*)arg2 ;
-(id)appendName:(id)arg1 selector:(SEL)arg2 ;
-(id)appendKey:(id)arg1 ;
-(id)appendKeys:(id)arg1 ;
@end

