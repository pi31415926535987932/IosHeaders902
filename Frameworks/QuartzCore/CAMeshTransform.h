/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:45:35 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface CAMeshTransform : NSObject <NSCoding, NSCopying, NSMutableCopying> {

	void* _impl;
	unsigned long _normalization;
	long _subdivisionSteps;

}

@property (readonly) unsigned long vertexCount; 
@property (readonly) unsigned long faceCount; 
@property (copy,readonly) NSString * depthNormalization; 
@property (readonly) int subdivisionSteps; 
+(void)CAMLParserStartElement:(id)arg1 ;
+(void)CAMLParserEndElement:(id)arg1 content:(id)arg2 ;
+(id)meshTransformWithVertexCount:(unsigned long)arg1 vertices:(const CAMeshVertex*)arg2 faceCount:(unsigned long)arg3 faces:(const CAMeshFace*)arg4 depthNormalization:(id)arg5 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator*)arg4 ;
-(id)meshTransformForLayer:(id)arg1 ;
-(id)initWithVertexCount:(unsigned long)arg1 vertices:(const CAMeshVertex*)arg2 faceCount:(unsigned long)arg3 faces:(const CAMeshFace*)arg4 depthNormalization:(id)arg5 ;
-(id)_initWithMeshTransform:(id)arg1 ;
-(NSString *)depthNormalization;
-(char)_constructWithData:(id)arg1 ;
-(unsigned long)faceCount;
-(CAMeshFace)faceAtIndex:(unsigned long)arg1 ;
-(int)subdivisionSteps;
-(id)_subdivideToDepth:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)CA_distanceToValue:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2 ;
-(CAMeshVertex)vertexAtIndex:(unsigned long)arg1 ;
-(unsigned long)vertexCount;
-(id)_data;
@end
