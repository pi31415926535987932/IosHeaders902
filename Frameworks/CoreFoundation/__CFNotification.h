/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:46:13 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <Foundation/NSNotification.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface __CFNotification : NSNotification <NSCopying> {

	id _name;
	id _object;
	id _userInfo;
	char _fouSemantics;
	char _dyingObject;

}
-(id)initWithName:(CFStringRef)arg1 object:(const void*)arg2 userInfo:(CFDictionaryRef)arg3 foundation:(char)arg4 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)object;
-(id)userInfo;
-(void)finalize;
@end

