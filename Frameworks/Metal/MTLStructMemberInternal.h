/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:33:04 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/MTLStructMember.h>

@class NSString;

@interface MTLStructMemberInternal : MTLStructMember {

	NSString* _name;
	unsigned _offset : 32;
	unsigned _dataType : 16;
	id _details;

}
-(id)describe;
-(id)initWithName:(id)arg1 offset:(unsigned)arg2 dataType:(unsigned)arg3 details:(id)arg4 ;
-(id)structType;
-(id)arrayType;
-(void)dealloc;
-(id)name;
-(unsigned)offset;
-(unsigned)dataType;
@end

