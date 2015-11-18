/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:45:35 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface CAValueFunction : NSObject <NSCoding> {

	NSString* _string;
	void* _impl;

}

@property (readonly) NSString * name; 
+(void)CAMLParserStartElement:(id)arg1 ;
+(void)CAMLParserEndElement:(id)arg1 content:(id)arg2 ;
+(id)functionWithName:(id)arg1 ;
-(id)_initWithName:(int)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(unsigned long)outputCount;
-(char)apply:(const double*)arg1 result:(double*)arg2 parameterFunction:(/*function pointer*/void*)arg3 context:(void*)arg4 ;
-(char)apply:(const double*)arg1 result:(double*)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(unsigned long)inputCount;
@end

