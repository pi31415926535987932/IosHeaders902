/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MUPoolObject.h>

@interface MRUniform : MUPoolObject {

	float m[16];
	int i;
	int length;

}
+(SCD_Struct_MU3*)poolInfo;
+(char)clearVars;
-(id)initWithMat4:(float)arg1 ;
-(id)initWithVec2:(float)arg1 :(float)arg2 ;
-(id)initWithVec3:(float)arg1 :(float)arg2 :(float)arg3 ;
-(id)initWithI:(int)arg1 ;
-(id)initWithVec4:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4 ;
-(id)initWithMat4ForMat3:(float)arg1 ;
-(id)initWithFloat:(float)arg1 ;
@end

