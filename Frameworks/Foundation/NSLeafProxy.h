/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:20:57 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDocInfo;

@interface NSLeafProxy : _UKNOWN_SUPERCLASS_ <NSCopying> {

	Class isa;
	NSString* dir;
	NSString* file;
	NSDocInfo* docInfo;
	int refCount;
	id realObject;

}
+()initialize;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)forwardInvocation:(id)arg1 ;
-(id)initDir:(id)arg1 file:(id)arg2 docInfo:(id)arg3 ;
-(void)reallyDealloc;
-(void)dealloc;
-(char)isProxy;
-(id)retain;
-(void)release;
-(id)autorelease;
-(unsigned)retainCount;
-(id)copy;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)_isDeallocating;
-(void)forwardInvocation:(id)arg1 ;
-(char)_tryRetain;
@end

