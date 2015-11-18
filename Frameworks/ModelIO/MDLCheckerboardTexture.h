/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:35:12 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLTexture.h>

@interface MDLCheckerboardTexture : MDLTexture {

	int _divisions;
	CGColorRef _cgColor1;
	CGColorRef _cgColor2;
	 _color1;
	 _color2;

}

@property (assign,nonatomic) float divisions; 
@property (assign,nonatomic) CGColorRef color1; 
@property (assign,nonatomic) CGColorRef color2; 
-(id)generateDataAtLevel:(int)arg1 ;
-(void)setDivisions:(float)arg1 ;
-(float)divisions;
-(id)initWithDivisions:(float)arg1 name:(id)arg2 dimensions:(int)arg3 channelCount:(int)arg4 channelEncoding:(CGColorRef)arg5 color1:(CGColorRef)arg6 ;
-(void)dealloc;
-(void)setColor1:(CGColorRef)arg1 ;
-(void)setColor2:(CGColorRef)arg1 ;
-(CGColorRef)color1;
-(CGColorRef)color2;
@end

